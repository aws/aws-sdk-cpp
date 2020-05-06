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
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codestar-connections/model/CreateConnectionResult.h>
#include <aws/codestar-connections/model/DeleteConnectionResult.h>
#include <aws/codestar-connections/model/GetConnectionResult.h>
#include <aws/codestar-connections/model/ListConnectionsResult.h>
#include <aws/codestar-connections/model/ListTagsForResourceResult.h>
#include <aws/codestar-connections/model/TagResourceResult.h>
#include <aws/codestar-connections/model/UntagResourceResult.h>
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

namespace CodeStarconnections
{

namespace Model
{
        class CreateConnectionRequest;
        class DeleteConnectionRequest;
        class GetConnectionRequest;
        class ListConnectionsRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CreateConnectionResult, Aws::Client::AWSError<CodeStarconnectionsErrors>> CreateConnectionOutcome;
        typedef Aws::Utils::Outcome<DeleteConnectionResult, Aws::Client::AWSError<CodeStarconnectionsErrors>> DeleteConnectionOutcome;
        typedef Aws::Utils::Outcome<GetConnectionResult, Aws::Client::AWSError<CodeStarconnectionsErrors>> GetConnectionOutcome;
        typedef Aws::Utils::Outcome<ListConnectionsResult, Aws::Client::AWSError<CodeStarconnectionsErrors>> ListConnectionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<CodeStarconnectionsErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<CodeStarconnectionsErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<CodeStarconnectionsErrors>> UntagResourceOutcome;

        typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
        typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
        typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
        typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class CodeStarconnectionsClient;

    typedef std::function<void(const CodeStarconnectionsClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionsResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarconnectionsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>This AWS CodeStar Connections API Reference provides descriptions and usage
   * examples of the operations and data types for the AWS CodeStar Connections API.
   * You can use the Connections API to work with connections and installations.</p>
   * <p> <i>Connections</i> are configurations that you use to connect AWS resources
   * to external code repositories. Each connection is a resource that can be given
   * to services such as CodePipeline to connect to a third-party repository such as
   * Bitbucket. For example, you can add the connection in CodePipeline so that it
   * triggers your pipeline when a code change is made to your third-party code
   * repository. Each connection is named and associated with a unique ARN that is
   * used to reference the connection.</p> <p>When you create a connection, the
   * console initiates a third-party connection handshake. <i>Installations</i> are
   * the apps that are used to conduct this handshake. For example, the installation
   * for the Bitbucket provider type is the Bitbucket Cloud app. When you create a
   * connection, you can choose an existing installation or create one.</p> <p>You
   * can work with connections by calling:</p> <ul> <li> <p> <a>CreateConnection</a>,
   * which creates a uniquely named connection that can be referenced by services
   * such as CodePipeline.</p> </li> <li> <p> <a>DeleteConnection</a>, which deletes
   * the specified connection.</p> </li> <li> <p> <a>GetConnection</a>, which returns
   * information about the connection, including the connection status.</p> </li>
   * <li> <p> <a>ListConnections</a>, which lists the connections associated with
   * your account.</p> </li> </ul> <p>For information about how to use AWS CodeStar
   * Connections, see the <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/welcome.html">AWS
   * CodePipeline User Guide</a>.</p>
   */
  class AWS_CODESTARCONNECTIONS_API CodeStarconnectionsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarconnectionsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarconnectionsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeStarconnectionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeStarconnectionsClient();

        inline virtual const char* GetServiceClientName() const override { return "CodeStar connections"; }


        /**
         * <p>Creates a connection that can then be given to other AWS services like
         * CodePipeline so that it can access third-party code repositories. The connection
         * is in pending status until the third-party connection handshake is completed
         * from the console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * <p>Creates a connection that can then be given to other AWS services like
         * CodePipeline so that it can access third-party code repositories. The connection
         * is in pending status until the third-party connection handshake is completed
         * from the console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/CreateConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const Model::CreateConnectionRequest& request) const;

        /**
         * <p>Creates a connection that can then be given to other AWS services like
         * CodePipeline so that it can access third-party code repositories. The connection
         * is in pending status until the third-party connection handshake is completed
         * from the console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/CreateConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The connection to be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>The connection to be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/DeleteConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>The connection to be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/DeleteConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the connection ARN and details such as status, owner, and provider
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/GetConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;

        /**
         * <p>Returns the connection ARN and details such as status, owner, and provider
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/GetConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectionOutcomeCallable GetConnectionCallable(const Model::GetConnectionRequest& request) const;

        /**
         * <p>Returns the connection ARN and details such as status, owner, and provider
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/GetConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectionAsync(const Model::GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the connections associated with your account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/ListConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectionsOutcome ListConnections(const Model::ListConnectionsRequest& request) const;

        /**
         * <p>Lists the connections associated with your account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/ListConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConnectionsOutcomeCallable ListConnectionsCallable(const Model::ListConnectionsRequest& request) const;

        /**
         * <p>Lists the connections associated with your account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/ListConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectionsAsync(const Model::ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the set of key-value pairs (metadata) that are used to manage the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets the set of key-value pairs (metadata) that are used to manage the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets the set of key-value pairs (metadata) that are used to manage the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateConnectionAsyncHelper(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectionAsyncHelper(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConnectionAsyncHelper(const Model::GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConnectionsAsyncHelper(const Model::ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeStarconnections
} // namespace Aws
