/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/route53/Route53Client.h>
#include <aws/route53/Route53Endpoint.h>
#include <aws/route53/Route53ErrorMarshaller.h>
#include <aws/route53/model/ActivateKeySigningKeyRequest.h>
#include <aws/route53/model/AssociateVPCWithHostedZoneRequest.h>
#include <aws/route53/model/ChangeCidrCollectionRequest.h>
#include <aws/route53/model/ChangeResourceRecordSetsRequest.h>
#include <aws/route53/model/ChangeTagsForResourceRequest.h>
#include <aws/route53/model/CreateCidrCollectionRequest.h>
#include <aws/route53/model/CreateHealthCheckRequest.h>
#include <aws/route53/model/CreateHostedZoneRequest.h>
#include <aws/route53/model/CreateKeySigningKeyRequest.h>
#include <aws/route53/model/CreateQueryLoggingConfigRequest.h>
#include <aws/route53/model/CreateReusableDelegationSetRequest.h>
#include <aws/route53/model/CreateTrafficPolicyRequest.h>
#include <aws/route53/model/CreateTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/CreateTrafficPolicyVersionRequest.h>
#include <aws/route53/model/CreateVPCAssociationAuthorizationRequest.h>
#include <aws/route53/model/DeactivateKeySigningKeyRequest.h>
#include <aws/route53/model/DeleteCidrCollectionRequest.h>
#include <aws/route53/model/DeleteHealthCheckRequest.h>
#include <aws/route53/model/DeleteHostedZoneRequest.h>
#include <aws/route53/model/DeleteKeySigningKeyRequest.h>
#include <aws/route53/model/DeleteQueryLoggingConfigRequest.h>
#include <aws/route53/model/DeleteReusableDelegationSetRequest.h>
#include <aws/route53/model/DeleteTrafficPolicyRequest.h>
#include <aws/route53/model/DeleteTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/DeleteVPCAssociationAuthorizationRequest.h>
#include <aws/route53/model/DisableHostedZoneDNSSECRequest.h>
#include <aws/route53/model/DisassociateVPCFromHostedZoneRequest.h>
#include <aws/route53/model/EnableHostedZoneDNSSECRequest.h>
#include <aws/route53/model/GetAccountLimitRequest.h>
#include <aws/route53/model/GetChangeRequest.h>
#include <aws/route53/model/GetCheckerIpRangesRequest.h>
#include <aws/route53/model/GetDNSSECRequest.h>
#include <aws/route53/model/GetGeoLocationRequest.h>
#include <aws/route53/model/GetHealthCheckRequest.h>
#include <aws/route53/model/GetHealthCheckCountRequest.h>
#include <aws/route53/model/GetHealthCheckLastFailureReasonRequest.h>
#include <aws/route53/model/GetHealthCheckStatusRequest.h>
#include <aws/route53/model/GetHostedZoneRequest.h>
#include <aws/route53/model/GetHostedZoneCountRequest.h>
#include <aws/route53/model/GetHostedZoneLimitRequest.h>
#include <aws/route53/model/GetQueryLoggingConfigRequest.h>
#include <aws/route53/model/GetReusableDelegationSetRequest.h>
#include <aws/route53/model/GetReusableDelegationSetLimitRequest.h>
#include <aws/route53/model/GetTrafficPolicyRequest.h>
#include <aws/route53/model/GetTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/GetTrafficPolicyInstanceCountRequest.h>
#include <aws/route53/model/ListCidrBlocksRequest.h>
#include <aws/route53/model/ListCidrCollectionsRequest.h>
#include <aws/route53/model/ListCidrLocationsRequest.h>
#include <aws/route53/model/ListGeoLocationsRequest.h>
#include <aws/route53/model/ListHealthChecksRequest.h>
#include <aws/route53/model/ListHostedZonesRequest.h>
#include <aws/route53/model/ListHostedZonesByNameRequest.h>
#include <aws/route53/model/ListHostedZonesByVPCRequest.h>
#include <aws/route53/model/ListQueryLoggingConfigsRequest.h>
#include <aws/route53/model/ListResourceRecordSetsRequest.h>
#include <aws/route53/model/ListReusableDelegationSetsRequest.h>
#include <aws/route53/model/ListTagsForResourceRequest.h>
#include <aws/route53/model/ListTagsForResourcesRequest.h>
#include <aws/route53/model/ListTrafficPoliciesRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByHostedZoneRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByPolicyRequest.h>
#include <aws/route53/model/ListTrafficPolicyVersionsRequest.h>
#include <aws/route53/model/ListVPCAssociationAuthorizationsRequest.h>
#include <aws/route53/model/TestDNSAnswerRequest.h>
#include <aws/route53/model/UpdateHealthCheckRequest.h>
#include <aws/route53/model/UpdateHostedZoneCommentRequest.h>
#include <aws/route53/model/UpdateTrafficPolicyCommentRequest.h>
#include <aws/route53/model/UpdateTrafficPolicyInstanceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53;
using namespace Aws::Route53::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "route53";
static const char* ALLOCATION_TAG = "Route53Client";

Route53Client::Route53Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53Client::Route53Client(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53Client::Route53Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53Client::~Route53Client()
{
}

void Route53Client::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Route 53");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + Route53Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void Route53Client::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

ActivateKeySigningKeyOutcome Route53Client::ActivateKeySigningKey(const ActivateKeySigningKeyRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ActivateKeySigningKey", "Required field: HostedZoneId, is not set");
    return ActivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ActivateKeySigningKey", "Required field: Name, is not set");
    return ActivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/keysigningkey/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/activate");
  return ActivateKeySigningKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ActivateKeySigningKeyOutcomeCallable Route53Client::ActivateKeySigningKeyCallable(const ActivateKeySigningKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateKeySigningKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateKeySigningKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientActivateKeySigningKeyAsyncHelper(Route53Client const * const clientThis, const ActivateKeySigningKeyRequest& request, const ActivateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ActivateKeySigningKey(request), context);
}

void Route53Client::ActivateKeySigningKeyAsync(const ActivateKeySigningKeyRequest& request, const ActivateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientActivateKeySigningKeyAsyncHelper( this, request, handler, context ); } );
}

AssociateVPCWithHostedZoneOutcome Route53Client::AssociateVPCWithHostedZone(const AssociateVPCWithHostedZoneRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateVPCWithHostedZone", "Required field: HostedZoneId, is not set");
    return AssociateVPCWithHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegments("/associatevpc");
  return AssociateVPCWithHostedZoneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AssociateVPCWithHostedZoneOutcomeCallable Route53Client::AssociateVPCWithHostedZoneCallable(const AssociateVPCWithHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateVPCWithHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateVPCWithHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientAssociateVPCWithHostedZoneAsyncHelper(Route53Client const * const clientThis, const AssociateVPCWithHostedZoneRequest& request, const AssociateVPCWithHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateVPCWithHostedZone(request), context);
}

void Route53Client::AssociateVPCWithHostedZoneAsync(const AssociateVPCWithHostedZoneRequest& request, const AssociateVPCWithHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientAssociateVPCWithHostedZoneAsyncHelper( this, request, handler, context ); } );
}

ChangeCidrCollectionOutcome Route53Client::ChangeCidrCollection(const ChangeCidrCollectionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ChangeCidrCollection", "Required field: Id, is not set");
    return ChangeCidrCollectionOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/cidrcollection/");
  uri.AddPathSegment(request.GetId());
  return ChangeCidrCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ChangeCidrCollectionOutcomeCallable Route53Client::ChangeCidrCollectionCallable(const ChangeCidrCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangeCidrCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeCidrCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientChangeCidrCollectionAsyncHelper(Route53Client const * const clientThis, const ChangeCidrCollectionRequest& request, const ChangeCidrCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ChangeCidrCollection(request), context);
}

void Route53Client::ChangeCidrCollectionAsync(const ChangeCidrCollectionRequest& request, const ChangeCidrCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientChangeCidrCollectionAsyncHelper( this, request, handler, context ); } );
}

