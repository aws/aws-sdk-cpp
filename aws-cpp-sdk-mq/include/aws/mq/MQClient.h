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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mq/model/CreateBrokerResult.h>
#include <aws/mq/model/CreateConfigurationResult.h>
#include <aws/mq/model/CreateUserResult.h>
#include <aws/mq/model/DeleteBrokerResult.h>
#include <aws/mq/model/DeleteUserResult.h>
#include <aws/mq/model/DescribeBrokerResult.h>
#include <aws/mq/model/DescribeBrokerEngineTypesResult.h>
#include <aws/mq/model/DescribeBrokerInstanceOptionsResult.h>
#include <aws/mq/model/DescribeConfigurationResult.h>
#include <aws/mq/model/DescribeConfigurationRevisionResult.h>
#include <aws/mq/model/DescribeUserResult.h>
#include <aws/mq/model/ListBrokersResult.h>
#include <aws/mq/model/ListConfigurationRevisionsResult.h>
#include <aws/mq/model/ListConfigurationsResult.h>
#include <aws/mq/model/ListTagsResult.h>
#include <aws/mq/model/ListUsersResult.h>
#include <aws/mq/model/RebootBrokerResult.h>
#include <aws/mq/model/UpdateBrokerResult.h>
#include <aws/mq/model/UpdateConfigurationResult.h>
#include <aws/mq/model/UpdateUserResult.h>
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

namespace MQ
{

namespace Model
{
        class CreateBrokerRequest;
        class CreateConfigurationRequest;
        class CreateTagsRequest;
        class CreateUserRequest;
        class DeleteBrokerRequest;
        class DeleteTagsRequest;
        class DeleteUserRequest;
        class DescribeBrokerRequest;
        class DescribeBrokerEngineTypesRequest;
        class DescribeBrokerInstanceOptionsRequest;
        class DescribeConfigurationRequest;
        class DescribeConfigurationRevisionRequest;
        class DescribeUserRequest;
        class ListBrokersRequest;
        class ListConfigurationRevisionsRequest;
        class ListConfigurationsRequest;
        class ListTagsRequest;
        class ListUsersRequest;
        class RebootBrokerRequest;
        class UpdateBrokerRequest;
        class UpdateConfigurationRequest;
        class UpdateUserRequest;

        typedef Aws::Utils::Outcome<CreateBrokerResult, Aws::Client::AWSError<MQErrors>> CreateBrokerOutcome;
        typedef Aws::Utils::Outcome<CreateConfigurationResult, Aws::Client::AWSError<MQErrors>> CreateConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<MQErrors>> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, Aws::Client::AWSError<MQErrors>> CreateUserOutcome;
        typedef Aws::Utils::Outcome<DeleteBrokerResult, Aws::Client::AWSError<MQErrors>> DeleteBrokerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<MQErrors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DeleteUserResult, Aws::Client::AWSError<MQErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DescribeBrokerResult, Aws::Client::AWSError<MQErrors>> DescribeBrokerOutcome;
        typedef Aws::Utils::Outcome<DescribeBrokerEngineTypesResult, Aws::Client::AWSError<MQErrors>> DescribeBrokerEngineTypesOutcome;
        typedef Aws::Utils::Outcome<DescribeBrokerInstanceOptionsResult, Aws::Client::AWSError<MQErrors>> DescribeBrokerInstanceOptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationResult, Aws::Client::AWSError<MQErrors>> DescribeConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationRevisionResult, Aws::Client::AWSError<MQErrors>> DescribeConfigurationRevisionOutcome;
        typedef Aws::Utils::Outcome<DescribeUserResult, Aws::Client::AWSError<MQErrors>> DescribeUserOutcome;
        typedef Aws::Utils::Outcome<ListBrokersResult, Aws::Client::AWSError<MQErrors>> ListBrokersOutcome;
        typedef Aws::Utils::Outcome<ListConfigurationRevisionsResult, Aws::Client::AWSError<MQErrors>> ListConfigurationRevisionsOutcome;
        typedef Aws::Utils::Outcome<ListConfigurationsResult, Aws::Client::AWSError<MQErrors>> ListConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<MQErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, Aws::Client::AWSError<MQErrors>> ListUsersOutcome;
        typedef Aws::Utils::Outcome<RebootBrokerResult, Aws::Client::AWSError<MQErrors>> RebootBrokerOutcome;
        typedef Aws::Utils::Outcome<UpdateBrokerResult, Aws::Client::AWSError<MQErrors>> UpdateBrokerOutcome;
        typedef Aws::Utils::Outcome<UpdateConfigurationResult, Aws::Client::AWSError<MQErrors>> UpdateConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateUserResult, Aws::Client::AWSError<MQErrors>> UpdateUserOutcome;

