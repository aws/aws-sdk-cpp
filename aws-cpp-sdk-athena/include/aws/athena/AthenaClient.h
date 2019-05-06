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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/athena/model/BatchGetNamedQueryResult.h>
#include <aws/athena/model/BatchGetQueryExecutionResult.h>
#include <aws/athena/model/CreateNamedQueryResult.h>
#include <aws/athena/model/CreateWorkGroupResult.h>
#include <aws/athena/model/DeleteNamedQueryResult.h>
#include <aws/athena/model/DeleteWorkGroupResult.h>
#include <aws/athena/model/GetNamedQueryResult.h>
#include <aws/athena/model/GetQueryExecutionResult.h>
#include <aws/athena/model/GetQueryResultsResult.h>
#include <aws/athena/model/GetWorkGroupResult.h>
#include <aws/athena/model/ListNamedQueriesResult.h>
#include <aws/athena/model/ListQueryExecutionsResult.h>
#include <aws/athena/model/ListTagsForResourceResult.h>
#include <aws/athena/model/ListWorkGroupsResult.h>
#include <aws/athena/model/StartQueryExecutionResult.h>
#include <aws/athena/model/StopQueryExecutionResult.h>
#include <aws/athena/model/TagResourceResult.h>
#include <aws/athena/model/UntagResourceResult.h>
#include <aws/athena/model/UpdateWorkGroupResult.h>
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

namespace Athena
{

namespace Model
{
        class BatchGetNamedQueryRequest;
        class BatchGetQueryExecutionRequest;
        class CreateNamedQueryRequest;
        class CreateWorkGroupRequest;
        class DeleteNamedQueryRequest;
        class DeleteWorkGroupRequest;
        class GetNamedQueryRequest;
        class GetQueryExecutionRequest;
        class GetQueryResultsRequest;
        class GetWorkGroupRequest;
        class ListNamedQueriesRequest;
        class ListQueryExecutionsRequest;
        class ListTagsForResourceRequest;
        class ListWorkGroupsRequest;
        class StartQueryExecutionRequest;
        class StopQueryExecutionRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateWorkGroupRequest;

        typedef Aws::Utils::Outcome<BatchGetNamedQueryResult, Aws::Client::AWSError<AthenaErrors>> BatchGetNamedQueryOutcome;
        typedef Aws::Utils::Outcome<BatchGetQueryExecutionResult, Aws::Client::AWSError<AthenaErrors>> BatchGetQueryExecutionOutcome;
        typedef Aws::Utils::Outcome<CreateNamedQueryResult, Aws::Client::AWSError<AthenaErrors>> CreateNamedQueryOutcome;
        typedef Aws::Utils::Outcome<CreateWorkGroupResult, Aws::Client::AWSError<AthenaErrors>> CreateWorkGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteNamedQueryResult, Aws::Client::AWSError<AthenaErrors>> DeleteNamedQueryOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkGroupResult, Aws::Client::AWSError<AthenaErrors>> DeleteWorkGroupOutcome;
        typedef Aws::Utils::Outcome<GetNamedQueryResult, Aws::Client::AWSError<AthenaErrors>> GetNamedQueryOutcome;
        typedef Aws::Utils::Outcome<GetQueryExecutionResult, Aws::Client::AWSError<AthenaErrors>> GetQueryExecutionOutcome;
        typedef Aws::Utils::Outcome<GetQueryResultsResult, Aws::Client::AWSError<AthenaErrors>> GetQueryResultsOutcome;
        typedef Aws::Utils::Outcome<GetWorkGroupResult, Aws::Client::AWSError<AthenaErrors>> GetWorkGroupOutcome;
        typedef Aws::Utils::Outcome<ListNamedQueriesResult, Aws::Client::AWSError<AthenaErrors>> ListNamedQueriesOutcome;
        typedef Aws::Utils::Outcome<ListQueryExecutionsResult, Aws::Client::AWSError<AthenaErrors>> ListQueryExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<AthenaErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWorkGroupsResult, Aws::Client::AWSError<AthenaErrors>> ListWorkGroupsOutcome;
        typedef Aws::Utils::Outcome<StartQueryExecutionResult, Aws::Client::AWSError<AthenaErrors>> StartQueryExecutionOutcome;
        typedef Aws::Utils::Outcome<StopQueryExecutionResult, Aws::Client::AWSError<AthenaErrors>> StopQueryExecutionOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<AthenaErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<AthenaErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkGroupResult, Aws::Client::AWSError<AthenaErrors>> UpdateWorkGroupOutcome;

