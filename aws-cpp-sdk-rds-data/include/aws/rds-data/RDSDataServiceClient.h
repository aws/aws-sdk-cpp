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
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/RDSDataServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rds-data/model/BatchExecuteStatementResult.h>
#include <aws/rds-data/model/BeginTransactionResult.h>
#include <aws/rds-data/model/CommitTransactionResult.h>
#include <aws/rds-data/model/ExecuteStatementResult.h>
#include <aws/rds-data/model/RollbackTransactionResult.h>
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

namespace RDSDataService
{

namespace Model
{
        class BatchExecuteStatementRequest;
        class BeginTransactionRequest;
        class CommitTransactionRequest;
        class ExecuteStatementRequest;
        class RollbackTransactionRequest;

        typedef Aws::Utils::Outcome<BatchExecuteStatementResult, Aws::Client::AWSError<RDSDataServiceErrors>> BatchExecuteStatementOutcome;
        typedef Aws::Utils::Outcome<BeginTransactionResult, Aws::Client::AWSError<RDSDataServiceErrors>> BeginTransactionOutcome;
        typedef Aws::Utils::Outcome<CommitTransactionResult, Aws::Client::AWSError<RDSDataServiceErrors>> CommitTransactionOutcome;
        typedef Aws::Utils::Outcome<ExecuteStatementResult, Aws::Client::AWSError<RDSDataServiceErrors>> ExecuteStatementOutcome;
        typedef Aws::Utils::Outcome<RollbackTransactionResult, Aws::Client::AWSError<RDSDataServiceErrors>> RollbackTransactionOutcome;

        typedef std::future<BatchExecuteStatementOutcome> BatchExecuteStatementOutcomeCallable;
        typedef std::future<BeginTransactionOutcome> BeginTransactionOutcomeCallable;
        typedef std::future<CommitTransactionOutcome> CommitTransactionOutcomeCallable;
        typedef std::future<ExecuteStatementOutcome> ExecuteStatementOutcomeCallable;
        typedef std::future<RollbackTransactionOutcome> RollbackTransactionOutcomeCallable;
} // namespace Model

  class RDSDataServiceClient;