ChangeResourceRecordSetsOutcome Route53Client::ChangeResourceRecordSets(const ChangeResourceRecordSetsRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ChangeResourceRecordSets", "Required field: HostedZoneId, is not set");
    return ChangeResourceRecordSetsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegments("/rrset/");
  return ChangeResourceRecordSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ChangeResourceRecordSetsOutcomeCallable Route53Client::ChangeResourceRecordSetsCallable(const ChangeResourceRecordSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangeResourceRecordSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeResourceRecordSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientChangeResourceRecordSetsAsyncHelper(Route53Client const * const clientThis, const ChangeResourceRecordSetsRequest& request, const ChangeResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ChangeResourceRecordSets(request), context);
}

void Route53Client::ChangeResourceRecordSetsAsync(const ChangeResourceRecordSetsRequest& request, const ChangeResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientChangeResourceRecordSetsAsyncHelper( this, request, handler, context ); } );
}

ChangeTagsForResourceOutcome Route53Client::ChangeTagsForResource(const ChangeTagsForResourceRequest& request) const
{
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ChangeTagsForResource", "Required field: ResourceType, is not set");
    return ChangeTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ChangeTagsForResource", "Required field: ResourceId, is not set");
    return ChangeTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/tags/");
  uri.AddPathSegment(TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType()));
  uri.AddPathSegment(request.GetResourceId());
  return ChangeTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ChangeTagsForResourceOutcomeCallable Route53Client::ChangeTagsForResourceCallable(const ChangeTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangeTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientChangeTagsForResourceAsyncHelper(Route53Client const * const clientThis, const ChangeTagsForResourceRequest& request, const ChangeTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ChangeTagsForResource(request), context);
}

void Route53Client::ChangeTagsForResourceAsync(const ChangeTagsForResourceRequest& request, const ChangeTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientChangeTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

CreateCidrCollectionOutcome Route53Client::CreateCidrCollection(const CreateCidrCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/cidrcollection");
  return CreateCidrCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateCidrCollectionOutcomeCallable Route53Client::CreateCidrCollectionCallable(const CreateCidrCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCidrCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCidrCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientCreateCidrCollectionAsyncHelper(Route53Client const * const clientThis, const CreateCidrCollectionRequest& request, const CreateCidrCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCidrCollection(request), context);
}

void Route53Client::CreateCidrCollectionAsync(const CreateCidrCollectionRequest& request, const CreateCidrCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientCreateCidrCollectionAsyncHelper( this, request, handler, context ); } );
}

CreateHealthCheckOutcome Route53Client::CreateHealthCheck(const CreateHealthCheckRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/healthcheck");
  return CreateHealthCheckOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateHealthCheckOutcomeCallable Route53Client::CreateHealthCheckCallable(const CreateHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientCreateHealthCheckAsyncHelper(Route53Client const * const clientThis, const CreateHealthCheckRequest& request, const CreateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHealthCheck(request), context);
}

void Route53Client::CreateHealthCheckAsync(const CreateHealthCheckRequest& request, const CreateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientCreateHealthCheckAsyncHelper( this, request, handler, context ); } );
}

CreateHostedZoneOutcome Route53Client::CreateHostedZone(const CreateHostedZoneRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone");
  return CreateHostedZoneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateHostedZoneOutcomeCallable Route53Client::CreateHostedZoneCallable(const CreateHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientCreateHostedZoneAsyncHelper(Route53Client const * const clientThis, const CreateHostedZoneRequest& request, const CreateHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHostedZone(request), context);
}

void Route53Client::CreateHostedZoneAsync(const CreateHostedZoneRequest& request, const CreateHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientCreateHostedZoneAsyncHelper( this, request, handler, context ); } );
}

CreateKeySigningKeyOutcome Route53Client::CreateKeySigningKey(const CreateKeySigningKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/keysigningkey");
  return CreateKeySigningKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateKeySigningKeyOutcomeCallable Route53Client::CreateKeySigningKeyCallable(const CreateKeySigningKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateKeySigningKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateKeySigningKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientCreateKeySigningKeyAsyncHelper(Route53Client const * const clientThis, const CreateKeySigningKeyRequest& request, const CreateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateKeySigningKey(request), context);
}

void Route53Client::CreateKeySigningKeyAsync(const CreateKeySigningKeyRequest& request, const CreateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientCreateKeySigningKeyAsyncHelper( this, request, handler, context ); } );
}

CreateQueryLoggingConfigOutcome Route53Client::CreateQueryLoggingConfig(const CreateQueryLoggingConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/queryloggingconfig");
  return CreateQueryLoggingConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateQueryLoggingConfigOutcomeCallable Route53Client::CreateQueryLoggingConfigCallable(const CreateQueryLoggingConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateQueryLoggingConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateQueryLoggingConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientCreateQueryLoggingConfigAsyncHelper(Route53Client const * const clientThis, const CreateQueryLoggingConfigRequest& request, const CreateQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateQueryLoggingConfig(request), context);
}

void Route53Client::CreateQueryLoggingConfigAsync(const CreateQueryLoggingConfigRequest& request, const CreateQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientCreateQueryLoggingConfigAsyncHelper( this, request, handler, context ); } );
}

CreateReusableDelegationSetOutcome Route53Client::CreateReusableDelegationSet(const CreateReusableDelegationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/delegationset");
  return CreateReusableDelegationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateReusableDelegationSetOutcomeCallable Route53Client::CreateReusableDelegationSetCallable(const CreateReusableDelegationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReusableDelegationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReusableDelegationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientCreateReusableDelegationSetAsyncHelper(Route53Client const * const clientThis, const CreateReusableDelegationSetRequest& request, const CreateReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReusableDelegationSet(request), context);
}

void Route53Client::CreateReusableDelegationSetAsync(const CreateReusableDelegationSetRequest& request, const CreateReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientCreateReusableDelegationSetAsyncHelper( this, request, handler, context ); } );
}

CreateTrafficPolicyOutcome Route53Client::CreateTrafficPolicy(const CreateTrafficPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicy");
  return CreateTrafficPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficPolicyOutcomeCallable Route53Client::CreateTrafficPolicyCallable(const CreateTrafficPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrafficPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientCreateTrafficPolicyAsyncHelper(Route53Client const * const clientThis, const CreateTrafficPolicyRequest& request, const CreateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTrafficPolicy(request), context);
}

void Route53Client::CreateTrafficPolicyAsync(const CreateTrafficPolicyRequest& request, const CreateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientCreateTrafficPolicyAsyncHelper( this, request, handler, context ); } );
}

CreateTrafficPolicyInstanceOutcome Route53Client::CreateTrafficPolicyInstance(const CreateTrafficPolicyInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicyinstance");
  return CreateTrafficPolicyInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficPolicyInstanceOutcomeCallable Route53Client::CreateTrafficPolicyInstanceCallable(const CreateTrafficPolicyInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficPolicyInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrafficPolicyInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientCreateTrafficPolicyInstanceAsyncHelper(Route53Client const * const clientThis, const CreateTrafficPolicyInstanceRequest& request, const CreateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTrafficPolicyInstance(request), context);
}

void Route53Client::CreateTrafficPolicyInstanceAsync(const CreateTrafficPolicyInstanceRequest& request, const CreateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientCreateTrafficPolicyInstanceAsyncHelper( this, request, handler, context ); } );
}

CreateTrafficPolicyVersionOutcome Route53Client::CreateTrafficPolicyVersion(const CreateTrafficPolicyVersionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTrafficPolicyVersion", "Required field: Id, is not set");
    return CreateTrafficPolicyVersionOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicy/");
  uri.AddPathSegment(request.GetId());
  return CreateTrafficPolicyVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficPolicyVersionOutcomeCallable Route53Client::CreateTrafficPolicyVersionCallable(const CreateTrafficPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrafficPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientCreateTrafficPolicyVersionAsyncHelper(Route53Client const * const clientThis, const CreateTrafficPolicyVersionRequest& request, const CreateTrafficPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTrafficPolicyVersion(request), context);
}

void Route53Client::CreateTrafficPolicyVersionAsync(const CreateTrafficPolicyVersionRequest& request, const CreateTrafficPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientCreateTrafficPolicyVersionAsyncHelper( this, request, handler, context ); } );
}

