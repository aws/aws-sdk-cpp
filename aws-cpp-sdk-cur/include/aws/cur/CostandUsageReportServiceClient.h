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
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/cur/CostandUsageReportServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cur/model/DeleteReportDefinitionResult.h>
#include <aws/cur/model/DescribeReportDefinitionsResult.h>
#include <aws/cur/model/PutReportDefinitionResult.h>
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

namespace CostandUsageReportService
{

namespace Model
{
        class DeleteReportDefinitionRequest;
        class DescribeReportDefinitionsRequest;
        class PutReportDefinitionRequest;

        typedef Aws::Utils::Outcome<DeleteReportDefinitionResult, Aws::Client::AWSError<CostandUsageReportServiceErrors>> DeleteReportDefinitionOutcome;
        typedef Aws::Utils::Outcome<DescribeReportDefinitionsResult, Aws::Client::AWSError<CostandUsageReportServiceErrors>> DescribeReportDefinitionsOutcome;
        typedef Aws::Utils::Outcome<PutReportDefinitionResult, Aws::Client::AWSError<CostandUsageReportServiceErrors>> PutReportDefinitionOutcome;

        typedef std::future<DeleteReportDefinitionOutcome> DeleteReportDefinitionOutcomeCallable;
        typedef std::future<DescribeReportDefinitionsOutcome> DescribeReportDefinitionsOutcomeCallable;
        typedef std::future<PutReportDefinitionOutcome> PutReportDefinitionOutcomeCallable;
} // namespace Model

  class CostandUsageReportServiceClient;

    typedef std::function<void(const CostandUsageReportServiceClient*, const Model::DeleteReportDefinitionRequest&, const Model::DeleteReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReportDefinitionResponseReceivedHandler;
    typedef std::function<void(const CostandUsageReportServiceClient*, const Model::DescribeReportDefinitionsRequest&, const Model::DescribeReportDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReportDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CostandUsageReportServiceClient*, const Model::PutReportDefinitionRequest&, const Model::PutReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutReportDefinitionResponseReceivedHandler;

  /**
   * <p>The AWS Cost and Usage Report API enables you to programmatically create,
   * query, and delete AWS Cost and Usage report definitions.</p> <p>AWS Cost and
   * Usage reports track the monthly AWS costs and usage associated with your AWS
   * account. The report contains line items for each unique combination of AWS
   * product, usage type, and operation that your AWS account uses. You can configure
   * the AWS Cost and Usage report to show only the data that you want, using the AWS
   * Cost and Usage API.</p> <p>Service Endpoint</p> <p>The AWS Cost and Usage Report
   * API provides the following endpoint:</p> <ul> <li>
   * <p>cur.us-east-1.amazonaws.com</p> </li> </ul>
   */
  class AWS_COSTANDUSAGEREPORTSERVICE_API CostandUsageReportServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostandUsageReportServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostandUsageReportServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostandUsageReportServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CostandUsageReportServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "Cost and Usage Report Service"; }


        /**
         * <p>Deletes the specified report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DeleteReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportDefinitionOutcome DeleteReportDefinition(const Model::DeleteReportDefinitionRequest& request) const;

        /**
         * <p>Deletes the specified report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DeleteReportDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReportDefinitionOutcomeCallable DeleteReportDefinitionCallable(const Model::DeleteReportDefinitionRequest& request) const;

        /**
         * <p>Deletes the specified report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DeleteReportDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReportDefinitionAsync(const Model::DeleteReportDefinitionRequest& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the AWS Cost and Usage reports available to this account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DescribeReportDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReportDefinitionsOutcome DescribeReportDefinitions(const Model::DescribeReportDefinitionsRequest& request) const;

        /**
         * <p>Lists the AWS Cost and Usage reports available to this account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DescribeReportDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReportDefinitionsOutcomeCallable DescribeReportDefinitionsCallable(const Model::DescribeReportDefinitionsRequest& request) const;

        /**
         * <p>Lists the AWS Cost and Usage reports available to this account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DescribeReportDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReportDefinitionsAsync(const Model::DescribeReportDefinitionsRequest& request, const DescribeReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new report using the description that you provide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/PutReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutReportDefinitionOutcome PutReportDefinition(const Model::PutReportDefinitionRequest& request) const;

        /**
         * <p>Creates a new report using the description that you provide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/PutReportDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutReportDefinitionOutcomeCallable PutReportDefinitionCallable(const Model::PutReportDefinitionRequest& request) const;

        /**
         * <p>Creates a new report using the description that you provide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/PutReportDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutReportDefinitionAsync(const Model::PutReportDefinitionRequest& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteReportDefinitionAsyncHelper(const Model::DeleteReportDefinitionRequest& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReportDefinitionsAsyncHelper(const Model::DescribeReportDefinitionsRequest& request, const DescribeReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutReportDefinitionAsyncHelper(const Model::PutReportDefinitionRequest& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CostandUsageReportService
} // namespace Aws
