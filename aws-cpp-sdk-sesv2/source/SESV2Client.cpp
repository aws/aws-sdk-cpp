/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/sesv2/SESV2Client.h>
#include <aws/sesv2/SESV2Endpoint.h>
#include <aws/sesv2/SESV2ErrorMarshaller.h>
#include <aws/sesv2/model/CreateConfigurationSetRequest.h>
#include <aws/sesv2/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/sesv2/model/CreateDedicatedIpPoolRequest.h>
#include <aws/sesv2/model/CreateDeliverabilityTestReportRequest.h>
#include <aws/sesv2/model/CreateEmailIdentityRequest.h>
#include <aws/sesv2/model/DeleteConfigurationSetRequest.h>
#include <aws/sesv2/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/sesv2/model/DeleteDedicatedIpPoolRequest.h>
#include <aws/sesv2/model/DeleteEmailIdentityRequest.h>
#include <aws/sesv2/model/DeleteSuppressedDestinationRequest.h>
#include <aws/sesv2/model/GetAccountRequest.h>
#include <aws/sesv2/model/GetBlacklistReportsRequest.h>
#include <aws/sesv2/model/GetConfigurationSetRequest.h>
#include <aws/sesv2/model/GetConfigurationSetEventDestinationsRequest.h>
#include <aws/sesv2/model/GetDedicatedIpRequest.h>
#include <aws/sesv2/model/GetDedicatedIpsRequest.h>
#include <aws/sesv2/model/GetDeliverabilityDashboardOptionsRequest.h>
#include <aws/sesv2/model/GetDeliverabilityTestReportRequest.h>
#include <aws/sesv2/model/GetDomainDeliverabilityCampaignRequest.h>
#include <aws/sesv2/model/GetDomainStatisticsReportRequest.h>
#include <aws/sesv2/model/GetEmailIdentityRequest.h>
#include <aws/sesv2/model/GetSuppressedDestinationRequest.h>
#include <aws/sesv2/model/ListConfigurationSetsRequest.h>
#include <aws/sesv2/model/ListDedicatedIpPoolsRequest.h>
#include <aws/sesv2/model/ListDeliverabilityTestReportsRequest.h>
#include <aws/sesv2/model/ListDomainDeliverabilityCampaignsRequest.h>
#include <aws/sesv2/model/ListEmailIdentitiesRequest.h>
#include <aws/sesv2/model/ListSuppressedDestinationsRequest.h>
#include <aws/sesv2/model/ListTagsForResourceRequest.h>
#include <aws/sesv2/model/PutAccountDedicatedIpWarmupAttributesRequest.h>
#include <aws/sesv2/model/PutAccountSendingAttributesRequest.h>
#include <aws/sesv2/model/PutAccountSuppressionAttributesRequest.h>
#include <aws/sesv2/model/PutConfigurationSetDeliveryOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetReputationOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetSendingOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetSuppressionOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetTrackingOptionsRequest.h>
#include <aws/sesv2/model/PutDedicatedIpInPoolRequest.h>
#include <aws/sesv2/model/PutDedicatedIpWarmupAttributesRequest.h>
#include <aws/sesv2/model/PutDeliverabilityDashboardOptionRequest.h>
#include <aws/sesv2/model/PutEmailIdentityDkimAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityDkimSigningAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityFeedbackAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityMailFromAttributesRequest.h>
#include <aws/sesv2/model/PutSuppressedDestinationRequest.h>
#include <aws/sesv2/model/SendEmailRequest.h>
#include <aws/sesv2/model/TagResourceRequest.h>
#include <aws/sesv2/model/UntagResourceRequest.h>
#include <aws/sesv2/model/UpdateConfigurationSetEventDestinationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SESV2;
using namespace Aws::SESV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ses";
static const char* ALLOCATION_TAG = "SESV2Client";


SESV2Client::SESV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESV2Client::SESV2Client(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESV2Client::SESV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESV2Client::~SESV2Client()
{
}

void SESV2Client::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SESV2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SESV2Client::OverrideEndpoint(const Aws::String& endpoint)
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

CreateConfigurationSetOutcome SESV2Client::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateConfigurationSetOutcome(CreateConfigurationSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateConfigurationSetOutcome(outcome.GetError());
  }
}

CreateConfigurationSetOutcomeCallable SESV2Client::CreateConfigurationSetCallable(const CreateConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::CreateConfigurationSetAsync(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConfigurationSetAsyncHelper( request, handler, context ); } );
}

void SESV2Client::CreateConfigurationSetAsyncHelper(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConfigurationSet(request), context);
}

CreateConfigurationSetEventDestinationOutcome SESV2Client::CreateConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return CreateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  ss << "/event-destinations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateConfigurationSetEventDestinationOutcome(CreateConfigurationSetEventDestinationResult(outcome.GetResult()));
  }
  else
  {
    return CreateConfigurationSetEventDestinationOutcome(outcome.GetError());
  }
}

CreateConfigurationSetEventDestinationOutcomeCallable SESV2Client::CreateConfigurationSetEventDestinationCallable(const CreateConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::CreateConfigurationSetEventDestinationAsync(const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConfigurationSetEventDestinationAsyncHelper( request, handler, context ); } );
}

void SESV2Client::CreateConfigurationSetEventDestinationAsyncHelper(const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConfigurationSetEventDestination(request), context);
}

CreateDedicatedIpPoolOutcome SESV2Client::CreateDedicatedIpPool(const CreateDedicatedIpPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/dedicated-ip-pools";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDedicatedIpPoolOutcome(CreateDedicatedIpPoolResult(outcome.GetResult()));
  }
  else
  {
    return CreateDedicatedIpPoolOutcome(outcome.GetError());
  }
}

