/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-contacts/SSMContactsServiceClientModel.h>
#include <aws/ssm-contacts/SSMContactsLegacyAsyncMacros.h>

namespace Aws
{
namespace SSMContacts
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMContactsClient(const Aws::SSMContacts::SSMContactsClientConfiguration& clientConfiguration = Aws::SSMContacts::SSMContactsClientConfiguration(),
                          std::shared_ptr<SSMContactsEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMContactsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMContactsClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<SSMContactsEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMContactsEndpointProvider>(ALLOCATION_TAG),
                          const Aws::SSMContacts::SSMContactsClientConfiguration& clientConfiguration = Aws::SSMContacts::SSMContactsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMContactsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<SSMContactsEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMContactsEndpointProvider>(ALLOCATION_TAG),
                          const Aws::SSMContacts::SSMContactsClientConfiguration& clientConfiguration = Aws::SSMContacts::SSMContactsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMContactsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMContactsClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMContactsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSMContactsClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Used to acknowledge an engagement to a contact channel during an
         * incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/AcceptPage">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptPageOutcome AcceptPage(const Model::AcceptPageRequest& request) const;


        /**
         * <p>Activates a contact's contact channel. Incident Manager can't engage a
         * contact until the contact channel has been activated.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ActivateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateContactChannelOutcome ActivateContactChannel(const Model::ActivateContactChannelRequest& request) const;


        /**
         * <p>Contacts are either the contacts that Incident Manager engages during an
         * incident or the escalation plans that Incident Manager uses to engage contacts
         * in phases during an incident. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/CreateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactOutcome CreateContact(const Model::CreateContactRequest& request) const;


        /**
         * <p>A contact channel is the method that Incident Manager uses to engage your
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/CreateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactChannelOutcome CreateContactChannel(const Model::CreateContactChannelRequest& request) const;


        /**
         * <p>To no longer receive Incident Manager engagements to a contact channel, you
         * can deactivate the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DeactivateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateContactChannelOutcome DeactivateContactChannel(const Model::DeactivateContactChannelRequest& request) const;


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
         * <p>Incident Manager uses engagements to engage contacts and escalation plans
         * during an incident. Use this command to describe the engagement that occurred
         * during an incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DescribeEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngagementOutcome DescribeEngagement(const Model::DescribeEngagementRequest& request) const;


        /**
         * <p>Lists details of the engagement to a contact channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DescribePage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePageOutcome DescribePage(const Model::DescribePageRequest& request) const;


        /**
         * <p>Retrieves information about the specified contact or escalation
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactOutcome GetContact(const Model::GetContactRequest& request) const;


        /**
         * <p>List details about a specific contact channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactChannelOutcome GetContactChannel(const Model::GetContactChannelRequest& request) const;


        /**
         * <p>Retrieves the resource policies attached to the specified contact or
         * escalation plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetContactPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactPolicyOutcome GetContactPolicy(const Model::GetContactPolicyRequest& request) const;


        /**
         * <p>Lists all contact channels for the specified contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListContactChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactChannelsOutcome ListContactChannels(const Model::ListContactChannelsRequest& request) const;


        /**
         * <p>Lists all contacts and escalation plans in Incident Manager.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactsOutcome ListContacts(const Model::ListContactsRequest& request) const;


        /**
         * <p>Lists all engagements that have happened in an incident.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListEngagements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngagementsOutcome ListEngagements(const Model::ListEngagementsRequest& request) const;


        /**
         * <p>Lists all of the engagements to contact channels that have been acknowledged.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPageReceipts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPageReceiptsOutcome ListPageReceipts(const Model::ListPageReceiptsRequest& request) const;


        /**
         * <p>Lists the engagements to a contact's contact channels.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPagesByContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPagesByContactOutcome ListPagesByContact(const Model::ListPagesByContactRequest& request) const;


        /**
         * <p>Lists the engagements to contact channels that occurred by engaging a
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPagesByEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPagesByEngagementOutcome ListPagesByEngagement(const Model::ListPagesByEngagementRequest& request) const;


        /**
         * <p>Lists the tags of an escalation plan or contact.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Sends an activation code to a contact channel. The contact can use this code
         * to activate the contact channel in the console or with the
         * <code>ActivateChannel</code> operation. Incident Manager can't engage a contact
         * channel until it has been activated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/SendActivationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::SendActivationCodeOutcome SendActivationCode(const Model::SendActivationCodeRequest& request) const;


        /**
         * <p>Starts an engagement to a contact or escalation plan. The engagement engages
         * each contact specified in the incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/StartEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEngagementOutcome StartEngagement(const Model::StartEngagementRequest& request) const;


        /**
         * <p>Stops an engagement before it finishes the final stage of the escalation plan
         * or engagement plan. Further contacts aren't engaged.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/StopEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEngagementOutcome StopEngagement(const Model::StopEngagementRequest& request) const;


        /**
         * <p>Tags a contact or escalation plan. You can tag only contacts and escalation
         * plans in the first region of your replication set. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from the specified resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the contact or escalation plan specified. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;


        /**
         * <p>Updates a contact's contact channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/UpdateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactChannelOutcome UpdateContactChannel(const Model::UpdateContactChannelRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSMContactsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SSMContactsClientConfiguration& clientConfiguration);

      SSMContactsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSMContactsEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSMContacts
} // namespace Aws
