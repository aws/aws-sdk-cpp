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

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connect/model/CreateUserResult.h>
#include <aws/connect/model/DescribeUserResult.h>
#include <aws/connect/model/DescribeUserHierarchyGroupResult.h>
#include <aws/connect/model/DescribeUserHierarchyStructureResult.h>
#include <aws/connect/model/GetContactAttributesResult.h>
#include <aws/connect/model/GetCurrentMetricDataResult.h>
#include <aws/connect/model/GetFederationTokenResult.h>
#include <aws/connect/model/GetMetricDataResult.h>
#include <aws/connect/model/ListRoutingProfilesResult.h>
#include <aws/connect/model/ListSecurityProfilesResult.h>
#include <aws/connect/model/ListUserHierarchyGroupsResult.h>
#include <aws/connect/model/ListUsersResult.h>
#include <aws/connect/model/StartOutboundVoiceContactResult.h>
#include <aws/connect/model/StopContactResult.h>
#include <aws/connect/model/UpdateContactAttributesResult.h>
#include <aws/core/NoResult.h>
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

namespace Connect
{

namespace Model
{
        class CreateUserRequest;
        class DeleteUserRequest;
        class DescribeUserRequest;
        class DescribeUserHierarchyGroupRequest;
        class DescribeUserHierarchyStructureRequest;
        class GetContactAttributesRequest;
        class GetCurrentMetricDataRequest;
        class GetFederationTokenRequest;
        class GetMetricDataRequest;
        class ListRoutingProfilesRequest;
        class ListSecurityProfilesRequest;
        class ListUserHierarchyGroupsRequest;
        class ListUsersRequest;
        class StartOutboundVoiceContactRequest;
        class StopContactRequest;
        class UpdateContactAttributesRequest;
        class UpdateUserHierarchyRequest;
        class UpdateUserIdentityInfoRequest;
        class UpdateUserPhoneConfigRequest;
        class UpdateUserRoutingProfileRequest;
        class UpdateUserSecurityProfilesRequest;

        typedef Aws::Utils::Outcome<CreateUserResult, Aws::Client::AWSError<ConnectErrors>> CreateUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConnectErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DescribeUserResult, Aws::Client::AWSError<ConnectErrors>> DescribeUserOutcome;
        typedef Aws::Utils::Outcome<DescribeUserHierarchyGroupResult, Aws::Client::AWSError<ConnectErrors>> DescribeUserHierarchyGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeUserHierarchyStructureResult, Aws::Client::AWSError<ConnectErrors>> DescribeUserHierarchyStructureOutcome;
        typedef Aws::Utils::Outcome<GetContactAttributesResult, Aws::Client::AWSError<ConnectErrors>> GetContactAttributesOutcome;
        typedef Aws::Utils::Outcome<GetCurrentMetricDataResult, Aws::Client::AWSError<ConnectErrors>> GetCurrentMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetFederationTokenResult, Aws::Client::AWSError<ConnectErrors>> GetFederationTokenOutcome;
        typedef Aws::Utils::Outcome<GetMetricDataResult, Aws::Client::AWSError<ConnectErrors>> GetMetricDataOutcome;
        typedef Aws::Utils::Outcome<ListRoutingProfilesResult, Aws::Client::AWSError<ConnectErrors>> ListRoutingProfilesOutcome;
        typedef Aws::Utils::Outcome<ListSecurityProfilesResult, Aws::Client::AWSError<ConnectErrors>> ListSecurityProfilesOutcome;
        typedef Aws::Utils::Outcome<ListUserHierarchyGroupsResult, Aws::Client::AWSError<ConnectErrors>> ListUserHierarchyGroupsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<ConnectErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<StartOutboundVoiceContactResult, Aws::Client::AWSError<ConnectErrors>> StartOutboundVoiceContactOutcome;
        typedef Aws::Utils::Outcome<StopContactResult, Aws::Client::AWSError<ConnectErrors>> StopContactOutcome;
        typedef Aws::Utils::Outcome<UpdateContactAttributesResult, Aws::Client::AWSError<ConnectErrors>> UpdateContactAttributesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConnectErrors>> UpdateUserHierarchyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConnectErrors>> UpdateUserIdentityInfoOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConnectErrors>> UpdateUserPhoneConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConnectErrors>> UpdateUserRoutingProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConnectErrors>> UpdateUserSecurityProfilesOutcome;

        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
        typedef std::future<DescribeUserHierarchyGroupOutcome> DescribeUserHierarchyGroupOutcomeCallable;
        typedef std::future<DescribeUserHierarchyStructureOutcome> DescribeUserHierarchyStructureOutcomeCallable;
        typedef std::future<GetContactAttributesOutcome> GetContactAttributesOutcomeCallable;
        typedef std::future<GetCurrentMetricDataOutcome> GetCurrentMetricDataOutcomeCallable;
        typedef std::future<GetFederationTokenOutcome> GetFederationTokenOutcomeCallable;
        typedef std::future<GetMetricDataOutcome> GetMetricDataOutcomeCallable;
        typedef std::future<ListRoutingProfilesOutcome> ListRoutingProfilesOutcomeCallable;
        typedef std::future<ListSecurityProfilesOutcome> ListSecurityProfilesOutcomeCallable;
        typedef std::future<ListUserHierarchyGroupsOutcome> ListUserHierarchyGroupsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<StartOutboundVoiceContactOutcome> StartOutboundVoiceContactOutcomeCallable;
        typedef std::future<StopContactOutcome> StopContactOutcomeCallable;
        typedef std::future<UpdateContactAttributesOutcome> UpdateContactAttributesOutcomeCallable;
        typedef std::future<UpdateUserHierarchyOutcome> UpdateUserHierarchyOutcomeCallable;
        typedef std::future<UpdateUserIdentityInfoOutcome> UpdateUserIdentityInfoOutcomeCallable;
        typedef std::future<UpdateUserPhoneConfigOutcome> UpdateUserPhoneConfigOutcomeCallable;
        typedef std::future<UpdateUserRoutingProfileOutcome> UpdateUserRoutingProfileOutcomeCallable;
        typedef std::future<UpdateUserSecurityProfilesOutcome> UpdateUserSecurityProfilesOutcomeCallable;
} // namespace Model

