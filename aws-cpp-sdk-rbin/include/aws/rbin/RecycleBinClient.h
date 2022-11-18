/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rbin/RecycleBinServiceClientModel.h>
#include <aws/rbin/RecycleBinLegacyAsyncMacros.h>

namespace Aws
{
namespace RecycleBin
{
  /**
   * <p>This is the <i>Recycle Bin API Reference</i>. This documentation provides
   * descriptions and syntax for each of the actions and data types in Recycle
   * Bin.</p> <p>Recycle Bin is a resource recovery feature that enables you to
   * restore accidentally deleted snapshots and EBS-backed AMIs. When using Recycle
   * Bin, if your resources are deleted, they are retained in the Recycle Bin for a
   * time period that you specify.</p> <p>You can restore a resource from the Recycle
   * Bin at any time before its retention period expires. After you restore a
   * resource from the Recycle Bin, the resource is removed from the Recycle Bin, and
   * you can then use it in the same way you use any other resource of that type in
   * your account. If the retention period expires and the resource is not restored,
   * the resource is permanently deleted from the Recycle Bin and is no longer
   * available for recovery. For more information about Recycle Bin, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-recycle-bin.html">
   * Recycle Bin</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
   */
  class AWS_RECYCLEBIN_API RecycleBinClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RecycleBinClient(const Aws::RecycleBin::RecycleBinClientConfiguration& clientConfiguration = Aws::RecycleBin::RecycleBinClientConfiguration(),
                         std::shared_ptr<RecycleBinEndpointProviderBase> endpointProvider = Aws::MakeShared<RecycleBinEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RecycleBinClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<RecycleBinEndpointProviderBase> endpointProvider = Aws::MakeShared<RecycleBinEndpointProvider>(ALLOCATION_TAG),
                         const Aws::RecycleBin::RecycleBinClientConfiguration& clientConfiguration = Aws::RecycleBin::RecycleBinClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RecycleBinClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<RecycleBinEndpointProviderBase> endpointProvider = Aws::MakeShared<RecycleBinEndpointProvider>(ALLOCATION_TAG),
                         const Aws::RecycleBin::RecycleBinClientConfiguration& clientConfiguration = Aws::RecycleBin::RecycleBinClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RecycleBinClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RecycleBinClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RecycleBinClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RecycleBinClient();


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
         * <p>Creates a Recycle Bin retention rule. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin-working-with-rules.html#recycle-bin-create-rule">
         * Create Recycle Bin retention rules</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/CreateRule">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;


        /**
         * <p>Deletes a Recycle Bin retention rule. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin-working-with-rules.html#recycle-bin-delete-rule">
         * Delete Recycle Bin retention rules</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/DeleteRule">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;


        /**
         * <p>Gets information about a Recycle Bin retention rule.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/GetRule">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRuleOutcome GetRule(const Model::GetRuleRequest& request) const;


        /**
         * <p>Lists the Recycle Bin retention rules in the Region.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;


        /**
         * <p>Lists the tags assigned to a retention rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Assigns tags to the specified retention rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Unassigns a tag from a retention rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an existing Recycle Bin retention rule. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin-working-with-rules.html#recycle-bin-update-rule">
         * Update Recycle Bin retention rules</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/UpdateRule">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RecycleBinEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const RecycleBinClientConfiguration& clientConfiguration);

      RecycleBinClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RecycleBinEndpointProviderBase> m_endpointProvider;
  };

} // namespace RecycleBin
} // namespace Aws