        typedef std::future<CreateBrokerOutcome> CreateBrokerOutcomeCallable;
        typedef std::future<CreateConfigurationOutcome> CreateConfigurationOutcomeCallable;
        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<DeleteBrokerOutcome> DeleteBrokerOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DescribeBrokerOutcome> DescribeBrokerOutcomeCallable;
        typedef std::future<DescribeBrokerEngineTypesOutcome> DescribeBrokerEngineTypesOutcomeCallable;
        typedef std::future<DescribeBrokerInstanceOptionsOutcome> DescribeBrokerInstanceOptionsOutcomeCallable;
        typedef std::future<DescribeConfigurationOutcome> DescribeConfigurationOutcomeCallable;
        typedef std::future<DescribeConfigurationRevisionOutcome> DescribeConfigurationRevisionOutcomeCallable;
        typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
        typedef std::future<ListBrokersOutcome> ListBrokersOutcomeCallable;
        typedef std::future<ListConfigurationRevisionsOutcome> ListConfigurationRevisionsOutcomeCallable;
        typedef std::future<ListConfigurationsOutcome> ListConfigurationsOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<RebootBrokerOutcome> RebootBrokerOutcomeCallable;
        typedef std::future<UpdateBrokerOutcome> UpdateBrokerOutcomeCallable;
        typedef std::future<UpdateConfigurationOutcome> UpdateConfigurationOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
} // namespace Model

  class MQClient;