CreateVPCAssociationAuthorizationOutcome Route53Client::CreateVPCAssociationAuthorization(const CreateVPCAssociationAuthorizationRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVPCAssociationAuthorization", "Required field: HostedZoneId, is not set");
    return CreateVPCAssociationAuthorizationOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegments("/authorizevpcassociation");
  return CreateVPCAssociationAuthorizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateVPCAssociationAuthorizationOutcomeCallable Route53Client::CreateVPCAssociationAuthorizationCallable(const CreateVPCAssociationAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVPCAssociationAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVPCAssociationAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientCreateVPCAssociationAuthorizationAsyncHelper(Route53Client const * const clientThis, const CreateVPCAssociationAuthorizationRequest& request, const CreateVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVPCAssociationAuthorization(request), context);
}

void Route53Client::CreateVPCAssociationAuthorizationAsync(const CreateVPCAssociationAuthorizationRequest& request, const CreateVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientCreateVPCAssociationAuthorizationAsyncHelper( this, request, handler, context ); } );
}

DeactivateKeySigningKeyOutcome Route53Client::DeactivateKeySigningKey(const DeactivateKeySigningKeyRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeactivateKeySigningKey", "Required field: HostedZoneId, is not set");
    return DeactivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeactivateKeySigningKey", "Required field: Name, is not set");
    return DeactivateKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/keysigningkey/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/deactivate");
  return DeactivateKeySigningKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeactivateKeySigningKeyOutcomeCallable Route53Client::DeactivateKeySigningKeyCallable(const DeactivateKeySigningKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateKeySigningKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateKeySigningKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDeactivateKeySigningKeyAsyncHelper(Route53Client const * const clientThis, const DeactivateKeySigningKeyRequest& request, const DeactivateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeactivateKeySigningKey(request), context);
}

void Route53Client::DeactivateKeySigningKeyAsync(const DeactivateKeySigningKeyRequest& request, const DeactivateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDeactivateKeySigningKeyAsyncHelper( this, request, handler, context ); } );
}

DeleteCidrCollectionOutcome Route53Client::DeleteCidrCollection(const DeleteCidrCollectionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCidrCollection", "Required field: Id, is not set");
    return DeleteCidrCollectionOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/cidrcollection/");
  uri.AddPathSegment(request.GetId());
  return DeleteCidrCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteCidrCollectionOutcomeCallable Route53Client::DeleteCidrCollectionCallable(const DeleteCidrCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCidrCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCidrCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDeleteCidrCollectionAsyncHelper(Route53Client const * const clientThis, const DeleteCidrCollectionRequest& request, const DeleteCidrCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCidrCollection(request), context);
}

void Route53Client::DeleteCidrCollectionAsync(const DeleteCidrCollectionRequest& request, const DeleteCidrCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDeleteCidrCollectionAsyncHelper( this, request, handler, context ); } );
}

DeleteHealthCheckOutcome Route53Client::DeleteHealthCheck(const DeleteHealthCheckRequest& request) const
{
  if (!request.HealthCheckIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHealthCheck", "Required field: HealthCheckId, is not set");
    return DeleteHealthCheckOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/healthcheck/");
  uri.AddPathSegment(request.GetHealthCheckId());
  return DeleteHealthCheckOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteHealthCheckOutcomeCallable Route53Client::DeleteHealthCheckCallable(const DeleteHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDeleteHealthCheckAsyncHelper(Route53Client const * const clientThis, const DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteHealthCheck(request), context);
}

void Route53Client::DeleteHealthCheckAsync(const DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDeleteHealthCheckAsyncHelper( this, request, handler, context ); } );
}

DeleteHostedZoneOutcome Route53Client::DeleteHostedZone(const DeleteHostedZoneRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHostedZone", "Required field: Id, is not set");
    return DeleteHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetId());
  return DeleteHostedZoneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteHostedZoneOutcomeCallable Route53Client::DeleteHostedZoneCallable(const DeleteHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDeleteHostedZoneAsyncHelper(Route53Client const * const clientThis, const DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteHostedZone(request), context);
}

void Route53Client::DeleteHostedZoneAsync(const DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDeleteHostedZoneAsyncHelper( this, request, handler, context ); } );
}

DeleteKeySigningKeyOutcome Route53Client::DeleteKeySigningKey(const DeleteKeySigningKeyRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKeySigningKey", "Required field: HostedZoneId, is not set");
    return DeleteKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKeySigningKey", "Required field: Name, is not set");
    return DeleteKeySigningKeyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/keysigningkey/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegment(request.GetName());
  return DeleteKeySigningKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteKeySigningKeyOutcomeCallable Route53Client::DeleteKeySigningKeyCallable(const DeleteKeySigningKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteKeySigningKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteKeySigningKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDeleteKeySigningKeyAsyncHelper(Route53Client const * const clientThis, const DeleteKeySigningKeyRequest& request, const DeleteKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteKeySigningKey(request), context);
}

void Route53Client::DeleteKeySigningKeyAsync(const DeleteKeySigningKeyRequest& request, const DeleteKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDeleteKeySigningKeyAsyncHelper( this, request, handler, context ); } );
}