    typedef std::function<void(const RDSDataServiceClient*, const Model::BatchExecuteStatementRequest&, const Model::BatchExecuteStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchExecuteStatementResponseReceivedHandler;
    typedef std::function<void(const RDSDataServiceClient*, const Model::BeginTransactionRequest&, const Model::BeginTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BeginTransactionResponseReceivedHandler;
    typedef std::function<void(const RDSDataServiceClient*, const Model::CommitTransactionRequest&, const Model::CommitTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CommitTransactionResponseReceivedHandler;
    typedef std::function<void(const RDSDataServiceClient*, const Model::ExecuteStatementRequest&, const Model::ExecuteStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteStatementResponseReceivedHandler;
    typedef std::function<void(const RDSDataServiceClient*, const Model::RollbackTransactionRequest&, const Model::RollbackTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RollbackTransactionResponseReceivedHandler;

  /**
   * <fullname>Amazon RDS Data Service</fullname>
        <p>Amazon RDS provides an
   * HTTP endpoint to run SQL statements on an Amazon Aurora
            Serverless
   * DB cluster. To run these statements, you work with the Data Service
           
   * API.</p>
        <p>For more information about the Data Service API, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
   * the Data API for Aurora
                Serverless</a> in the <i>Amazon Aurora
   * User Guide</i>.</p>
   */
  class AWS_RDSDATASERVICE_API RDSDataServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSDataServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RDSDataServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RDSDataServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~RDSDataServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "RDS Data"; }


        /**
         * <p>Runs a batch SQL statement over an array of data.</p>
        <p>You can run
         * bulk update and insert operations for multiple records using a DML 
           
         * statement with different parameter sets. Bulk operations can provide a
         * significant 
            performance improvement over individual insert and
         * update operations.</p>
        <important>    
            <p>If a call isn't
         * part of a transaction because it doesn't include the
                   
         * <code>transactionID</code> parameter, changes that result from the call are
    
         * committed automatically.</p>    
        </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BatchExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchExecuteStatementOutcome BatchExecuteStatement(const Model::BatchExecuteStatementRequest& request) const;

        /**
         * <p>Runs a batch SQL statement over an array of data.</p>
        <p>You can run
         * bulk update and insert operations for multiple records using a DML 
           
         * statement with different parameter sets. Bulk operations can provide a
         * significant 
            performance improvement over individual insert and
         * update operations.</p>
        <important>    
            <p>If a call isn't
         * part of a transaction because it doesn't include the
                   
         * <code>transactionID</code> parameter, changes that result from the call are
    
         * committed automatically.</p>    
        </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BatchExecuteStatement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchExecuteStatementOutcomeCallable BatchExecuteStatementCallable(const Model::BatchExecuteStatementRequest& request) const;

        /**
         * <p>Runs a batch SQL statement over an array of data.</p>
        <p>You can run
         * bulk update and insert operations for multiple records using a DML 
           
         * statement with different parameter sets. Bulk operations can provide a
         * significant 
            performance improvement over individual insert and
         * update operations.</p>
        <important>    
            <p>If a call isn't
         * part of a transaction because it doesn't include the
                   
         * <code>transactionID</code> parameter, changes that result from the call are
    
         * committed automatically.</p>    
        </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BatchExecuteStatement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchExecuteStatementAsync(const Model::BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a SQL transaction.</p>
        
        <important>
            <p>A
         * transaction can run for a maximum of 24 hours. A transaction is terminated and 

         * rolled back automatically after 24 hours.</p>
            <p>A transaction times
         * out if no calls use its transaction ID in three minutes. 
                If a
         * transaction times out before it's committed, it's rolled back
               
         * automatically.</p>
            <p>DDL statements inside a transaction cause an
         * implicit commit. We recommend 
                that you run each DDL statement
         * in a separate <code>ExecuteStatement</code> call with 
               
         * <code>continueAfterTimeout</code> enabled.</p>
        </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BeginTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::BeginTransactionOutcome BeginTransaction(const Model::BeginTransactionRequest& request) const;

        /**
         * <p>Starts a SQL transaction.</p>
        
        <important>
            <p>A
         * transaction can run for a maximum of 24 hours. A transaction is terminated and 

         * rolled back automatically after 24 hours.</p>
            <p>A transaction times
         * out if no calls use its transaction ID in three minutes. 
                If a
         * transaction times out before it's committed, it's rolled back
               
         * automatically.</p>
            <p>DDL statements inside a transaction cause an
         * implicit commit. We recommend 
                that you run each DDL statement
         * in a separate <code>ExecuteStatement</code> call with 
               
         * <code>continueAfterTimeout</code> enabled.</p>
        </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BeginTransaction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BeginTransactionOutcomeCallable BeginTransactionCallable(const Model::BeginTransactionRequest& request) const;

        /**
         * <p>Starts a SQL transaction.</p>
        
        <important>
            <p>A
         * transaction can run for a maximum of 24 hours. A transaction is terminated and 

         * rolled back automatically after 24 hours.</p>
            <p>A transaction times
         * out if no calls use its transaction ID in three minutes. 
                If a
         * transaction times out before it's committed, it's rolled back
               
         * automatically.</p>
            <p>DDL statements inside a transaction cause an
         * implicit commit. We recommend 
                that you run each DDL statement
         * in a separate <code>ExecuteStatement</code> call with 
               
         * <code>continueAfterTimeout</code> enabled.</p>
        </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BeginTransaction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BeginTransactionAsync(const Model::BeginTransactionRequest& request, const BeginTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Ends a SQL transaction started with the <code>BeginTransaction</code>
         * operation and
            commits the changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/CommitTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::CommitTransactionOutcome CommitTransaction(const Model::CommitTransactionRequest& request) const;

        /**
         * <p>Ends a SQL transaction started with the <code>BeginTransaction</code>
         * operation and
            commits the changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/CommitTransaction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CommitTransactionOutcomeCallable CommitTransactionCallable(const Model::CommitTransactionRequest& request) const;

        /**
         * <p>Ends a SQL transaction started with the <code>BeginTransaction</code>
         * operation and
            commits the changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/CommitTransaction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CommitTransactionAsync(const Model::CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs a SQL statement against a database.</p>
        <important>    
        
         * <p>If a call isn't part of a transaction because it doesn't include the
        
         * <code>transactionID</code> parameter, changes that result from the call are
    
         * committed automatically.</p>    
        </important>
        <p>The response
         * size limit is 1 MB or 1,000 records. If the call returns more than 1 MB of
         * response data or over 1,000 records, the call is terminated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteStatementOutcome ExecuteStatement(const Model::ExecuteStatementRequest& request) const;

        /**
         * <p>Runs a SQL statement against a database.</p>
        <important>    
        
         * <p>If a call isn't part of a transaction because it doesn't include the
        
         * <code>transactionID</code> parameter, changes that result from the call are
    
         * committed automatically.</p>    
        </important>
        <p>The response
         * size limit is 1 MB or 1,000 records. If the call returns more than 1 MB of
         * response data or over 1,000 records, the call is terminated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ExecuteStatement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteStatementOutcomeCallable ExecuteStatementCallable(const Model::ExecuteStatementRequest& request) const;

        /**
         * <p>Runs a SQL statement against a database.</p>
        <important>    
        
         * <p>If a call isn't part of a transaction because it doesn't include the
        
         * <code>transactionID</code> parameter, changes that result from the call are
    
         * committed automatically.</p>    
        </important>
        <p>The response
         * size limit is 1 MB or 1,000 records. If the call returns more than 1 MB of
         * response data or over 1,000 records, the call is terminated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ExecuteStatement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteStatementAsync(const Model::ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Performs a rollback of a transaction. Rolling back a transaction cancels its
         * changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/RollbackTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::RollbackTransactionOutcome RollbackTransaction(const Model::RollbackTransactionRequest& request) const;

        /**
         * <p>Performs a rollback of a transaction. Rolling back a transaction cancels its
         * changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/RollbackTransaction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RollbackTransactionOutcomeCallable RollbackTransactionCallable(const Model::RollbackTransactionRequest& request) const;

        /**
         * <p>Performs a rollback of a transaction. Rolling back a transaction cancels its
         * changes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/RollbackTransaction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RollbackTransactionAsync(const Model::RollbackTransactionRequest& request, const RollbackTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchExecuteStatementAsyncHelper(const Model::BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BeginTransactionAsyncHelper(const Model::BeginTransactionRequest& request, const BeginTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CommitTransactionAsyncHelper(const Model::CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecuteStatementAsyncHelper(const Model::ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RollbackTransactionAsyncHelper(const Model::RollbackTransactionRequest& request, const RollbackTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace RDSDataService
} // namespace Aws