        typedef std::future<BatchGetNamedQueryOutcome> BatchGetNamedQueryOutcomeCallable;
        typedef std::future<BatchGetQueryExecutionOutcome> BatchGetQueryExecutionOutcomeCallable;
        typedef std::future<CreateNamedQueryOutcome> CreateNamedQueryOutcomeCallable;
        typedef std::future<CreateWorkGroupOutcome> CreateWorkGroupOutcomeCallable;
        typedef std::future<DeleteNamedQueryOutcome> DeleteNamedQueryOutcomeCallable;
        typedef std::future<DeleteWorkGroupOutcome> DeleteWorkGroupOutcomeCallable;
        typedef std::future<GetNamedQueryOutcome> GetNamedQueryOutcomeCallable;
        typedef std::future<GetQueryExecutionOutcome> GetQueryExecutionOutcomeCallable;
        typedef std::future<GetQueryResultsOutcome> GetQueryResultsOutcomeCallable;
        typedef std::future<GetWorkGroupOutcome> GetWorkGroupOutcomeCallable;
        typedef std::future<ListNamedQueriesOutcome> ListNamedQueriesOutcomeCallable;
        typedef std::future<ListQueryExecutionsOutcome> ListQueryExecutionsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListWorkGroupsOutcome> ListWorkGroupsOutcomeCallable;
        typedef std::future<StartQueryExecutionOutcome> StartQueryExecutionOutcomeCallable;
        typedef std::future<StopQueryExecutionOutcome> StopQueryExecutionOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateWorkGroupOutcome> UpdateWorkGroupOutcomeCallable;
} // namespace Model

  class AthenaClient;

