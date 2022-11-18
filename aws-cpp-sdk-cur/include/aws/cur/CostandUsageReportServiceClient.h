/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cur/CostandUsageReportServiceServiceClientModel.h>
#include <aws/cur/CostandUsageReportServiceLegacyAsyncMacros.h>

namespace Aws
{
namespace CostandUsageReportService
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostandUsageReportServiceClient(const Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration& clientConfiguration = Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration(),
                                        std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<CostandUsageReportServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostandUsageReportServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                        std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<CostandUsageReportServiceEndpointProvider>(ALLOCATION_TAG),
                                        const Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration& clientConfiguration = Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostandUsageReportServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<CostandUsageReportServiceEndpointProvider>(ALLOCATION_TAG),
                                        const Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration& clientConfiguration = Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostandUsageReportServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostandUsageReportServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostandUsageReportServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CostandUsageReportServiceClient();


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
         * <p>Deletes the specified report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DeleteReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportDefinitionOutcome DeleteReportDefinition(const Model::DeleteReportDefinitionRequest& request) const;


        /**
         * <p>Lists the AWS Cost and Usage reports available to this account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DescribeReportDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReportDefinitionsOutcome DescribeReportDefinitions(const Model::DescribeReportDefinitionsRequest& request) const;


        /**
         * <p>Allows you to programatically update your report preferences.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/ModifyReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReportDefinitionOutcome ModifyReportDefinition(const Model::ModifyReportDefinitionRequest& request) const;


        /**
         * <p>Creates a new report using the description that you provide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/PutReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutReportDefinitionOutcome PutReportDefinition(const Model::PutReportDefinitionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CostandUsageReportServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const CostandUsageReportServiceClientConfiguration& clientConfiguration);

      CostandUsageReportServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace CostandUsageReportService
} // namespace Aws