CreateDedicatedIpPoolOutcomeCallable SESV2Client::CreateDedicatedIpPoolCallable(const CreateDedicatedIpPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDedicatedIpPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDedicatedIpPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::CreateDedicatedIpPoolAsync(const CreateDedicatedIpPoolRequest& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDedicatedIpPoolAsyncHelper( request, handler, context ); } );
}

void SESV2Client::CreateDedicatedIpPoolAsyncHelper(const CreateDedicatedIpPoolRequest& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDedicatedIpPool(request), context);
}

CreateDeliverabilityTestReportOutcome SESV2Client::CreateDeliverabilityTestReport(const CreateDeliverabilityTestReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/deliverability-dashboard/test";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDeliverabilityTestReportOutcome(CreateDeliverabilityTestReportResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeliverabilityTestReportOutcome(outcome.GetError());
  }
}

CreateDeliverabilityTestReportOutcomeCallable SESV2Client::CreateDeliverabilityTestReportCallable(const CreateDeliverabilityTestReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeliverabilityTestReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeliverabilityTestReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::CreateDeliverabilityTestReportAsync(const CreateDeliverabilityTestReportRequest& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeliverabilityTestReportAsyncHelper( request, handler, context ); } );
}

void SESV2Client::CreateDeliverabilityTestReportAsyncHelper(const CreateDeliverabilityTestReportRequest& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeliverabilityTestReport(request), context);
}

CreateEmailIdentityOutcome SESV2Client::CreateEmailIdentity(const CreateEmailIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/identities";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateEmailIdentityOutcome(CreateEmailIdentityResult(outcome.GetResult()));
  }
  else
  {
    return CreateEmailIdentityOutcome(outcome.GetError());
  }
}

CreateEmailIdentityOutcomeCallable SESV2Client::CreateEmailIdentityCallable(const CreateEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::CreateEmailIdentityAsync(const CreateEmailIdentityRequest& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEmailIdentityAsyncHelper( request, handler, context ); } );
}

void SESV2Client::CreateEmailIdentityAsyncHelper(const CreateEmailIdentityRequest& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEmailIdentity(request), context);
}

DeleteConfigurationSetOutcome SESV2Client::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConfigurationSetOutcome(DeleteConfigurationSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConfigurationSetOutcome(outcome.GetError());
  }
}

DeleteConfigurationSetOutcomeCallable SESV2Client::DeleteConfigurationSetCallable(const DeleteConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::DeleteConfigurationSetAsync(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigurationSetAsyncHelper( request, handler, context ); } );
}

void SESV2Client::DeleteConfigurationSetAsyncHelper(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigurationSet(request), context);
}

DeleteConfigurationSetEventDestinationOutcome SESV2Client::DeleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  ss << "/event-destinations/";
  ss << request.GetEventDestinationName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteConfigurationSetEventDestinationOutcome(DeleteConfigurationSetEventDestinationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConfigurationSetEventDestinationOutcome(outcome.GetError());
  }
}

DeleteConfigurationSetEventDestinationOutcomeCallable SESV2Client::DeleteConfigurationSetEventDestinationCallable(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::DeleteConfigurationSetEventDestinationAsync(const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigurationSetEventDestinationAsyncHelper( request, handler, context ); } );
}

void SESV2Client::DeleteConfigurationSetEventDestinationAsyncHelper(const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigurationSetEventDestination(request), context);
}

DeleteDedicatedIpPoolOutcome SESV2Client::DeleteDedicatedIpPool(const DeleteDedicatedIpPoolRequest& request) const
{
  if (!request.PoolNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDedicatedIpPool", "Required field: PoolName, is not set");
    return DeleteDedicatedIpPoolOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PoolName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/dedicated-ip-pools/";
  ss << request.GetPoolName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDedicatedIpPoolOutcome(DeleteDedicatedIpPoolResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDedicatedIpPoolOutcome(outcome.GetError());
  }
}

DeleteDedicatedIpPoolOutcomeCallable SESV2Client::DeleteDedicatedIpPoolCallable(const DeleteDedicatedIpPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDedicatedIpPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDedicatedIpPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::DeleteDedicatedIpPoolAsync(const DeleteDedicatedIpPoolRequest& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDedicatedIpPoolAsyncHelper( request, handler, context ); } );
}

void SESV2Client::DeleteDedicatedIpPoolAsyncHelper(const DeleteDedicatedIpPoolRequest& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDedicatedIpPool(request), context);
}

DeleteEmailIdentityOutcome SESV2Client::DeleteEmailIdentity(const DeleteEmailIdentityRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailIdentity", "Required field: EmailIdentity, is not set");
    return DeleteEmailIdentityOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/identities/";
  ss << request.GetEmailIdentity();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEmailIdentityOutcome(DeleteEmailIdentityResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEmailIdentityOutcome(outcome.GetError());
  }
}

DeleteEmailIdentityOutcomeCallable SESV2Client::DeleteEmailIdentityCallable(const DeleteEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::DeleteEmailIdentityAsync(const DeleteEmailIdentityRequest& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEmailIdentityAsyncHelper( request, handler, context ); } );
}

void SESV2Client::DeleteEmailIdentityAsyncHelper(const DeleteEmailIdentityRequest& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEmailIdentity(request), context);
}

DeleteSuppressedDestinationOutcome SESV2Client::DeleteSuppressedDestination(const DeleteSuppressedDestinationRequest& request) const
{
  if (!request.EmailAddressHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSuppressedDestination", "Required field: EmailAddress, is not set");
    return DeleteSuppressedDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailAddress]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/suppression/addresses/";
  ss << request.GetEmailAddress();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSuppressedDestinationOutcome(DeleteSuppressedDestinationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSuppressedDestinationOutcome(outcome.GetError());
  }
}