    typedef std::function<void(const AthenaClient*, const Model::BatchGetNamedQueryRequest&, const Model::BatchGetNamedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetNamedQueryResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::BatchGetQueryExecutionRequest&, const Model::BatchGetQueryExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetQueryExecutionResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::CreateNamedQueryRequest&, const Model::CreateNamedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNamedQueryResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::CreateWorkGroupRequest&, const Model::CreateWorkGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkGroupResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::DeleteNamedQueryRequest&, const Model::DeleteNamedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNamedQueryResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::DeleteWorkGroupRequest&, const Model::DeleteWorkGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkGroupResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetNamedQueryRequest&, const Model::GetNamedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNamedQueryResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetQueryExecutionRequest&, const Model::GetQueryExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryExecutionResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetQueryResultsRequest&, const Model::GetQueryResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryResultsResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetWorkGroupRequest&, const Model::GetWorkGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkGroupResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListNamedQueriesRequest&, const Model::ListNamedQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNamedQueriesResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListQueryExecutionsRequest&, const Model::ListQueryExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueryExecutionsResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListWorkGroupsRequest&, const Model::ListWorkGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkGroupsResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::StartQueryExecutionRequest&, const Model::StartQueryExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQueryExecutionResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::StopQueryExecutionRequest&, const Model::StopQueryExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopQueryExecutionResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::UpdateWorkGroupRequest&, const Model::UpdateWorkGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkGroupResponseReceivedHandler;

  /**
   * <p>Amazon Athena is an interactive query service that lets you use standard SQL
   * to analyze data directly in Amazon S3. You can point Athena at your data in
   * Amazon S3 and run ad-hoc queries and get results in seconds. Athena is
   * serverless, so there is no infrastructure to set up or manage. You pay only for
   * the queries you run. Athena scales automatically—executing queries in
   * parallel—so results are fast, even with large datasets and complex queries. For
   * more information, see <a
   * href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon
   * Athena</a> in the <i>Amazon Athena User Guide</i>.</p> <p>If you connect to
   * Athena using the JDBC driver, use version 1.1.0 of the driver or later with the
   * Amazon Athena API. Earlier version drivers do not support the API. For more
   * information and to download the driver, see <a
   * href="https://docs.aws.amazon.com/athena/latest/ug/connect-with-jdbc.html">Accessing
   * Amazon Athena with JDBC</a>.</p> <p>For code samples using the AWS SDK for Java,
   * see <a
   * href="https://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
   * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p>
   */
  class AWS_ATHENA_API AthenaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AthenaClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AthenaClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AthenaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AthenaClient();

        inline virtual const char* GetServiceClientName() const override { return "Athena"; }


        /**
         * <p>Returns the details of a single named query or a list of up to 50 queries,
         * which you provide as an array of query ID strings. Requires you to have access
         * to the workgroup in which the queries were saved. Use
         * <a>ListNamedQueriesInput</a> to get the list of named query IDs in the specified
         * workgroup. If information could not be retrieved for a submitted query ID,
         * information about the query ID submitted is listed under
         * <a>UnprocessedNamedQueryId</a>. Named queries differ from executed queries. Use
         * <a>BatchGetQueryExecutionInput</a> to get details about each unique query
         * execution, and <a>ListQueryExecutionsInput</a> to get a list of query execution
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/BatchGetNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetNamedQueryOutcome BatchGetNamedQuery(const Model::BatchGetNamedQueryRequest& request) const;

        /**
         * <p>Returns the details of a single named query or a list of up to 50 queries,
         * which you provide as an array of query ID strings. Requires you to have access
         * to the workgroup in which the queries were saved. Use
         * <a>ListNamedQueriesInput</a> to get the list of named query IDs in the specified
         * workgroup. If information could not be retrieved for a submitted query ID,
         * information about the query ID submitted is listed under
         * <a>UnprocessedNamedQueryId</a>. Named queries differ from executed queries. Use
         * <a>BatchGetQueryExecutionInput</a> to get details about each unique query
         * execution, and <a>ListQueryExecutionsInput</a> to get a list of query execution
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/BatchGetNamedQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetNamedQueryOutcomeCallable BatchGetNamedQueryCallable(const Model::BatchGetNamedQueryRequest& request) const;

        /**
         * <p>Returns the details of a single named query or a list of up to 50 queries,
         * which you provide as an array of query ID strings. Requires you to have access
         * to the workgroup in which the queries were saved. Use
         * <a>ListNamedQueriesInput</a> to get the list of named query IDs in the specified
         * workgroup. If information could not be retrieved for a submitted query ID,
         * information about the query ID submitted is listed under
         * <a>UnprocessedNamedQueryId</a>. Named queries differ from executed queries. Use
         * <a>BatchGetQueryExecutionInput</a> to get details about each unique query
         * execution, and <a>ListQueryExecutionsInput</a> to get a list of query execution
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/BatchGetNamedQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetNamedQueryAsync(const Model::BatchGetNamedQueryRequest& request, const BatchGetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of a single query execution or a list of up to 50 query
         * executions, which you provide as an array of query execution ID strings.
         * Requires you to have access to the workgroup in which the queries ran. To get a
         * list of query execution IDs, use <a>ListQueryExecutionsInput$WorkGroup</a>.
         * Query executions differ from named (saved) queries. Use
         * <a>BatchGetNamedQueryInput</a> to get details about named queries.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/BatchGetQueryExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetQueryExecutionOutcome BatchGetQueryExecution(const Model::BatchGetQueryExecutionRequest& request) const;

        /**
         * <p>Returns the details of a single query execution or a list of up to 50 query
         * executions, which you provide as an array of query execution ID strings.
         * Requires you to have access to the workgroup in which the queries ran. To get a
         * list of query execution IDs, use <a>ListQueryExecutionsInput$WorkGroup</a>.
         * Query executions differ from named (saved) queries. Use
         * <a>BatchGetNamedQueryInput</a> to get details about named queries.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/BatchGetQueryExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetQueryExecutionOutcomeCallable BatchGetQueryExecutionCallable(const Model::BatchGetQueryExecutionRequest& request) const;

        /**
         * <p>Returns the details of a single query execution or a list of up to 50 query
         * executions, which you provide as an array of query execution ID strings.
         * Requires you to have access to the workgroup in which the queries ran. To get a
         * list of query execution IDs, use <a>ListQueryExecutionsInput$WorkGroup</a>.
         * Query executions differ from named (saved) queries. Use
         * <a>BatchGetNamedQueryInput</a> to get details about named queries.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/BatchGetQueryExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetQueryExecutionAsync(const Model::BatchGetQueryExecutionRequest& request, const BatchGetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a named query in the specified workgroup. Requires that you have
         * access to the workgroup.</p> <p>For code samples using the AWS SDK for Java, see
         * <a href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNamedQueryOutcome CreateNamedQuery(const Model::CreateNamedQueryRequest& request) const;

        /**
         * <p>Creates a named query in the specified workgroup. Requires that you have
         * access to the workgroup.</p> <p>For code samples using the AWS SDK for Java, see
         * <a href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateNamedQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNamedQueryOutcomeCallable CreateNamedQueryCallable(const Model::CreateNamedQueryRequest& request) const;

        /**
         * <p>Creates a named query in the specified workgroup. Requires that you have
         * access to the workgroup.</p> <p>For code samples using the AWS SDK for Java, see
         * <a href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateNamedQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNamedQueryAsync(const Model::CreateNamedQueryRequest& request, const CreateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a workgroup with the specified name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkGroupOutcome CreateWorkGroup(const Model::CreateWorkGroupRequest& request) const;

        /**
         * <p>Creates a workgroup with the specified name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateWorkGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkGroupOutcomeCallable CreateWorkGroupCallable(const Model::CreateWorkGroupRequest& request) const;

        /**
         * <p>Creates a workgroup with the specified name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CreateWorkGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkGroupAsync(const Model::CreateWorkGroupRequest& request, const CreateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the named query if you have access to the workgroup in which the
         * query was saved.</p> <p>For code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamedQueryOutcome DeleteNamedQuery(const Model::DeleteNamedQueryRequest& request) const;

        /**
         * <p>Deletes the named query if you have access to the workgroup in which the
         * query was saved.</p> <p>For code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteNamedQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNamedQueryOutcomeCallable DeleteNamedQueryCallable(const Model::DeleteNamedQueryRequest& request) const;

        /**
         * <p>Deletes the named query if you have access to the workgroup in which the
         * query was saved.</p> <p>For code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteNamedQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNamedQueryAsync(const Model::DeleteNamedQueryRequest& request, const DeleteNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the workgroup with the specified name. The primary workgroup cannot
         * be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkGroupOutcome DeleteWorkGroup(const Model::DeleteWorkGroupRequest& request) const;

        /**
         * <p>Deletes the workgroup with the specified name. The primary workgroup cannot
         * be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteWorkGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkGroupOutcomeCallable DeleteWorkGroupCallable(const Model::DeleteWorkGroupRequest& request) const;

        /**
         * <p>Deletes the workgroup with the specified name. The primary workgroup cannot
         * be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DeleteWorkGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkGroupAsync(const Model::DeleteWorkGroupRequest& request, const DeleteWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a single query. Requires that you have access to
         * the workgroup in which the query was saved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetNamedQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNamedQueryOutcome GetNamedQuery(const Model::GetNamedQueryRequest& request) const;

        /**
         * <p>Returns information about a single query. Requires that you have access to
         * the workgroup in which the query was saved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetNamedQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNamedQueryOutcomeCallable GetNamedQueryCallable(const Model::GetNamedQueryRequest& request) const;

        /**
         * <p>Returns information about a single query. Requires that you have access to
         * the workgroup in which the query was saved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetNamedQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNamedQueryAsync(const Model::GetNamedQueryRequest& request, const GetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a single execution of a query if you have access to
         * the workgroup in which the query ran. Each time a query executes, information
         * about the query execution is saved with a unique ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetQueryExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryExecutionOutcome GetQueryExecution(const Model::GetQueryExecutionRequest& request) const;

        /**
         * <p>Returns information about a single execution of a query if you have access to
         * the workgroup in which the query ran. Each time a query executes, information
         * about the query execution is saved with a unique ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetQueryExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueryExecutionOutcomeCallable GetQueryExecutionCallable(const Model::GetQueryExecutionRequest& request) const;

        /**
         * <p>Returns information about a single execution of a query if you have access to
         * the workgroup in which the query ran. Each time a query executes, information
         * about the query execution is saved with a unique ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetQueryExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueryExecutionAsync(const Model::GetQueryExecutionRequest& request, const GetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the results of a single query execution specified by
         * <code>QueryExecutionId</code> if you have access to the workgroup in which the
         * query ran. This request does not execute the query but returns results. Use
         * <a>StartQueryExecution</a> to run a query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetQueryResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryResultsOutcome GetQueryResults(const Model::GetQueryResultsRequest& request) const;

        /**
         * <p>Returns the results of a single query execution specified by
         * <code>QueryExecutionId</code> if you have access to the workgroup in which the
         * query ran. This request does not execute the query but returns results. Use
         * <a>StartQueryExecution</a> to run a query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetQueryResults">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueryResultsOutcomeCallable GetQueryResultsCallable(const Model::GetQueryResultsRequest& request) const;

        /**
         * <p>Returns the results of a single query execution specified by
         * <code>QueryExecutionId</code> if you have access to the workgroup in which the
         * query ran. This request does not execute the query but returns results. Use
         * <a>StartQueryExecution</a> to run a query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetQueryResults">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueryResultsAsync(const Model::GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the workgroup with the specified
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkGroupOutcome GetWorkGroup(const Model::GetWorkGroupRequest& request) const;

        /**
         * <p>Returns information about the workgroup with the specified
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetWorkGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkGroupOutcomeCallable GetWorkGroupCallable(const Model::GetWorkGroupRequest& request) const;

        /**
         * <p>Returns information about the workgroup with the specified
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/GetWorkGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkGroupAsync(const Model::GetWorkGroupRequest& request, const GetWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of available query IDs only for queries saved in the
         * specified workgroup. Requires that you have access to the workgroup.</p> <p>For
         * code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListNamedQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamedQueriesOutcome ListNamedQueries(const Model::ListNamedQueriesRequest& request) const;

        /**
         * <p>Provides a list of available query IDs only for queries saved in the
         * specified workgroup. Requires that you have access to the workgroup.</p> <p>For
         * code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListNamedQueries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNamedQueriesOutcomeCallable ListNamedQueriesCallable(const Model::ListNamedQueriesRequest& request) const;

        /**
         * <p>Provides a list of available query IDs only for queries saved in the
         * specified workgroup. Requires that you have access to the workgroup.</p> <p>For
         * code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListNamedQueries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNamedQueriesAsync(const Model::ListNamedQueriesRequest& request, const ListNamedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of available query execution IDs for the queries in the
         * specified workgroup. Requires you to have access to the workgroup in which the
         * queries ran.</p> <p>For code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListQueryExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueryExecutionsOutcome ListQueryExecutions(const Model::ListQueryExecutionsRequest& request) const;

        /**
         * <p>Provides a list of available query execution IDs for the queries in the
         * specified workgroup. Requires you to have access to the workgroup in which the
         * queries ran.</p> <p>For code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListQueryExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueryExecutionsOutcomeCallable ListQueryExecutionsCallable(const Model::ListQueryExecutionsRequest& request) const;

        /**
         * <p>Provides a list of available query execution IDs for the queries in the
         * specified workgroup. Requires you to have access to the workgroup in which the
         * queries ran.</p> <p>For code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListQueryExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueryExecutionsAsync(const Model::ListQueryExecutionsRequest& request, const ListQueryExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags associated with this workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags associated with this workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags associated with this workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists available workgroups for the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListWorkGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkGroupsOutcome ListWorkGroups(const Model::ListWorkGroupsRequest& request) const;

        /**
         * <p>Lists available workgroups for the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListWorkGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkGroupsOutcomeCallable ListWorkGroupsCallable(const Model::ListWorkGroupsRequest& request) const;

        /**
         * <p>Lists available workgroups for the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ListWorkGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkGroupsAsync(const Model::ListWorkGroupsRequest& request, const ListWorkGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs the SQL query statements contained in the <code>Query</code>. Requires
         * you to have access to the workgroup in which the query ran.</p> <p>For code
         * samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StartQueryExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartQueryExecutionOutcome StartQueryExecution(const Model::StartQueryExecutionRequest& request) const;

        /**
         * <p>Runs the SQL query statements contained in the <code>Query</code>. Requires
         * you to have access to the workgroup in which the query ran.</p> <p>For code
         * samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StartQueryExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartQueryExecutionOutcomeCallable StartQueryExecutionCallable(const Model::StartQueryExecutionRequest& request) const;

        /**
         * <p>Runs the SQL query statements contained in the <code>Query</code>. Requires
         * you to have access to the workgroup in which the query ran.</p> <p>For code
         * samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StartQueryExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartQueryExecutionAsync(const Model::StartQueryExecutionRequest& request, const StartQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a query execution. Requires you to have access to the workgroup in
         * which the query ran.</p> <p>For code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StopQueryExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopQueryExecutionOutcome StopQueryExecution(const Model::StopQueryExecutionRequest& request) const;

        /**
         * <p>Stops a query execution. Requires you to have access to the workgroup in
         * which the query ran.</p> <p>For code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StopQueryExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopQueryExecutionOutcomeCallable StopQueryExecutionCallable(const Model::StopQueryExecutionRequest& request) const;

        /**
         * <p>Stops a query execution. Requires you to have access to the workgroup in
         * which the query ran.</p> <p>For code samples using the AWS SDK for Java, see <a
         * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples
         * and Code Samples</a> in the <i>Amazon Athena User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/StopQueryExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopQueryExecutionAsync(const Model::StopQueryExecutionRequest& request, const StopQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to the resource, such as a workgroup. A tag is a label
         * that you assign to an AWS Athena resource (a workgroup). Each tag consists of a
         * key and an optional value, both of which you define. Tags enable you to
         * categorize resources (workgroups) in Athena, for example, by purpose, owner, or
         * environment. Use a consistent set of tag keys to make it easier to search and
         * filter workgroups in your account. For best practices, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
         * Tagging Strategies</a>. The key length is from 1 (minimum) to 128 (maximum)
         * Unicode characters in UTF-8. The tag value length is from 0 (minimum) to 256
         * (maximum) Unicode characters in UTF-8. You can use letters and numbers
         * representable in UTF-8, and the following characters: + - = . _ : / @. Tag keys
         * and values are case-sensitive. Tag keys must be unique per resource. If you
         * specify more than one, separate them by commas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the resource, such as a workgroup. A tag is a label
         * that you assign to an AWS Athena resource (a workgroup). Each tag consists of a
         * key and an optional value, both of which you define. Tags enable you to
         * categorize resources (workgroups) in Athena, for example, by purpose, owner, or
         * environment. Use a consistent set of tag keys to make it easier to search and
         * filter workgroups in your account. For best practices, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
         * Tagging Strategies</a>. The key length is from 1 (minimum) to 128 (maximum)
         * Unicode characters in UTF-8. The tag value length is from 0 (minimum) to 256
         * (maximum) Unicode characters in UTF-8. You can use letters and numbers
         * representable in UTF-8, and the following characters: + - = . _ : / @. Tag keys
         * and values are case-sensitive. Tag keys must be unique per resource. If you
         * specify more than one, separate them by commas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the resource, such as a workgroup. A tag is a label
         * that you assign to an AWS Athena resource (a workgroup). Each tag consists of a
         * key and an optional value, both of which you define. Tags enable you to
         * categorize resources (workgroups) in Athena, for example, by purpose, owner, or
         * environment. Use a consistent set of tag keys to make it easier to search and
         * filter workgroups in your account. For best practices, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
         * Tagging Strategies</a>. The key length is from 1 (minimum) to 128 (maximum)
         * Unicode characters in UTF-8. The tag value length is from 0 (minimum) to 256
         * (maximum) Unicode characters in UTF-8. You can use letters and numbers
         * representable in UTF-8, and the following characters: + - = . _ : / @. Tag keys
         * and values are case-sensitive. Tag keys must be unique per resource. If you
         * specify more than one, separate them by commas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the workgroup resource. Takes as an input a
         * list of TagKey Strings separated by commas, and removes their tags at the same
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the workgroup resource. Takes as an input a
         * list of TagKey Strings separated by commas, and removes their tags at the same
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the workgroup resource. Takes as an input a
         * list of TagKey Strings separated by commas, and removes their tags at the same
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the workgroup with the specified name. The workgroup's name cannot be
         * changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateWorkGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkGroupOutcome UpdateWorkGroup(const Model::UpdateWorkGroupRequest& request) const;

        /**
         * <p>Updates the workgroup with the specified name. The workgroup's name cannot be
         * changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateWorkGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkGroupOutcomeCallable UpdateWorkGroupCallable(const Model::UpdateWorkGroupRequest& request) const;

        /**
         * <p>Updates the workgroup with the specified name. The workgroup's name cannot be
         * changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UpdateWorkGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkGroupAsync(const Model::UpdateWorkGroupRequest& request, const UpdateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchGetNamedQueryAsyncHelper(const Model::BatchGetNamedQueryRequest& request, const BatchGetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetQueryExecutionAsyncHelper(const Model::BatchGetQueryExecutionRequest& request, const BatchGetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNamedQueryAsyncHelper(const Model::CreateNamedQueryRequest& request, const CreateNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkGroupAsyncHelper(const Model::CreateWorkGroupRequest& request, const CreateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNamedQueryAsyncHelper(const Model::DeleteNamedQueryRequest& request, const DeleteNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkGroupAsyncHelper(const Model::DeleteWorkGroupRequest& request, const DeleteWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNamedQueryAsyncHelper(const Model::GetNamedQueryRequest& request, const GetNamedQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQueryExecutionAsyncHelper(const Model::GetQueryExecutionRequest& request, const GetQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQueryResultsAsyncHelper(const Model::GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkGroupAsyncHelper(const Model::GetWorkGroupRequest& request, const GetWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNamedQueriesAsyncHelper(const Model::ListNamedQueriesRequest& request, const ListNamedQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQueryExecutionsAsyncHelper(const Model::ListQueryExecutionsRequest& request, const ListQueryExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkGroupsAsyncHelper(const Model::ListWorkGroupsRequest& request, const ListWorkGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartQueryExecutionAsyncHelper(const Model::StartQueryExecutionRequest& request, const StartQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopQueryExecutionAsyncHelper(const Model::StopQueryExecutionRequest& request, const StopQueryExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkGroupAsyncHelper(const Model::UpdateWorkGroupRequest& request, const UpdateWorkGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Athena
} // namespace Aws