    typedef std::function<void(const MQClient*, const Model::CreateBrokerRequest&, const Model::CreateBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBrokerResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::CreateConfigurationRequest&, const Model::CreateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DeleteBrokerRequest&, const Model::DeleteBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBrokerResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeBrokerRequest&, const Model::DescribeBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBrokerResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeBrokerEngineTypesRequest&, const Model::DescribeBrokerEngineTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBrokerEngineTypesResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeBrokerInstanceOptionsRequest&, const Model::DescribeBrokerInstanceOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBrokerInstanceOptionsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeConfigurationRequest&, const Model::DescribeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeConfigurationRevisionRequest&, const Model::DescribeConfigurationRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationRevisionResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::ListBrokersRequest&, const Model::ListBrokersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBrokersResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::ListConfigurationRevisionsRequest&, const Model::ListConfigurationRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationRevisionsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::ListConfigurationsRequest&, const Model::ListConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::RebootBrokerRequest&, const Model::RebootBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootBrokerResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::UpdateBrokerRequest&, const Model::UpdateBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBrokerResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::UpdateConfigurationRequest&, const Model::UpdateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;

  /**
   * Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it
   * easy to set up and operate message brokers in the cloud. A message broker allows
   * software applications and components to communicate using various programming
   * languages, operating systems, and formal messaging protocols.
   */
  class AWS_MQ_API MQClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MQClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MQClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MQClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MQClient();

        inline virtual const char* GetServiceClientName() const override { return "mq"; }


        /**
         * Creates a broker. Note: This API is asynchronous.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateBroker">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateBrokerOutcome CreateBroker(const Model::CreateBrokerRequest& request) const;

        /**
         * Creates a broker. Note: This API is asynchronous.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateBroker">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBrokerOutcomeCallable CreateBrokerCallable(const Model::CreateBrokerRequest& request) const;

        /**
         * Creates a broker. Note: This API is asynchronous.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateBroker">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBrokerAsync(const Model::CreateBrokerRequest& request, const CreateBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new configuration for the specified configuration name. Amazon MQ uses
         * the default configuration (the engine type and version).<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationOutcome CreateConfiguration(const Model::CreateConfigurationRequest& request) const;

        /**
         * Creates a new configuration for the specified configuration name. Amazon MQ uses
         * the default configuration (the engine type and version).<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationOutcomeCallable CreateConfigurationCallable(const Model::CreateConfigurationRequest& request) const;

        /**
         * Creates a new configuration for the specified configuration name. Amazon MQ uses
         * the default configuration (the engine type and version).<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationAsync(const Model::CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Add a tag to a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateTags">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * Add a tag to a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * Add a tag to a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateUser">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * Creates an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * Creates an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a broker. Note: This API is asynchronous.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteBroker">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteBrokerOutcome DeleteBroker(const Model::DeleteBrokerRequest& request) const;

        /**
         * Deletes a broker. Note: This API is asynchronous.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteBroker">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBrokerOutcomeCallable DeleteBrokerCallable(const Model::DeleteBrokerRequest& request) const;

        /**
         * Deletes a broker. Note: This API is asynchronous.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteBroker">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBrokerAsync(const Model::DeleteBrokerRequest& request, const DeleteBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes a tag from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteTags">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * Removes a tag from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * Removes a tag from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteUser">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * Deletes an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * Deletes an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about the specified broker.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBrokerOutcome DescribeBroker(const Model::DescribeBrokerRequest& request) const;

        /**
         * Returns information about the specified broker.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBroker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBrokerOutcomeCallable DescribeBrokerCallable(const Model::DescribeBrokerRequest& request) const;

        /**
         * Returns information about the specified broker.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBroker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBrokerAsync(const Model::DescribeBrokerRequest& request, const DescribeBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Describe available engine types and versions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBrokerEngineTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBrokerEngineTypesOutcome DescribeBrokerEngineTypes(const Model::DescribeBrokerEngineTypesRequest& request) const;

        /**
         * Describe available engine types and versions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBrokerEngineTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBrokerEngineTypesOutcomeCallable DescribeBrokerEngineTypesCallable(const Model::DescribeBrokerEngineTypesRequest& request) const;

        /**
         * Describe available engine types and versions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBrokerEngineTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBrokerEngineTypesAsync(const Model::DescribeBrokerEngineTypesRequest& request, const DescribeBrokerEngineTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Describe available broker instance options.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBrokerInstanceOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBrokerInstanceOptionsOutcome DescribeBrokerInstanceOptions(const Model::DescribeBrokerInstanceOptionsRequest& request) const;

        /**
         * Describe available broker instance options.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBrokerInstanceOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBrokerInstanceOptionsOutcomeCallable DescribeBrokerInstanceOptionsCallable(const Model::DescribeBrokerInstanceOptionsRequest& request) const;

        /**
         * Describe available broker instance options.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBrokerInstanceOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBrokerInstanceOptionsAsync(const Model::DescribeBrokerInstanceOptionsRequest& request, const DescribeBrokerInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about the specified configuration.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationOutcome DescribeConfiguration(const Model::DescribeConfigurationRequest& request) const;

        /**
         * Returns information about the specified configuration.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationOutcomeCallable DescribeConfigurationCallable(const Model::DescribeConfigurationRequest& request) const;

        /**
         * Returns information about the specified configuration.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationAsync(const Model::DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the specified configuration revision for the specified
         * configuration.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeConfigurationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRevisionOutcome DescribeConfigurationRevision(const Model::DescribeConfigurationRevisionRequest& request) const;

        /**
         * Returns the specified configuration revision for the specified
         * configuration.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeConfigurationRevision">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationRevisionOutcomeCallable DescribeConfigurationRevisionCallable(const Model::DescribeConfigurationRevisionRequest& request) const;

        /**
         * Returns the specified configuration revision for the specified
         * configuration.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeConfigurationRevision">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationRevisionAsync(const Model::DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeUser">AWS API
         * Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * Returns information about an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request) const;

        /**
         * Returns information about an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of all brokers.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListBrokers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListBrokersOutcome ListBrokers(const Model::ListBrokersRequest& request) const;

        /**
         * Returns a list of all brokers.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListBrokers">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBrokersOutcomeCallable ListBrokersCallable(const Model::ListBrokersRequest& request) const;

        /**
         * Returns a list of all brokers.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListBrokers">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBrokersAsync(const Model::ListBrokersRequest& request, const ListBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of all revisions for the specified configuration.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListConfigurationRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationRevisionsOutcome ListConfigurationRevisions(const Model::ListConfigurationRevisionsRequest& request) const;

        /**
         * Returns a list of all revisions for the specified configuration.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListConfigurationRevisions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationRevisionsOutcomeCallable ListConfigurationRevisionsCallable(const Model::ListConfigurationRevisionsRequest& request) const;

        /**
         * Returns a list of all revisions for the specified configuration.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListConfigurationRevisions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationRevisionsAsync(const Model::ListConfigurationRevisionsRequest& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of all configurations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationsOutcome ListConfigurations(const Model::ListConfigurationsRequest& request) const;

        /**
         * Returns a list of all configurations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationsOutcomeCallable ListConfigurationsCallable(const Model::ListConfigurationsRequest& request) const;

        /**
         * Returns a list of all configurations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationsAsync(const Model::ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists tags for a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * Lists tags for a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * Lists tags for a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of all ActiveMQ users.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListUsers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * Returns a list of all ActiveMQ users.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListUsers">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * Returns a list of all ActiveMQ users.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListUsers">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Reboots a broker. Note: This API is asynchronous.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/RebootBroker">AWS API
         * Reference</a></p>
         */
        virtual Model::RebootBrokerOutcome RebootBroker(const Model::RebootBrokerRequest& request) const;

        /**
         * Reboots a broker. Note: This API is asynchronous.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/RebootBroker">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootBrokerOutcomeCallable RebootBrokerCallable(const Model::RebootBrokerRequest& request) const;

        /**
         * Reboots a broker. Note: This API is asynchronous.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/RebootBroker">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootBrokerAsync(const Model::RebootBrokerRequest& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Adds a pending configuration change to a broker.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateBroker">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateBrokerOutcome UpdateBroker(const Model::UpdateBrokerRequest& request) const;

        /**
         * Adds a pending configuration change to a broker.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateBroker">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBrokerOutcomeCallable UpdateBrokerCallable(const Model::UpdateBrokerRequest& request) const;

        /**
         * Adds a pending configuration change to a broker.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateBroker">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBrokerAsync(const Model::UpdateBrokerRequest& request, const UpdateBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the specified configuration.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationOutcome UpdateConfiguration(const Model::UpdateConfigurationRequest& request) const;

        /**
         * Updates the specified configuration.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationOutcomeCallable UpdateConfigurationCallable(const Model::UpdateConfigurationRequest& request) const;

        /**
         * Updates the specified configuration.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationAsync(const Model::UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the information for an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateUser">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * Updates the information for an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * Updates the information for an ActiveMQ user.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateBrokerAsyncHelper(const Model::CreateBrokerRequest& request, const CreateBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigurationAsyncHelper(const Model::CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBrokerAsyncHelper(const Model::DeleteBrokerRequest& request, const DeleteBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBrokerAsyncHelper(const Model::DescribeBrokerRequest& request, const DescribeBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBrokerEngineTypesAsyncHelper(const Model::DescribeBrokerEngineTypesRequest& request, const DescribeBrokerEngineTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBrokerInstanceOptionsAsyncHelper(const Model::DescribeBrokerInstanceOptionsRequest& request, const DescribeBrokerInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationAsyncHelper(const Model::DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationRevisionAsyncHelper(const Model::DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserAsyncHelper(const Model::DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBrokersAsyncHelper(const Model::ListBrokersRequest& request, const ListBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationRevisionsAsyncHelper(const Model::ListConfigurationRevisionsRequest& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationsAsyncHelper(const Model::ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootBrokerAsyncHelper(const Model::RebootBrokerRequest& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBrokerAsyncHelper(const Model::UpdateBrokerRequest& request, const UpdateBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConfigurationAsyncHelper(const Model::UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MQ
} // namespace Aws
