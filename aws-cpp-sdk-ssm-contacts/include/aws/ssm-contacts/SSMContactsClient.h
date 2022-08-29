/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-contacts/model/AcceptPageResult.h>
#include <aws/ssm-contacts/model/ActivateContactChannelResult.h>
#include <aws/ssm-contacts/model/CreateContactResult.h>
#include <aws/ssm-contacts/model/CreateContactChannelResult.h>
#include <aws/ssm-contacts/model/DeactivateContactChannelResult.h>
#include <aws/ssm-contacts/model/DeleteContactResult.h>
#include <aws/ssm-contacts/model/DeleteContactChannelResult.h>
#include <aws/ssm-contacts/model/DescribeEngagementResult.h>
#include <aws/ssm-contacts/model/DescribePageResult.h>
#include <aws/ssm-contacts/model/GetContactResult.h>
#include <aws/ssm-contacts/model/GetContactChannelResult.h>
#include <aws/ssm-contacts/model/GetContactPolicyResult.h>
#include <aws/ssm-contacts/model/ListContactChannelsResult.h>
#include <aws/ssm-contacts/model/ListContactsResult.h>
#include <aws/ssm-contacts/model/ListEngagementsResult.h>
#include <aws/ssm-contacts/model/ListPageReceiptsResult.h>
#include <aws/ssm-contacts/model/ListPagesByContactResult.h>
#include <aws/ssm-contacts/model/ListPagesByEngagementResult.h>
#include <aws/ssm-contacts/model/ListTagsForResourceResult.h>
#include <aws/ssm-contacts/model/PutContactPolicyResult.h>
#include <aws/ssm-contacts/model/SendActivationCodeResult.h>
#include <aws/ssm-contacts/model/StartEngagementResult.h>
#include <aws/ssm-contacts/model/StopEngagementResult.h>
#include <aws/ssm-contacts/model/TagResourceResult.h>
#include <aws/ssm-contacts/model/UntagResourceResult.h>
#include <aws/ssm-contacts/model/UpdateContactResult.h>
#include <aws/ssm-contacts/model/UpdateContactChannelResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace SSMContacts
{

namespace Model
{
        class AcceptPageRequest;
        class ActivateContactChannelRequest;
        class CreateContactRequest;
        class CreateContactChannelRequest;
        class DeactivateContactChannelRequest;
        class DeleteContactRequest;
        class DeleteContactChannelRequest;
        class DescribeEngagementRequest;
        class DescribePageRequest;
        class GetContactRequest;
        class GetContactChannelRequest;
        class GetContactPolicyRequest;
        class ListContactChannelsRequest;
        class ListContactsRequest;
        class ListEngagementsRequest;
        class ListPageReceiptsRequest;
        class ListPagesByContactRequest;
        class ListPagesByEngagementRequest;
        class ListTagsForResourceRequest;
        class PutContactPolicyRequest;
        class SendActivationCodeRequest;
        class StartEngagementRequest;
        class StopEngagementRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateContactRequest;
        class UpdateContactChannelRequest;

        typedef Aws::Utils::Outcome<AcceptPageResult, SSMContactsError> AcceptPageOutcome;
        typedef Aws::Utils::Outcome<ActivateContactChannelResult, SSMContactsError> ActivateContactChannelOutcome;
        typedef Aws::Utils::Outcome<CreateContactResult, SSMContactsError> CreateContactOutcome;
        typedef Aws::Utils::Outcome<CreateContactChannelResult, SSMContactsError> CreateContactChannelOutcome;
        typedef Aws::Utils::Outcome<DeactivateContactChannelResult, SSMContactsError> DeactivateContactChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteContactResult, SSMContactsError> DeleteContactOutcome;
        typedef Aws::Utils::Outcome<DeleteContactChannelResult, SSMContactsError> DeleteContactChannelOutcome;
        typedef Aws::Utils::Outcome<DescribeEngagementResult, SSMContactsError> DescribeEngagementOutcome;
        typedef Aws::Utils::Outcome<DescribePageResult, SSMContactsError> DescribePageOutcome;
        typedef Aws::Utils::Outcome<GetContactResult, SSMContactsError> GetContactOutcome;
        typedef Aws::Utils::Outcome<GetContactChannelResult, SSMContactsError> GetContactChannelOutcome;
        typedef Aws::Utils::Outcome<GetContactPolicyResult, SSMContactsError> GetContactPolicyOutcome;
        typedef Aws::Utils::Outcome<ListContactChannelsResult, SSMContactsError> ListContactChannelsOutcome;
        typedef Aws::Utils::Outcome<ListContactsResult, SSMContactsError> ListContactsOutcome;
        typedef Aws::Utils::Outcome<ListEngagementsResult, SSMContactsError> ListEngagementsOutcome;
        typedef Aws::Utils::Outcome<ListPageReceiptsResult, SSMContactsError> ListPageReceiptsOutcome;
        typedef Aws::Utils::Outcome<ListPagesByContactResult, SSMContactsError> ListPagesByContactOutcome;
        typedef Aws::Utils::Outcome<ListPagesByEngagementResult, SSMContactsError> ListPagesByEngagementOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, SSMContactsError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutContactPolicyResult, SSMContactsError> PutContactPolicyOutcome;
        typedef Aws::Utils::Outcome<SendActivationCodeResult, SSMContactsError> SendActivationCodeOutcome;
        typedef Aws::Utils::Outcome<StartEngagementResult, SSMContactsError> StartEngagementOutcome;
        typedef Aws::Utils::Outcome<StopEngagementResult, SSMContactsError> StopEngagementOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, SSMContactsError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, SSMContactsError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateContactResult, SSMContactsError> UpdateContactOutcome;
        typedef Aws::Utils::Outcome<UpdateContactChannelResult, SSMContactsError> UpdateContactChannelOutcome;

        typedef std::future<AcceptPageOutcome> AcceptPageOutcomeCallable;
        typedef std::future<ActivateContactChannelOutcome> ActivateContactChannelOutcomeCallable;
        typedef std::future<CreateContactOutcome> CreateContactOutcomeCallable;
        typedef std::future<CreateContactChannelOutcome> CreateContactChannelOutcomeCallable;
        typedef std::future<DeactivateContactChannelOutcome> DeactivateContactChannelOutcomeCallable;
        typedef std::future<DeleteContactOutcome> DeleteContactOutcomeCallable;
        typedef std::future<DeleteContactChannelOutcome> DeleteContactChannelOutcomeCallable;
        typedef std::future<DescribeEngagementOutcome> DescribeEngagementOutcomeCallable;
        typedef std::future<DescribePageOutcome> DescribePageOutcomeCallable;
        typedef std::future<GetContactOutcome> GetContactOutcomeCallable;
        typedef std::future<GetContactChannelOutcome> GetContactChannelOutcomeCallable;
        typedef std::future<GetContactPolicyOutcome> GetContactPolicyOutcomeCallable;
        typedef std::future<ListContactChannelsOutcome> ListContactChannelsOutcomeCallable;
        typedef std::future<ListContactsOutcome> ListContactsOutcomeCallable;
        typedef std::future<ListEngagementsOutcome> ListEngagementsOutcomeCallable;
        typedef std::future<ListPageReceiptsOutcome> ListPageReceiptsOutcomeCallable;
        typedef std::future<ListPagesByContactOutcome> ListPagesByContactOutcomeCallable;
        typedef std::future<ListPagesByEngagementOutcome> ListPagesByEngagementOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutContactPolicyOutcome> PutContactPolicyOutcomeCallable;
        typedef std::future<SendActivationCodeOutcome> SendActivationCodeOutcomeCallable;
        typedef std::future<StartEngagementOutcome> StartEngagementOutcomeCallable;
        typedef std::future<StopEngagementOutcome> StopEngagementOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateContactOutcome> UpdateContactOutcomeCallable;
        typedef std::future<UpdateContactChannelOutcome> UpdateContactChannelOutcomeCallable;
} // namespace Model

  class SSMContactsClient;

    typedef std::function<void(const SSMContactsClient*, const Model::AcceptPageRequest&, const Model::AcceptPageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptPageResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ActivateContactChannelRequest&, const Model::ActivateContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::CreateContactRequest&, const Model::CreateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::CreateContactChannelRequest&, const Model::CreateContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DeactivateContactChannelRequest&, const Model::DeactivateContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DeleteContactRequest&, const Model::DeleteContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DeleteContactChannelRequest&, const Model::DeleteContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DescribeEngagementRequest&, const Model::DescribeEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngagementResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::DescribePageRequest&, const Model::DescribePageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePageResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::GetContactRequest&, const Model::GetContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::GetContactChannelRequest&, const Model::GetContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactChannelResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::GetContactPolicyRequest&, const Model::GetContactPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactPolicyResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListContactChannelsRequest&, const Model::ListContactChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactChannelsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListContactsRequest&, const Model::ListContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListEngagementsRequest&, const Model::ListEngagementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngagementsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListPageReceiptsRequest&, const Model::ListPageReceiptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPageReceiptsResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListPagesByContactRequest&, const Model::ListPagesByContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPagesByContactResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListPagesByEngagementRequest&, const Model::ListPagesByEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPagesByEngagementResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::PutContactPolicyRequest&, const Model::PutContactPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutContactPolicyResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::SendActivationCodeRequest&, const Model::SendActivationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendActivationCodeResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::StartEngagementRequest&, const Model::StartEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEngagementResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::StopEngagementRequest&, const Model::StopEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEngagementResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::UpdateContactRequest&, const Model::UpdateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactResponseReceivedHandler;
    typedef std::function<void(const SSMContactsClient*, const Model::UpdateContactChannelRequest&, const Model::UpdateContactChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactChannelResponseReceivedHandler;

  /**
   * <p>Systems Manager Incident Manager is an incident management console designed
   * to help users mitigate and recover from incidents affecting their Amazon Web
   * Services-hosted applications. An incident is any unplanned interruption or
   * reduction in quality of services. </p> <p>Incident Manager increases incident
   * resolution by notifying responders of impact, highlighting relevant
   * troubleshooting data, and providing collaboration tools to get services back up
   * and running. To achieve the primary goal of reducing the time-to-resolution of
   * critical incidents, Incident Manager automates response plans and enables
   * responder team escalation. </p>
   */
  class AWS_SSMCONTACTS_API SSMContactsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMContactsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMContactsClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMContactsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SSMContactsClient();


        /**
         * <p>Used to acknowledge an engagement to a contact channel during an
         * incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/AcceptPage">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptPageOutcome AcceptPage(const Model::AcceptPageRequest& request) const;

        /**
         * A Callable wrapper for AcceptPage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptPageOutcomeCallable AcceptPageCallable(const Model::AcceptPageRequest& request) const;

        /**
         * An Async wrapper for AcceptPage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptPageAsync(const Model::AcceptPageRequest& request, const AcceptPageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Activates a contact's contact channel. Incident Manager can't engage a
         * contact until the contact channel has been activated.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ActivateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateContactChannelOutcome ActivateContactChannel(const Model::ActivateContactChannelRequest& request) const;

        /**
         * A Callable wrapper for ActivateContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateContactChannelOutcomeCallable ActivateContactChannelCallable(const Model::ActivateContactChannelRequest& request) const;

        /**
         * An Async wrapper for ActivateContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateContactChannelAsync(const Model::ActivateContactChannelRequest& request, const ActivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Contacts are either the contacts that Incident Manager engages during an
         * incident or the escalation plans that Incident Manager uses to engage contacts
         * in phases during an incident. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/CreateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactOutcome CreateContact(const Model::CreateContactRequest& request) const;

        /**
         * A Callable wrapper for CreateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactOutcomeCallable CreateContactCallable(const Model::CreateContactRequest& request) const;

        /**
         * An Async wrapper for CreateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactAsync(const Model::CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A contact channel is the method that Incident Manager uses to engage your
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/CreateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactChannelOutcome CreateContactChannel(const Model::CreateContactChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactChannelOutcomeCallable CreateContactChannelCallable(const Model::CreateContactChannelRequest& request) const;

        /**
         * An Async wrapper for CreateContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactChannelAsync(const Model::CreateContactChannelRequest& request, const CreateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To no longer receive Incident Manager engagements to a contact channel, you
         * can deactivate the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DeactivateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateContactChannelOutcome DeactivateContactChannel(const Model::DeactivateContactChannelRequest& request) const;

        /**
         * A Callable wrapper for DeactivateContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateContactChannelOutcomeCallable DeactivateContactChannelCallable(const Model::DeactivateContactChannelRequest& request) const;

        /**
         * An Async wrapper for DeactivateContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateContactChannelAsync(const Model::DeactivateContactChannelRequest& request, const DeactivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To remove a contact from Incident Manager, you can delete the contact.
         * Deleting a contact removes them from all escalation plans and related response
         * plans. Deleting an escalation plan removes it from all related response plans.
         * You will have to recreate the contact and its contact channels before you can
         * use it again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DeleteContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactOutcome DeleteContact(const Model::DeleteContactRequest& request) const;

        /**
         * A Callable wrapper for DeleteContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactOutcomeCallable DeleteContactCallable(const Model::DeleteContactRequest& request) const;

        /**
         * An Async wrapper for DeleteContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactAsync(const Model::DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>To no longer receive engagements on a contact channel, you can delete the
         * channel from a contact. Deleting the contact channel removes it from the
         * contact's engagement plan. If you delete the only contact channel for a contact,
         * you won't be able to engage that contact during an incident.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DeleteContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactChannelOutcome DeleteContactChannel(const Model::DeleteContactChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactChannelOutcomeCallable DeleteContactChannelCallable(const Model::DeleteContactChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactChannelAsync(const Model::DeleteContactChannelRequest& request, const DeleteContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Incident Manager uses engagements to engage contacts and escalation plans
         * during an incident. Use this command to describe the engagement that occurred
         * during an incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DescribeEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngagementOutcome DescribeEngagement(const Model::DescribeEngagementRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEngagementOutcomeCallable DescribeEngagementCallable(const Model::DescribeEngagementRequest& request) const;

        /**
         * An Async wrapper for DescribeEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEngagementAsync(const Model::DescribeEngagementRequest& request, const DescribeEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists details of the engagement to a contact channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DescribePage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePageOutcome DescribePage(const Model::DescribePageRequest& request) const;

        /**
         * A Callable wrapper for DescribePage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePageOutcomeCallable DescribePageCallable(const Model::DescribePageRequest& request) const;

        /**
         * An Async wrapper for DescribePage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePageAsync(const Model::DescribePageRequest& request, const DescribePageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified contact or escalation
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactOutcome GetContact(const Model::GetContactRequest& request) const;

        /**
         * A Callable wrapper for GetContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactOutcomeCallable GetContactCallable(const Model::GetContactRequest& request) const;

        /**
         * An Async wrapper for GetContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactAsync(const Model::GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List details about a specific contact channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactChannelOutcome GetContactChannel(const Model::GetContactChannelRequest& request) const;

        /**
         * A Callable wrapper for GetContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactChannelOutcomeCallable GetContactChannelCallable(const Model::GetContactChannelRequest& request) const;

        /**
         * An Async wrapper for GetContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactChannelAsync(const Model::GetContactChannelRequest& request, const GetContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resource policies attached to the specified contact or
         * escalation plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetContactPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactPolicyOutcome GetContactPolicy(const Model::GetContactPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetContactPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactPolicyOutcomeCallable GetContactPolicyCallable(const Model::GetContactPolicyRequest& request) const;

        /**
         * An Async wrapper for GetContactPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactPolicyAsync(const Model::GetContactPolicyRequest& request, const GetContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all contact channels for the specified contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListContactChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactChannelsOutcome ListContactChannels(const Model::ListContactChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListContactChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactChannelsOutcomeCallable ListContactChannelsCallable(const Model::ListContactChannelsRequest& request) const;

        /**
         * An Async wrapper for ListContactChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactChannelsAsync(const Model::ListContactChannelsRequest& request, const ListContactChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all contacts and escalation plans in Incident Manager.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactsOutcome ListContacts(const Model::ListContactsRequest& request) const;

        /**
         * A Callable wrapper for ListContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactsOutcomeCallable ListContactsCallable(const Model::ListContactsRequest& request) const;

        /**
         * An Async wrapper for ListContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactsAsync(const Model::ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all engagements that have happened in an incident.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListEngagements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngagementsOutcome ListEngagements(const Model::ListEngagementsRequest& request) const;

        /**
         * A Callable wrapper for ListEngagements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEngagementsOutcomeCallable ListEngagementsCallable(const Model::ListEngagementsRequest& request) const;

        /**
         * An Async wrapper for ListEngagements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEngagementsAsync(const Model::ListEngagementsRequest& request, const ListEngagementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the engagements to contact channels that have been acknowledged.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPageReceipts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPageReceiptsOutcome ListPageReceipts(const Model::ListPageReceiptsRequest& request) const;

        /**
         * A Callable wrapper for ListPageReceipts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPageReceiptsOutcomeCallable ListPageReceiptsCallable(const Model::ListPageReceiptsRequest& request) const;

        /**
         * An Async wrapper for ListPageReceipts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPageReceiptsAsync(const Model::ListPageReceiptsRequest& request, const ListPageReceiptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the engagements to a contact's contact channels.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPagesByContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPagesByContactOutcome ListPagesByContact(const Model::ListPagesByContactRequest& request) const;

        /**
         * A Callable wrapper for ListPagesByContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPagesByContactOutcomeCallable ListPagesByContactCallable(const Model::ListPagesByContactRequest& request) const;

        /**
         * An Async wrapper for ListPagesByContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPagesByContactAsync(const Model::ListPagesByContactRequest& request, const ListPagesByContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the engagements to contact channels that occurred by engaging a
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPagesByEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPagesByEngagementOutcome ListPagesByEngagement(const Model::ListPagesByEngagementRequest& request) const;

        /**
         * A Callable wrapper for ListPagesByEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPagesByEngagementOutcomeCallable ListPagesByEngagementCallable(const Model::ListPagesByEngagementRequest& request) const;

        /**
         * An Async wrapper for ListPagesByEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPagesByEngagementAsync(const Model::ListPagesByEngagementRequest& request, const ListPagesByEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags of an escalation plan or contact.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a resource policy to the specified contact or escalation plan. The
         * resource policy is used to share the contact or escalation plan using Resource
         * Access Manager (RAM). For more information about cross-account sharing, see <a
         * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/xa.html">Setting
         * up cross-account functionality</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/PutContactPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutContactPolicyOutcome PutContactPolicy(const Model::PutContactPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutContactPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutContactPolicyOutcomeCallable PutContactPolicyCallable(const Model::PutContactPolicyRequest& request) const;

        /**
         * An Async wrapper for PutContactPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutContactPolicyAsync(const Model::PutContactPolicyRequest& request, const PutContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an activation code to a contact channel. The contact can use this code
         * to activate the contact channel in the console or with the
         * <code>ActivateChannel</code> operation. Incident Manager can't engage a contact
         * channel until it has been activated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/SendActivationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::SendActivationCodeOutcome SendActivationCode(const Model::SendActivationCodeRequest& request) const;

        /**
         * A Callable wrapper for SendActivationCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendActivationCodeOutcomeCallable SendActivationCodeCallable(const Model::SendActivationCodeRequest& request) const;

        /**
         * An Async wrapper for SendActivationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendActivationCodeAsync(const Model::SendActivationCodeRequest& request, const SendActivationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an engagement to a contact or escalation plan. The engagement engages
         * each contact specified in the incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/StartEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEngagementOutcome StartEngagement(const Model::StartEngagementRequest& request) const;

        /**
         * A Callable wrapper for StartEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartEngagementOutcomeCallable StartEngagementCallable(const Model::StartEngagementRequest& request) const;

        /**
         * An Async wrapper for StartEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartEngagementAsync(const Model::StartEngagementRequest& request, const StartEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an engagement before it finishes the final stage of the escalation plan
         * or engagement plan. Further contacts aren't engaged.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/StopEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEngagementOutcome StopEngagement(const Model::StopEngagementRequest& request) const;

        /**
         * A Callable wrapper for StopEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopEngagementOutcomeCallable StopEngagementCallable(const Model::StopEngagementRequest& request) const;

        /**
         * An Async wrapper for StopEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopEngagementAsync(const Model::StopEngagementRequest& request, const StopEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags a contact or escalation plan. You can tag only contacts and escalation
         * plans in the first region of your replication set. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from the specified resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the contact or escalation plan specified. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;

        /**
         * A Callable wrapper for UpdateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactOutcomeCallable UpdateContactCallable(const Model::UpdateContactRequest& request) const;

        /**
         * An Async wrapper for UpdateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactAsync(const Model::UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a contact's contact channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/UpdateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactChannelOutcome UpdateContactChannel(const Model::UpdateContactChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactChannelOutcomeCallable UpdateContactChannelCallable(const Model::UpdateContactChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactChannelAsync(const Model::UpdateContactChannelRequest& request, const UpdateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptPageAsyncHelper(const Model::AcceptPageRequest& request, const AcceptPageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ActivateContactChannelAsyncHelper(const Model::ActivateContactChannelRequest& request, const ActivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContactAsyncHelper(const Model::CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContactChannelAsyncHelper(const Model::CreateContactChannelRequest& request, const CreateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeactivateContactChannelAsyncHelper(const Model::DeactivateContactChannelRequest& request, const DeactivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContactAsyncHelper(const Model::DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContactChannelAsyncHelper(const Model::DeleteContactChannelRequest& request, const DeleteContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEngagementAsyncHelper(const Model::DescribeEngagementRequest& request, const DescribeEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePageAsyncHelper(const Model::DescribePageRequest& request, const DescribePageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactAsyncHelper(const Model::GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactChannelAsyncHelper(const Model::GetContactChannelRequest& request, const GetContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactPolicyAsyncHelper(const Model::GetContactPolicyRequest& request, const GetContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContactChannelsAsyncHelper(const Model::ListContactChannelsRequest& request, const ListContactChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContactsAsyncHelper(const Model::ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEngagementsAsyncHelper(const Model::ListEngagementsRequest& request, const ListEngagementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPageReceiptsAsyncHelper(const Model::ListPageReceiptsRequest& request, const ListPageReceiptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPagesByContactAsyncHelper(const Model::ListPagesByContactRequest& request, const ListPagesByContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPagesByEngagementAsyncHelper(const Model::ListPagesByEngagementRequest& request, const ListPagesByEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutContactPolicyAsyncHelper(const Model::PutContactPolicyRequest& request, const PutContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendActivationCodeAsyncHelper(const Model::SendActivationCodeRequest& request, const SendActivationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartEngagementAsyncHelper(const Model::StartEngagementRequest& request, const StartEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopEngagementAsyncHelper(const Model::StopEngagementRequest& request, const StopEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactAsyncHelper(const Model::UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactChannelAsyncHelper(const Model::UpdateContactChannelRequest& request, const UpdateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SSMContacts
} // namespace Aws
