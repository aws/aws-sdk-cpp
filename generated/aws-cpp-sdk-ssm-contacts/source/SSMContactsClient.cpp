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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/ssm-contacts/SSMContactsClient.h>
#include <aws/ssm-contacts/SSMContactsEndpoint.h>
#include <aws/ssm-contacts/SSMContactsErrorMarshaller.h>
#include <aws/ssm-contacts/model/AcceptPageRequest.h>
#include <aws/ssm-contacts/model/ActivateContactChannelRequest.h>
#include <aws/ssm-contacts/model/CreateContactRequest.h>
#include <aws/ssm-contacts/model/CreateContactChannelRequest.h>
#include <aws/ssm-contacts/model/DeactivateContactChannelRequest.h>
#include <aws/ssm-contacts/model/DeleteContactRequest.h>
#include <aws/ssm-contacts/model/DeleteContactChannelRequest.h>
#include <aws/ssm-contacts/model/DescribeEngagementRequest.h>
#include <aws/ssm-contacts/model/DescribePageRequest.h>
#include <aws/ssm-contacts/model/GetContactRequest.h>
#include <aws/ssm-contacts/model/GetContactChannelRequest.h>
#include <aws/ssm-contacts/model/GetContactPolicyRequest.h>
#include <aws/ssm-contacts/model/ListContactChannelsRequest.h>
#include <aws/ssm-contacts/model/ListContactsRequest.h>
#include <aws/ssm-contacts/model/ListEngagementsRequest.h>
#include <aws/ssm-contacts/model/ListPageReceiptsRequest.h>
#include <aws/ssm-contacts/model/ListPagesByContactRequest.h>
#include <aws/ssm-contacts/model/ListPagesByEngagementRequest.h>
#include <aws/ssm-contacts/model/ListTagsForResourceRequest.h>
#include <aws/ssm-contacts/model/PutContactPolicyRequest.h>
#include <aws/ssm-contacts/model/SendActivationCodeRequest.h>
#include <aws/ssm-contacts/model/StartEngagementRequest.h>
#include <aws/ssm-contacts/model/StopEngagementRequest.h>
#include <aws/ssm-contacts/model/TagResourceRequest.h>
#include <aws/ssm-contacts/model/UntagResourceRequest.h>
#include <aws/ssm-contacts/model/UpdateContactRequest.h>
#include <aws/ssm-contacts/model/UpdateContactChannelRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSMContacts;
using namespace Aws::SSMContacts::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ssm-contacts";
static const char* ALLOCATION_TAG = "SSMContactsClient";

SSMContactsClient::SSMContactsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMContactsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMContactsClient::SSMContactsClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMContactsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMContactsClient::SSMContactsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMContactsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMContactsClient::~SSMContactsClient()
{
}

void SSMContactsClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("SSM Contacts");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SSMContactsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SSMContactsClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptPageOutcome SSMContactsClient::AcceptPage(const AcceptPageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AcceptPageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptPageOutcomeCallable SSMContactsClient::AcceptPageCallable(const AcceptPageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptPageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptPage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::AcceptPageAsync(const AcceptPageRequest& request, const AcceptPageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptPageAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::AcceptPageAsyncHelper(const AcceptPageRequest& request, const AcceptPageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptPage(request), context);
}

ActivateContactChannelOutcome SSMContactsClient::ActivateContactChannel(const ActivateContactChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ActivateContactChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivateContactChannelOutcomeCallable SSMContactsClient::ActivateContactChannelCallable(const ActivateContactChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateContactChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateContactChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::ActivateContactChannelAsync(const ActivateContactChannelRequest& request, const ActivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ActivateContactChannelAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::ActivateContactChannelAsyncHelper(const ActivateContactChannelRequest& request, const ActivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivateContactChannel(request), context);
}

CreateContactOutcome SSMContactsClient::CreateContact(const CreateContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContactOutcomeCallable SSMContactsClient::CreateContactCallable(const CreateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::CreateContactAsync(const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateContactAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::CreateContactAsyncHelper(const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateContact(request), context);
}

CreateContactChannelOutcome SSMContactsClient::CreateContactChannel(const CreateContactChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateContactChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContactChannelOutcomeCallable SSMContactsClient::CreateContactChannelCallable(const CreateContactChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContactChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContactChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::CreateContactChannelAsync(const CreateContactChannelRequest& request, const CreateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateContactChannelAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::CreateContactChannelAsyncHelper(const CreateContactChannelRequest& request, const CreateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateContactChannel(request), context);
}

DeactivateContactChannelOutcome SSMContactsClient::DeactivateContactChannel(const DeactivateContactChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeactivateContactChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeactivateContactChannelOutcomeCallable SSMContactsClient::DeactivateContactChannelCallable(const DeactivateContactChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateContactChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateContactChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::DeactivateContactChannelAsync(const DeactivateContactChannelRequest& request, const DeactivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeactivateContactChannelAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::DeactivateContactChannelAsyncHelper(const DeactivateContactChannelRequest& request, const DeactivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeactivateContactChannel(request), context);
}

DeleteContactOutcome SSMContactsClient::DeleteContact(const DeleteContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactOutcomeCallable SSMContactsClient::DeleteContactCallable(const DeleteContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::DeleteContactAsync(const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteContactAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::DeleteContactAsyncHelper(const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteContact(request), context);
}

DeleteContactChannelOutcome SSMContactsClient::DeleteContactChannel(const DeleteContactChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteContactChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactChannelOutcomeCallable SSMContactsClient::DeleteContactChannelCallable(const DeleteContactChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContactChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContactChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::DeleteContactChannelAsync(const DeleteContactChannelRequest& request, const DeleteContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteContactChannelAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::DeleteContactChannelAsyncHelper(const DeleteContactChannelRequest& request, const DeleteContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteContactChannel(request), context);
}

DescribeEngagementOutcome SSMContactsClient::DescribeEngagement(const DescribeEngagementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEngagementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEngagementOutcomeCallable SSMContactsClient::DescribeEngagementCallable(const DescribeEngagementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEngagementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEngagement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::DescribeEngagementAsync(const DescribeEngagementRequest& request, const DescribeEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEngagementAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::DescribeEngagementAsyncHelper(const DescribeEngagementRequest& request, const DescribeEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEngagement(request), context);
}

DescribePageOutcome SSMContactsClient::DescribePage(const DescribePageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePageOutcomeCallable SSMContactsClient::DescribePageCallable(const DescribePageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::DescribePageAsync(const DescribePageRequest& request, const DescribePageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePageAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::DescribePageAsyncHelper(const DescribePageRequest& request, const DescribePageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePage(request), context);
}

GetContactOutcome SSMContactsClient::GetContact(const GetContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContactOutcomeCallable SSMContactsClient::GetContactCallable(const GetContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::GetContactAsync(const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContactAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::GetContactAsyncHelper(const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContact(request), context);
}

GetContactChannelOutcome SSMContactsClient::GetContactChannel(const GetContactChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetContactChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContactChannelOutcomeCallable SSMContactsClient::GetContactChannelCallable(const GetContactChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContactChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::GetContactChannelAsync(const GetContactChannelRequest& request, const GetContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContactChannelAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::GetContactChannelAsyncHelper(const GetContactChannelRequest& request, const GetContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContactChannel(request), context);
}

GetContactPolicyOutcome SSMContactsClient::GetContactPolicy(const GetContactPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetContactPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContactPolicyOutcomeCallable SSMContactsClient::GetContactPolicyCallable(const GetContactPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContactPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::GetContactPolicyAsync(const GetContactPolicyRequest& request, const GetContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContactPolicyAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::GetContactPolicyAsyncHelper(const GetContactPolicyRequest& request, const GetContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContactPolicy(request), context);
}

ListContactChannelsOutcome SSMContactsClient::ListContactChannels(const ListContactChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListContactChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContactChannelsOutcomeCallable SSMContactsClient::ListContactChannelsCallable(const ListContactChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContactChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContactChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::ListContactChannelsAsync(const ListContactChannelsRequest& request, const ListContactChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListContactChannelsAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::ListContactChannelsAsyncHelper(const ListContactChannelsRequest& request, const ListContactChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListContactChannels(request), context);
}

ListContactsOutcome SSMContactsClient::ListContacts(const ListContactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListContactsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContactsOutcomeCallable SSMContactsClient::ListContactsCallable(const ListContactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::ListContactsAsync(const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListContactsAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::ListContactsAsyncHelper(const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListContacts(request), context);
}

ListEngagementsOutcome SSMContactsClient::ListEngagements(const ListEngagementsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEngagementsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEngagementsOutcomeCallable SSMContactsClient::ListEngagementsCallable(const ListEngagementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEngagementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEngagements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::ListEngagementsAsync(const ListEngagementsRequest& request, const ListEngagementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEngagementsAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::ListEngagementsAsyncHelper(const ListEngagementsRequest& request, const ListEngagementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEngagements(request), context);
}

ListPageReceiptsOutcome SSMContactsClient::ListPageReceipts(const ListPageReceiptsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPageReceiptsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPageReceiptsOutcomeCallable SSMContactsClient::ListPageReceiptsCallable(const ListPageReceiptsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPageReceiptsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPageReceipts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::ListPageReceiptsAsync(const ListPageReceiptsRequest& request, const ListPageReceiptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPageReceiptsAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::ListPageReceiptsAsyncHelper(const ListPageReceiptsRequest& request, const ListPageReceiptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPageReceipts(request), context);
}

ListPagesByContactOutcome SSMContactsClient::ListPagesByContact(const ListPagesByContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPagesByContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPagesByContactOutcomeCallable SSMContactsClient::ListPagesByContactCallable(const ListPagesByContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPagesByContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPagesByContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::ListPagesByContactAsync(const ListPagesByContactRequest& request, const ListPagesByContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPagesByContactAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::ListPagesByContactAsyncHelper(const ListPagesByContactRequest& request, const ListPagesByContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPagesByContact(request), context);
}

ListPagesByEngagementOutcome SSMContactsClient::ListPagesByEngagement(const ListPagesByEngagementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPagesByEngagementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPagesByEngagementOutcomeCallable SSMContactsClient::ListPagesByEngagementCallable(const ListPagesByEngagementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPagesByEngagementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPagesByEngagement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::ListPagesByEngagementAsync(const ListPagesByEngagementRequest& request, const ListPagesByEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPagesByEngagementAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::ListPagesByEngagementAsyncHelper(const ListPagesByEngagementRequest& request, const ListPagesByEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPagesByEngagement(request), context);
}

ListTagsForResourceOutcome SSMContactsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SSMContactsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutContactPolicyOutcome SSMContactsClient::PutContactPolicy(const PutContactPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutContactPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutContactPolicyOutcomeCallable SSMContactsClient::PutContactPolicyCallable(const PutContactPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutContactPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutContactPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::PutContactPolicyAsync(const PutContactPolicyRequest& request, const PutContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutContactPolicyAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::PutContactPolicyAsyncHelper(const PutContactPolicyRequest& request, const PutContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutContactPolicy(request), context);
}

SendActivationCodeOutcome SSMContactsClient::SendActivationCode(const SendActivationCodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendActivationCodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendActivationCodeOutcomeCallable SSMContactsClient::SendActivationCodeCallable(const SendActivationCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendActivationCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendActivationCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::SendActivationCodeAsync(const SendActivationCodeRequest& request, const SendActivationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendActivationCodeAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::SendActivationCodeAsyncHelper(const SendActivationCodeRequest& request, const SendActivationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendActivationCode(request), context);
}

StartEngagementOutcome SSMContactsClient::StartEngagement(const StartEngagementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartEngagementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartEngagementOutcomeCallable SSMContactsClient::StartEngagementCallable(const StartEngagementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartEngagementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartEngagement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::StartEngagementAsync(const StartEngagementRequest& request, const StartEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartEngagementAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::StartEngagementAsyncHelper(const StartEngagementRequest& request, const StartEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartEngagement(request), context);
}

StopEngagementOutcome SSMContactsClient::StopEngagement(const StopEngagementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopEngagementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEngagementOutcomeCallable SSMContactsClient::StopEngagementCallable(const StopEngagementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEngagementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEngagement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::StopEngagementAsync(const StopEngagementRequest& request, const StopEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopEngagementAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::StopEngagementAsyncHelper(const StopEngagementRequest& request, const StopEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopEngagement(request), context);
}

TagResourceOutcome SSMContactsClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SSMContactsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome SSMContactsClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SSMContactsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateContactOutcome SSMContactsClient::UpdateContact(const UpdateContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactOutcomeCallable SSMContactsClient::UpdateContactCallable(const UpdateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::UpdateContactAsync(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::UpdateContactAsyncHelper(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContact(request), context);
}

UpdateContactChannelOutcome SSMContactsClient::UpdateContactChannel(const UpdateContactChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateContactChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactChannelOutcomeCallable SSMContactsClient::UpdateContactChannelCallable(const UpdateContactChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContactChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMContactsClient::UpdateContactChannelAsync(const UpdateContactChannelRequest& request, const UpdateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactChannelAsyncHelper( request, handler, context ); } );
}

void SSMContactsClient::UpdateContactChannelAsyncHelper(const UpdateContactChannelRequest& request, const UpdateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContactChannel(request), context);
}