DeleteSuppressedDestinationOutcomeCallable SESV2Client::DeleteSuppressedDestinationCallable(const DeleteSuppressedDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSuppressedDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSuppressedDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::DeleteSuppressedDestinationAsync(const DeleteSuppressedDestinationRequest& request, const DeleteSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSuppressedDestinationAsyncHelper( request, handler, context ); } );
}

void SESV2Client::DeleteSuppressedDestinationAsyncHelper(const DeleteSuppressedDestinationRequest& request, const DeleteSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSuppressedDestination(request), context);
}

GetAccountOutcome SESV2Client::GetAccount(const GetAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/account";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAccountOutcome(GetAccountResult(outcome.GetResult()));
  }
  else
  {
    return GetAccountOutcome(outcome.GetError());
  }
}

GetAccountOutcomeCallable SESV2Client::GetAccountCallable(const GetAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetAccountAsync(const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetAccountAsyncHelper(const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccount(request), context);
}

GetBlacklistReportsOutcome SESV2Client::GetBlacklistReports(const GetBlacklistReportsRequest& request) const
{
  if (!request.BlacklistItemNamesHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBlacklistReports", "Required field: BlacklistItemNames, is not set");
    return GetBlacklistReportsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlacklistItemNames]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/deliverability-dashboard/blacklist-report";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBlacklistReportsOutcome(GetBlacklistReportsResult(outcome.GetResult()));
  }
  else
  {
    return GetBlacklistReportsOutcome(outcome.GetError());
  }
}

GetBlacklistReportsOutcomeCallable SESV2Client::GetBlacklistReportsCallable(const GetBlacklistReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlacklistReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlacklistReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetBlacklistReportsAsync(const GetBlacklistReportsRequest& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBlacklistReportsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetBlacklistReportsAsyncHelper(const GetBlacklistReportsRequest& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBlacklistReports(request), context);
}

GetConfigurationSetOutcome SESV2Client::GetConfigurationSet(const GetConfigurationSetRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConfigurationSetOutcome(GetConfigurationSetResult(outcome.GetResult()));
  }
  else
  {
    return GetConfigurationSetOutcome(outcome.GetError());
  }
}

GetConfigurationSetOutcomeCallable SESV2Client::GetConfigurationSetCallable(const GetConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetConfigurationSetAsync(const GetConfigurationSetRequest& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConfigurationSetAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetConfigurationSetAsyncHelper(const GetConfigurationSetRequest& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConfigurationSet(request), context);
}

GetConfigurationSetEventDestinationsOutcome SESV2Client::GetConfigurationSetEventDestinations(const GetConfigurationSetEventDestinationsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfigurationSetEventDestinations", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetEventDestinationsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  ss << "/event-destinations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConfigurationSetEventDestinationsOutcome(GetConfigurationSetEventDestinationsResult(outcome.GetResult()));
  }
  else
  {
    return GetConfigurationSetEventDestinationsOutcome(outcome.GetError());
  }
}

GetConfigurationSetEventDestinationsOutcomeCallable SESV2Client::GetConfigurationSetEventDestinationsCallable(const GetConfigurationSetEventDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationSetEventDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfigurationSetEventDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetConfigurationSetEventDestinationsAsync(const GetConfigurationSetEventDestinationsRequest& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConfigurationSetEventDestinationsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetConfigurationSetEventDestinationsAsyncHelper(const GetConfigurationSetEventDestinationsRequest& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConfigurationSetEventDestinations(request), context);
}

GetDedicatedIpOutcome SESV2Client::GetDedicatedIp(const GetDedicatedIpRequest& request) const
{
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDedicatedIp", "Required field: Ip, is not set");
    return GetDedicatedIpOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/dedicated-ips/";
  ss << request.GetIp();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDedicatedIpOutcome(GetDedicatedIpResult(outcome.GetResult()));
  }
  else
  {
    return GetDedicatedIpOutcome(outcome.GetError());
  }
}

GetDedicatedIpOutcomeCallable SESV2Client::GetDedicatedIpCallable(const GetDedicatedIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDedicatedIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDedicatedIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetDedicatedIpAsync(const GetDedicatedIpRequest& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDedicatedIpAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetDedicatedIpAsyncHelper(const GetDedicatedIpRequest& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDedicatedIp(request), context);
}

GetDedicatedIpsOutcome SESV2Client::GetDedicatedIps(const GetDedicatedIpsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/dedicated-ips";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDedicatedIpsOutcome(GetDedicatedIpsResult(outcome.GetResult()));
  }
  else
  {
    return GetDedicatedIpsOutcome(outcome.GetError());
  }
}

GetDedicatedIpsOutcomeCallable SESV2Client::GetDedicatedIpsCallable(const GetDedicatedIpsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDedicatedIpsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDedicatedIps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetDedicatedIpsAsync(const GetDedicatedIpsRequest& request, const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDedicatedIpsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetDedicatedIpsAsyncHelper(const GetDedicatedIpsRequest& request, const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDedicatedIps(request), context);
}

GetDeliverabilityDashboardOptionsOutcome SESV2Client::GetDeliverabilityDashboardOptions(const GetDeliverabilityDashboardOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/deliverability-dashboard";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeliverabilityDashboardOptionsOutcome(GetDeliverabilityDashboardOptionsResult(outcome.GetResult()));
  }
  else
  {
    return GetDeliverabilityDashboardOptionsOutcome(outcome.GetError());
  }
}