DeleteQueryLoggingConfigOutcome Route53Client::DeleteQueryLoggingConfig(const DeleteQueryLoggingConfigRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueryLoggingConfig", "Required field: Id, is not set");
    return DeleteQueryLoggingConfigOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/queryloggingconfig/");
  uri.AddPathSegment(request.GetId());
  return DeleteQueryLoggingConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteQueryLoggingConfigOutcomeCallable Route53Client::DeleteQueryLoggingConfigCallable(const DeleteQueryLoggingConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteQueryLoggingConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQueryLoggingConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDeleteQueryLoggingConfigAsyncHelper(Route53Client const * const clientThis, const DeleteQueryLoggingConfigRequest& request, const DeleteQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteQueryLoggingConfig(request), context);
}

void Route53Client::DeleteQueryLoggingConfigAsync(const DeleteQueryLoggingConfigRequest& request, const DeleteQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDeleteQueryLoggingConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteReusableDelegationSetOutcome Route53Client::DeleteReusableDelegationSet(const DeleteReusableDelegationSetRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReusableDelegationSet", "Required field: Id, is not set");
    return DeleteReusableDelegationSetOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/delegationset/");
  uri.AddPathSegment(request.GetId());
  return DeleteReusableDelegationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteReusableDelegationSetOutcomeCallable Route53Client::DeleteReusableDelegationSetCallable(const DeleteReusableDelegationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReusableDelegationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReusableDelegationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDeleteReusableDelegationSetAsyncHelper(Route53Client const * const clientThis, const DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReusableDelegationSet(request), context);
}

void Route53Client::DeleteReusableDelegationSetAsync(const DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDeleteReusableDelegationSetAsyncHelper( this, request, handler, context ); } );
}

DeleteTrafficPolicyOutcome Route53Client::DeleteTrafficPolicy(const DeleteTrafficPolicyRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrafficPolicy", "Required field: Id, is not set");
    return DeleteTrafficPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrafficPolicy", "Required field: Version, is not set");
    return DeleteTrafficPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicy/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegment(request.GetVersion());
  return DeleteTrafficPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteTrafficPolicyOutcomeCallable Route53Client::DeleteTrafficPolicyCallable(const DeleteTrafficPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrafficPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDeleteTrafficPolicyAsyncHelper(Route53Client const * const clientThis, const DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTrafficPolicy(request), context);
}

void Route53Client::DeleteTrafficPolicyAsync(const DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDeleteTrafficPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteTrafficPolicyInstanceOutcome Route53Client::DeleteTrafficPolicyInstance(const DeleteTrafficPolicyInstanceRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrafficPolicyInstance", "Required field: Id, is not set");
    return DeleteTrafficPolicyInstanceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicyinstance/");
  uri.AddPathSegment(request.GetId());
  return DeleteTrafficPolicyInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteTrafficPolicyInstanceOutcomeCallable Route53Client::DeleteTrafficPolicyInstanceCallable(const DeleteTrafficPolicyInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficPolicyInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrafficPolicyInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDeleteTrafficPolicyInstanceAsyncHelper(Route53Client const * const clientThis, const DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTrafficPolicyInstance(request), context);
}

void Route53Client::DeleteTrafficPolicyInstanceAsync(const DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDeleteTrafficPolicyInstanceAsyncHelper( this, request, handler, context ); } );
}

DeleteVPCAssociationAuthorizationOutcome Route53Client::DeleteVPCAssociationAuthorization(const DeleteVPCAssociationAuthorizationRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVPCAssociationAuthorization", "Required field: HostedZoneId, is not set");
    return DeleteVPCAssociationAuthorizationOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegments("/deauthorizevpcassociation");
  return DeleteVPCAssociationAuthorizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVPCAssociationAuthorizationOutcomeCallable Route53Client::DeleteVPCAssociationAuthorizationCallable(const DeleteVPCAssociationAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVPCAssociationAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVPCAssociationAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDeleteVPCAssociationAuthorizationAsyncHelper(Route53Client const * const clientThis, const DeleteVPCAssociationAuthorizationRequest& request, const DeleteVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVPCAssociationAuthorization(request), context);
}

void Route53Client::DeleteVPCAssociationAuthorizationAsync(const DeleteVPCAssociationAuthorizationRequest& request, const DeleteVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDeleteVPCAssociationAuthorizationAsyncHelper( this, request, handler, context ); } );
}

DisableHostedZoneDNSSECOutcome Route53Client::DisableHostedZoneDNSSEC(const DisableHostedZoneDNSSECRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableHostedZoneDNSSEC", "Required field: HostedZoneId, is not set");
    return DisableHostedZoneDNSSECOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegments("/disable-dnssec");
  return DisableHostedZoneDNSSECOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisableHostedZoneDNSSECOutcomeCallable Route53Client::DisableHostedZoneDNSSECCallable(const DisableHostedZoneDNSSECRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableHostedZoneDNSSECOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableHostedZoneDNSSEC(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDisableHostedZoneDNSSECAsyncHelper(Route53Client const * const clientThis, const DisableHostedZoneDNSSECRequest& request, const DisableHostedZoneDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableHostedZoneDNSSEC(request), context);
}

void Route53Client::DisableHostedZoneDNSSECAsync(const DisableHostedZoneDNSSECRequest& request, const DisableHostedZoneDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDisableHostedZoneDNSSECAsyncHelper( this, request, handler, context ); } );
}

DisassociateVPCFromHostedZoneOutcome Route53Client::DisassociateVPCFromHostedZone(const DisassociateVPCFromHostedZoneRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateVPCFromHostedZone", "Required field: HostedZoneId, is not set");
    return DisassociateVPCFromHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegments("/disassociatevpc");
  return DisassociateVPCFromHostedZoneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateVPCFromHostedZoneOutcomeCallable Route53Client::DisassociateVPCFromHostedZoneCallable(const DisassociateVPCFromHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateVPCFromHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateVPCFromHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientDisassociateVPCFromHostedZoneAsyncHelper(Route53Client const * const clientThis, const DisassociateVPCFromHostedZoneRequest& request, const DisassociateVPCFromHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateVPCFromHostedZone(request), context);
}

void Route53Client::DisassociateVPCFromHostedZoneAsync(const DisassociateVPCFromHostedZoneRequest& request, const DisassociateVPCFromHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientDisassociateVPCFromHostedZoneAsyncHelper( this, request, handler, context ); } );
}

EnableHostedZoneDNSSECOutcome Route53Client::EnableHostedZoneDNSSEC(const EnableHostedZoneDNSSECRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableHostedZoneDNSSEC", "Required field: HostedZoneId, is not set");
    return EnableHostedZoneDNSSECOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegments("/enable-dnssec");
  return EnableHostedZoneDNSSECOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

EnableHostedZoneDNSSECOutcomeCallable Route53Client::EnableHostedZoneDNSSECCallable(const EnableHostedZoneDNSSECRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableHostedZoneDNSSECOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableHostedZoneDNSSEC(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientEnableHostedZoneDNSSECAsyncHelper(Route53Client const * const clientThis, const EnableHostedZoneDNSSECRequest& request, const EnableHostedZoneDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableHostedZoneDNSSEC(request), context);
}

void Route53Client::EnableHostedZoneDNSSECAsync(const EnableHostedZoneDNSSECRequest& request, const EnableHostedZoneDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientEnableHostedZoneDNSSECAsyncHelper( this, request, handler, context ); } );
}

GetAccountLimitOutcome Route53Client::GetAccountLimit(const GetAccountLimitRequest& request) const
{
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccountLimit", "Required field: Type, is not set");
    return GetAccountLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/accountlimit/");
  uri.AddPathSegment(AccountLimitTypeMapper::GetNameForAccountLimitType(request.GetType()));
  return GetAccountLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetAccountLimitOutcomeCallable Route53Client::GetAccountLimitCallable(const GetAccountLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetAccountLimitAsyncHelper(Route53Client const * const clientThis, const GetAccountLimitRequest& request, const GetAccountLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccountLimit(request), context);
}

void Route53Client::GetAccountLimitAsync(const GetAccountLimitRequest& request, const GetAccountLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetAccountLimitAsyncHelper( this, request, handler, context ); } );
}

GetChangeOutcome Route53Client::GetChange(const GetChangeRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChange", "Required field: Id, is not set");
    return GetChangeOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/change/");
  uri.AddPathSegment(request.GetId());
  return GetChangeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetChangeOutcomeCallable Route53Client::GetChangeCallable(const GetChangeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChange(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetChangeAsyncHelper(Route53Client const * const clientThis, const GetChangeRequest& request, const GetChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetChange(request), context);
}

void Route53Client::GetChangeAsync(const GetChangeRequest& request, const GetChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetChangeAsyncHelper( this, request, handler, context ); } );
}

GetCheckerIpRangesOutcome Route53Client::GetCheckerIpRanges(const GetCheckerIpRangesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/checkeripranges");
  return GetCheckerIpRangesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetCheckerIpRangesOutcomeCallable Route53Client::GetCheckerIpRangesCallable(const GetCheckerIpRangesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCheckerIpRangesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCheckerIpRanges(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetCheckerIpRangesAsyncHelper(Route53Client const * const clientThis, const GetCheckerIpRangesRequest& request, const GetCheckerIpRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCheckerIpRanges(request), context);
}

void Route53Client::GetCheckerIpRangesAsync(const GetCheckerIpRangesRequest& request, const GetCheckerIpRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetCheckerIpRangesAsyncHelper( this, request, handler, context ); } );
}

GetDNSSECOutcome Route53Client::GetDNSSEC(const GetDNSSECRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDNSSEC", "Required field: HostedZoneId, is not set");
    return GetDNSSECOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegments("/dnssec");
  return GetDNSSECOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetDNSSECOutcomeCallable Route53Client::GetDNSSECCallable(const GetDNSSECRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDNSSECOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDNSSEC(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetDNSSECAsyncHelper(Route53Client const * const clientThis, const GetDNSSECRequest& request, const GetDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDNSSEC(request), context);
}

void Route53Client::GetDNSSECAsync(const GetDNSSECRequest& request, const GetDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetDNSSECAsyncHelper( this, request, handler, context ); } );
}

GetGeoLocationOutcome Route53Client::GetGeoLocation(const GetGeoLocationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/geolocation");
  return GetGeoLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetGeoLocationOutcomeCallable Route53Client::GetGeoLocationCallable(const GetGeoLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGeoLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGeoLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetGeoLocationAsyncHelper(Route53Client const * const clientThis, const GetGeoLocationRequest& request, const GetGeoLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGeoLocation(request), context);
}

void Route53Client::GetGeoLocationAsync(const GetGeoLocationRequest& request, const GetGeoLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetGeoLocationAsyncHelper( this, request, handler, context ); } );
}

