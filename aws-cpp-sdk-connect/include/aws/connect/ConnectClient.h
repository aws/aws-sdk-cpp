/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connect/ConnectServiceClientModel.h>
#include <aws/connect/ConnectLegacyAsyncMacros.h>

namespace Aws
{
namespace Connect
{
  /**
   * <p>Amazon Connect is a cloud-based contact center solution that you use to set
   * up and manage a customer contact center and provide reliable customer engagement
   * at any scale.</p> <p>Amazon Connect provides metrics and real-time reporting
   * that enable you to optimize contact routing. You can also resolve customer
   * issues more efficiently by getting customers in touch with the appropriate
   * agents.</p> <p>There are limits to the number of Amazon Connect resources that
   * you can create. There are also limits to the number of requests that you can
   * make per second. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
   * Connect Service Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
   * <p>You can connect programmatically to an Amazon Web Services service by using
   * an endpoint. For a list of Amazon Connect endpoints, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon
   * Connect Endpoints</a>.</p>  <p>Working with flows? Check out the <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
   * Connect Flow language</a>.</p> 
   */
  class AWS_CONNECT_API ConnectClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Connect::ConnectClientConfiguration& clientConfiguration = Aws::Connect::ConnectClientConfiguration(),
                      std::shared_ptr<ConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<ConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Connect::ConnectClientConfiguration& clientConfiguration = Aws::Connect::ConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<ConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Connect::ConnectClientConfiguration& clientConfiguration = Aws::Connect::ConnectClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectClient();


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
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates an approved origin to an Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateApprovedOrigin">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApprovedOriginOutcome AssociateApprovedOrigin(const Model::AssociateApprovedOriginRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Allows the specified Amazon Connect instance to access the
         * specified Amazon Lex or Amazon Lex V2 bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateBotOutcome AssociateBot(const Model::AssociateBotRequest& request) const;


