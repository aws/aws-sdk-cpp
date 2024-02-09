/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codeguru-security/CodeGuruSecurityServiceClientModel.h>

namespace Aws
{
namespace CodeGuruSecurity
{
  /**
   *  <p>Amazon CodeGuru Security is in preview release and is subject to
   * change.</p>  <p>This section provides documentation for the Amazon
   * CodeGuru Security API operations. CodeGuru Security is a service that uses
   * program analysis and machine learning to detect security policy violations and
   * vulnerabilities, and recommends ways to address these security risks.</p> <p>By
   * proactively detecting and providing recommendations for addressing security
   * risks, CodeGuru Security improves the overall security of your application code.
   * For more information about CodeGuru Security, see the <a
   * href="https://docs.aws.amazon.com/codeguru/latest/security-ug/what-is-codeguru-security.html">Amazon
   * CodeGuru Security User Guide</a>. </p>
   */
  class AWS_CODEGURUSECURITY_API CodeGuruSecurityClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeGuruSecurityClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CodeGuruSecurityClientConfiguration ClientConfigurationType;
      typedef CodeGuruSecurityEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruSecurityClient(const Aws::CodeGuruSecurity::CodeGuruSecurityClientConfiguration& clientConfiguration = Aws::CodeGuruSecurity::CodeGuruSecurityClientConfiguration(),
                               std::shared_ptr<CodeGuruSecurityEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruSecurityClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<CodeGuruSecurityEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::CodeGuruSecurity::CodeGuruSecurityClientConfiguration& clientConfiguration = Aws::CodeGuruSecurity::CodeGuruSecurityClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeGuruSecurityClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<CodeGuruSecurityEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::CodeGuruSecurity::CodeGuruSecurityClientConfiguration& clientConfiguration = Aws::CodeGuruSecurity::CodeGuruSecurityClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruSecurityClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruSecurityClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeGuruSecurityClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CodeGuruSecurityClient();

        /**
         * <p>Returns a list of all requested findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/BatchGetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFindingsOutcome BatchGetFindings(const Model::BatchGetFindingsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetFindingsRequestT = Model::BatchGetFindingsRequest>
        Model::BatchGetFindingsOutcomeCallable BatchGetFindingsCallable(const BatchGetFindingsRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::BatchGetFindings, request);
        }

        /**
         * An Async wrapper for BatchGetFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetFindingsRequestT = Model::BatchGetFindingsRequest>
        void BatchGetFindingsAsync(const BatchGetFindingsRequestT& request, const BatchGetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::BatchGetFindings, request, handler, context);
        }

        /**
         * <p>Use to create a scan using code uploaded to an S3 bucket.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/CreateScan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScanOutcome CreateScan(const Model::CreateScanRequest& request) const;

        /**
         * A Callable wrapper for CreateScan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateScanRequestT = Model::CreateScanRequest>
        Model::CreateScanOutcomeCallable CreateScanCallable(const CreateScanRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::CreateScan, request);
        }

        /**
         * An Async wrapper for CreateScan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateScanRequestT = Model::CreateScanRequest>
        void CreateScanAsync(const CreateScanRequestT& request, const CreateScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::CreateScan, request, handler, context);
        }

        /**
         * <p>Generates a pre-signed URL and request headers used to upload a code
         * resource.</p> <p>You can upload your code resource to the URL and add the
         * request headers using any HTTP client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/CreateUploadUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUploadUrlOutcome CreateUploadUrl(const Model::CreateUploadUrlRequest& request) const;

        /**
         * A Callable wrapper for CreateUploadUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUploadUrlRequestT = Model::CreateUploadUrlRequest>
        Model::CreateUploadUrlOutcomeCallable CreateUploadUrlCallable(const CreateUploadUrlRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::CreateUploadUrl, request);
        }

        /**
         * An Async wrapper for CreateUploadUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUploadUrlRequestT = Model::CreateUploadUrlRequest>
        void CreateUploadUrlAsync(const CreateUploadUrlRequestT& request, const CreateUploadUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::CreateUploadUrl, request, handler, context);
        }

        /**
         * <p>Use to get account level configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/GetAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountConfigurationOutcome GetAccountConfiguration(const Model::GetAccountConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountConfigurationRequestT = Model::GetAccountConfigurationRequest>
        Model::GetAccountConfigurationOutcomeCallable GetAccountConfigurationCallable(const GetAccountConfigurationRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::GetAccountConfiguration, request);
        }

        /**
         * An Async wrapper for GetAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountConfigurationRequestT = Model::GetAccountConfigurationRequest>
        void GetAccountConfigurationAsync(const GetAccountConfigurationRequestT& request, const GetAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::GetAccountConfiguration, request, handler, context);
        }

        /**
         * <p>Returns a list of all findings generated by a particular scan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * A Callable wrapper for GetFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFindingsRequestT = Model::GetFindingsRequest>
        Model::GetFindingsOutcomeCallable GetFindingsCallable(const GetFindingsRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::GetFindings, request);
        }

        /**
         * An Async wrapper for GetFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingsRequestT = Model::GetFindingsRequest>
        void GetFindingsAsync(const GetFindingsRequestT& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::GetFindings, request, handler, context);
        }

        /**
         * <p>Returns top level metrics about an account from a specified date, including
         * number of open findings, the categories with most findings, the scans with most
         * open findings, and scans with most open critical findings. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/GetMetricsSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricsSummaryOutcome GetMetricsSummary(const Model::GetMetricsSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetMetricsSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMetricsSummaryRequestT = Model::GetMetricsSummaryRequest>
        Model::GetMetricsSummaryOutcomeCallable GetMetricsSummaryCallable(const GetMetricsSummaryRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::GetMetricsSummary, request);
        }

        /**
         * An Async wrapper for GetMetricsSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMetricsSummaryRequestT = Model::GetMetricsSummaryRequest>
        void GetMetricsSummaryAsync(const GetMetricsSummaryRequestT& request, const GetMetricsSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::GetMetricsSummary, request, handler, context);
        }

        /**
         * <p>Returns details about a scan, including whether or not a scan has
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/GetScan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScanOutcome GetScan(const Model::GetScanRequest& request) const;

        /**
         * A Callable wrapper for GetScan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetScanRequestT = Model::GetScanRequest>
        Model::GetScanOutcomeCallable GetScanCallable(const GetScanRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::GetScan, request);
        }

        /**
         * An Async wrapper for GetScan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetScanRequestT = Model::GetScanRequest>
        void GetScanAsync(const GetScanRequestT& request, const GetScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::GetScan, request, handler, context);
        }

        /**
         * <p>Returns metrics about all findings in an account within a specified time
         * range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/ListFindingsMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsMetricsOutcome ListFindingsMetrics(const Model::ListFindingsMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListFindingsMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFindingsMetricsRequestT = Model::ListFindingsMetricsRequest>
        Model::ListFindingsMetricsOutcomeCallable ListFindingsMetricsCallable(const ListFindingsMetricsRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::ListFindingsMetrics, request);
        }

        /**
         * An Async wrapper for ListFindingsMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFindingsMetricsRequestT = Model::ListFindingsMetricsRequest>
        void ListFindingsMetricsAsync(const ListFindingsMetricsRequestT& request, const ListFindingsMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::ListFindingsMetrics, request, handler, context);
        }

        /**
         * <p>Returns a list of all the standard scans in an account. Does not return
         * express scans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/ListScans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScansOutcome ListScans(const Model::ListScansRequest& request) const;

        /**
         * A Callable wrapper for ListScans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListScansRequestT = Model::ListScansRequest>
        Model::ListScansOutcomeCallable ListScansCallable(const ListScansRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::ListScans, request);
        }

        /**
         * An Async wrapper for ListScans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListScansRequestT = Model::ListScansRequest>
        void ListScansAsync(const ListScansRequestT& request, const ListScansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::ListScans, request, handler, context);
        }

        /**
         * <p>Returns a list of all tags associated with a scan.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Use to add one or more tags to an existing scan.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::TagResource, request, handler, context);
        }

        /**
         * <p>Use to remove one or more tags from an existing scan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Use to update account-level configuration with an encryption
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/UpdateAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountConfigurationOutcome UpdateAccountConfiguration(const Model::UpdateAccountConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountConfigurationRequestT = Model::UpdateAccountConfigurationRequest>
        Model::UpdateAccountConfigurationOutcomeCallable UpdateAccountConfigurationCallable(const UpdateAccountConfigurationRequestT& request) const
        {
            return SubmitCallable(&CodeGuruSecurityClient::UpdateAccountConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountConfigurationRequestT = Model::UpdateAccountConfigurationRequest>
        void UpdateAccountConfigurationAsync(const UpdateAccountConfigurationRequestT& request, const UpdateAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruSecurityClient::UpdateAccountConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeGuruSecurityEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodeGuruSecurityClient>;
      void init(const CodeGuruSecurityClientConfiguration& clientConfiguration);

      CodeGuruSecurityClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeGuruSecurityEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeGuruSecurity
} // namespace Aws