GetHealthCheckOutcome Route53Client::GetHealthCheck(const GetHealthCheckRequest& request) const
{
  if (!request.HealthCheckIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHealthCheck", "Required field: HealthCheckId, is not set");
    return GetHealthCheckOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/healthcheck/");
  uri.AddPathSegment(request.GetHealthCheckId());
  return GetHealthCheckOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetHealthCheckOutcomeCallable Route53Client::GetHealthCheckCallable(const GetHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetHealthCheckAsyncHelper(Route53Client const * const clientThis, const GetHealthCheckRequest& request, const GetHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetHealthCheck(request), context);
}

void Route53Client::GetHealthCheckAsync(const GetHealthCheckRequest& request, const GetHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetHealthCheckAsyncHelper( this, request, handler, context ); } );
}

GetHealthCheckCountOutcome Route53Client::GetHealthCheckCount(const GetHealthCheckCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/healthcheckcount");
  return GetHealthCheckCountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetHealthCheckCountOutcomeCallable Route53Client::GetHealthCheckCountCallable(const GetHealthCheckCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHealthCheckCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHealthCheckCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetHealthCheckCountAsyncHelper(Route53Client const * const clientThis, const GetHealthCheckCountRequest& request, const GetHealthCheckCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetHealthCheckCount(request), context);
}

void Route53Client::GetHealthCheckCountAsync(const GetHealthCheckCountRequest& request, const GetHealthCheckCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetHealthCheckCountAsyncHelper( this, request, handler, context ); } );
}

GetHealthCheckLastFailureReasonOutcome Route53Client::GetHealthCheckLastFailureReason(const GetHealthCheckLastFailureReasonRequest& request) const
{
  if (!request.HealthCheckIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHealthCheckLastFailureReason", "Required field: HealthCheckId, is not set");
    return GetHealthCheckLastFailureReasonOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/healthcheck/");
  uri.AddPathSegment(request.GetHealthCheckId());
  uri.AddPathSegments("/lastfailurereason");
  return GetHealthCheckLastFailureReasonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetHealthCheckLastFailureReasonOutcomeCallable Route53Client::GetHealthCheckLastFailureReasonCallable(const GetHealthCheckLastFailureReasonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHealthCheckLastFailureReasonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHealthCheckLastFailureReason(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetHealthCheckLastFailureReasonAsyncHelper(Route53Client const * const clientThis, const GetHealthCheckLastFailureReasonRequest& request, const GetHealthCheckLastFailureReasonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetHealthCheckLastFailureReason(request), context);
}

void Route53Client::GetHealthCheckLastFailureReasonAsync(const GetHealthCheckLastFailureReasonRequest& request, const GetHealthCheckLastFailureReasonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetHealthCheckLastFailureReasonAsyncHelper( this, request, handler, context ); } );
}

GetHealthCheckStatusOutcome Route53Client::GetHealthCheckStatus(const GetHealthCheckStatusRequest& request) const
{
  if (!request.HealthCheckIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHealthCheckStatus", "Required field: HealthCheckId, is not set");
    return GetHealthCheckStatusOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/healthcheck/");
  uri.AddPathSegment(request.GetHealthCheckId());
  uri.AddPathSegments("/status");
  return GetHealthCheckStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetHealthCheckStatusOutcomeCallable Route53Client::GetHealthCheckStatusCallable(const GetHealthCheckStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHealthCheckStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHealthCheckStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetHealthCheckStatusAsyncHelper(Route53Client const * const clientThis, const GetHealthCheckStatusRequest& request, const GetHealthCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetHealthCheckStatus(request), context);
}

void Route53Client::GetHealthCheckStatusAsync(const GetHealthCheckStatusRequest& request, const GetHealthCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetHealthCheckStatusAsyncHelper( this, request, handler, context ); } );
}

GetHostedZoneOutcome Route53Client::GetHostedZone(const GetHostedZoneRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHostedZone", "Required field: Id, is not set");
    return GetHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetId());
  return GetHostedZoneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetHostedZoneOutcomeCallable Route53Client::GetHostedZoneCallable(const GetHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetHostedZoneAsyncHelper(Route53Client const * const clientThis, const GetHostedZoneRequest& request, const GetHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetHostedZone(request), context);
}

void Route53Client::GetHostedZoneAsync(const GetHostedZoneRequest& request, const GetHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetHostedZoneAsyncHelper( this, request, handler, context ); } );
}

GetHostedZoneCountOutcome Route53Client::GetHostedZoneCount(const GetHostedZoneCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzonecount");
  return GetHostedZoneCountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetHostedZoneCountOutcomeCallable Route53Client::GetHostedZoneCountCallable(const GetHostedZoneCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHostedZoneCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHostedZoneCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetHostedZoneCountAsyncHelper(Route53Client const * const clientThis, const GetHostedZoneCountRequest& request, const GetHostedZoneCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetHostedZoneCount(request), context);
}

void Route53Client::GetHostedZoneCountAsync(const GetHostedZoneCountRequest& request, const GetHostedZoneCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetHostedZoneCountAsyncHelper( this, request, handler, context ); } );
}

GetHostedZoneLimitOutcome Route53Client::GetHostedZoneLimit(const GetHostedZoneLimitRequest& request) const
{
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHostedZoneLimit", "Required field: Type, is not set");
    return GetHostedZoneLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHostedZoneLimit", "Required field: HostedZoneId, is not set");
    return GetHostedZoneLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzonelimit/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegment(HostedZoneLimitTypeMapper::GetNameForHostedZoneLimitType(request.GetType()));
  return GetHostedZoneLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetHostedZoneLimitOutcomeCallable Route53Client::GetHostedZoneLimitCallable(const GetHostedZoneLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHostedZoneLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHostedZoneLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetHostedZoneLimitAsyncHelper(Route53Client const * const clientThis, const GetHostedZoneLimitRequest& request, const GetHostedZoneLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetHostedZoneLimit(request), context);
}

void Route53Client::GetHostedZoneLimitAsync(const GetHostedZoneLimitRequest& request, const GetHostedZoneLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetHostedZoneLimitAsyncHelper( this, request, handler, context ); } );
}

GetQueryLoggingConfigOutcome Route53Client::GetQueryLoggingConfig(const GetQueryLoggingConfigRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryLoggingConfig", "Required field: Id, is not set");
    return GetQueryLoggingConfigOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/queryloggingconfig/");
  uri.AddPathSegment(request.GetId());
  return GetQueryLoggingConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetQueryLoggingConfigOutcomeCallable Route53Client::GetQueryLoggingConfigCallable(const GetQueryLoggingConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryLoggingConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryLoggingConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetQueryLoggingConfigAsyncHelper(Route53Client const * const clientThis, const GetQueryLoggingConfigRequest& request, const GetQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQueryLoggingConfig(request), context);
}

void Route53Client::GetQueryLoggingConfigAsync(const GetQueryLoggingConfigRequest& request, const GetQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetQueryLoggingConfigAsyncHelper( this, request, handler, context ); } );
}

GetReusableDelegationSetOutcome Route53Client::GetReusableDelegationSet(const GetReusableDelegationSetRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReusableDelegationSet", "Required field: Id, is not set");
    return GetReusableDelegationSetOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/delegationset/");
  uri.AddPathSegment(request.GetId());
  return GetReusableDelegationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetReusableDelegationSetOutcomeCallable Route53Client::GetReusableDelegationSetCallable(const GetReusableDelegationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReusableDelegationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReusableDelegationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetReusableDelegationSetAsyncHelper(Route53Client const * const clientThis, const GetReusableDelegationSetRequest& request, const GetReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetReusableDelegationSet(request), context);
}

void Route53Client::GetReusableDelegationSetAsync(const GetReusableDelegationSetRequest& request, const GetReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetReusableDelegationSetAsyncHelper( this, request, handler, context ); } );
}

