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
  AWSClient::SetServiceClientName("SSM Contacts");
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

void SSMContactsClientAcceptPageAsyncHelper(SSMContactsClient const * const clientThis, const AcceptPageRequest& request, const AcceptPageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptPage(request), context);
}

void SSMContactsClient::AcceptPageAsync(const AcceptPageRequest& request, const AcceptPageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientAcceptPageAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientActivateContactChannelAsyncHelper(SSMContactsClient const * const clientThis, const ActivateContactChannelRequest& request, const ActivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ActivateContactChannel(request), context);
}

void SSMContactsClient::ActivateContactChannelAsync(const ActivateContactChannelRequest& request, const ActivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientActivateContactChannelAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientCreateContactAsyncHelper(SSMContactsClient const * const clientThis, const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContact(request), context);
}

void SSMContactsClient::CreateContactAsync(const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientCreateContactAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientCreateContactChannelAsyncHelper(SSMContactsClient const * const clientThis, const CreateContactChannelRequest& request, const CreateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContactChannel(request), context);
}

void SSMContactsClient::CreateContactChannelAsync(const CreateContactChannelRequest& request, const CreateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientCreateContactChannelAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientDeactivateContactChannelAsyncHelper(SSMContactsClient const * const clientThis, const DeactivateContactChannelRequest& request, const DeactivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeactivateContactChannel(request), context);
}

void SSMContactsClient::DeactivateContactChannelAsync(const DeactivateContactChannelRequest& request, const DeactivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientDeactivateContactChannelAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientDeleteContactAsyncHelper(SSMContactsClient const * const clientThis, const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContact(request), context);
}

void SSMContactsClient::DeleteContactAsync(const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientDeleteContactAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientDeleteContactChannelAsyncHelper(SSMContactsClient const * const clientThis, const DeleteContactChannelRequest& request, const DeleteContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContactChannel(request), context);
}

void SSMContactsClient::DeleteContactChannelAsync(const DeleteContactChannelRequest& request, const DeleteContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientDeleteContactChannelAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientDescribeEngagementAsyncHelper(SSMContactsClient const * const clientThis, const DescribeEngagementRequest& request, const DescribeEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEngagement(request), context);
}

void SSMContactsClient::DescribeEngagementAsync(const DescribeEngagementRequest& request, const DescribeEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientDescribeEngagementAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientDescribePageAsyncHelper(SSMContactsClient const * const clientThis, const DescribePageRequest& request, const DescribePageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePage(request), context);
}

void SSMContactsClient::DescribePageAsync(const DescribePageRequest& request, const DescribePageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientDescribePageAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientGetContactAsyncHelper(SSMContactsClient const * const clientThis, const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContact(request), context);
}

void SSMContactsClient::GetContactAsync(const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientGetContactAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientGetContactChannelAsyncHelper(SSMContactsClient const * const clientThis, const GetContactChannelRequest& request, const GetContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContactChannel(request), context);
}

void SSMContactsClient::GetContactChannelAsync(const GetContactChannelRequest& request, const GetContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientGetContactChannelAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientGetContactPolicyAsyncHelper(SSMContactsClient const * const clientThis, const GetContactPolicyRequest& request, const GetContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContactPolicy(request), context);
}

void SSMContactsClient::GetContactPolicyAsync(const GetContactPolicyRequest& request, const GetContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientGetContactPolicyAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientListContactChannelsAsyncHelper(SSMContactsClient const * const clientThis, const ListContactChannelsRequest& request, const ListContactChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContactChannels(request), context);
}

void SSMContactsClient::ListContactChannelsAsync(const ListContactChannelsRequest& request, const ListContactChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientListContactChannelsAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientListContactsAsyncHelper(SSMContactsClient const * const clientThis, const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContacts(request), context);
}

void SSMContactsClient::ListContactsAsync(const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientListContactsAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientListEngagementsAsyncHelper(SSMContactsClient const * const clientThis, const ListEngagementsRequest& request, const ListEngagementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEngagements(request), context);
}

void SSMContactsClient::ListEngagementsAsync(const ListEngagementsRequest& request, const ListEngagementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientListEngagementsAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientListPageReceiptsAsyncHelper(SSMContactsClient const * const clientThis, const ListPageReceiptsRequest& request, const ListPageReceiptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPageReceipts(request), context);
}

void SSMContactsClient::ListPageReceiptsAsync(const ListPageReceiptsRequest& request, const ListPageReceiptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientListPageReceiptsAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientListPagesByContactAsyncHelper(SSMContactsClient const * const clientThis, const ListPagesByContactRequest& request, const ListPagesByContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPagesByContact(request), context);
}

void SSMContactsClient::ListPagesByContactAsync(const ListPagesByContactRequest& request, const ListPagesByContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientListPagesByContactAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientListPagesByEngagementAsyncHelper(SSMContactsClient const * const clientThis, const ListPagesByEngagementRequest& request, const ListPagesByEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPagesByEngagement(request), context);
}

void SSMContactsClient::ListPagesByEngagementAsync(const ListPagesByEngagementRequest& request, const ListPagesByEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientListPagesByEngagementAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientListTagsForResourceAsyncHelper(SSMContactsClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void SSMContactsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientPutContactPolicyAsyncHelper(SSMContactsClient const * const clientThis, const PutContactPolicyRequest& request, const PutContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutContactPolicy(request), context);
}

void SSMContactsClient::PutContactPolicyAsync(const PutContactPolicyRequest& request, const PutContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientPutContactPolicyAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientSendActivationCodeAsyncHelper(SSMContactsClient const * const clientThis, const SendActivationCodeRequest& request, const SendActivationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendActivationCode(request), context);
}

void SSMContactsClient::SendActivationCodeAsync(const SendActivationCodeRequest& request, const SendActivationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientSendActivationCodeAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientStartEngagementAsyncHelper(SSMContactsClient const * const clientThis, const StartEngagementRequest& request, const StartEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartEngagement(request), context);
}

void SSMContactsClient::StartEngagementAsync(const StartEngagementRequest& request, const StartEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientStartEngagementAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientStopEngagementAsyncHelper(SSMContactsClient const * const clientThis, const StopEngagementRequest& request, const StopEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopEngagement(request), context);
}

void SSMContactsClient::StopEngagementAsync(const StopEngagementRequest& request, const StopEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientStopEngagementAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientTagResourceAsyncHelper(SSMContactsClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void SSMContactsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientUntagResourceAsyncHelper(SSMContactsClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void SSMContactsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientUpdateContactAsyncHelper(SSMContactsClient const * const clientThis, const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContact(request), context);
}

void SSMContactsClient::UpdateContactAsync(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientUpdateContactAsyncHelper( this, request, handler, context ); } );
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

void SSMContactsClientUpdateContactChannelAsyncHelper(SSMContactsClient const * const clientThis, const UpdateContactChannelRequest& request, const UpdateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContactChannel(request), context);
}

void SSMContactsClient::UpdateContactChannelAsync(const UpdateContactChannelRequest& request, const UpdateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMContactsClientUpdateContactChannelAsyncHelper( this, request, handler, context ); } );
}