GetDeliverabilityDashboardOptionsOutcomeCallable SESV2Client::GetDeliverabilityDashboardOptionsCallable(const GetDeliverabilityDashboardOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeliverabilityDashboardOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeliverabilityDashboardOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetDeliverabilityDashboardOptionsAsync(const GetDeliverabilityDashboardOptionsRequest& request, const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeliverabilityDashboardOptionsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetDeliverabilityDashboardOptionsAsyncHelper(const GetDeliverabilityDashboardOptionsRequest& request, const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeliverabilityDashboardOptions(request), context);
}

GetDeliverabilityTestReportOutcome SESV2Client::GetDeliverabilityTestReport(const GetDeliverabilityTestReportRequest& request) const
{
  if (!request.ReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeliverabilityTestReport", "Required field: ReportId, is not set");
    return GetDeliverabilityTestReportOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/deliverability-dashboard/test-reports/";
  ss << request.GetReportId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeliverabilityTestReportOutcome(GetDeliverabilityTestReportResult(outcome.GetResult()));
  }
  else
  {
    return GetDeliverabilityTestReportOutcome(outcome.GetError());
  }
}

GetDeliverabilityTestReportOutcomeCallable SESV2Client::GetDeliverabilityTestReportCallable(const GetDeliverabilityTestReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeliverabilityTestReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeliverabilityTestReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetDeliverabilityTestReportAsync(const GetDeliverabilityTestReportRequest& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeliverabilityTestReportAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetDeliverabilityTestReportAsyncHelper(const GetDeliverabilityTestReportRequest& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeliverabilityTestReport(request), context);
}

GetDomainDeliverabilityCampaignOutcome SESV2Client::GetDomainDeliverabilityCampaign(const GetDomainDeliverabilityCampaignRequest& request) const
{
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainDeliverabilityCampaign", "Required field: CampaignId, is not set");
    return GetDomainDeliverabilityCampaignOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/deliverability-dashboard/campaigns/";
  ss << request.GetCampaignId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDomainDeliverabilityCampaignOutcome(GetDomainDeliverabilityCampaignResult(outcome.GetResult()));
  }
  else
  {
    return GetDomainDeliverabilityCampaignOutcome(outcome.GetError());
  }
}

GetDomainDeliverabilityCampaignOutcomeCallable SESV2Client::GetDomainDeliverabilityCampaignCallable(const GetDomainDeliverabilityCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainDeliverabilityCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainDeliverabilityCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetDomainDeliverabilityCampaignAsync(const GetDomainDeliverabilityCampaignRequest& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainDeliverabilityCampaignAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetDomainDeliverabilityCampaignAsyncHelper(const GetDomainDeliverabilityCampaignRequest& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomainDeliverabilityCampaign(request), context);
}

GetDomainStatisticsReportOutcome SESV2Client::GetDomainStatisticsReport(const GetDomainStatisticsReportRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: Domain, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: StartDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: EndDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/deliverability-dashboard/statistics-report/";
  ss << request.GetDomain();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDomainStatisticsReportOutcome(GetDomainStatisticsReportResult(outcome.GetResult()));
  }
  else
  {
    return GetDomainStatisticsReportOutcome(outcome.GetError());
  }
}

GetDomainStatisticsReportOutcomeCallable SESV2Client::GetDomainStatisticsReportCallable(const GetDomainStatisticsReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainStatisticsReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainStatisticsReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetDomainStatisticsReportAsync(const GetDomainStatisticsReportRequest& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainStatisticsReportAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetDomainStatisticsReportAsyncHelper(const GetDomainStatisticsReportRequest& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomainStatisticsReport(request), context);
}

GetEmailIdentityOutcome SESV2Client::GetEmailIdentity(const GetEmailIdentityRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailIdentity", "Required field: EmailIdentity, is not set");
    return GetEmailIdentityOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/identities/";
  ss << request.GetEmailIdentity();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEmailIdentityOutcome(GetEmailIdentityResult(outcome.GetResult()));
  }
  else
  {
    return GetEmailIdentityOutcome(outcome.GetError());
  }
}

GetEmailIdentityOutcomeCallable SESV2Client::GetEmailIdentityCallable(const GetEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetEmailIdentityAsync(const GetEmailIdentityRequest& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEmailIdentityAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetEmailIdentityAsyncHelper(const GetEmailIdentityRequest& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEmailIdentity(request), context);
}

GetSuppressedDestinationOutcome SESV2Client::GetSuppressedDestination(const GetSuppressedDestinationRequest& request) const
{
  if (!request.EmailAddressHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuppressedDestination", "Required field: EmailAddress, is not set");
    return GetSuppressedDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailAddress]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/suppression/addresses/";
  ss << request.GetEmailAddress();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSuppressedDestinationOutcome(GetSuppressedDestinationResult(outcome.GetResult()));
  }
  else
  {
    return GetSuppressedDestinationOutcome(outcome.GetError());
  }
}

GetSuppressedDestinationOutcomeCallable SESV2Client::GetSuppressedDestinationCallable(const GetSuppressedDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSuppressedDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSuppressedDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetSuppressedDestinationAsync(const GetSuppressedDestinationRequest& request, const GetSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSuppressedDestinationAsyncHelper( request, handler, context ); } );
}

void SESV2Client::GetSuppressedDestinationAsyncHelper(const GetSuppressedDestinationRequest& request, const GetSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSuppressedDestination(request), context);
}

ListConfigurationSetsOutcome SESV2Client::ListConfigurationSets(const ListConfigurationSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListConfigurationSetsOutcome(ListConfigurationSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListConfigurationSetsOutcome(outcome.GetError());
  }
}