        /**
         * <p>Associates an existing vocabulary as the default. Contact Lens for Amazon
         * Connect uses the vocabulary in post-call and real-time analysis sessions for the
         * given language.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateDefaultVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDefaultVocabularyOutcome AssociateDefaultVocabulary(const Model::AssociateDefaultVocabularyRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates a storage resource type for the first time. You can
         * only associate one type of storage configuration in a single call. This means,
         * for example, that you can't define an instance with multiple S3 buckets for
         * storing chat transcripts.</p> <p>This API does not create a resource that
         * doesn't exist. It only associates it to the instance. Ensure that the resource
         * being specified in the storage configuration, like an S3 bucket, exists when
         * being used for association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateInstanceStorageConfigOutcome AssociateInstanceStorageConfig(const Model::AssociateInstanceStorageConfigRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Allows the specified Amazon Connect instance to access the
         * specified Lambda function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLambdaFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLambdaFunctionOutcome AssociateLambdaFunction(const Model::AssociateLambdaFunctionRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Allows the specified Amazon Connect instance to access the
         * specified Amazon Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLexBot">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLexBotOutcome AssociateLexBot(const Model::AssociateLexBotRequest& request) const;


        /**
         * <p>Associates a flow with a phone number claimed to your Amazon Connect
         * instance.</p>  <p>If the number is claimed to a traffic distribution
         * group, and you are calling this API using an instance in the Amazon Web Services
         * Region where the traffic distribution group was created, you can use either a
         * full phone number ARN or UUID value for the <code>PhoneNumberId</code> URI
         * request parameter. However, if the number is claimed to a traffic distribution
         * group and you are calling this API using an instance in the alternate Amazon Web
         * Services Region associated with the traffic distribution group, you must provide
         * a full phone number ARN. If a UUID is provided in this scenario, you will
         * receive a <code>ResourceNotFoundException</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociatePhoneNumberContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumberContactFlowOutcome AssociatePhoneNumberContactFlow(const Model::AssociatePhoneNumberContactFlowRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates a set of quick connects with a queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateQueueQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateQueueQuickConnectsOutcome AssociateQueueQuickConnects(const Model::AssociateQueueQuickConnectsRequest& request) const;


        /**
         * <p>Associates a set of queues with a routing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRoutingProfileQueuesOutcome AssociateRoutingProfileQueues(const Model::AssociateRoutingProfileQueuesRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates a security key to the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateSecurityKey">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSecurityKeyOutcome AssociateSecurityKey(const Model::AssociateSecurityKeyRequest& request) const;


        /**
         * <p>Claims an available phone number to your Amazon Connect instance or traffic
         * distribution group. You can call this API only in the same Amazon Web Services
         * Region where the Amazon Connect instance or traffic distribution group was
         * created.</p>  <p>You can call the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribePhoneNumber.html">DescribePhoneNumber</a>
         * API to verify the status of a previous <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimPhoneNumber.html">ClaimPhoneNumber</a>
         * operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ClaimPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::ClaimPhoneNumberOutcome ClaimPhoneNumber(const Model::ClaimPhoneNumberRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates an agent status for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateAgentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentStatusOutcome CreateAgentStatus(const Model::CreateAgentStatusRequest& request) const;


        /**
         * <p>Creates a flow for the specified Amazon Connect instance.</p> <p>You can also
         * create and update flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactFlowOutcome CreateContactFlow(const Model::CreateContactFlowRequest& request) const;


        /**
         * <p>Creates a flow module for the specified Amazon Connect instance.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateContactFlowModule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactFlowModuleOutcome CreateContactFlowModule(const Model::CreateContactFlowModuleRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates hours of operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHoursOfOperationOutcome CreateHoursOfOperation(const Model::CreateHoursOfOperationRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Initiates an Amazon Connect instance with all the supported
         * channels enabled. It does not attach any storage, such as Amazon Simple Storage
         * Service (Amazon S3) or Amazon Kinesis. It also does not allow for any
         * configurations on features, such as Contact Lens for Amazon Connect. </p>
         * <p>Amazon Connect enforces a limit on the total number of instances that you can
         * create or delete in 30 days. If you exceed this limit, you will get an error
         * message indicating there has been an excessive number of attempts at creating or
         * deleting instances. You must wait 30 days before you can restart creating and
         * deleting instances in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest& request) const;


        /**
         * <p>Creates an Amazon Web Services resource association with an Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateIntegrationAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntegrationAssociationOutcome CreateIntegrationAssociation(const Model::CreateIntegrationAssociationRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates a new queue for the specified Amazon Connect
         * instance.</p>  <p>If the number being used in the input is claimed to
         * a traffic distribution group, and you are calling this API using an instance in
         * the Amazon Web Services Region where the traffic distribution group was created,
         * you can use either a full phone number ARN or UUID value for the
         * <code>OutboundCallerIdNumberId</code> value of the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_OutboundCallerConfig">OutboundCallerConfig</a>
         * request body parameter. However, if the number is claimed to a traffic
         * distribution group and you are calling this API using an instance in the
         * alternate Amazon Web Services Region associated with the traffic distribution
         * group, you must provide a full phone number ARN. If a UUID is provided in this
         * scenario, you will receive a <code>ResourceNotFoundException</code>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest& request) const;


        /**
         * <p>Creates a quick connect for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateQuickConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQuickConnectOutcome CreateQuickConnect(const Model::CreateQuickConnectRequest& request) const;


        /**
         * <p>Creates a new routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoutingProfileOutcome CreateRoutingProfile(const Model::CreateRoutingProfileRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates a security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityProfileOutcome CreateSecurityProfile(const Model::CreateSecurityProfileRequest& request) const;


        /**
         * <p>Creates a new task template in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTaskTemplateOutcome CreateTaskTemplate(const Model::CreateTaskTemplateRequest& request) const;


        /**
         * <p>Creates a traffic distribution group given an Amazon Connect instance that
         * has been replicated. </p> <p>For more information about creating traffic
         * distribution groups, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/setup-traffic-distribution-groups.html">Set
         * up traffic distribution groups</a> in the <i>Amazon Connect Administrator
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateTrafficDistributionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficDistributionGroupOutcome CreateTrafficDistributionGroup(const Model::CreateTrafficDistributionGroupRequest& request) const;


        /**
         * <p>Creates a use case for an integration association.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUseCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUseCaseOutcome CreateUseCase(const Model::CreateUseCaseRequest& request) const;


        /**
         * <p>Creates a user account for the specified Amazon Connect instance.</p> <p>For
         * information about how to create user accounts using the Amazon Connect console,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/user-management.html">Add
         * Users</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;


        /**
         * <p>Creates a new user hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserHierarchyGroupOutcome CreateUserHierarchyGroup(const Model::CreateUserHierarchyGroupRequest& request) const;


        /**
         * <p>Creates a custom vocabulary associated with your Amazon Connect instance. You
         * can set a custom vocabulary to be your default vocabulary for a given language.
         * Contact Lens for Amazon Connect uses the default vocabulary in post-call and
         * real-time contact analysis sessions for that language.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyOutcome CreateVocabulary(const Model::CreateVocabularyRequest& request) const;


        /**
         * <p>Deletes a flow for the specified Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactFlowOutcome DeleteContactFlow(const Model::DeleteContactFlowRequest& request) const;


        /**
         * <p>Deletes the specified flow module.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteContactFlowModule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactFlowModuleOutcome DeleteContactFlowModule(const Model::DeleteContactFlowModuleRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes an hours of operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHoursOfOperationOutcome DeleteHoursOfOperation(const Model::DeleteHoursOfOperationRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes the Amazon Connect instance.</p> <p>Amazon Connect
         * enforces a limit on the total number of instances that you can create or delete
         * in 30 days. If you exceed this limit, you will get an error message indicating
         * there has been an excessive number of attempts at creating or deleting
         * instances. You must wait 30 days before you can restart creating and deleting
         * instances in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;


        /**
         * <p>Deletes an Amazon Web Services resource association from an Amazon Connect
         * instance. The association must not have any use cases associated with
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteIntegrationAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationAssociationOutcome DeleteIntegrationAssociation(const Model::DeleteIntegrationAssociationRequest& request) const;


        /**
         * <p>Deletes a quick connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteQuickConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQuickConnectOutcome DeleteQuickConnect(const Model::DeleteQuickConnectRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes a security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityProfileOutcome DeleteSecurityProfile(const Model::DeleteSecurityProfileRequest& request) const;


        /**
         * <p>Deletes the task template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTaskTemplateOutcome DeleteTaskTemplate(const Model::DeleteTaskTemplateRequest& request) const;


        /**
         * <p>Deletes a traffic distribution group. This API can be called only in the
         * Region where the traffic distribution group is created.</p> <p>For more
         * information about deleting traffic distribution groups, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/delete-traffic-distribution-groups.html">Delete
         * traffic distribution groups</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteTrafficDistributionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficDistributionGroupOutcome DeleteTrafficDistributionGroup(const Model::DeleteTrafficDistributionGroupRequest& request) const;


        /**
         * <p>Deletes a use case from an integration association.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUseCase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUseCaseOutcome DeleteUseCase(const Model::DeleteUseCaseRequest& request) const;


        /**
         * <p>Deletes a user account from the specified Amazon Connect instance.</p> <p>For
         * information about what happens to a user's data when their account is deleted,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/delete-users.html">Delete
         * Users from Your Amazon Connect Instance</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;


        /**
         * <p>Deletes an existing user hierarchy group. It must not be associated with any
         * agents or have any active child groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserHierarchyGroupOutcome DeleteUserHierarchyGroup(const Model::DeleteUserHierarchyGroupRequest& request) const;


        /**
         * <p>Deletes the vocabulary that has the given identifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyOutcome DeleteVocabulary(const Model::DeleteVocabularyRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes an agent status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeAgentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgentStatusOutcome DescribeAgentStatus(const Model::DescribeAgentStatusRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the specified contact. </p>  <p>Contact
         * information remains available in Amazon Connect for 24 months, and then it is
         * deleted.</p> <p>Only data from November 12, 2021, and later is returned by this
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactOutcome DescribeContact(const Model::DescribeContactRequest& request) const;


        /**
         * <p>Describes the specified flow.</p> <p>You can also create and update flows
         * using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactFlowOutcome DescribeContactFlow(const Model::DescribeContactFlowRequest& request) const;


        /**
         * <p>Describes the specified flow module.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContactFlowModule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactFlowModuleOutcome DescribeContactFlowModule(const Model::DescribeContactFlowModuleRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the hours of operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHoursOfOperationOutcome DescribeHoursOfOperation(const Model::DescribeHoursOfOperationRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns the current state of the specified instance identifier.
         * It tracks the instance while it is being created and returns an error status, if
         * applicable. </p> <p>If an instance is not created successfully, the instance
         * status reason field returns details relevant to the reason. The instance in a
         * failed state is returned only for 24 hours after the CreateInstance API was
         * invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the specified instance attribute.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAttributeOutcome DescribeInstanceAttribute(const Model::DescribeInstanceAttributeRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Retrieves the current storage configurations for the specified
         * resource type, association ID, and instance ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceStorageConfigOutcome DescribeInstanceStorageConfig(const Model::DescribeInstanceStorageConfigRequest& request) const;


        /**
         * <p>Gets details and status of a phone number that’s claimed to your Amazon
         * Connect instance or traffic distribution group.</p>  <p>If the number
         * is claimed to a traffic distribution group, and you are calling in the Amazon
         * Web Services Region where the traffic distribution group was created, you can
         * use either a phone number ARN or UUID value for the <code>PhoneNumberId</code>
         * URI request parameter. However, if the number is claimed to a traffic
         * distribution group and you are calling this API in the alternate Amazon Web
         * Services Region associated with the traffic distribution group, you must provide
         * a full phone number ARN. If a UUID is provided in this scenario, you will
         * receive a <code>ResourceNotFoundException</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePhoneNumberOutcome DescribePhoneNumber(const Model::DescribePhoneNumberRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the specified queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQueueOutcome DescribeQueue(const Model::DescribeQueueRequest& request) const;


        /**
         * <p>Describes the quick connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeQuickConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQuickConnectOutcome DescribeQuickConnect(const Model::DescribeQuickConnectRequest& request) const;


        /**
         * <p>Describes the specified routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRoutingProfileOutcome DescribeRoutingProfile(const Model::DescribeRoutingProfileRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Gets basic information about the security profle.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityProfileOutcome DescribeSecurityProfile(const Model::DescribeSecurityProfileRequest& request) const;


        /**
         * <p>Gets details and status of a traffic distribution group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeTrafficDistributionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrafficDistributionGroupOutcome DescribeTrafficDistributionGroup(const Model::DescribeTrafficDistributionGroupRequest& request) const;


        /**
         * <p>Describes the specified user account. You can find the instance ID in the
         * console (it’s the final part of the ARN). The console does not display the user
         * IDs. Instead, list the users and note the IDs provided in the
         * output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;


        /**
         * <p>Describes the specified hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserHierarchyGroupOutcome DescribeUserHierarchyGroup(const Model::DescribeUserHierarchyGroupRequest& request) const;


        /**
         * <p>Describes the hierarchy structure of the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyStructure">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserHierarchyStructureOutcome DescribeUserHierarchyStructure(const Model::DescribeUserHierarchyStructureRequest& request) const;


        /**
         * <p>Describes the specified vocabulary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVocabularyOutcome DescribeVocabulary(const Model::DescribeVocabularyRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Revokes access to integrated applications from Amazon
         * Connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateApprovedOrigin">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApprovedOriginOutcome DisassociateApprovedOrigin(const Model::DisassociateApprovedOriginRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Revokes authorization from the specified instance to access the
         * specified Amazon Lex or Amazon Lex V2 bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateBotOutcome DisassociateBot(const Model::DisassociateBotRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Removes the storage type configurations for the specified
         * resource type and association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateInstanceStorageConfigOutcome DisassociateInstanceStorageConfig(const Model::DisassociateInstanceStorageConfigRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Remove the Lambda function from the dropdown options available in
         * the relevant flow blocks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLambdaFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLambdaFunctionOutcome DisassociateLambdaFunction(const Model::DisassociateLambdaFunctionRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Revokes authorization from the specified instance to access the
         * specified Amazon Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLexBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLexBotOutcome DisassociateLexBot(const Model::DisassociateLexBotRequest& request) const;


        /**
         * <p>Removes the flow association from a phone number claimed to your Amazon
         * Connect instance.</p>  <p>If the number is claimed to a traffic
         * distribution group, and you are calling this API using an instance in the Amazon
         * Web Services Region where the traffic distribution group was created, you can
         * use either a full phone number ARN or UUID value for the
         * <code>PhoneNumberId</code> URI request parameter. However, if the number is
         * claimed to a traffic distribution group and you are calling this API using an
         * instance in the alternate Amazon Web Services Region associated with the traffic
         * distribution group, you must provide a full phone number ARN. If a UUID is
         * provided in this scenario, you will receive a
         * <code>ResourceNotFoundException</code>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociatePhoneNumberContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumberContactFlowOutcome DisassociatePhoneNumberContactFlow(const Model::DisassociatePhoneNumberContactFlowRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Disassociates a set of quick connects from a queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateQueueQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateQueueQuickConnectsOutcome DisassociateQueueQuickConnects(const Model::DisassociateQueueQuickConnectsRequest& request) const;


        /**
         * <p>Disassociates a set of queues from a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRoutingProfileQueuesOutcome DisassociateRoutingProfileQueues(const Model::DisassociateRoutingProfileQueuesRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes the specified security key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateSecurityKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSecurityKeyOutcome DisassociateSecurityKey(const Model::DisassociateSecurityKeyRequest& request) const;


        /**
         * <p>Dismisses contacts from an agent’s CCP and returns the agent to an available
         * state, which allows the agent to receive a new routed contact. Contacts can only
         * be dismissed if they are in a <code>MISSED</code>, <code>ERROR</code>,
         * <code>ENDED</code>, or <code>REJECTED</code> state in the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">Agent
         * Event Stream</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DismissUserContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DismissUserContactOutcome DismissUserContact(const Model::DismissUserContactRequest& request) const;


        /**
         * <p>Retrieves the contact attributes for the specified contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetContactAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactAttributesOutcome GetContactAttributes(const Model::GetContactAttributesRequest& request) const;


        /**
         * <p>Gets the real-time metric data from the specified Amazon Connect
         * instance.</p> <p>For a description of each metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentMetricDataOutcome GetCurrentMetricData(const Model::GetCurrentMetricDataRequest& request) const;


        /**
         * <p>Gets the real-time active user data from the specified Amazon Connect
         * instance. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentUserData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentUserDataOutcome GetCurrentUserData(const Model::GetCurrentUserDataRequest& request) const;


        /**
         * <p>Retrieves a token for federation.</p>  <p>This API doesn't support root
         * users. If you try to invoke GetFederationToken with root credentials, an error
         * message similar to the following one appears: </p> <p> <code>Provided identity:
         * Principal: .... User: .... cannot be used for federation with Amazon
         * Connect</code> </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetFederationToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFederationTokenOutcome GetFederationToken(const Model::GetFederationTokenRequest& request) const;


        /**
         * <p>Gets historical metric data from the specified Amazon Connect instance.</p>
         * <p>For a description of each historical metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricDataOutcome GetMetricData(const Model::GetMetricDataRequest& request) const;


        /**
         * <p>Gets details about a specific task template in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTaskTemplateOutcome GetTaskTemplate(const Model::GetTaskTemplateRequest& request) const;


        /**
         * <p>Retrieves the current traffic distribution for a given traffic distribution
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetTrafficDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrafficDistributionOutcome GetTrafficDistribution(const Model::GetTrafficDistributionRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Lists agent statuses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListAgentStatuses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentStatusesOutcome ListAgentStatuses(const Model::ListAgentStatusesRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all approved origins associated with
         * the instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListApprovedOrigins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApprovedOriginsOutcome ListApprovedOrigins(const Model::ListApprovedOriginsRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>For the specified version of Amazon Lex, returns a paginated list
         * of all the Amazon Lex bots currently associated with the instance. Use this API
         * to returns both Amazon Lex V1 and V2 bots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;


        /**
         * <p>Provides information about the flow modules for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactFlowModules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactFlowModulesOutcome ListContactFlowModules(const Model::ListContactFlowModulesRequest& request) const;


        /**
         * <p>Provides information about the flows for the specified Amazon Connect
         * instance.</p> <p>You can also create and update flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p> <p>For more information about flows, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-contact-flows.html">Flows</a>
         * in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactFlowsOutcome ListContactFlows(const Model::ListContactFlowsRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>For the specified <code>referenceTypes</code>, returns a list of
         * references associated with the contact. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactReferencesOutcome ListContactReferences(const Model::ListContactReferencesRequest& request) const;


        /**
         * <p>Lists the default vocabularies for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListDefaultVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDefaultVocabulariesOutcome ListDefaultVocabularies(const Model::ListDefaultVocabulariesRequest& request) const;


        /**
         * <p>Provides information about the hours of operation for the specified Amazon
         * Connect instance.</p> <p>For more information about hours of operation, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-hours-operation.html">Set
         * the Hours of Operation for a Queue</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListHoursOfOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHoursOfOperationsOutcome ListHoursOfOperations(const Model::ListHoursOfOperationsRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all attribute types for the given
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceAttributesOutcome ListInstanceAttributes(const Model::ListInstanceAttributesRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of storage configs for the identified
         * instance and resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceStorageConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceStorageConfigsOutcome ListInstanceStorageConfigs(const Model::ListInstanceStorageConfigsRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Return a list of instances which are in active state,
         * creation-in-progress state, and failed state. Instances that aren't successfully
         * created (they are in a failed state) are returned only for 24 hours after the
         * CreateInstance API was invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;


        /**
         * <p>Provides summary information about the Amazon Web Services resource
         * associations for the specified Amazon Connect instance.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListIntegrationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntegrationAssociationsOutcome ListIntegrationAssociations(const Model::ListIntegrationAssociationsRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all Lambda functions that display in
         * the dropdown options in the relevant flow blocks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLambdaFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLambdaFunctionsOutcome ListLambdaFunctions(const Model::ListLambdaFunctionsRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all the Amazon Lex V1 bots currently
         * associated with the instance. To return both Amazon Lex V1 and V2 bots, use the
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListBots.html">ListBots</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLexBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLexBotsOutcome ListLexBots(const Model::ListLexBotsRequest& request) const;


        /**
         * <p>Provides information about the phone numbers for the specified Amazon Connect
         * instance. </p> <p>For more information about phone numbers, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set
         * Up Phone Numbers for Your Contact Center</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p>  <p>The phone number <code>Arn</code>
         * value that is returned from each of the items in the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListPhoneNumbers.html#connect-ListPhoneNumbers-response-PhoneNumberSummaryList">PhoneNumberSummaryList</a>
         * cannot be used to tag phone number resources. It will fail with a
         * <code>ResourceNotFoundException</code>. Instead, use the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListPhoneNumbersV2.html">ListPhoneNumbersV2</a>
         * API. It returns the new phone number ARN that can be used to tag phone number
         * resources.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersOutcome ListPhoneNumbers(const Model::ListPhoneNumbersRequest& request) const;


        /**
         * <p>Lists phone numbers claimed to your Amazon Connect instance or traffic
         * distribution group. If the provided <code>TargetArn</code> is a traffic
         * distribution group, you can call this API in both Amazon Web Services Regions
         * associated with traffic distribution group.</p> <p>For more information about
         * phone numbers, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set
         * Up Phone Numbers for Your Contact Center</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPhoneNumbersV2">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersV2Outcome ListPhoneNumbersV2(const Model::ListPhoneNumbersV2Request& request) const;


        /**
         * <p>Provides information about the prompts for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPrompts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPromptsOutcome ListPrompts(const Model::ListPromptsRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Lists the quick connects associated with a queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQueueQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueueQuickConnectsOutcome ListQueueQuickConnects(const Model::ListQueueQuickConnectsRequest& request) const;


        /**
         * <p>Provides information about the queues for the specified Amazon Connect
         * instance.</p> <p>If you do not specify a <code>QueueTypes</code> parameter, both
         * standard and agent queues are returned. This might cause an unexpected
         * truncation of results if you have more than 1000 agents and you limit the number
         * of results of the API call in code.</p> <p>For more information about queues,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-queues-standard-and-agent.html">Queues:
         * Standard and Agent</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;


        /**
         * <p>Provides information about the quick connects for the specified Amazon
         * Connect instance. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQuickConnectsOutcome ListQuickConnects(const Model::ListQuickConnectsRequest& request) const;


        /**
         * <p>Lists the queues associated with a routing profile.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutingProfileQueuesOutcome ListRoutingProfileQueues(const Model::ListRoutingProfileQueuesRequest& request) const;


        /**
         * <p>Provides summary information about the routing profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about routing profiles, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing.html">Routing
         * Profiles</a> and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/routing-profiles.html">Create
         * a Routing Profile</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutingProfilesOutcome ListRoutingProfiles(const Model::ListRoutingProfilesRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all security keys associated with the
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityKeysOutcome ListSecurityKeys(const Model::ListSecurityKeysRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Lists the permissions granted to a security
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfilePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilePermissionsOutcome ListSecurityProfilePermissions(const Model::ListSecurityProfilePermissionsRequest& request) const;


        /**
         * <p>Provides summary information about the security profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about security profiles,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-security-profiles.html">Security
         * Profiles</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilesOutcome ListSecurityProfiles(const Model::ListSecurityProfilesRequest& request) const;


        /**
         * <p>Lists the tags for the specified resource.</p> <p>For sample policies that
         * use tags, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists task templates for the specified Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTaskTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaskTemplatesOutcome ListTaskTemplates(const Model::ListTaskTemplatesRequest& request) const;


        /**
         * <p>Lists traffic distribution groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTrafficDistributionGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrafficDistributionGroupsOutcome ListTrafficDistributionGroups(const Model::ListTrafficDistributionGroupsRequest& request) const;


        /**
         * <p>Lists the use cases for the integration association. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUseCases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUseCasesOutcome ListUseCases(const Model::ListUseCasesRequest& request) const;


        /**
         * <p>Provides summary information about the hierarchy groups for the specified
         * Amazon Connect instance.</p> <p>For more information about agent hierarchies,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/agent-hierarchy.html">Set
         * Up Agent Hierarchies</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUserHierarchyGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserHierarchyGroupsOutcome ListUserHierarchyGroups(const Model::ListUserHierarchyGroupsRequest& request) const;


        /**
         * <p>Provides summary information about the users for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;


        /**
         * <p>Initiates silent monitoring of a contact. The Contact Control Panel (CCP) of
         * the user specified by <i>userId</i> will be set to silent monitoring mode on the
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MonitorContact">AWS
         * API Reference</a></p>
         */
        virtual Model::MonitorContactOutcome MonitorContact(const Model::MonitorContactRequest& request) const;


