/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa/MWAAServiceClientModel.h>

namespace Aws
{
namespace MWAA
{
  /**
   * <p><fullname>Amazon Managed Workflows for Apache Airflow</fullname> <p>This
   * section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API
   * reference documentation. For more information, see <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What
   * Is Amazon MWAA?</a>.</p> <p> <b>Endpoints</b> </p> <ul> <li> <p>
   * <code>api.airflow.{region}.amazonaws.com</code> - This endpoint is used for
   * environment management.</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateEnvironment.html">CreateEnvironment</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_DeleteEnvironment.html">DeleteEnvironment</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_GetEnvironment.html">GetEnvironment</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_ListEnvironments.html">ListEnvironments</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_ListTagsForResource.html">ListTagsForResource</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_TagResource.html">TagResource</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_UntagResource.html">UntagResource</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_UpdateEnvironment.html">UpdateEnvironment</a>
   * </p> </li> </ul> </li> <li> <p> <code>env.airflow.{region}.amazonaws.com</code>
   * - This endpoint is used to operate the Airflow environment.</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateCliToken.html
   * ">CreateCliToken</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateWebLoginToken.html">CreateWebLoginToken</a>
   * </p> </li> </ul><br /> </li> <li> <p>
   * <code>ops.airflow.{region}.amazonaws.com</code> - This endpoint is used to push
   * environment metrics that track environment health.</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_PublishMetrics.html
   * ">PublishMetrics</a> </p> </li> </ul> </li> </ul> <p> <b>Regions</b> </p> <p>For
   * a list of regions that Amazon MWAA supports, see <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html#regions-mwaa">Region
   * availability</a> in the <i>Amazon MWAA User Guide</i>.</p></p>
   */
  class AWS_MWAA_API MWAAClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MWAAClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MWAAClient(const Aws::MWAA::MWAAClientConfiguration& clientConfiguration = Aws::MWAA::MWAAClientConfiguration(),
                   std::shared_ptr<MWAAEndpointProviderBase> endpointProvider = Aws::MakeShared<MWAAEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MWAAClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<MWAAEndpointProviderBase> endpointProvider = Aws::MakeShared<MWAAEndpointProvider>(ALLOCATION_TAG),
                   const Aws::MWAA::MWAAClientConfiguration& clientConfiguration = Aws::MWAA::MWAAClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MWAAClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<MWAAEndpointProviderBase> endpointProvider = Aws::MakeShared<MWAAEndpointProvider>(ALLOCATION_TAG),
                   const Aws::MWAA::MWAAClientConfiguration& clientConfiguration = Aws::MWAA::MWAAClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MWAAClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MWAAClient(const Aws::Auth::AWSCredentials& credentials,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MWAAClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MWAAClient();

        /**
         * <p>Creates a CLI token for the Airflow CLI. To learn more, see <a
         * href="https://docs.aws.amazon.com/mwaa/latest/userguide/call-mwaa-apis-cli.html">Creating
         * an Apache Airflow CLI token</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateCliToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCliTokenOutcome CreateCliToken(const Model::CreateCliTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateCliToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCliTokenOutcomeCallable CreateCliTokenCallable(const Model::CreateCliTokenRequest& request) const;

        /**
         * An Async wrapper for CreateCliToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCliTokenAsync(const Model::CreateCliTokenRequest& request, const CreateCliTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a web login token for the Airflow Web UI. To learn more, see <a
         * href="https://docs.aws.amazon.com/mwaa/latest/userguide/call-mwaa-apis-web.html">Creating
         * an Apache Airflow web login token</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateWebLoginToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebLoginTokenOutcome CreateWebLoginToken(const Model::CreateWebLoginTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateWebLoginToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWebLoginTokenOutcomeCallable CreateWebLoginTokenCallable(const Model::CreateWebLoginTokenRequest& request) const;

        /**
         * An Async wrapper for CreateWebLoginToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebLoginTokenAsync(const Model::CreateWebLoginTokenRequest& request, const CreateWebLoginTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentAsync(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const Model::GetEnvironmentRequest& request) const;

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnvironmentAsync(const Model::GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon Managed Workflows for Apache Airflow (MWAA)
         * environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const Model::ListEnvironmentsRequest& request) const;

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentsAsync(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the key-value tag pairs associated to the Amazon Managed Workflows for
         * Apache Airflow (MWAA) environment. For example, <code>"Environment":
         * "Staging"</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>Internal only</b>. Publishes environment health metrics to Amazon
         * CloudWatch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/PublishMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishMetricsOutcome PublishMetrics(const Model::PublishMetricsRequest& request) const;

        /**
         * A Callable wrapper for PublishMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishMetricsOutcomeCallable PublishMetricsCallable(const Model::PublishMetricsRequest& request) const;

        /**
         * An Async wrapper for PublishMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishMetricsAsync(const Model::PublishMetricsRequest& request, const PublishMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates key-value tag pairs to your Amazon Managed Workflows for Apache
         * Airflow (MWAA) environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes key-value tag pairs associated to your Amazon Managed Workflows for
         * Apache Airflow (MWAA) environment. For example, <code>"Environment":
         * "Staging"</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MWAAEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MWAAClient>;
      void init(const MWAAClientConfiguration& clientConfiguration);

      MWAAClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MWAAEndpointProviderBase> m_endpointProvider;
  };

} // namespace MWAA
} // namespace Aws
