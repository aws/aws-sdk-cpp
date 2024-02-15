/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/artifact/ArtifactServiceClientModel.h>

namespace Aws
{
namespace Artifact
{
  /**
   * <p>This reference provides descriptions of the low-level AWS Artifact Service
   * API.</p>
   */
  class AWS_ARTIFACT_API ArtifactClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ArtifactClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ArtifactClientConfiguration ClientConfigurationType;
      typedef ArtifactEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ArtifactClient(const Aws::Artifact::ArtifactClientConfiguration& clientConfiguration = Aws::Artifact::ArtifactClientConfiguration(),
                       std::shared_ptr<ArtifactEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ArtifactClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<ArtifactEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Artifact::ArtifactClientConfiguration& clientConfiguration = Aws::Artifact::ArtifactClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ArtifactClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<ArtifactEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Artifact::ArtifactClientConfiguration& clientConfiguration = Aws::Artifact::ArtifactClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ArtifactClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ArtifactClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ArtifactClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ArtifactClient();

        /**
         * <p>Get the account settings for Artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
        Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const GetAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&ArtifactClient::GetAccountSettings, request);
        }

        /**
         * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
        void GetAccountSettingsAsync(const GetAccountSettingsRequestT& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ArtifactClient::GetAccountSettings, request, handler, context);
        }

        /**
         * <p>Get the content for a single report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/GetReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReportOutcome GetReport(const Model::GetReportRequest& request) const;

        /**
         * A Callable wrapper for GetReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReportRequestT = Model::GetReportRequest>
        Model::GetReportOutcomeCallable GetReportCallable(const GetReportRequestT& request) const
        {
            return SubmitCallable(&ArtifactClient::GetReport, request);
        }

        /**
         * An Async wrapper for GetReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReportRequestT = Model::GetReportRequest>
        void GetReportAsync(const GetReportRequestT& request, const GetReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ArtifactClient::GetReport, request, handler, context);
        }

        /**
         * <p>Get the metadata for a single report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/GetReportMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReportMetadataOutcome GetReportMetadata(const Model::GetReportMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetReportMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReportMetadataRequestT = Model::GetReportMetadataRequest>
        Model::GetReportMetadataOutcomeCallable GetReportMetadataCallable(const GetReportMetadataRequestT& request) const
        {
            return SubmitCallable(&ArtifactClient::GetReportMetadata, request);
        }

        /**
         * An Async wrapper for GetReportMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReportMetadataRequestT = Model::GetReportMetadataRequest>
        void GetReportMetadataAsync(const GetReportMetadataRequestT& request, const GetReportMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ArtifactClient::GetReportMetadata, request, handler, context);
        }

        /**
         * <p>Get the Term content associated with a single report.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/GetTermForReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTermForReportOutcome GetTermForReport(const Model::GetTermForReportRequest& request) const;

        /**
         * A Callable wrapper for GetTermForReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTermForReportRequestT = Model::GetTermForReportRequest>
        Model::GetTermForReportOutcomeCallable GetTermForReportCallable(const GetTermForReportRequestT& request) const
        {
            return SubmitCallable(&ArtifactClient::GetTermForReport, request);
        }

        /**
         * An Async wrapper for GetTermForReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTermForReportRequestT = Model::GetTermForReportRequest>
        void GetTermForReportAsync(const GetTermForReportRequestT& request, const GetTermForReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ArtifactClient::GetTermForReport, request, handler, context);
        }

        /**
         * <p>List available reports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ListReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportsOutcome ListReports(const Model::ListReportsRequest& request) const;

        /**
         * A Callable wrapper for ListReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReportsRequestT = Model::ListReportsRequest>
        Model::ListReportsOutcomeCallable ListReportsCallable(const ListReportsRequestT& request) const
        {
            return SubmitCallable(&ArtifactClient::ListReports, request);
        }

        /**
         * An Async wrapper for ListReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReportsRequestT = Model::ListReportsRequest>
        void ListReportsAsync(const ListReportsRequestT& request, const ListReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ArtifactClient::ListReports, request, handler, context);
        }

        /**
         * <p>Put the account settings for Artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/PutAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountSettingsOutcome PutAccountSettings(const Model::PutAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccountSettingsRequestT = Model::PutAccountSettingsRequest>
        Model::PutAccountSettingsOutcomeCallable PutAccountSettingsCallable(const PutAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&ArtifactClient::PutAccountSettings, request);
        }

        /**
         * An Async wrapper for PutAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountSettingsRequestT = Model::PutAccountSettingsRequest>
        void PutAccountSettingsAsync(const PutAccountSettingsRequestT& request, const PutAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ArtifactClient::PutAccountSettings, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ArtifactEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ArtifactClient>;
      void init(const ArtifactClientConfiguration& clientConfiguration);

      ArtifactClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ArtifactEndpointProviderBase> m_endpointProvider;
  };

} // namespace Artifact
} // namespace Aws