ListConfigurationSetsOutcomeCallable SESV2Client::ListConfigurationSetsCallable(const ListConfigurationSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurationSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::ListConfigurationSetsAsync(const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConfigurationSetsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::ListConfigurationSetsAsyncHelper(const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConfigurationSets(request), context);
}

ListDedicatedIpPoolsOutcome SESV2Client::ListDedicatedIpPools(const ListDedicatedIpPoolsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/dedicated-ip-pools";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDedicatedIpPoolsOutcome(ListDedicatedIpPoolsResult(outcome.GetResult()));
  }
  else
  {
    return ListDedicatedIpPoolsOutcome(outcome.GetError());
  }
}

ListDedicatedIpPoolsOutcomeCallable SESV2Client::ListDedicatedIpPoolsCallable(const ListDedicatedIpPoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDedicatedIpPoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDedicatedIpPools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::ListDedicatedIpPoolsAsync(const ListDedicatedIpPoolsRequest& request, const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDedicatedIpPoolsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::ListDedicatedIpPoolsAsyncHelper(const ListDedicatedIpPoolsRequest& request, const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDedicatedIpPools(request), context);
}

ListDeliverabilityTestReportsOutcome SESV2Client::ListDeliverabilityTestReports(const ListDeliverabilityTestReportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/deliverability-dashboard/test-reports";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeliverabilityTestReportsOutcome(ListDeliverabilityTestReportsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeliverabilityTestReportsOutcome(outcome.GetError());
  }
}

ListDeliverabilityTestReportsOutcomeCallable SESV2Client::ListDeliverabilityTestReportsCallable(const ListDeliverabilityTestReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeliverabilityTestReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeliverabilityTestReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::ListDeliverabilityTestReportsAsync(const ListDeliverabilityTestReportsRequest& request, const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeliverabilityTestReportsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::ListDeliverabilityTestReportsAsyncHelper(const ListDeliverabilityTestReportsRequest& request, const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeliverabilityTestReports(request), context);
}

ListDomainDeliverabilityCampaignsOutcome SESV2Client::ListDomainDeliverabilityCampaigns(const ListDomainDeliverabilityCampaignsRequest& request) const
{
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: StartDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: EndDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  if (!request.SubscribedDomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: SubscribedDomain, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscribedDomain]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/deliverability-dashboard/domains/";
  ss << request.GetSubscribedDomain();
  ss << "/campaigns";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDomainDeliverabilityCampaignsOutcome(ListDomainDeliverabilityCampaignsResult(outcome.GetResult()));
  }
  else
  {
    return ListDomainDeliverabilityCampaignsOutcome(outcome.GetError());
  }
}

ListDomainDeliverabilityCampaignsOutcomeCallable SESV2Client::ListDomainDeliverabilityCampaignsCallable(const ListDomainDeliverabilityCampaignsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainDeliverabilityCampaignsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainDeliverabilityCampaigns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::ListDomainDeliverabilityCampaignsAsync(const ListDomainDeliverabilityCampaignsRequest& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainDeliverabilityCampaignsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::ListDomainDeliverabilityCampaignsAsyncHelper(const ListDomainDeliverabilityCampaignsRequest& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomainDeliverabilityCampaigns(request), context);
}

ListEmailIdentitiesOutcome SESV2Client::ListEmailIdentities(const ListEmailIdentitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/identities";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEmailIdentitiesOutcome(ListEmailIdentitiesResult(outcome.GetResult()));
  }
  else
  {
    return ListEmailIdentitiesOutcome(outcome.GetError());
  }
}

ListEmailIdentitiesOutcomeCallable SESV2Client::ListEmailIdentitiesCallable(const ListEmailIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEmailIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEmailIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::ListEmailIdentitiesAsync(const ListEmailIdentitiesRequest& request, const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEmailIdentitiesAsyncHelper( request, handler, context ); } );
}

void SESV2Client::ListEmailIdentitiesAsyncHelper(const ListEmailIdentitiesRequest& request, const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEmailIdentities(request), context);
}

ListSuppressedDestinationsOutcome SESV2Client::ListSuppressedDestinations(const ListSuppressedDestinationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/suppression/addresses";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSuppressedDestinationsOutcome(ListSuppressedDestinationsResult(outcome.GetResult()));
  }
  else
  {
    return ListSuppressedDestinationsOutcome(outcome.GetError());
  }
}

ListSuppressedDestinationsOutcomeCallable SESV2Client::ListSuppressedDestinationsCallable(const ListSuppressedDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSuppressedDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSuppressedDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::ListSuppressedDestinationsAsync(const ListSuppressedDestinationsRequest& request, const ListSuppressedDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSuppressedDestinationsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::ListSuppressedDestinationsAsyncHelper(const ListSuppressedDestinationsRequest& request, const ListSuppressedDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSuppressedDestinations(request), context);
}

ListTagsForResourceOutcome SESV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable SESV2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SESV2Client::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutAccountDedicatedIpWarmupAttributesOutcome SESV2Client::PutAccountDedicatedIpWarmupAttributes(const PutAccountDedicatedIpWarmupAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/account/dedicated-ips/warmup";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutAccountDedicatedIpWarmupAttributesOutcome(PutAccountDedicatedIpWarmupAttributesResult(outcome.GetResult()));
  }
  else
  {
    return PutAccountDedicatedIpWarmupAttributesOutcome(outcome.GetError());
  }
}