GetReusableDelegationSetLimitOutcome Route53Client::GetReusableDelegationSetLimit(const GetReusableDelegationSetLimitRequest& request) const
{
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReusableDelegationSetLimit", "Required field: Type, is not set");
    return GetReusableDelegationSetLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  if (!request.DelegationSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReusableDelegationSetLimit", "Required field: DelegationSetId, is not set");
    return GetReusableDelegationSetLimitOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DelegationSetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/reusabledelegationsetlimit/");
  uri.AddPathSegment(request.GetDelegationSetId());
  uri.AddPathSegment(ReusableDelegationSetLimitTypeMapper::GetNameForReusableDelegationSetLimitType(request.GetType()));
  return GetReusableDelegationSetLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetReusableDelegationSetLimitOutcomeCallable Route53Client::GetReusableDelegationSetLimitCallable(const GetReusableDelegationSetLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReusableDelegationSetLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReusableDelegationSetLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetReusableDelegationSetLimitAsyncHelper(Route53Client const * const clientThis, const GetReusableDelegationSetLimitRequest& request, const GetReusableDelegationSetLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetReusableDelegationSetLimit(request), context);
}

void Route53Client::GetReusableDelegationSetLimitAsync(const GetReusableDelegationSetLimitRequest& request, const GetReusableDelegationSetLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetReusableDelegationSetLimitAsyncHelper( this, request, handler, context ); } );
}

GetTrafficPolicyOutcome Route53Client::GetTrafficPolicy(const GetTrafficPolicyRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrafficPolicy", "Required field: Id, is not set");
    return GetTrafficPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrafficPolicy", "Required field: Version, is not set");
    return GetTrafficPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicy/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegment(request.GetVersion());
  return GetTrafficPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetTrafficPolicyOutcomeCallable Route53Client::GetTrafficPolicyCallable(const GetTrafficPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrafficPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrafficPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetTrafficPolicyAsyncHelper(Route53Client const * const clientThis, const GetTrafficPolicyRequest& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTrafficPolicy(request), context);
}

void Route53Client::GetTrafficPolicyAsync(const GetTrafficPolicyRequest& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetTrafficPolicyAsyncHelper( this, request, handler, context ); } );
}

GetTrafficPolicyInstanceOutcome Route53Client::GetTrafficPolicyInstance(const GetTrafficPolicyInstanceRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrafficPolicyInstance", "Required field: Id, is not set");
    return GetTrafficPolicyInstanceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicyinstance/");
  uri.AddPathSegment(request.GetId());
  return GetTrafficPolicyInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetTrafficPolicyInstanceOutcomeCallable Route53Client::GetTrafficPolicyInstanceCallable(const GetTrafficPolicyInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrafficPolicyInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrafficPolicyInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetTrafficPolicyInstanceAsyncHelper(Route53Client const * const clientThis, const GetTrafficPolicyInstanceRequest& request, const GetTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTrafficPolicyInstance(request), context);
}

void Route53Client::GetTrafficPolicyInstanceAsync(const GetTrafficPolicyInstanceRequest& request, const GetTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetTrafficPolicyInstanceAsyncHelper( this, request, handler, context ); } );
}

GetTrafficPolicyInstanceCountOutcome Route53Client::GetTrafficPolicyInstanceCount(const GetTrafficPolicyInstanceCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicyinstancecount");
  return GetTrafficPolicyInstanceCountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetTrafficPolicyInstanceCountOutcomeCallable Route53Client::GetTrafficPolicyInstanceCountCallable(const GetTrafficPolicyInstanceCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrafficPolicyInstanceCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrafficPolicyInstanceCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientGetTrafficPolicyInstanceCountAsyncHelper(Route53Client const * const clientThis, const GetTrafficPolicyInstanceCountRequest& request, const GetTrafficPolicyInstanceCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTrafficPolicyInstanceCount(request), context);
}

void Route53Client::GetTrafficPolicyInstanceCountAsync(const GetTrafficPolicyInstanceCountRequest& request, const GetTrafficPolicyInstanceCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientGetTrafficPolicyInstanceCountAsyncHelper( this, request, handler, context ); } );
}

ListCidrBlocksOutcome Route53Client::ListCidrBlocks(const ListCidrBlocksRequest& request) const
{
  if (!request.CollectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCidrBlocks", "Required field: CollectionId, is not set");
    return ListCidrBlocksOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/cidrcollection/");
  uri.AddPathSegment(request.GetCollectionId());
  uri.AddPathSegments("/cidrblocks");
  return ListCidrBlocksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListCidrBlocksOutcomeCallable Route53Client::ListCidrBlocksCallable(const ListCidrBlocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCidrBlocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCidrBlocks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListCidrBlocksAsyncHelper(Route53Client const * const clientThis, const ListCidrBlocksRequest& request, const ListCidrBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCidrBlocks(request), context);
}

void Route53Client::ListCidrBlocksAsync(const ListCidrBlocksRequest& request, const ListCidrBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListCidrBlocksAsyncHelper( this, request, handler, context ); } );
}

ListCidrCollectionsOutcome Route53Client::ListCidrCollections(const ListCidrCollectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/cidrcollection");
  return ListCidrCollectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListCidrCollectionsOutcomeCallable Route53Client::ListCidrCollectionsCallable(const ListCidrCollectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCidrCollectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCidrCollections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListCidrCollectionsAsyncHelper(Route53Client const * const clientThis, const ListCidrCollectionsRequest& request, const ListCidrCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCidrCollections(request), context);
}

void Route53Client::ListCidrCollectionsAsync(const ListCidrCollectionsRequest& request, const ListCidrCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListCidrCollectionsAsyncHelper( this, request, handler, context ); } );
}

ListCidrLocationsOutcome Route53Client::ListCidrLocations(const ListCidrLocationsRequest& request) const
{
  if (!request.CollectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCidrLocations", "Required field: CollectionId, is not set");
    return ListCidrLocationsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollectionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/cidrcollection/");
  uri.AddPathSegment(request.GetCollectionId());
  return ListCidrLocationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListCidrLocationsOutcomeCallable Route53Client::ListCidrLocationsCallable(const ListCidrLocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCidrLocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCidrLocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListCidrLocationsAsyncHelper(Route53Client const * const clientThis, const ListCidrLocationsRequest& request, const ListCidrLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCidrLocations(request), context);
}

void Route53Client::ListCidrLocationsAsync(const ListCidrLocationsRequest& request, const ListCidrLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListCidrLocationsAsyncHelper( this, request, handler, context ); } );
}

ListGeoLocationsOutcome Route53Client::ListGeoLocations(const ListGeoLocationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/geolocations");
  return ListGeoLocationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListGeoLocationsOutcomeCallable Route53Client::ListGeoLocationsCallable(const ListGeoLocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGeoLocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGeoLocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListGeoLocationsAsyncHelper(Route53Client const * const clientThis, const ListGeoLocationsRequest& request, const ListGeoLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGeoLocations(request), context);
}

void Route53Client::ListGeoLocationsAsync(const ListGeoLocationsRequest& request, const ListGeoLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListGeoLocationsAsyncHelper( this, request, handler, context ); } );
}

ListHealthChecksOutcome Route53Client::ListHealthChecks(const ListHealthChecksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/healthcheck");
  return ListHealthChecksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListHealthChecksOutcomeCallable Route53Client::ListHealthChecksCallable(const ListHealthChecksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHealthChecksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHealthChecks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListHealthChecksAsyncHelper(Route53Client const * const clientThis, const ListHealthChecksRequest& request, const ListHealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHealthChecks(request), context);
}

void Route53Client::ListHealthChecksAsync(const ListHealthChecksRequest& request, const ListHealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListHealthChecksAsyncHelper( this, request, handler, context ); } );
}

ListHostedZonesOutcome Route53Client::ListHostedZones(const ListHostedZonesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone");
  return ListHostedZonesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListHostedZonesOutcomeCallable Route53Client::ListHostedZonesCallable(const ListHostedZonesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHostedZonesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHostedZones(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListHostedZonesAsyncHelper(Route53Client const * const clientThis, const ListHostedZonesRequest& request, const ListHostedZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHostedZones(request), context);
}

void Route53Client::ListHostedZonesAsync(const ListHostedZonesRequest& request, const ListHostedZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListHostedZonesAsyncHelper( this, request, handler, context ); } );
}