        /**
         * <p>Changes the current status of a user or agent in Amazon Connect. If the agent
         * is currently handling a contact, this sets the agent's next status.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-agent-status.html">Agent
         * status</a> and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-next-status.html">Set
         * your next status</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PutUserStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUserStatusOutcome PutUserStatus(const Model::PutUserStatusRequest& request) const;


        /**
         * <p>Releases a phone number previously claimed to an Amazon Connect instance or
         * traffic distribution group. You can call this API only in the Amazon Web
         * Services Region where the number was claimed.</p>  <p>To release
         * phone numbers from a traffic distribution group, use the
         * <code>ReleasePhoneNumber</code> API, not the Amazon Connect console.</p>
         * <p>After releasing a phone number, the phone number enters into a cooldown
         * period of 30 days. It cannot be searched for or claimed again until the period
         * has ended. If you accidentally release a phone number, contact Amazon Web
         * Services Support.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReleasePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleasePhoneNumberOutcome ReleasePhoneNumber(const Model::ReleasePhoneNumberRequest& request) const;


        /**
         * <p>Replicates an Amazon Connect instance in the specified Amazon Web Services
         * Region.</p> <p>For more information about replicating an Amazon Connect
         * instance, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/create-replica-connect-instance.html">Create
         * a replica of your existing Amazon Connect instance</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReplicateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplicateInstanceOutcome ReplicateInstance(const Model::ReplicateInstanceRequest& request) const;


        /**
         * <p>When a contact is being recorded, and the recording has been suspended using
         * SuspendContactRecording, this API resumes recording the call.</p> <p>Only voice
         * recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ResumeContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeContactRecordingOutcome ResumeContactRecording(const Model::ResumeContactRecordingRequest& request) const;


        /**
         * <p>Searches for available phone numbers that you can claim to your Amazon
         * Connect instance or traffic distribution group. If the provided
         * <code>TargetArn</code> is a traffic distribution group, you can call this API in
         * both Amazon Web Services Regions associated with the traffic distribution
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAvailablePhoneNumbersOutcome SearchAvailablePhoneNumbers(const Model::SearchAvailablePhoneNumbersRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Searches queues in an Amazon Connect instance, with optional
         * filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchQueuesOutcome SearchQueues(const Model::SearchQueuesRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Searches routing profiles in an Amazon Connect instance, with
         * optional filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchRoutingProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRoutingProfilesOutcome SearchRoutingProfiles(const Model::SearchRoutingProfilesRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Searches security profiles in an Amazon Connect instance, with
         * optional filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSecurityProfilesOutcome SearchSecurityProfiles(const Model::SearchSecurityProfilesRequest& request) const;


        /**
         * <p>Searches users in an Amazon Connect instance, with optional filtering.</p>
         *  <p> <code>AfterContactWorkTimeLimit</code> is returned in milliseconds.
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchUsersOutcome SearchUsers(const Model::SearchUsersRequest& request) const;


        /**
         * <p>Searches for vocabularies within a specific Amazon Connect instance using
         * <code>State</code>, <code>NameStartsWith</code>, and
         * <code>LanguageCode</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchVocabulariesOutcome SearchVocabularies(const Model::SearchVocabulariesRequest& request) const;


        /**
         * <p>Initiates a flow to start a new chat for the customer. Response of this API
         * provides a token required to obtain credentials from the <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * API in the Amazon Connect Participant Service.</p> <p>When a new chat contact is
         * successfully created, clients must subscribe to the participant’s connection for
         * the created chat within 5 minutes. This is achieved by invoking <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * with WEBSOCKET and CONNECTION_CREDENTIALS. </p> <p>A 429 error occurs in the
         * following situations:</p> <ul> <li> <p>API rate limit is exceeded. API TPS
         * throttling returns a <code>TooManyRequests</code> exception.</p> </li> <li>
         * <p>The <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">quota
         * for concurrent active chats</a> is exceeded. Active chat throttling returns a
         * <code>LimitExceededException</code>.</p> </li> </ul> <p>If you use the
         * <code>ChatDurationInMinutes</code> parameter and receive a 400 error, your
         * account may not support the ability to configure custom chat durations. For more
         * information, contact Amazon Web Services Support. </p> <p>For more information
         * about chat, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat.html">Chat</a>
         * in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartChatContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChatContactOutcome StartChatContact(const Model::StartChatContactRequest& request) const;


        /**
         * <p>Starts recording the contact: </p> <ul> <li> <p>If the API is called
         * <i>before</i> the agent joins the call, recording starts when the agent joins
         * the call.</p> </li> <li> <p>If the API is called <i>after</i> the agent joins
         * the call, recording starts at the time of the API call.</p> </li> </ul>
         * <p>StartContactRecording is a one-time action. For example, if you use
         * StopContactRecording to stop recording an ongoing call, you can't use
         * StartContactRecording to restart it. For scenarios where the recording has
         * started and you want to suspend and resume it, such as when collecting sensitive
         * information (for example, a credit card number), use SuspendContactRecording and
         * ResumeContactRecording.</p> <p>You can use this API to override the recording
         * behavior configured in the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-recording-behavior.html">Set
         * recording behavior</a> block.</p> <p>Only voice recordings are supported at this
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContactRecordingOutcome StartContactRecording(const Model::StartContactRecordingRequest& request) const;


        /**
         * <p> Initiates real-time message streaming for a new chat contact.</p> <p> For
         * more information about message streaming, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-message-streaming.html">Enable
         * real-time chat message streaming</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartContactStreaming">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContactStreamingOutcome StartContactStreaming(const Model::StartContactStreamingRequest& request) const;


        /**
         * <p>Places an outbound call to a contact, and then initiates the flow. It
         * performs the actions in the flow that's specified (in
         * <code>ContactFlowId</code>).</p> <p>Agents do not initiate the outbound API,
         * which means that they do not dial the contact. If the flow places an outbound
         * call to a contact, and then puts the contact in queue, the call is then routed
         * to the agent, like any other inbound case.</p> <p>There is a 60-second dialing
         * timeout for this operation. If the call is not connected after 60 seconds, it
         * fails.</p>  <p>UK numbers with a 447 prefix are not allowed by default.
         * Before you can dial these UK mobile numbers, you must submit a service quota
         * increase request. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
         * Connect Service Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p>   <p>Campaign calls are not allowed by default. Before you can
         * make a call with <code>TrafficType</code> = <code>CAMPAIGN</code>, you must
         * submit a service quota increase request to the quota <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html#outbound-communications-quotas">Amazon
         * Connect campaigns</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartOutboundVoiceContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOutboundVoiceContactOutcome StartOutboundVoiceContact(const Model::StartOutboundVoiceContactRequest& request) const;


        /**
         * <p>Initiates a flow to start a new task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartTaskContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTaskContactOutcome StartTaskContact(const Model::StartTaskContactRequest& request) const;


        /**
         * <p>Ends the specified contact. This call does not work for the following
         * initiation methods:</p> <ul> <li> <p>DISCONNECT</p> </li> <li> <p>TRANSFER</p>
         * </li> <li> <p>QUEUE_TRANSFER</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactOutcome StopContact(const Model::StopContactRequest& request) const;


        /**
         * <p>Stops recording a call when a contact is being recorded. StopContactRecording
         * is a one-time action. If you use StopContactRecording to stop recording an
         * ongoing call, you can't use StartContactRecording to restart it. For scenarios
         * where the recording has started and you want to suspend it for sensitive
         * information (for example, to collect a credit card number), and then restart it,
         * use SuspendContactRecording and ResumeContactRecording.</p> <p>Only voice
         * recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactRecordingOutcome StopContactRecording(const Model::StopContactRecordingRequest& request) const;


        /**
         * <p> Ends message streaming on a specified contact. To restart message streaming
         * on that contact, call the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartContactStreaming.html">StartContactStreaming</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContactStreaming">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactStreamingOutcome StopContactStreaming(const Model::StopContactStreamingRequest& request) const;


        /**
         * <p>When a contact is being recorded, this API suspends recording the call. For
         * example, you might suspend the call recording while collecting sensitive
         * information, such as a credit card number. Then use ResumeContactRecording to
         * restart recording. </p> <p>The period of time that the recording is suspended is
         * filled with silence in the final recording. </p> <p>Only voice recordings are
         * supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SuspendContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::SuspendContactRecordingOutcome SuspendContactRecording(const Model::SuspendContactRecordingRequest& request) const;


        /**
         * <p>Adds the specified tags to the specified resource.</p> <p>Some of the
         * supported resource types are agents, routing profiles, queues, quick connects,
         * contact flows, agent statuses, hours of operation, phone numbers, security
         * profiles, and task templates. For a complete list, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/tagging.html">Tagging
         * resources in Amazon Connect</a>.</p> <p>For sample policies that use tags, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Transfers contacts from one agent or queue to another agent or queue at any
         * point after a contact is created. You can transfer a contact to another queue by
         * providing the flow which orchestrates the contact to the destination queue. This
         * gives you more control over contact handling and helps you adhere to the service
         * level agreement (SLA) guaranteed to your customers.</p> <p>Note the following
         * requirements:</p> <ul> <li> <p>Transfer is supported for only <code>TASK</code>
         * contacts.</p> </li> <li> <p>Do not use both <code>QueueId</code> and
         * <code>UserId</code> in the same call.</p> </li> <li> <p>The following flow types
         * are supported: Inbound flow, Transfer to agent flow, and Transfer to queue
         * flow.</p> </li> <li> <p>The <code>TransferContact</code> API can be called only
         * on active contacts.</p> </li> <li> <p>A contact cannot be transferred more than
         * 11 times.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TransferContact">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferContactOutcome TransferContact(const Model::TransferContactRequest& request) const;


        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates agent status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateAgentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentStatusOutcome UpdateAgentStatus(const Model::UpdateAgentStatusRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Adds or updates user-defined contact information associated with
         * the specified contact. At least one field to be updated must be present in the
         * request.</p>  <p>You can add or update user-defined contact
         * information for both ongoing and completed contacts.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;


        /**
         * <p>Creates or updates user-defined contact attributes associated with the
         * specified contact.</p> <p>You can create or update user-defined attributes for
         * both ongoing and completed contacts. For example, while the call is active, you
         * can update the customer's name or the reason the customer called. You can add
         * notes about steps that the agent took during the call that display to the next
         * agent that takes the call. You can also update attributes for a contact using
         * data from your CRM application and save the data with the contact in Amazon
         * Connect. You could also flag calls for additional analysis, such as legal review
         * or to identify abusive callers.</p> <p>Contact attributes are available in
         * Amazon Connect for 24 months, and are then deleted. For information about
         * contact record retention and the maximum size of the contact record attributes
         * section, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html#feature-limits">Feature
         * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactAttributesOutcome UpdateContactAttributes(const Model::UpdateContactAttributesRequest& request) const;


        /**
         * <p>Updates the specified flow.</p> <p>You can also create and update flows using
         * the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowContentOutcome UpdateContactFlowContent(const Model::UpdateContactFlowContentRequest& request) const;


        /**
         * <p>Updates metadata about specified flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowMetadataOutcome UpdateContactFlowMetadata(const Model::UpdateContactFlowMetadataRequest& request) const;


        /**
         * <p>Updates specified flow module for the specified Amazon Connect instance.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowModuleContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowModuleContentOutcome UpdateContactFlowModuleContent(const Model::UpdateContactFlowModuleContentRequest& request) const;


        /**
         * <p>Updates metadata about specified flow module.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowModuleMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowModuleMetadataOutcome UpdateContactFlowModuleMetadata(const Model::UpdateContactFlowModuleMetadataRequest& request) const;


        /**
         * <p>The name of the flow.</p> <p>You can also create and update flows using the
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowNameOutcome UpdateContactFlowName(const Model::UpdateContactFlowNameRequest& request) const;


        /**
         * <p>Updates the scheduled time of a task contact that is already
         * scheduled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactScheduleOutcome UpdateContactSchedule(const Model::UpdateContactScheduleRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the hours of operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHoursOfOperationOutcome UpdateHoursOfOperation(const Model::UpdateHoursOfOperationRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the value for the specified attribute type.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceAttributeOutcome UpdateInstanceAttribute(const Model::UpdateInstanceAttributeRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates an existing configuration for a resource type. This API
         * is idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceStorageConfigOutcome UpdateInstanceStorageConfig(const Model::UpdateInstanceStorageConfigRequest& request) const;


        /**
         * <p>Updates your claimed phone number from its current Amazon Connect instance or
         * traffic distribution group to another Amazon Connect instance or traffic
         * distribution group in the same Amazon Web Services Region.</p> 
         * <p>You can call <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribePhoneNumber.html">DescribePhoneNumber</a>
         * API to verify the status of a previous <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumber.html">UpdatePhoneNumber</a>
         * operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberOutcome UpdatePhoneNumber(const Model::UpdatePhoneNumberRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the hours of operation for the specified
         * queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueHoursOfOperationOutcome UpdateQueueHoursOfOperation(const Model::UpdateQueueHoursOfOperationRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the maximum number of contacts allowed in a queue before
         * it is considered full.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueMaxContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueMaxContactsOutcome UpdateQueueMaxContacts(const Model::UpdateQueueMaxContactsRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the name and description of a queue. At least
         * <code>Name</code> or <code>Description</code> must be provided.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueNameOutcome UpdateQueueName(const Model::UpdateQueueNameRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the outbound caller ID name, number, and outbound whisper
         * flow for a specified queue.</p>  <p>If the number being used in the
         * input is claimed to a traffic distribution group, and you are calling this API
         * using an instance in the Amazon Web Services Region where the traffic
         * distribution group was created, you can use either a full phone number ARN or
         * UUID value for the <code>OutboundCallerIdNumberId</code> value of the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_OutboundCallerConfig">OutboundCallerConfig</a>
         * request body parameter. However, if the number is claimed to a traffic
         * distribution group and you are calling this API using an instance in the
         * alternate Amazon Web Services Region associated with the traffic distribution
         * group, you must provide a full phone number ARN. If a UUID is provided in this
         * scenario, you will receive a <code>ResourceNotFoundException</code>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueOutboundCallerConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueOutboundCallerConfigOutcome UpdateQueueOutboundCallerConfig(const Model::UpdateQueueOutboundCallerConfigRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the status of the queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueStatusOutcome UpdateQueueStatus(const Model::UpdateQueueStatusRequest& request) const;


        /**
         * <p>Updates the configuration settings for the specified quick
         * connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQuickConnectConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQuickConnectConfigOutcome UpdateQuickConnectConfig(const Model::UpdateQuickConnectConfigRequest& request) const;


        /**
         * <p>Updates the name and description of a quick connect. The request accepts the
         * following data in JSON format. At least <code>Name</code> or
         * <code>Description</code> must be provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQuickConnectName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQuickConnectNameOutcome UpdateQuickConnectName(const Model::UpdateQuickConnectNameRequest& request) const;


        /**
         * <p>Updates the channels that agents can handle in the Contact Control Panel
         * (CCP) for a routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileConcurrencyOutcome UpdateRoutingProfileConcurrency(const Model::UpdateRoutingProfileConcurrencyRequest& request) const;


        /**
         * <p>Updates the default outbound queue of a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileDefaultOutboundQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileDefaultOutboundQueueOutcome UpdateRoutingProfileDefaultOutboundQueue(const Model::UpdateRoutingProfileDefaultOutboundQueueRequest& request) const;


        /**
         * <p>Updates the name and description of a routing profile. The request accepts
         * the following data in JSON format. At least <code>Name</code> or
         * <code>Description</code> must be provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileNameOutcome UpdateRoutingProfileName(const Model::UpdateRoutingProfileNameRequest& request) const;


        /**
         * <p>Updates the properties associated with a set of queues for a routing
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileQueuesOutcome UpdateRoutingProfileQueues(const Model::UpdateRoutingProfileQueuesRequest& request) const;


        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates a security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityProfileOutcome UpdateSecurityProfile(const Model::UpdateSecurityProfileRequest& request) const;


        /**
         * <p>Updates details about a specific task template in the specified Amazon
         * Connect instance. This operation does not support partial updates. Instead it
         * does a full update of template content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTaskTemplateOutcome UpdateTaskTemplate(const Model::UpdateTaskTemplateRequest& request) const;


        /**
         * <p>Updates the traffic distribution for a given traffic distribution group. </p>
         * <p>For more information about updating a traffic distribution group, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/update-telephony-traffic-distribution.html">Update
         * telephony traffic distribution across Amazon Web Services Regions </a> in the
         * <i>Amazon Connect Administrator Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateTrafficDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrafficDistributionOutcome UpdateTrafficDistribution(const Model::UpdateTrafficDistributionRequest& request) const;


        /**
         * <p>Assigns the specified hierarchy group to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyOutcome UpdateUserHierarchy(const Model::UpdateUserHierarchyRequest& request) const;


        /**
         * <p>Updates the name of the user hierarchy group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyGroupName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyGroupNameOutcome UpdateUserHierarchyGroupName(const Model::UpdateUserHierarchyGroupNameRequest& request) const;


        /**
         * <p>Updates the user hierarchy structure: add, remove, and rename user hierarchy
         * levels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyStructure">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyStructureOutcome UpdateUserHierarchyStructure(const Model::UpdateUserHierarchyStructureRequest& request) const;


        /**
         * <p>Updates the identity information for the specified user.</p> 
         * <p>We strongly recommend limiting who has the ability to invoke
         * <code>UpdateUserIdentityInfo</code>. Someone with that ability can change the
         * login credentials of other users by changing their email address. This poses a
         * security risk to your organization. They can change the email address of a user
         * to the attacker's email address, and then reset the password through email. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-best-practices.html">Best
         * Practices for Security Profiles</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserIdentityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserIdentityInfoOutcome UpdateUserIdentityInfo(const Model::UpdateUserIdentityInfoRequest& request) const;


        /**
         * <p>Updates the phone configuration settings for the specified
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserPhoneConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPhoneConfigOutcome UpdateUserPhoneConfig(const Model::UpdateUserPhoneConfigRequest& request) const;


        /**
         * <p>Assigns the specified routing profile to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserRoutingProfileOutcome UpdateUserRoutingProfile(const Model::UpdateUserRoutingProfileRequest& request) const;


        /**
         * <p>Assigns the specified security profiles to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSecurityProfilesOutcome UpdateUserSecurityProfiles(const Model::UpdateUserSecurityProfilesRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ConnectClientConfiguration& clientConfiguration);

      ConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace Connect
} // namespace Aws