PutAccountDedicatedIpWarmupAttributesOutcomeCallable SESV2Client::PutAccountDedicatedIpWarmupAttributesCallable(const PutAccountDedicatedIpWarmupAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountDedicatedIpWarmupAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountDedicatedIpWarmupAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutAccountDedicatedIpWarmupAttributesAsync(const PutAccountDedicatedIpWarmupAttributesRequest& request, const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAccountDedicatedIpWarmupAttributesAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutAccountDedicatedIpWarmupAttributesAsyncHelper(const PutAccountDedicatedIpWarmupAttributesRequest& request, const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAccountDedicatedIpWarmupAttributes(request), context);
}

PutAccountSendingAttributesOutcome SESV2Client::PutAccountSendingAttributes(const PutAccountSendingAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/account/sending";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutAccountSendingAttributesOutcome(PutAccountSendingAttributesResult(outcome.GetResult()));
  }
  else
  {
    return PutAccountSendingAttributesOutcome(outcome.GetError());
  }
}

PutAccountSendingAttributesOutcomeCallable SESV2Client::PutAccountSendingAttributesCallable(const PutAccountSendingAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountSendingAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountSendingAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutAccountSendingAttributesAsync(const PutAccountSendingAttributesRequest& request, const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAccountSendingAttributesAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutAccountSendingAttributesAsyncHelper(const PutAccountSendingAttributesRequest& request, const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAccountSendingAttributes(request), context);
}

PutAccountSuppressionAttributesOutcome SESV2Client::PutAccountSuppressionAttributes(const PutAccountSuppressionAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/account/suppression";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutAccountSuppressionAttributesOutcome(PutAccountSuppressionAttributesResult(outcome.GetResult()));
  }
  else
  {
    return PutAccountSuppressionAttributesOutcome(outcome.GetError());
  }
}

PutAccountSuppressionAttributesOutcomeCallable SESV2Client::PutAccountSuppressionAttributesCallable(const PutAccountSuppressionAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountSuppressionAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountSuppressionAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutAccountSuppressionAttributesAsync(const PutAccountSuppressionAttributesRequest& request, const PutAccountSuppressionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAccountSuppressionAttributesAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutAccountSuppressionAttributesAsyncHelper(const PutAccountSuppressionAttributesRequest& request, const PutAccountSuppressionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAccountSuppressionAttributes(request), context);
}

PutConfigurationSetDeliveryOptionsOutcome SESV2Client::PutConfigurationSetDeliveryOptions(const PutConfigurationSetDeliveryOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetDeliveryOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetDeliveryOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  ss << "/delivery-options";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutConfigurationSetDeliveryOptionsOutcome(PutConfigurationSetDeliveryOptionsResult(outcome.GetResult()));
  }
  else
  {
    return PutConfigurationSetDeliveryOptionsOutcome(outcome.GetError());
  }
}

PutConfigurationSetDeliveryOptionsOutcomeCallable SESV2Client::PutConfigurationSetDeliveryOptionsCallable(const PutConfigurationSetDeliveryOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetDeliveryOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetDeliveryOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutConfigurationSetDeliveryOptionsAsync(const PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutConfigurationSetDeliveryOptionsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutConfigurationSetDeliveryOptionsAsyncHelper(const PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConfigurationSetDeliveryOptions(request), context);
}

PutConfigurationSetReputationOptionsOutcome SESV2Client::PutConfigurationSetReputationOptions(const PutConfigurationSetReputationOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetReputationOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetReputationOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  ss << "/reputation-options";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutConfigurationSetReputationOptionsOutcome(PutConfigurationSetReputationOptionsResult(outcome.GetResult()));
  }
  else
  {
    return PutConfigurationSetReputationOptionsOutcome(outcome.GetError());
  }
}

PutConfigurationSetReputationOptionsOutcomeCallable SESV2Client::PutConfigurationSetReputationOptionsCallable(const PutConfigurationSetReputationOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetReputationOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetReputationOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutConfigurationSetReputationOptionsAsync(const PutConfigurationSetReputationOptionsRequest& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutConfigurationSetReputationOptionsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutConfigurationSetReputationOptionsAsyncHelper(const PutConfigurationSetReputationOptionsRequest& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConfigurationSetReputationOptions(request), context);
}

PutConfigurationSetSendingOptionsOutcome SESV2Client::PutConfigurationSetSendingOptions(const PutConfigurationSetSendingOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetSendingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetSendingOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  ss << "/sending";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutConfigurationSetSendingOptionsOutcome(PutConfigurationSetSendingOptionsResult(outcome.GetResult()));
  }
  else
  {
    return PutConfigurationSetSendingOptionsOutcome(outcome.GetError());
  }
}

PutConfigurationSetSendingOptionsOutcomeCallable SESV2Client::PutConfigurationSetSendingOptionsCallable(const PutConfigurationSetSendingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetSendingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetSendingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutConfigurationSetSendingOptionsAsync(const PutConfigurationSetSendingOptionsRequest& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutConfigurationSetSendingOptionsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutConfigurationSetSendingOptionsAsyncHelper(const PutConfigurationSetSendingOptionsRequest& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConfigurationSetSendingOptions(request), context);
}

PutConfigurationSetSuppressionOptionsOutcome SESV2Client::PutConfigurationSetSuppressionOptions(const PutConfigurationSetSuppressionOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetSuppressionOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetSuppressionOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  ss << "/suppression-options";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutConfigurationSetSuppressionOptionsOutcome(PutConfigurationSetSuppressionOptionsResult(outcome.GetResult()));
  }
  else
  {
    return PutConfigurationSetSuppressionOptionsOutcome(outcome.GetError());
  }
}