ListHostedZonesByNameOutcome Route53Client::ListHostedZonesByName(const ListHostedZonesByNameRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzonesbyname");
  return ListHostedZonesByNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListHostedZonesByNameOutcomeCallable Route53Client::ListHostedZonesByNameCallable(const ListHostedZonesByNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHostedZonesByNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHostedZonesByName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListHostedZonesByNameAsyncHelper(Route53Client const * const clientThis, const ListHostedZonesByNameRequest& request, const ListHostedZonesByNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHostedZonesByName(request), context);
}

void Route53Client::ListHostedZonesByNameAsync(const ListHostedZonesByNameRequest& request, const ListHostedZonesByNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListHostedZonesByNameAsyncHelper( this, request, handler, context ); } );
}

ListHostedZonesByVPCOutcome Route53Client::ListHostedZonesByVPC(const ListHostedZonesByVPCRequest& request) const
{
  if (!request.VPCIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHostedZonesByVPC", "Required field: VPCId, is not set");
    return ListHostedZonesByVPCOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VPCId]", false));
  }
  if (!request.VPCRegionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHostedZonesByVPC", "Required field: VPCRegion, is not set");
    return ListHostedZonesByVPCOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VPCRegion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzonesbyvpc");
  return ListHostedZonesByVPCOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListHostedZonesByVPCOutcomeCallable Route53Client::ListHostedZonesByVPCCallable(const ListHostedZonesByVPCRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHostedZonesByVPCOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHostedZonesByVPC(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListHostedZonesByVPCAsyncHelper(Route53Client const * const clientThis, const ListHostedZonesByVPCRequest& request, const ListHostedZonesByVPCResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHostedZonesByVPC(request), context);
}

void Route53Client::ListHostedZonesByVPCAsync(const ListHostedZonesByVPCRequest& request, const ListHostedZonesByVPCResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListHostedZonesByVPCAsyncHelper( this, request, handler, context ); } );
}

ListQueryLoggingConfigsOutcome Route53Client::ListQueryLoggingConfigs(const ListQueryLoggingConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/queryloggingconfig");
  return ListQueryLoggingConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListQueryLoggingConfigsOutcomeCallable Route53Client::ListQueryLoggingConfigsCallable(const ListQueryLoggingConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueryLoggingConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueryLoggingConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListQueryLoggingConfigsAsyncHelper(Route53Client const * const clientThis, const ListQueryLoggingConfigsRequest& request, const ListQueryLoggingConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQueryLoggingConfigs(request), context);
}

void Route53Client::ListQueryLoggingConfigsAsync(const ListQueryLoggingConfigsRequest& request, const ListQueryLoggingConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListQueryLoggingConfigsAsyncHelper( this, request, handler, context ); } );
}

ListResourceRecordSetsOutcome Route53Client::ListResourceRecordSets(const ListResourceRecordSetsRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListResourceRecordSets", "Required field: HostedZoneId, is not set");
    return ListResourceRecordSetsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegments("/rrset");
  return ListResourceRecordSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListResourceRecordSetsOutcomeCallable Route53Client::ListResourceRecordSetsCallable(const ListResourceRecordSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceRecordSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceRecordSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListResourceRecordSetsAsyncHelper(Route53Client const * const clientThis, const ListResourceRecordSetsRequest& request, const ListResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourceRecordSets(request), context);
}

void Route53Client::ListResourceRecordSetsAsync(const ListResourceRecordSetsRequest& request, const ListResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListResourceRecordSetsAsyncHelper( this, request, handler, context ); } );
}

ListReusableDelegationSetsOutcome Route53Client::ListReusableDelegationSets(const ListReusableDelegationSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/delegationset");
  return ListReusableDelegationSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListReusableDelegationSetsOutcomeCallable Route53Client::ListReusableDelegationSetsCallable(const ListReusableDelegationSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReusableDelegationSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReusableDelegationSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListReusableDelegationSetsAsyncHelper(Route53Client const * const clientThis, const ListReusableDelegationSetsRequest& request, const ListReusableDelegationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReusableDelegationSets(request), context);
}

void Route53Client::ListReusableDelegationSetsAsync(const ListReusableDelegationSetsRequest& request, const ListReusableDelegationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListReusableDelegationSetsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome Route53Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceType, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceId, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/tags/");
  uri.AddPathSegment(TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType()));
  uri.AddPathSegment(request.GetResourceId());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListTagsForResourceOutcomeCallable Route53Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListTagsForResourceAsyncHelper(Route53Client const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void Route53Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourcesOutcome Route53Client::ListTagsForResources(const ListTagsForResourcesRequest& request) const
{
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResources", "Required field: ResourceType, is not set");
    return ListTagsForResourcesOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/tags/");
  uri.AddPathSegment(TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType()));
  return ListTagsForResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourcesOutcomeCallable Route53Client::ListTagsForResourcesCallable(const ListTagsForResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListTagsForResourcesAsyncHelper(Route53Client const * const clientThis, const ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResources(request), context);
}

void Route53Client::ListTagsForResourcesAsync(const ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListTagsForResourcesAsyncHelper( this, request, handler, context ); } );
}

ListTrafficPoliciesOutcome Route53Client::ListTrafficPolicies(const ListTrafficPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicies");
  return ListTrafficPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListTrafficPoliciesOutcomeCallable Route53Client::ListTrafficPoliciesCallable(const ListTrafficPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrafficPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrafficPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListTrafficPoliciesAsyncHelper(Route53Client const * const clientThis, const ListTrafficPoliciesRequest& request, const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrafficPolicies(request), context);
}

void Route53Client::ListTrafficPoliciesAsync(const ListTrafficPoliciesRequest& request, const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListTrafficPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListTrafficPolicyInstancesOutcome Route53Client::ListTrafficPolicyInstances(const ListTrafficPolicyInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicyinstances");
  return ListTrafficPolicyInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListTrafficPolicyInstancesOutcomeCallable Route53Client::ListTrafficPolicyInstancesCallable(const ListTrafficPolicyInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrafficPolicyInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrafficPolicyInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListTrafficPolicyInstancesAsyncHelper(Route53Client const * const clientThis, const ListTrafficPolicyInstancesRequest& request, const ListTrafficPolicyInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrafficPolicyInstances(request), context);
}

void Route53Client::ListTrafficPolicyInstancesAsync(const ListTrafficPolicyInstancesRequest& request, const ListTrafficPolicyInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListTrafficPolicyInstancesAsyncHelper( this, request, handler, context ); } );
}

ListTrafficPolicyInstancesByHostedZoneOutcome Route53Client::ListTrafficPolicyInstancesByHostedZone(const ListTrafficPolicyInstancesByHostedZoneRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyInstancesByHostedZone", "Required field: HostedZoneId, is not set");
    return ListTrafficPolicyInstancesByHostedZoneOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicyinstances/hostedzone");
  return ListTrafficPolicyInstancesByHostedZoneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListTrafficPolicyInstancesByHostedZoneOutcomeCallable Route53Client::ListTrafficPolicyInstancesByHostedZoneCallable(const ListTrafficPolicyInstancesByHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrafficPolicyInstancesByHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrafficPolicyInstancesByHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListTrafficPolicyInstancesByHostedZoneAsyncHelper(Route53Client const * const clientThis, const ListTrafficPolicyInstancesByHostedZoneRequest& request, const ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrafficPolicyInstancesByHostedZone(request), context);
}

void Route53Client::ListTrafficPolicyInstancesByHostedZoneAsync(const ListTrafficPolicyInstancesByHostedZoneRequest& request, const ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListTrafficPolicyInstancesByHostedZoneAsyncHelper( this, request, handler, context ); } );
}

