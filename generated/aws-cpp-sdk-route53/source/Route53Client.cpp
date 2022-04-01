﻿/**
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
#include <aws/route53/model/ChangeResourceRecordSetsRequest.h>
#include <aws/route53/model/ChangeTagsForResourceRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53Client::Route53Client(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53Client::Route53Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("Route 53");
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

void Route53Client::ActivateKeySigningKeyAsync(const ActivateKeySigningKeyRequest& request, const ActivateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ActivateKeySigningKeyAsyncHelper( request, handler, context ); } );
}

void Route53Client::ActivateKeySigningKeyAsyncHelper(const ActivateKeySigningKeyRequest& request, const ActivateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivateKeySigningKey(request), context);
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

void Route53Client::AssociateVPCWithHostedZoneAsync(const AssociateVPCWithHostedZoneRequest& request, const AssociateVPCWithHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateVPCWithHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::AssociateVPCWithHostedZoneAsyncHelper(const AssociateVPCWithHostedZoneRequest& request, const AssociateVPCWithHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateVPCWithHostedZone(request), context);
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

void Route53Client::ChangeResourceRecordSetsAsync(const ChangeResourceRecordSetsRequest& request, const ChangeResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ChangeResourceRecordSetsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ChangeResourceRecordSetsAsyncHelper(const ChangeResourceRecordSetsRequest& request, const ChangeResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangeResourceRecordSets(request), context);
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

void Route53Client::ChangeTagsForResourceAsync(const ChangeTagsForResourceRequest& request, const ChangeTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ChangeTagsForResourceAsyncHelper( request, handler, context ); } );
}

void Route53Client::ChangeTagsForResourceAsyncHelper(const ChangeTagsForResourceRequest& request, const ChangeTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangeTagsForResource(request), context);
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

void Route53Client::CreateHealthCheckAsync(const CreateHealthCheckRequest& request, const CreateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHealthCheckAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateHealthCheckAsyncHelper(const CreateHealthCheckRequest& request, const CreateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHealthCheck(request), context);
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

void Route53Client::CreateHostedZoneAsync(const CreateHostedZoneRequest& request, const CreateHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateHostedZoneAsyncHelper(const CreateHostedZoneRequest& request, const CreateHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHostedZone(request), context);
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

void Route53Client::CreateKeySigningKeyAsync(const CreateKeySigningKeyRequest& request, const CreateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateKeySigningKeyAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateKeySigningKeyAsyncHelper(const CreateKeySigningKeyRequest& request, const CreateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateKeySigningKey(request), context);
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

void Route53Client::CreateQueryLoggingConfigAsync(const CreateQueryLoggingConfigRequest& request, const CreateQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateQueryLoggingConfigAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateQueryLoggingConfigAsyncHelper(const CreateQueryLoggingConfigRequest& request, const CreateQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateQueryLoggingConfig(request), context);
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

void Route53Client::CreateReusableDelegationSetAsync(const CreateReusableDelegationSetRequest& request, const CreateReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReusableDelegationSetAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateReusableDelegationSetAsyncHelper(const CreateReusableDelegationSetRequest& request, const CreateReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReusableDelegationSet(request), context);
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

void Route53Client::CreateTrafficPolicyAsync(const CreateTrafficPolicyRequest& request, const CreateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrafficPolicyAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateTrafficPolicyAsyncHelper(const CreateTrafficPolicyRequest& request, const CreateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrafficPolicy(request), context);
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

void Route53Client::CreateTrafficPolicyInstanceAsync(const CreateTrafficPolicyInstanceRequest& request, const CreateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrafficPolicyInstanceAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateTrafficPolicyInstanceAsyncHelper(const CreateTrafficPolicyInstanceRequest& request, const CreateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrafficPolicyInstance(request), context);
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

void Route53Client::CreateTrafficPolicyVersionAsync(const CreateTrafficPolicyVersionRequest& request, const CreateTrafficPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrafficPolicyVersionAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateTrafficPolicyVersionAsyncHelper(const CreateTrafficPolicyVersionRequest& request, const CreateTrafficPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrafficPolicyVersion(request), context);
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

void Route53Client::CreateVPCAssociationAuthorizationAsync(const CreateVPCAssociationAuthorizationRequest& request, const CreateVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVPCAssociationAuthorizationAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateVPCAssociationAuthorizationAsyncHelper(const CreateVPCAssociationAuthorizationRequest& request, const CreateVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVPCAssociationAuthorization(request), context);
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

void Route53Client::DeactivateKeySigningKeyAsync(const DeactivateKeySigningKeyRequest& request, const DeactivateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeactivateKeySigningKeyAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeactivateKeySigningKeyAsyncHelper(const DeactivateKeySigningKeyRequest& request, const DeactivateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeactivateKeySigningKey(request), context);
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

void Route53Client::DeleteHealthCheckAsync(const DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteHealthCheckAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteHealthCheckAsyncHelper(const DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteHealthCheck(request), context);
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

void Route53Client::DeleteHostedZoneAsync(const DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteHostedZoneAsyncHelper(const DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteHostedZone(request), context);
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

void Route53Client::DeleteKeySigningKeyAsync(const DeleteKeySigningKeyRequest& request, const DeleteKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteKeySigningKeyAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteKeySigningKeyAsyncHelper(const DeleteKeySigningKeyRequest& request, const DeleteKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteKeySigningKey(request), context);
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

void Route53Client::DeleteQueryLoggingConfigAsync(const DeleteQueryLoggingConfigRequest& request, const DeleteQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteQueryLoggingConfigAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteQueryLoggingConfigAsyncHelper(const DeleteQueryLoggingConfigRequest& request, const DeleteQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteQueryLoggingConfig(request), context);
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

void Route53Client::DeleteReusableDelegationSetAsync(const DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReusableDelegationSetAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteReusableDelegationSetAsyncHelper(const DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReusableDelegationSet(request), context);
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

void Route53Client::DeleteTrafficPolicyAsync(const DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrafficPolicyAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteTrafficPolicyAsyncHelper(const DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrafficPolicy(request), context);
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

void Route53Client::DeleteTrafficPolicyInstanceAsync(const DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrafficPolicyInstanceAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteTrafficPolicyInstanceAsyncHelper(const DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrafficPolicyInstance(request), context);
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

void Route53Client::DeleteVPCAssociationAuthorizationAsync(const DeleteVPCAssociationAuthorizationRequest& request, const DeleteVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVPCAssociationAuthorizationAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteVPCAssociationAuthorizationAsyncHelper(const DeleteVPCAssociationAuthorizationRequest& request, const DeleteVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVPCAssociationAuthorization(request), context);
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

void Route53Client::DisableHostedZoneDNSSECAsync(const DisableHostedZoneDNSSECRequest& request, const DisableHostedZoneDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableHostedZoneDNSSECAsyncHelper( request, handler, context ); } );
}

void Route53Client::DisableHostedZoneDNSSECAsyncHelper(const DisableHostedZoneDNSSECRequest& request, const DisableHostedZoneDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableHostedZoneDNSSEC(request), context);
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

void Route53Client::DisassociateVPCFromHostedZoneAsync(const DisassociateVPCFromHostedZoneRequest& request, const DisassociateVPCFromHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateVPCFromHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::DisassociateVPCFromHostedZoneAsyncHelper(const DisassociateVPCFromHostedZoneRequest& request, const DisassociateVPCFromHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateVPCFromHostedZone(request), context);
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

void Route53Client::EnableHostedZoneDNSSECAsync(const EnableHostedZoneDNSSECRequest& request, const EnableHostedZoneDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableHostedZoneDNSSECAsyncHelper( request, handler, context ); } );
}

void Route53Client::EnableHostedZoneDNSSECAsyncHelper(const EnableHostedZoneDNSSECRequest& request, const EnableHostedZoneDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableHostedZoneDNSSEC(request), context);
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

void Route53Client::GetAccountLimitAsync(const GetAccountLimitRequest& request, const GetAccountLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountLimitAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetAccountLimitAsyncHelper(const GetAccountLimitRequest& request, const GetAccountLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountLimit(request), context);
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

void Route53Client::GetChangeAsync(const GetChangeRequest& request, const GetChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChangeAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetChangeAsyncHelper(const GetChangeRequest& request, const GetChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChange(request), context);
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

void Route53Client::GetCheckerIpRangesAsync(const GetCheckerIpRangesRequest& request, const GetCheckerIpRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCheckerIpRangesAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetCheckerIpRangesAsyncHelper(const GetCheckerIpRangesRequest& request, const GetCheckerIpRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCheckerIpRanges(request), context);
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

void Route53Client::GetDNSSECAsync(const GetDNSSECRequest& request, const GetDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDNSSECAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetDNSSECAsyncHelper(const GetDNSSECRequest& request, const GetDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDNSSEC(request), context);
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

void Route53Client::GetGeoLocationAsync(const GetGeoLocationRequest& request, const GetGeoLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGeoLocationAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetGeoLocationAsyncHelper(const GetGeoLocationRequest& request, const GetGeoLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGeoLocation(request), context);
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

void Route53Client::GetHealthCheckAsync(const GetHealthCheckRequest& request, const GetHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHealthCheckAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHealthCheckAsyncHelper(const GetHealthCheckRequest& request, const GetHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHealthCheck(request), context);
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

void Route53Client::GetHealthCheckCountAsync(const GetHealthCheckCountRequest& request, const GetHealthCheckCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHealthCheckCountAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHealthCheckCountAsyncHelper(const GetHealthCheckCountRequest& request, const GetHealthCheckCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHealthCheckCount(request), context);
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

void Route53Client::GetHealthCheckLastFailureReasonAsync(const GetHealthCheckLastFailureReasonRequest& request, const GetHealthCheckLastFailureReasonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHealthCheckLastFailureReasonAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHealthCheckLastFailureReasonAsyncHelper(const GetHealthCheckLastFailureReasonRequest& request, const GetHealthCheckLastFailureReasonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHealthCheckLastFailureReason(request), context);
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

void Route53Client::GetHealthCheckStatusAsync(const GetHealthCheckStatusRequest& request, const GetHealthCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHealthCheckStatusAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHealthCheckStatusAsyncHelper(const GetHealthCheckStatusRequest& request, const GetHealthCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHealthCheckStatus(request), context);
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

void Route53Client::GetHostedZoneAsync(const GetHostedZoneRequest& request, const GetHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHostedZoneAsyncHelper(const GetHostedZoneRequest& request, const GetHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHostedZone(request), context);
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

void Route53Client::GetHostedZoneCountAsync(const GetHostedZoneCountRequest& request, const GetHostedZoneCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHostedZoneCountAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHostedZoneCountAsyncHelper(const GetHostedZoneCountRequest& request, const GetHostedZoneCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHostedZoneCount(request), context);
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

void Route53Client::GetHostedZoneLimitAsync(const GetHostedZoneLimitRequest& request, const GetHostedZoneLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHostedZoneLimitAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHostedZoneLimitAsyncHelper(const GetHostedZoneLimitRequest& request, const GetHostedZoneLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHostedZoneLimit(request), context);
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

void Route53Client::GetQueryLoggingConfigAsync(const GetQueryLoggingConfigRequest& request, const GetQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQueryLoggingConfigAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetQueryLoggingConfigAsyncHelper(const GetQueryLoggingConfigRequest& request, const GetQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueryLoggingConfig(request), context);
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

void Route53Client::GetReusableDelegationSetAsync(const GetReusableDelegationSetRequest& request, const GetReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReusableDelegationSetAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetReusableDelegationSetAsyncHelper(const GetReusableDelegationSetRequest& request, const GetReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReusableDelegationSet(request), context);
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

void Route53Client::GetReusableDelegationSetLimitAsync(const GetReusableDelegationSetLimitRequest& request, const GetReusableDelegationSetLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReusableDelegationSetLimitAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetReusableDelegationSetLimitAsyncHelper(const GetReusableDelegationSetLimitRequest& request, const GetReusableDelegationSetLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReusableDelegationSetLimit(request), context);
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

void Route53Client::GetTrafficPolicyAsync(const GetTrafficPolicyRequest& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTrafficPolicyAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetTrafficPolicyAsyncHelper(const GetTrafficPolicyRequest& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrafficPolicy(request), context);
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

void Route53Client::GetTrafficPolicyInstanceAsync(const GetTrafficPolicyInstanceRequest& request, const GetTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTrafficPolicyInstanceAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetTrafficPolicyInstanceAsyncHelper(const GetTrafficPolicyInstanceRequest& request, const GetTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrafficPolicyInstance(request), context);
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

void Route53Client::GetTrafficPolicyInstanceCountAsync(const GetTrafficPolicyInstanceCountRequest& request, const GetTrafficPolicyInstanceCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTrafficPolicyInstanceCountAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetTrafficPolicyInstanceCountAsyncHelper(const GetTrafficPolicyInstanceCountRequest& request, const GetTrafficPolicyInstanceCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrafficPolicyInstanceCount(request), context);
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

void Route53Client::ListGeoLocationsAsync(const ListGeoLocationsRequest& request, const ListGeoLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGeoLocationsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListGeoLocationsAsyncHelper(const ListGeoLocationsRequest& request, const ListGeoLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGeoLocations(request), context);
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

void Route53Client::ListHealthChecksAsync(const ListHealthChecksRequest& request, const ListHealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHealthChecksAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListHealthChecksAsyncHelper(const ListHealthChecksRequest& request, const ListHealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHealthChecks(request), context);
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

void Route53Client::ListHostedZonesAsync(const ListHostedZonesRequest& request, const ListHostedZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHostedZonesAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListHostedZonesAsyncHelper(const ListHostedZonesRequest& request, const ListHostedZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHostedZones(request), context);
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

void Route53Client::ListHostedZonesByNameAsync(const ListHostedZonesByNameRequest& request, const ListHostedZonesByNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHostedZonesByNameAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListHostedZonesByNameAsyncHelper(const ListHostedZonesByNameRequest& request, const ListHostedZonesByNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHostedZonesByName(request), context);
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

void Route53Client::ListHostedZonesByVPCAsync(const ListHostedZonesByVPCRequest& request, const ListHostedZonesByVPCResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHostedZonesByVPCAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListHostedZonesByVPCAsyncHelper(const ListHostedZonesByVPCRequest& request, const ListHostedZonesByVPCResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHostedZonesByVPC(request), context);
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

void Route53Client::ListQueryLoggingConfigsAsync(const ListQueryLoggingConfigsRequest& request, const ListQueryLoggingConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQueryLoggingConfigsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListQueryLoggingConfigsAsyncHelper(const ListQueryLoggingConfigsRequest& request, const ListQueryLoggingConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQueryLoggingConfigs(request), context);
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

void Route53Client::ListResourceRecordSetsAsync(const ListResourceRecordSetsRequest& request, const ListResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourceRecordSetsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListResourceRecordSetsAsyncHelper(const ListResourceRecordSetsRequest& request, const ListResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourceRecordSets(request), context);
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

void Route53Client::ListReusableDelegationSetsAsync(const ListReusableDelegationSetsRequest& request, const ListReusableDelegationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReusableDelegationSetsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListReusableDelegationSetsAsyncHelper(const ListReusableDelegationSetsRequest& request, const ListReusableDelegationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReusableDelegationSets(request), context);
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

void Route53Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
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

void Route53Client::ListTagsForResourcesAsync(const ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourcesAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTagsForResourcesAsyncHelper(const ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResources(request), context);
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

void Route53Client::ListTrafficPoliciesAsync(const ListTrafficPoliciesRequest& request, const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrafficPoliciesAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTrafficPoliciesAsyncHelper(const ListTrafficPoliciesRequest& request, const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrafficPolicies(request), context);
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

void Route53Client::ListTrafficPolicyInstancesAsync(const ListTrafficPolicyInstancesRequest& request, const ListTrafficPolicyInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrafficPolicyInstancesAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTrafficPolicyInstancesAsyncHelper(const ListTrafficPolicyInstancesRequest& request, const ListTrafficPolicyInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrafficPolicyInstances(request), context);
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

void Route53Client::ListTrafficPolicyInstancesByHostedZoneAsync(const ListTrafficPolicyInstancesByHostedZoneRequest& request, const ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrafficPolicyInstancesByHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTrafficPolicyInstancesByHostedZoneAsyncHelper(const ListTrafficPolicyInstancesByHostedZoneRequest& request, const ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrafficPolicyInstancesByHostedZone(request), context);
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

void Route53Client::ListTrafficPolicyInstancesByPolicyAsync(const ListTrafficPolicyInstancesByPolicyRequest& request, const ListTrafficPolicyInstancesByPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrafficPolicyInstancesByPolicyAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTrafficPolicyInstancesByPolicyAsyncHelper(const ListTrafficPolicyInstancesByPolicyRequest& request, const ListTrafficPolicyInstancesByPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrafficPolicyInstancesByPolicy(request), context);
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

void Route53Client::ListTrafficPolicyVersionsAsync(const ListTrafficPolicyVersionsRequest& request, const ListTrafficPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrafficPolicyVersionsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTrafficPolicyVersionsAsyncHelper(const ListTrafficPolicyVersionsRequest& request, const ListTrafficPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrafficPolicyVersions(request), context);
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

void Route53Client::ListVPCAssociationAuthorizationsAsync(const ListVPCAssociationAuthorizationsRequest& request, const ListVPCAssociationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVPCAssociationAuthorizationsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListVPCAssociationAuthorizationsAsyncHelper(const ListVPCAssociationAuthorizationsRequest& request, const ListVPCAssociationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVPCAssociationAuthorizations(request), context);
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

void Route53Client::TestDNSAnswerAsync(const TestDNSAnswerRequest& request, const TestDNSAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestDNSAnswerAsyncHelper( request, handler, context ); } );
}

void Route53Client::TestDNSAnswerAsyncHelper(const TestDNSAnswerRequest& request, const TestDNSAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestDNSAnswer(request), context);
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

void Route53Client::UpdateHealthCheckAsync(const UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateHealthCheckAsyncHelper( request, handler, context ); } );
}

void Route53Client::UpdateHealthCheckAsyncHelper(const UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateHealthCheck(request), context);
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

void Route53Client::UpdateHostedZoneCommentAsync(const UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateHostedZoneCommentAsyncHelper( request, handler, context ); } );
}

void Route53Client::UpdateHostedZoneCommentAsyncHelper(const UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateHostedZoneComment(request), context);
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

void Route53Client::UpdateTrafficPolicyCommentAsync(const UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTrafficPolicyCommentAsyncHelper( request, handler, context ); } );
}

void Route53Client::UpdateTrafficPolicyCommentAsyncHelper(const UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrafficPolicyComment(request), context);
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

void Route53Client::UpdateTrafficPolicyInstanceAsync(const UpdateTrafficPolicyInstanceRequest& request, const UpdateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTrafficPolicyInstanceAsyncHelper( request, handler, context ); } );
}

void Route53Client::UpdateTrafficPolicyInstanceAsyncHelper(const UpdateTrafficPolicyInstanceRequest& request, const UpdateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrafficPolicyInstance(request), context);
}

