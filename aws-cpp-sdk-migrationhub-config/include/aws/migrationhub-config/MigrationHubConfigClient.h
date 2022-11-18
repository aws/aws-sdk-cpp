/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migrationhub-config/MigrationHubConfigServiceClientModel.h>
#include <aws/migrationhub-config/MigrationHubConfigLegacyAsyncMacros.h>

namespace Aws
{
namespace MigrationHubConfig
{
  /**
   * <p>The AWS Migration Hub home region APIs are available specifically for working
   * with your Migration Hub home region. You can use these APIs to determine a home
   * region, as well as to create and work with controls that describe the home
   * region.</p> <ul> <li> <p>You must make API calls for write actions (create,
   * notify, associate, disassociate, import, or put) while in your home region, or a
   * <code>HomeRegionNotSetException</code> error is returned.</p> </li> <li> <p>API
   * calls for read actions (list, describe, stop, and delete) are permitted outside
   * of your home region.</p> </li> <li> <p>If you call a write API outside the home
   * region, an <code>InvalidInputException</code> is returned.</p> </li> <li> <p>You
   * can call <code>GetHomeRegion</code> action to obtain the account's Migration Hub
   * home region.</p> </li> </ul> <p>For specific API usage, see the sections that
   * follow in this AWS Migration Hub Home Region API reference. </p>
   */
  class AWS_MIGRATIONHUBCONFIG_API MigrationHubConfigClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubConfigClient(const Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration& clientConfiguration = Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration(),
                                 std::shared_ptr<MigrationHubConfigEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubConfigEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubConfigClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<MigrationHubConfigEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubConfigEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration& clientConfiguration = Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<MigrationHubConfigEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubConfigEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration& clientConfiguration = Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubConfigClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubConfigClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MigrationHubConfigClient();


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
         * <p>This API sets up the home region for the calling account only.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/CreateHomeRegionControl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHomeRegionControlOutcome CreateHomeRegionControl(const Model::CreateHomeRegionControlRequest& request) const;


        /**
         * <p>This API permits filtering on the <code>ControlId</code> and
         * <code>HomeRegion</code> fields.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/DescribeHomeRegionControls">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHomeRegionControlsOutcome DescribeHomeRegionControls(const Model::DescribeHomeRegionControlsRequest& request) const;


        /**
         * <p>Returns the calling account’s home region, if configured. This API is used by
         * other AWS services to determine the regional endpoint for calling AWS
         * Application Discovery Service and Migration Hub. You must call
         * <code>GetHomeRegion</code> at least once before you call any other AWS
         * Application Discovery Service and AWS Migration Hub APIs, to obtain the
         * account's Migration Hub home region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/GetHomeRegion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHomeRegionOutcome GetHomeRegion(const Model::GetHomeRegionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubConfigEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MigrationHubConfigClientConfiguration& clientConfiguration);

      MigrationHubConfigClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubConfigEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHubConfig
} // namespace Aws