ListTrafficPolicyInstancesByPolicyOutcome Route53Client::ListTrafficPolicyInstancesByPolicy(const ListTrafficPolicyInstancesByPolicyRequest& request) const
{
  if (!request.TrafficPolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyInstancesByPolicy", "Required field: TrafficPolicyId, is not set");
    return ListTrafficPolicyInstancesByPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficPolicyId]", false));
  }
  if (!request.TrafficPolicyVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyInstancesByPolicy", "Required field: TrafficPolicyVersion, is not set");
    return ListTrafficPolicyInstancesByPolicyOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficPolicyVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicyinstances/trafficpolicy");
  return ListTrafficPolicyInstancesByPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListTrafficPolicyInstancesByPolicyOutcomeCallable Route53Client::ListTrafficPolicyInstancesByPolicyCallable(const ListTrafficPolicyInstancesByPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrafficPolicyInstancesByPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrafficPolicyInstancesByPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListTrafficPolicyInstancesByPolicyAsyncHelper(Route53Client const * const clientThis, const ListTrafficPolicyInstancesByPolicyRequest& request, const ListTrafficPolicyInstancesByPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrafficPolicyInstancesByPolicy(request), context);
}

void Route53Client::ListTrafficPolicyInstancesByPolicyAsync(const ListTrafficPolicyInstancesByPolicyRequest& request, const ListTrafficPolicyInstancesByPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListTrafficPolicyInstancesByPolicyAsyncHelper( this, request, handler, context ); } );
}

ListTrafficPolicyVersionsOutcome Route53Client::ListTrafficPolicyVersions(const ListTrafficPolicyVersionsRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrafficPolicyVersions", "Required field: Id, is not set");
    return ListTrafficPolicyVersionsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicies/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/versions");
  return ListTrafficPolicyVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListTrafficPolicyVersionsOutcomeCallable Route53Client::ListTrafficPolicyVersionsCallable(const ListTrafficPolicyVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrafficPolicyVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrafficPolicyVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListTrafficPolicyVersionsAsyncHelper(Route53Client const * const clientThis, const ListTrafficPolicyVersionsRequest& request, const ListTrafficPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrafficPolicyVersions(request), context);
}

void Route53Client::ListTrafficPolicyVersionsAsync(const ListTrafficPolicyVersionsRequest& request, const ListTrafficPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListTrafficPolicyVersionsAsyncHelper( this, request, handler, context ); } );
}

ListVPCAssociationAuthorizationsOutcome Route53Client::ListVPCAssociationAuthorizations(const ListVPCAssociationAuthorizationsRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVPCAssociationAuthorizations", "Required field: HostedZoneId, is not set");
    return ListVPCAssociationAuthorizationsOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetHostedZoneId());
  uri.AddPathSegments("/authorizevpcassociation");
  return ListVPCAssociationAuthorizationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListVPCAssociationAuthorizationsOutcomeCallable Route53Client::ListVPCAssociationAuthorizationsCallable(const ListVPCAssociationAuthorizationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVPCAssociationAuthorizationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVPCAssociationAuthorizations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientListVPCAssociationAuthorizationsAsyncHelper(Route53Client const * const clientThis, const ListVPCAssociationAuthorizationsRequest& request, const ListVPCAssociationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVPCAssociationAuthorizations(request), context);
}

void Route53Client::ListVPCAssociationAuthorizationsAsync(const ListVPCAssociationAuthorizationsRequest& request, const ListVPCAssociationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientListVPCAssociationAuthorizationsAsyncHelper( this, request, handler, context ); } );
}

TestDNSAnswerOutcome Route53Client::TestDNSAnswer(const TestDNSAnswerRequest& request) const
{
  if (!request.HostedZoneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestDNSAnswer", "Required field: HostedZoneId, is not set");
    return TestDNSAnswerOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HostedZoneId]", false));
  }
  if (!request.RecordNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestDNSAnswer", "Required field: RecordName, is not set");
    return TestDNSAnswerOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordName]", false));
  }
  if (!request.RecordTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestDNSAnswer", "Required field: RecordType, is not set");
    return TestDNSAnswerOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/testdnsanswer");
  return TestDNSAnswerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

TestDNSAnswerOutcomeCallable Route53Client::TestDNSAnswerCallable(const TestDNSAnswerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestDNSAnswerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestDNSAnswer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientTestDNSAnswerAsyncHelper(Route53Client const * const clientThis, const TestDNSAnswerRequest& request, const TestDNSAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestDNSAnswer(request), context);
}

void Route53Client::TestDNSAnswerAsync(const TestDNSAnswerRequest& request, const TestDNSAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientTestDNSAnswerAsyncHelper( this, request, handler, context ); } );
}

UpdateHealthCheckOutcome Route53Client::UpdateHealthCheck(const UpdateHealthCheckRequest& request) const
{
  if (!request.HealthCheckIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateHealthCheck", "Required field: HealthCheckId, is not set");
    return UpdateHealthCheckOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HealthCheckId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/healthcheck/");
  uri.AddPathSegment(request.GetHealthCheckId());
  return UpdateHealthCheckOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateHealthCheckOutcomeCallable Route53Client::UpdateHealthCheckCallable(const UpdateHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientUpdateHealthCheckAsyncHelper(Route53Client const * const clientThis, const UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateHealthCheck(request), context);
}

void Route53Client::UpdateHealthCheckAsync(const UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientUpdateHealthCheckAsyncHelper( this, request, handler, context ); } );
}

UpdateHostedZoneCommentOutcome Route53Client::UpdateHostedZoneComment(const UpdateHostedZoneCommentRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateHostedZoneComment", "Required field: Id, is not set");
    return UpdateHostedZoneCommentOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/hostedzone/");
  uri.AddPathSegment(request.GetId());
  return UpdateHostedZoneCommentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateHostedZoneCommentOutcomeCallable Route53Client::UpdateHostedZoneCommentCallable(const UpdateHostedZoneCommentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHostedZoneCommentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHostedZoneComment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientUpdateHostedZoneCommentAsyncHelper(Route53Client const * const clientThis, const UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateHostedZoneComment(request), context);
}

void Route53Client::UpdateHostedZoneCommentAsync(const UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientUpdateHostedZoneCommentAsyncHelper( this, request, handler, context ); } );
}

UpdateTrafficPolicyCommentOutcome Route53Client::UpdateTrafficPolicyComment(const UpdateTrafficPolicyCommentRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrafficPolicyComment", "Required field: Id, is not set");
    return UpdateTrafficPolicyCommentOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrafficPolicyComment", "Required field: Version, is not set");
    return UpdateTrafficPolicyCommentOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicy/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegment(request.GetVersion());
  return UpdateTrafficPolicyCommentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateTrafficPolicyCommentOutcomeCallable Route53Client::UpdateTrafficPolicyCommentCallable(const UpdateTrafficPolicyCommentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrafficPolicyCommentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrafficPolicyComment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientUpdateTrafficPolicyCommentAsyncHelper(Route53Client const * const clientThis, const UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTrafficPolicyComment(request), context);
}

void Route53Client::UpdateTrafficPolicyCommentAsync(const UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientUpdateTrafficPolicyCommentAsyncHelper( this, request, handler, context ); } );
}

UpdateTrafficPolicyInstanceOutcome Route53Client::UpdateTrafficPolicyInstance(const UpdateTrafficPolicyInstanceRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrafficPolicyInstance", "Required field: Id, is not set");
    return UpdateTrafficPolicyInstanceOutcome(Aws::Client::AWSError<Route53Errors>(Route53Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2013-04-01/trafficpolicyinstance/");
  uri.AddPathSegment(request.GetId());
  return UpdateTrafficPolicyInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateTrafficPolicyInstanceOutcomeCallable Route53Client::UpdateTrafficPolicyInstanceCallable(const UpdateTrafficPolicyInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrafficPolicyInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrafficPolicyInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ClientUpdateTrafficPolicyInstanceAsyncHelper(Route53Client const * const clientThis, const UpdateTrafficPolicyInstanceRequest& request, const UpdateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTrafficPolicyInstance(request), context);
}

void Route53Client::UpdateTrafficPolicyInstanceAsync(const UpdateTrafficPolicyInstanceRequest& request, const UpdateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Route53ClientUpdateTrafficPolicyInstanceAsyncHelper( this, request, handler, context ); } );
}

