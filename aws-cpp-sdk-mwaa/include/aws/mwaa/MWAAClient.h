/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa/MWAAServiceClientModel.h>
#include <aws/mwaa/MWAALegacyAsyncMacros.h>

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
  class AWS_MWAA_API MWAAClient : public Aws::Client::AWSJsonClient
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
         * <p>Creates a CLI token for the Airflow CLI. To learn more, see <a
         * href="https://docs.aws.amazon.com/mwaa/latest/userguide/call-mwaa-apis-cli.html">Creating
         * an Apache Airflow CLI token</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateCliToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCliTokenOutcome CreateCliToken(const Model::CreateCliTokenRequest& request) const;


        /**
         * <p>Creates an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;


        /**
         * <p>Creates a web login token for the Airflow Web UI. To learn more, see <a
         * href="https://docs.aws.amazon.com/mwaa/latest/userguide/call-mwaa-apis-web.html">Creating
         * an Apache Airflow web login token</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateWebLoginToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebLoginTokenOutcome CreateWebLoginToken(const Model::CreateWebLoginTokenRequest& request) const;


        /**
         * <p>Deletes an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;


        /**
         * <p>Describes an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;


        /**
         * <p>Lists the Amazon Managed Workflows for Apache Airflow (MWAA)
         * environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;


        /**
         * <p>Lists the key-value tag pairs associated to the Amazon Managed Workflows for
         * Apache Airflow (MWAA) environment. For example, <code>"Environment":
         * "Staging"</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p> <b>Internal only</b>. Publishes environment health metrics to Amazon
         * CloudWatch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/PublishMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishMetricsOutcome PublishMetrics(const Model::PublishMetricsRequest& request) const;


        /**
         * <p>Associates key-value tag pairs to your Amazon Managed Workflows for Apache
         * Airflow (MWAA) environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes key-value tag pairs associated to your Amazon Managed Workflows for
         * Apache Airflow (MWAA) environment. For example, <code>"Environment":
         * "Staging"</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MWAAEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MWAAClientConfiguration& clientConfiguration);

      MWAAClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MWAAEndpointProviderBase> m_endpointProvider;
  };

} // namespace MWAA
} // namespace Aws