  class ConnectClient;

    typedef std::function<void(const ConnectClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserHierarchyGroupRequest&, const Model::DescribeUserHierarchyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserHierarchyGroupResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::DescribeUserHierarchyStructureRequest&, const Model::DescribeUserHierarchyStructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserHierarchyStructureResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetContactAttributesRequest&, const Model::GetContactAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetCurrentMetricDataRequest&, const Model::GetCurrentMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCurrentMetricDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetFederationTokenRequest&, const Model::GetFederationTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFederationTokenResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::GetMetricDataRequest&, const Model::GetMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricDataResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListRoutingProfilesRequest&, const Model::ListRoutingProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutingProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListSecurityProfilesRequest&, const Model::ListSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityProfilesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUserHierarchyGroupsRequest&, const Model::ListUserHierarchyGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserHierarchyGroupsResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StartOutboundVoiceContactRequest&, const Model::StartOutboundVoiceContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOutboundVoiceContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::StopContactRequest&, const Model::StopContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContactResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateContactAttributesRequest&, const Model::UpdateContactAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactAttributesResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserHierarchyRequest&, const Model::UpdateUserHierarchyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserHierarchyResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserIdentityInfoRequest&, const Model::UpdateUserIdentityInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserIdentityInfoResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserPhoneConfigRequest&, const Model::UpdateUserPhoneConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserPhoneConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserRoutingProfileRequest&, const Model::UpdateUserRoutingProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserRoutingProfileResponseReceivedHandler;
    typedef std::function<void(const ConnectClient*, const Model::UpdateUserSecurityProfilesRequest&, const Model::UpdateUserSecurityProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSecurityProfilesResponseReceivedHandler;

  /**
   * <p>The Amazon Connect API Reference provides descriptions, syntax, and usage
   * examples for each of the Amazon Connect actions, data types, parameters, and
   * errors. Amazon Connect is a cloud-based contact center solution that makes it
   * easy to set up and manage a customer contact center and provide reliable
   * customer engagement at any scale.</p> <p>Throttling limits for the Amazon
   * Connect API operations:</p> <p>For the <code>GetMetricData</code> and
   * <code>GetCurrentMetricData</code> operations, a RateLimit of 5 per second, and a
   * BurstLimit of 8 per second.</p> <p>For all other operations, a RateLimit of 2
   * per second, and a BurstLimit of 5 per second.</p> <p>You can request an increase
   * to the throttling limits by submitting a <a
   * href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase">Amazon
   * Connect service limits increase form</a>. You must be signed in to your AWS
   * account to access the form.</p>
   */
  class AWS_CONNECT_API ConnectClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ConnectClient();

        inline virtual const char* GetServiceClientName() const override { return "Connect"; }


        /**
         * <p>Creates a new user account in your Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a new user account in your Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a new user account in your Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user account from Amazon Connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a user account from Amazon Connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a user account from Amazon Connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a <code>User</code> object that contains information about the user
         * account specified by the <code>UserId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * <p>Returns a <code>User</code> object that contains information about the user
         * account specified by the <code>UserId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request) const;

        /**
         * <p>Returns a <code>User</code> object that contains information about the user
         * account specified by the <code>UserId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a <code>HierarchyGroup</code> object that includes information about
         * a hierarchy group in your instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserHierarchyGroupOutcome DescribeUserHierarchyGroup(const Model::DescribeUserHierarchyGroupRequest& request) const;

        /**
         * <p>Returns a <code>HierarchyGroup</code> object that includes information about
         * a hierarchy group in your instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserHierarchyGroupOutcomeCallable DescribeUserHierarchyGroupCallable(const Model::DescribeUserHierarchyGroupRequest& request) const;

        /**
         * <p>Returns a <code>HierarchyGroup</code> object that includes information about
         * a hierarchy group in your instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserHierarchyGroupAsync(const Model::DescribeUserHierarchyGroupRequest& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a <code>HiearchyGroupStructure</code> object, which contains data
         * about the levels in the agent hierarchy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyStructure">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserHierarchyStructureOutcome DescribeUserHierarchyStructure(const Model::DescribeUserHierarchyStructureRequest& request) const;

        /**
         * <p>Returns a <code>HiearchyGroupStructure</code> object, which contains data
         * about the levels in the agent hierarchy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyStructure">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserHierarchyStructureOutcomeCallable DescribeUserHierarchyStructureCallable(const Model::DescribeUserHierarchyStructureRequest& request) const;

        /**
         * <p>Returns a <code>HiearchyGroupStructure</code> object, which contains data
         * about the levels in the agent hierarchy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyStructure">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserHierarchyStructureAsync(const Model::DescribeUserHierarchyStructureRequest& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the contact attributes associated with a contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetContactAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactAttributesOutcome GetContactAttributes(const Model::GetContactAttributesRequest& request) const;

        /**
         * <p>Retrieves the contact attributes associated with a contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetContactAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactAttributesOutcomeCallable GetContactAttributesCallable(const Model::GetContactAttributesRequest& request) const;

        /**
         * <p>Retrieves the contact attributes associated with a contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetContactAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactAttributesAsync(const Model::GetContactAttributesRequest& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>GetCurrentMetricData</code> operation retrieves current metric data
         * from your Amazon Connect instance.</p> <p>If you are using an IAM account, it
         * must have permission to the <code>connect:GetCurrentMetricData</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentMetricDataOutcome GetCurrentMetricData(const Model::GetCurrentMetricDataRequest& request) const;

        /**
         * <p>The <code>GetCurrentMetricData</code> operation retrieves current metric data
         * from your Amazon Connect instance.</p> <p>If you are using an IAM account, it
         * must have permission to the <code>connect:GetCurrentMetricData</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCurrentMetricDataOutcomeCallable GetCurrentMetricDataCallable(const Model::GetCurrentMetricDataRequest& request) const;

        /**
         * <p>The <code>GetCurrentMetricData</code> operation retrieves current metric data
         * from your Amazon Connect instance.</p> <p>If you are using an IAM account, it
         * must have permission to the <code>connect:GetCurrentMetricData</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCurrentMetricDataAsync(const Model::GetCurrentMetricDataRequest& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a token for federation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetFederationToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFederationTokenOutcome GetFederationToken(const Model::GetFederationTokenRequest& request) const;

        /**
         * <p>Retrieves a token for federation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetFederationToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFederationTokenOutcomeCallable GetFederationTokenCallable(const Model::GetFederationTokenRequest& request) const;

        /**
         * <p>Retrieves a token for federation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetFederationToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFederationTokenAsync(const Model::GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>GetMetricData</code> operation retrieves historical metrics data
         * from your Amazon Connect instance.</p> <p>If you are using an IAM account, it
         * must have permission to the <code>connect:GetMetricData</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricDataOutcome GetMetricData(const Model::GetMetricDataRequest& request) const;

        /**
         * <p>The <code>GetMetricData</code> operation retrieves historical metrics data
         * from your Amazon Connect instance.</p> <p>If you are using an IAM account, it
         * must have permission to the <code>connect:GetMetricData</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMetricDataOutcomeCallable GetMetricDataCallable(const Model::GetMetricDataRequest& request) const;

        /**
         * <p>The <code>GetMetricData</code> operation retrieves historical metrics data
         * from your Amazon Connect instance.</p> <p>If you are using an IAM account, it
         * must have permission to the <code>connect:GetMetricData</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMetricDataAsync(const Model::GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>RoutingProfileSummary</code> objects that includes
         * information about the routing profiles in your instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutingProfilesOutcome ListRoutingProfiles(const Model::ListRoutingProfilesRequest& request) const;

        /**
         * <p>Returns an array of <code>RoutingProfileSummary</code> objects that includes
         * information about the routing profiles in your instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoutingProfilesOutcomeCallable ListRoutingProfilesCallable(const Model::ListRoutingProfilesRequest& request) const;

        /**
         * <p>Returns an array of <code>RoutingProfileSummary</code> objects that includes
         * information about the routing profiles in your instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoutingProfilesAsync(const Model::ListRoutingProfilesRequest& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of SecurityProfileSummary objects that contain information
         * about the security profiles in your instance, including the ARN, Id, and Name of
         * the security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilesOutcome ListSecurityProfiles(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * <p>Returns an array of SecurityProfileSummary objects that contain information
         * about the security profiles in your instance, including the ARN, Id, and Name of
         * the security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityProfilesOutcomeCallable ListSecurityProfilesCallable(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * <p>Returns an array of SecurityProfileSummary objects that contain information
         * about the security profiles in your instance, including the ARN, Id, and Name of
         * the security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityProfilesAsync(const Model::ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a <code>UserHierarchyGroupSummaryList</code>, which is an array of
         * <code>HierarchyGroupSummary</code> objects that contain information about the
         * hierarchy groups in your instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUserHierarchyGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserHierarchyGroupsOutcome ListUserHierarchyGroups(const Model::ListUserHierarchyGroupsRequest& request) const;

        /**
         * <p>Returns a <code>UserHierarchyGroupSummaryList</code>, which is an array of
         * <code>HierarchyGroupSummary</code> objects that contain information about the
         * hierarchy groups in your instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUserHierarchyGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserHierarchyGroupsOutcomeCallable ListUserHierarchyGroupsCallable(const Model::ListUserHierarchyGroupsRequest& request) const;

        /**
         * <p>Returns a <code>UserHierarchyGroupSummaryList</code>, which is an array of
         * <code>HierarchyGroupSummary</code> objects that contain information about the
         * hierarchy groups in your instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUserHierarchyGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserHierarchyGroupsAsync(const Model::ListUserHierarchyGroupsRequest& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a <code>UserSummaryList</code>, which is an array of
         * <code>UserSummary</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * <p>Returns a <code>UserSummaryList</code>, which is an array of
         * <code>UserSummary</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * <p>Returns a <code>UserSummaryList</code>, which is an array of
         * <code>UserSummary</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>StartOutboundVoiceContact</code> operation initiates a contact flow
         * to place an outbound call to a customer.</p> <p>If you are using an IAM account,
         * it must have permission to the <code>connect:StartOutboundVoiceContact</code>
         * action.</p> <p>There is a 60 second dialing timeout for this operation. If the
         * call is not connected after 60 seconds, the call fails.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartOutboundVoiceContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOutboundVoiceContactOutcome StartOutboundVoiceContact(const Model::StartOutboundVoiceContactRequest& request) const;

        /**
         * <p>The <code>StartOutboundVoiceContact</code> operation initiates a contact flow
         * to place an outbound call to a customer.</p> <p>If you are using an IAM account,
         * it must have permission to the <code>connect:StartOutboundVoiceContact</code>
         * action.</p> <p>There is a 60 second dialing timeout for this operation. If the
         * call is not connected after 60 seconds, the call fails.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartOutboundVoiceContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOutboundVoiceContactOutcomeCallable StartOutboundVoiceContactCallable(const Model::StartOutboundVoiceContactRequest& request) const;

        /**
         * <p>The <code>StartOutboundVoiceContact</code> operation initiates a contact flow
         * to place an outbound call to a customer.</p> <p>If you are using an IAM account,
         * it must have permission to the <code>connect:StartOutboundVoiceContact</code>
         * action.</p> <p>There is a 60 second dialing timeout for this operation. If the
         * call is not connected after 60 seconds, the call fails.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartOutboundVoiceContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartOutboundVoiceContactAsync(const Model::StartOutboundVoiceContactRequest& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Ends the contact initiated by the <code>StartOutboundVoiceContact</code>
         * operation.</p> <p>If you are using an IAM account, it must have permission to
         * the <code>connect:StopContact</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactOutcome StopContact(const Model::StopContactRequest& request) const;

        /**
         * <p>Ends the contact initiated by the <code>StartOutboundVoiceContact</code>
         * operation.</p> <p>If you are using an IAM account, it must have permission to
         * the <code>connect:StopContact</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopContactOutcomeCallable StopContactCallable(const Model::StopContactRequest& request) const;

        /**
         * <p>Ends the contact initiated by the <code>StartOutboundVoiceContact</code>
         * operation.</p> <p>If you are using an IAM account, it must have permission to
         * the <code>connect:StopContact</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopContactAsync(const Model::StopContactRequest& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>UpdateContactAttributes</code> operation lets you programmatically
         * create new, or update existing, contact attributes associated with a contact.
         * You can use the operation to add or update attributes for both ongoing and
         * completed contacts. For example, you can update the customer's name or the
         * reason the customer called while the call is active, or add notes about steps
         * that the agent took during the call that are displayed to the next agent that
         * takes the call. You can also use the <code>UpdateContactAttributes</code>
         * operation to update attributes for a contact using data from your CRM
         * application and save the data with the contact in Amazon Connect. You could also
         * flag calls for additional analysis, such as legal review or identifying abusive
         * callers.</p> <p>Contact attributes are available in Amazon Connect for 24
         * months, and are then deleted.</p> <p> <i>Important:</i> </p> <p>You cannot use
         * the operation to update attributes for contacts that occurred prior to the
         * release of the API, September 12, 2018. You can update attributes only for
         * contacts that started after the release of the API. If you attempt to update
         * attributes for a contact that occurred prior to the release of the API, a 400
         * error is returned. This applies also to queued callbacks that were initiated
         * prior to the release of the API but are still active in your
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactAttributesOutcome UpdateContactAttributes(const Model::UpdateContactAttributesRequest& request) const;

        /**
         * <p>The <code>UpdateContactAttributes</code> operation lets you programmatically
         * create new, or update existing, contact attributes associated with a contact.
         * You can use the operation to add or update attributes for both ongoing and
         * completed contacts. For example, you can update the customer's name or the
         * reason the customer called while the call is active, or add notes about steps
         * that the agent took during the call that are displayed to the next agent that
         * takes the call. You can also use the <code>UpdateContactAttributes</code>
         * operation to update attributes for a contact using data from your CRM
         * application and save the data with the contact in Amazon Connect. You could also
         * flag calls for additional analysis, such as legal review or identifying abusive
         * callers.</p> <p>Contact attributes are available in Amazon Connect for 24
         * months, and are then deleted.</p> <p> <i>Important:</i> </p> <p>You cannot use
         * the operation to update attributes for contacts that occurred prior to the
         * release of the API, September 12, 2018. You can update attributes only for
         * contacts that started after the release of the API. If you attempt to update
         * attributes for a contact that occurred prior to the release of the API, a 400
         * error is returned. This applies also to queued callbacks that were initiated
         * prior to the release of the API but are still active in your
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactAttributesOutcomeCallable UpdateContactAttributesCallable(const Model::UpdateContactAttributesRequest& request) const;

        /**
         * <p>The <code>UpdateContactAttributes</code> operation lets you programmatically
         * create new, or update existing, contact attributes associated with a contact.
         * You can use the operation to add or update attributes for both ongoing and
         * completed contacts. For example, you can update the customer's name or the
         * reason the customer called while the call is active, or add notes about steps
         * that the agent took during the call that are displayed to the next agent that
         * takes the call. You can also use the <code>UpdateContactAttributes</code>
         * operation to update attributes for a contact using data from your CRM
         * application and save the data with the contact in Amazon Connect. You could also
         * flag calls for additional analysis, such as legal review or identifying abusive
         * callers.</p> <p>Contact attributes are available in Amazon Connect for 24
         * months, and are then deleted.</p> <p> <i>Important:</i> </p> <p>You cannot use
         * the operation to update attributes for contacts that occurred prior to the
         * release of the API, September 12, 2018. You can update attributes only for
         * contacts that started after the release of the API. If you attempt to update
         * attributes for a contact that occurred prior to the release of the API, a 400
         * error is returned. This applies also to queued callbacks that were initiated
         * prior to the release of the API but are still active in your
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactAttributesAsync(const Model::UpdateContactAttributesRequest& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the specified hierarchy group to the user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyOutcome UpdateUserHierarchy(const Model::UpdateUserHierarchyRequest& request) const;

        /**
         * <p>Assigns the specified hierarchy group to the user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserHierarchyOutcomeCallable UpdateUserHierarchyCallable(const Model::UpdateUserHierarchyRequest& request) const;

        /**
         * <p>Assigns the specified hierarchy group to the user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserHierarchyAsync(const Model::UpdateUserHierarchyRequest& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the identity information for the specified user in a
         * <code>UserIdentityInfo</code> object, including email, first name, and last
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserIdentityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserIdentityInfoOutcome UpdateUserIdentityInfo(const Model::UpdateUserIdentityInfoRequest& request) const;

        /**
         * <p>Updates the identity information for the specified user in a
         * <code>UserIdentityInfo</code> object, including email, first name, and last
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserIdentityInfo">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserIdentityInfoOutcomeCallable UpdateUserIdentityInfoCallable(const Model::UpdateUserIdentityInfoRequest& request) const;

        /**
         * <p>Updates the identity information for the specified user in a
         * <code>UserIdentityInfo</code> object, including email, first name, and last
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserIdentityInfo">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserIdentityInfoAsync(const Model::UpdateUserIdentityInfoRequest& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the phone configuration settings in the <code>UserPhoneConfig</code>
         * object for the specified user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserPhoneConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPhoneConfigOutcome UpdateUserPhoneConfig(const Model::UpdateUserPhoneConfigRequest& request) const;

        /**
         * <p>Updates the phone configuration settings in the <code>UserPhoneConfig</code>
         * object for the specified user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserPhoneConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserPhoneConfigOutcomeCallable UpdateUserPhoneConfigCallable(const Model::UpdateUserPhoneConfigRequest& request) const;

        /**
         * <p>Updates the phone configuration settings in the <code>UserPhoneConfig</code>
         * object for the specified user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserPhoneConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserPhoneConfigAsync(const Model::UpdateUserPhoneConfigRequest& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the specified routing profile to a user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserRoutingProfileOutcome UpdateUserRoutingProfile(const Model::UpdateUserRoutingProfileRequest& request) const;

        /**
         * <p>Assigns the specified routing profile to a user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserRoutingProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserRoutingProfileOutcomeCallable UpdateUserRoutingProfileCallable(const Model::UpdateUserRoutingProfileRequest& request) const;

        /**
         * <p>Assigns the specified routing profile to a user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserRoutingProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserRoutingProfileAsync(const Model::UpdateUserRoutingProfileRequest& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the security profiles assigned to the user.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSecurityProfilesOutcome UpdateUserSecurityProfiles(const Model::UpdateUserSecurityProfilesRequest& request) const;

        /**
         * <p>Updates the security profiles assigned to the user.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserSecurityProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserSecurityProfilesOutcomeCallable UpdateUserSecurityProfilesCallable(const Model::UpdateUserSecurityProfilesRequest& request) const;

        /**
         * <p>Updates the security profiles assigned to the user.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserSecurityProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserSecurityProfilesAsync(const Model::UpdateUserSecurityProfilesRequest& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserAsyncHelper(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserHierarchyGroupAsyncHelper(const Model::DescribeUserHierarchyGroupRequest& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserHierarchyStructureAsyncHelper(const Model::DescribeUserHierarchyStructureRequest& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactAttributesAsyncHelper(const Model::GetContactAttributesRequest& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCurrentMetricDataAsyncHelper(const Model::GetCurrentMetricDataRequest& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFederationTokenAsyncHelper(const Model::GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMetricDataAsyncHelper(const Model::GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutingProfilesAsyncHelper(const Model::ListRoutingProfilesRequest& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSecurityProfilesAsyncHelper(const Model::ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserHierarchyGroupsAsyncHelper(const Model::ListUserHierarchyGroupsRequest& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartOutboundVoiceContactAsyncHelper(const Model::StartOutboundVoiceContactRequest& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopContactAsyncHelper(const Model::StopContactRequest& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactAttributesAsyncHelper(const Model::UpdateContactAttributesRequest& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserHierarchyAsyncHelper(const Model::UpdateUserHierarchyRequest& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserIdentityInfoAsyncHelper(const Model::UpdateUserIdentityInfoRequest& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserPhoneConfigAsyncHelper(const Model::UpdateUserPhoneConfigRequest& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserRoutingProfileAsyncHelper(const Model::UpdateUserRoutingProfileRequest& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserSecurityProfilesAsyncHelper(const Model::UpdateUserSecurityProfilesRequest& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Connect
} // namespace Aws