PutConfigurationSetSuppressionOptionsOutcomeCallable SESV2Client::PutConfigurationSetSuppressionOptionsCallable(const PutConfigurationSetSuppressionOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetSuppressionOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetSuppressionOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutConfigurationSetSuppressionOptionsAsync(const PutConfigurationSetSuppressionOptionsRequest& request, const PutConfigurationSetSuppressionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutConfigurationSetSuppressionOptionsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutConfigurationSetSuppressionOptionsAsyncHelper(const PutConfigurationSetSuppressionOptionsRequest& request, const PutConfigurationSetSuppressionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConfigurationSetSuppressionOptions(request), context);
}

PutConfigurationSetTrackingOptionsOutcome SESV2Client::PutConfigurationSetTrackingOptions(const PutConfigurationSetTrackingOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetTrackingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetTrackingOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  ss << "/tracking-options";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutConfigurationSetTrackingOptionsOutcome(PutConfigurationSetTrackingOptionsResult(outcome.GetResult()));
  }
  else
  {
    return PutConfigurationSetTrackingOptionsOutcome(outcome.GetError());
  }
}

PutConfigurationSetTrackingOptionsOutcomeCallable SESV2Client::PutConfigurationSetTrackingOptionsCallable(const PutConfigurationSetTrackingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetTrackingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetTrackingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutConfigurationSetTrackingOptionsAsync(const PutConfigurationSetTrackingOptionsRequest& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutConfigurationSetTrackingOptionsAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutConfigurationSetTrackingOptionsAsyncHelper(const PutConfigurationSetTrackingOptionsRequest& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutConfigurationSetTrackingOptions(request), context);
}

PutDedicatedIpInPoolOutcome SESV2Client::PutDedicatedIpInPool(const PutDedicatedIpInPoolRequest& request) const
{
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpInPool", "Required field: Ip, is not set");
    return PutDedicatedIpInPoolOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/dedicated-ips/";
  ss << request.GetIp();
  ss << "/pool";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutDedicatedIpInPoolOutcome(PutDedicatedIpInPoolResult(outcome.GetResult()));
  }
  else
  {
    return PutDedicatedIpInPoolOutcome(outcome.GetError());
  }
}

PutDedicatedIpInPoolOutcomeCallable SESV2Client::PutDedicatedIpInPoolCallable(const PutDedicatedIpInPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDedicatedIpInPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDedicatedIpInPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutDedicatedIpInPoolAsync(const PutDedicatedIpInPoolRequest& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutDedicatedIpInPoolAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutDedicatedIpInPoolAsyncHelper(const PutDedicatedIpInPoolRequest& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDedicatedIpInPool(request), context);
}

PutDedicatedIpWarmupAttributesOutcome SESV2Client::PutDedicatedIpWarmupAttributes(const PutDedicatedIpWarmupAttributesRequest& request) const
{
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpWarmupAttributes", "Required field: Ip, is not set");
    return PutDedicatedIpWarmupAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/dedicated-ips/";
  ss << request.GetIp();
  ss << "/warmup";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutDedicatedIpWarmupAttributesOutcome(PutDedicatedIpWarmupAttributesResult(outcome.GetResult()));
  }
  else
  {
    return PutDedicatedIpWarmupAttributesOutcome(outcome.GetError());
  }
}

PutDedicatedIpWarmupAttributesOutcomeCallable SESV2Client::PutDedicatedIpWarmupAttributesCallable(const PutDedicatedIpWarmupAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDedicatedIpWarmupAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDedicatedIpWarmupAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutDedicatedIpWarmupAttributesAsync(const PutDedicatedIpWarmupAttributesRequest& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutDedicatedIpWarmupAttributesAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutDedicatedIpWarmupAttributesAsyncHelper(const PutDedicatedIpWarmupAttributesRequest& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDedicatedIpWarmupAttributes(request), context);
}

PutDeliverabilityDashboardOptionOutcome SESV2Client::PutDeliverabilityDashboardOption(const PutDeliverabilityDashboardOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/deliverability-dashboard";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutDeliverabilityDashboardOptionOutcome(PutDeliverabilityDashboardOptionResult(outcome.GetResult()));
  }
  else
  {
    return PutDeliverabilityDashboardOptionOutcome(outcome.GetError());
  }
}

PutDeliverabilityDashboardOptionOutcomeCallable SESV2Client::PutDeliverabilityDashboardOptionCallable(const PutDeliverabilityDashboardOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDeliverabilityDashboardOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDeliverabilityDashboardOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutDeliverabilityDashboardOptionAsync(const PutDeliverabilityDashboardOptionRequest& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutDeliverabilityDashboardOptionAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutDeliverabilityDashboardOptionAsyncHelper(const PutDeliverabilityDashboardOptionRequest& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDeliverabilityDashboardOption(request), context);
}

PutEmailIdentityDkimAttributesOutcome SESV2Client::PutEmailIdentityDkimAttributes(const PutEmailIdentityDkimAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityDkimAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityDkimAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/identities/";
  ss << request.GetEmailIdentity();
  ss << "/dkim";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutEmailIdentityDkimAttributesOutcome(PutEmailIdentityDkimAttributesResult(outcome.GetResult()));
  }
  else
  {
    return PutEmailIdentityDkimAttributesOutcome(outcome.GetError());
  }
}

PutEmailIdentityDkimAttributesOutcomeCallable SESV2Client::PutEmailIdentityDkimAttributesCallable(const PutEmailIdentityDkimAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityDkimAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityDkimAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutEmailIdentityDkimAttributesAsync(const PutEmailIdentityDkimAttributesRequest& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEmailIdentityDkimAttributesAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutEmailIdentityDkimAttributesAsyncHelper(const PutEmailIdentityDkimAttributesRequest& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEmailIdentityDkimAttributes(request), context);
}

PutEmailIdentityDkimSigningAttributesOutcome SESV2Client::PutEmailIdentityDkimSigningAttributes(const PutEmailIdentityDkimSigningAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityDkimSigningAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityDkimSigningAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/email/identities/";
  ss << request.GetEmailIdentity();
  ss << "/dkim/signing";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutEmailIdentityDkimSigningAttributesOutcome(PutEmailIdentityDkimSigningAttributesResult(outcome.GetResult()));
  }
  else
  {
    return PutEmailIdentityDkimSigningAttributesOutcome(outcome.GetError());
  }
}

