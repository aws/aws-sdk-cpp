/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cur/CostandUsageReportServiceServiceClientModel.h>

namespace Aws
{
namespace CostandUsageReportService
{
  /**
   * <p>You can use the Amazon Web Services Cost and Usage Report API to
   * programmatically create, query, and delete Amazon Web Services Cost and Usage
   * Report definitions.</p> <p>Amazon Web Services Cost and Usage Report track the
   * monthly Amazon Web Services costs and usage associated with your Amazon Web
   * Services account. The report contains line items for each unique combination of
   * Amazon Web Services product, usage type, and operation that your Amazon Web
   * Services account uses. You can configure the Amazon Web Services Cost and Usage
   * Report to show only the data that you want, using the Amazon Web Services Cost
   * and Usage Report API.</p> <p>Service Endpoint</p> <p>The Amazon Web Services
   * Cost and Usage Report API provides the following endpoint:</p> <ul> <li>
   * <p>cur.us-east-1.amazonaws.com</p> </li> </ul>
   */
  class AWS_COSTANDUSAGEREPORTSERVICE_API CostandUsageReportServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CostandUsageReportServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CostandUsageReportServiceClientConfiguration ClientConfigurationType;
      typedef CostandUsageReportServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostandUsageReportServiceClient(const Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration& clientConfiguration = Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration(),
                                        std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostandUsageReportServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                        std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> endpointProvider = nullptr,
                                        const Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration& clientConfiguration = Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostandUsageReportServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                        std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> endpointProvider = nullptr,
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

        /**
         * <p>Deletes the specified report. Any tags associated with the report are also
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DeleteReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportDefinitionOutcome DeleteReportDefinition(const Model::DeleteReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReportDefinitionRequestT = Model::DeleteReportDefinitionRequest>
        Model::DeleteReportDefinitionOutcomeCallable DeleteReportDefinitionCallable(const DeleteReportDefinitionRequestT& request) const
        {
            return SubmitCallable(&CostandUsageReportServiceClient::DeleteReportDefinition, request);
        }

        /**
         * An Async wrapper for DeleteReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReportDefinitionRequestT = Model::DeleteReportDefinitionRequest>
        void DeleteReportDefinitionAsync(const DeleteReportDefinitionRequestT& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostandUsageReportServiceClient::DeleteReportDefinition, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Web Services Cost and Usage Report available to this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DescribeReportDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReportDefinitionsOutcome DescribeReportDefinitions(const Model::DescribeReportDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReportDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReportDefinitionsRequestT = Model::DescribeReportDefinitionsRequest>
        Model::DescribeReportDefinitionsOutcomeCallable DescribeReportDefinitionsCallable(const DescribeReportDefinitionsRequestT& request) const
        {
            return SubmitCallable(&CostandUsageReportServiceClient::DescribeReportDefinitions, request);
        }

        /**
         * An Async wrapper for DescribeReportDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReportDefinitionsRequestT = Model::DescribeReportDefinitionsRequest>
        void DescribeReportDefinitionsAsync(const DescribeReportDefinitionsRequestT& request, const DescribeReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostandUsageReportServiceClient::DescribeReportDefinitions, request, handler, context);
        }

        /**
         * <p>Lists the tags associated with the specified report definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CostandUsageReportServiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostandUsageReportServiceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Allows you to programmatically update your report preferences.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/ModifyReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReportDefinitionOutcome ModifyReportDefinition(const Model::ModifyReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for ModifyReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyReportDefinitionRequestT = Model::ModifyReportDefinitionRequest>
        Model::ModifyReportDefinitionOutcomeCallable ModifyReportDefinitionCallable(const ModifyReportDefinitionRequestT& request) const
        {
            return SubmitCallable(&CostandUsageReportServiceClient::ModifyReportDefinition, request);
        }

        /**
         * An Async wrapper for ModifyReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyReportDefinitionRequestT = Model::ModifyReportDefinitionRequest>
        void ModifyReportDefinitionAsync(const ModifyReportDefinitionRequestT& request, const ModifyReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostandUsageReportServiceClient::ModifyReportDefinition, request, handler, context);
        }

        /**
         * <p>Creates a new report using the description that you provide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/PutReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutReportDefinitionOutcome PutReportDefinition(const Model::PutReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for PutReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutReportDefinitionRequestT = Model::PutReportDefinitionRequest>
        Model::PutReportDefinitionOutcomeCallable PutReportDefinitionCallable(const PutReportDefinitionRequestT& request) const
        {
            return SubmitCallable(&CostandUsageReportServiceClient::PutReportDefinition, request);
        }

        /**
         * An Async wrapper for PutReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutReportDefinitionRequestT = Model::PutReportDefinitionRequest>
        void PutReportDefinitionAsync(const PutReportDefinitionRequestT& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostandUsageReportServiceClient::PutReportDefinition, request, handler, context);
        }

        /**
         * <p>Associates a set of tags with a report definition.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CostandUsageReportServiceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostandUsageReportServiceClient::TagResource, request, handler, context);
        }

        /**
         * <p>Disassociates a set of tags from a report definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CostandUsageReportServiceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostandUsageReportServiceClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CostandUsageReportServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CostandUsageReportServiceClient>;
      void init(const CostandUsageReportServiceClientConfiguration& clientConfiguration);

      CostandUsageReportServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace CostandUsageReportService
} // namespace Aws