PutEmailIdentityDkimSigningAttributesOutcomeCallable SESV2Client::PutEmailIdentityDkimSigningAttributesCallable(const PutEmailIdentityDkimSigningAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityDkimSigningAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityDkimSigningAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutEmailIdentityDkimSigningAttributesAsync(const PutEmailIdentityDkimSigningAttributesRequest& request, const PutEmailIdentityDkimSigningAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEmailIdentityDkimSigningAttributesAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutEmailIdentityDkimSigningAttributesAsyncHelper(const PutEmailIdentityDkimSigningAttributesRequest& request, const PutEmailIdentityDkimSigningAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEmailIdentityDkimSigningAttributes(request), context);
}

PutEmailIdentityFeedbackAttributesOutcome SESV2Client::PutEmailIdentityFeedbackAttributes(const PutEmailIdentityFeedbackAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityFeedbackAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityFeedbackAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/identities/";
  ss << request.GetEmailIdentity();
  ss << "/feedback";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutEmailIdentityFeedbackAttributesOutcome(PutEmailIdentityFeedbackAttributesResult(outcome.GetResult()));
  }
  else
  {
    return PutEmailIdentityFeedbackAttributesOutcome(outcome.GetError());
  }
}

PutEmailIdentityFeedbackAttributesOutcomeCallable SESV2Client::PutEmailIdentityFeedbackAttributesCallable(const PutEmailIdentityFeedbackAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityFeedbackAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityFeedbackAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutEmailIdentityFeedbackAttributesAsync(const PutEmailIdentityFeedbackAttributesRequest& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEmailIdentityFeedbackAttributesAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutEmailIdentityFeedbackAttributesAsyncHelper(const PutEmailIdentityFeedbackAttributesRequest& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEmailIdentityFeedbackAttributes(request), context);
}

PutEmailIdentityMailFromAttributesOutcome SESV2Client::PutEmailIdentityMailFromAttributes(const PutEmailIdentityMailFromAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityMailFromAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityMailFromAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/identities/";
  ss << request.GetEmailIdentity();
  ss << "/mail-from";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutEmailIdentityMailFromAttributesOutcome(PutEmailIdentityMailFromAttributesResult(outcome.GetResult()));
  }
  else
  {
    return PutEmailIdentityMailFromAttributesOutcome(outcome.GetError());
  }
}

PutEmailIdentityMailFromAttributesOutcomeCallable SESV2Client::PutEmailIdentityMailFromAttributesCallable(const PutEmailIdentityMailFromAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityMailFromAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityMailFromAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutEmailIdentityMailFromAttributesAsync(const PutEmailIdentityMailFromAttributesRequest& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEmailIdentityMailFromAttributesAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutEmailIdentityMailFromAttributesAsyncHelper(const PutEmailIdentityMailFromAttributesRequest& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEmailIdentityMailFromAttributes(request), context);
}

PutSuppressedDestinationOutcome SESV2Client::PutSuppressedDestination(const PutSuppressedDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/suppression/addresses";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutSuppressedDestinationOutcome(PutSuppressedDestinationResult(outcome.GetResult()));
  }
  else
  {
    return PutSuppressedDestinationOutcome(outcome.GetError());
  }
}

PutSuppressedDestinationOutcomeCallable SESV2Client::PutSuppressedDestinationCallable(const PutSuppressedDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSuppressedDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSuppressedDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::PutSuppressedDestinationAsync(const PutSuppressedDestinationRequest& request, const PutSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutSuppressedDestinationAsyncHelper( request, handler, context ); } );
}

void SESV2Client::PutSuppressedDestinationAsyncHelper(const PutSuppressedDestinationRequest& request, const PutSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSuppressedDestination(request), context);
}

SendEmailOutcome SESV2Client::SendEmail(const SendEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/outbound-emails";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendEmailOutcome(SendEmailResult(outcome.GetResult()));
  }
  else
  {
    return SendEmailOutcome(outcome.GetError());
  }
}

SendEmailOutcomeCallable SESV2Client::SendEmailCallable(const SendEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::SendEmailAsync(const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendEmailAsyncHelper( request, handler, context ); } );
}

void SESV2Client::SendEmailAsyncHelper(const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendEmail(request), context);
}

TagResourceOutcome SESV2Client::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable SESV2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SESV2Client::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome SESV2Client::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable SESV2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SESV2Client::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateConfigurationSetEventDestinationOutcome SESV2Client::UpdateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/email/configuration-sets/";
  ss << request.GetConfigurationSetName();
  ss << "/event-destinations/";
  ss << request.GetEventDestinationName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateConfigurationSetEventDestinationOutcome(UpdateConfigurationSetEventDestinationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConfigurationSetEventDestinationOutcome(outcome.GetError());
  }
}

UpdateConfigurationSetEventDestinationOutcomeCallable SESV2Client::UpdateConfigurationSetEventDestinationCallable(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::UpdateConfigurationSetEventDestinationAsync(const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConfigurationSetEventDestinationAsyncHelper( request, handler, context ); } );
}

void SESV2Client::UpdateConfigurationSetEventDestinationAsyncHelper(const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConfigurationSetEventDestination(request), context);
}

