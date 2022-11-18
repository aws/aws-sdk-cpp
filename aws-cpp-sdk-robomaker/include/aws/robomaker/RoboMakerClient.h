/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/robomaker/RoboMakerServiceClientModel.h>
#include <aws/robomaker/RoboMakerLegacyAsyncMacros.h>

namespace Aws
{
namespace RoboMaker
{
  /**
   * <p>This section provides documentation for the AWS RoboMaker API operations.</p>
   */
  class AWS_ROBOMAKER_API RoboMakerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::RoboMaker::RoboMakerClientConfiguration& clientConfiguration = Aws::RoboMaker::RoboMakerClientConfiguration(),
                        std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<RoboMakerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<RoboMakerEndpointProvider>(ALLOCATION_TAG),
                        const Aws::RoboMaker::RoboMakerClientConfiguration& clientConfiguration = Aws::RoboMaker::RoboMakerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RoboMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<RoboMakerEndpointProvider>(ALLOCATION_TAG),
                        const Aws::RoboMaker::RoboMakerClientConfiguration& clientConfiguration = Aws::RoboMaker::RoboMakerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RoboMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RoboMakerClient();


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
         * <p>Deletes one or more worlds in a batch operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDeleteWorlds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteWorldsOutcome BatchDeleteWorlds(const Model::BatchDeleteWorldsRequest& request) const;


        /**
         * <p>Describes one or more simulation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDescribeSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeSimulationJobOutcome BatchDescribeSimulationJob(const Model::BatchDescribeSimulationJobRequest& request) const;


        /**
         * <p>Cancels the specified simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSimulationJobOutcome CancelSimulationJob(const Model::CancelSimulationJobRequest& request) const;


        /**
         * <p>Cancels a simulation job batch. When you cancel a simulation job batch, you
         * are also cancelling all of the active simulation jobs created as part of the
         * batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSimulationJobBatchOutcome CancelSimulationJobBatch(const Model::CancelSimulationJobBatchRequest& request) const;


        /**
         * <p>Cancels the specified export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelWorldExportJobOutcome CancelWorldExportJob(const Model::CancelWorldExportJobRequest& request) const;


        /**
         * <p>Cancels the specified world generator job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelWorldGenerationJobOutcome CancelWorldGenerationJob(const Model::CancelWorldGenerationJobRequest& request) const;


        /**
         * <p>Creates a robot application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRobotApplicationOutcome CreateRobotApplication(const Model::CreateRobotApplicationRequest& request) const;


        /**
         * <p>Creates a version of a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRobotApplicationVersionOutcome CreateRobotApplicationVersion(const Model::CreateRobotApplicationVersionRequest& request) const;


        /**
         * <p>Creates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationApplicationOutcome CreateSimulationApplication(const Model::CreateSimulationApplicationRequest& request) const;


        /**
         * <p>Creates a simulation application with a specific revision id.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationApplicationVersionOutcome CreateSimulationApplicationVersion(const Model::CreateSimulationApplicationVersionRequest& request) const;


        /**
         * <p>Creates a simulation job.</p>  <p>After 90 days, simulation jobs expire
         * and will be deleted. They will no longer be accessible. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationJobOutcome CreateSimulationJob(const Model::CreateSimulationJobRequest& request) const;


        /**
         * <p>Creates a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldExportJobOutcome CreateWorldExportJob(const Model::CreateWorldExportJobRequest& request) const;


        /**
         * <p>Creates worlds using the specified template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldGenerationJobOutcome CreateWorldGenerationJob(const Model::CreateWorldGenerationJobRequest& request) const;


        /**
         * <p>Creates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldTemplateOutcome CreateWorldTemplate(const Model::CreateWorldTemplateRequest& request) const;


        /**
         * <p>Deletes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRobotApplicationOutcome DeleteRobotApplication(const Model::DeleteRobotApplicationRequest& request) const;


        /**
         * <p>Deletes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSimulationApplicationOutcome DeleteSimulationApplication(const Model::DeleteSimulationApplicationRequest& request) const;


        /**
         * <p>Deletes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorldTemplateOutcome DeleteWorldTemplate(const Model::DeleteWorldTemplateRequest& request) const;


        /**
         * <p>Describes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRobotApplicationOutcome DescribeRobotApplication(const Model::DescribeRobotApplicationRequest& request) const;


        /**
         * <p>Describes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationApplicationOutcome DescribeSimulationApplication(const Model::DescribeSimulationApplicationRequest& request) const;


        /**
         * <p>Describes a simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationJobOutcome DescribeSimulationJob(const Model::DescribeSimulationJobRequest& request) const;


        /**
         * <p>Describes a simulation job batch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationJobBatchOutcome DescribeSimulationJobBatch(const Model::DescribeSimulationJobBatchRequest& request) const;


        /**
         * <p>Describes a world.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorld">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldOutcome DescribeWorld(const Model::DescribeWorldRequest& request) const;


        /**
         * <p>Describes a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldExportJobOutcome DescribeWorldExportJob(const Model::DescribeWorldExportJobRequest& request) const;


        /**
         * <p>Describes a world generation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldGenerationJobOutcome DescribeWorldGenerationJob(const Model::DescribeWorldGenerationJobRequest& request) const;


        /**
         * <p>Describes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldTemplateOutcome DescribeWorldTemplate(const Model::DescribeWorldTemplateRequest& request) const;


        /**
         * <p>Gets the world template body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/GetWorldTemplateBody">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorldTemplateBodyOutcome GetWorldTemplateBody(const Model::GetWorldTemplateBodyRequest& request) const;


        /**
         * <p>Returns a list of robot application. You can optionally provide filters to
         * retrieve specific robot applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListRobotApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRobotApplicationsOutcome ListRobotApplications(const Model::ListRobotApplicationsRequest& request) const;


        /**
         * <p>Returns a list of simulation applications. You can optionally provide filters
         * to retrieve specific simulation applications. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationApplicationsOutcome ListSimulationApplications(const Model::ListSimulationApplicationsRequest& request) const;


        /**
         * <p>Returns a list simulation job batches. You can optionally provide filters to
         * retrieve specific simulation batch jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobBatches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationJobBatchesOutcome ListSimulationJobBatches(const Model::ListSimulationJobBatchesRequest& request) const;


        /**
         * <p>Returns a list of simulation jobs. You can optionally provide filters to
         * retrieve specific simulation jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationJobsOutcome ListSimulationJobs(const Model::ListSimulationJobsRequest& request) const;


        /**
         * <p>Lists all tags on a AWS RoboMaker resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists world export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldExportJobsOutcome ListWorldExportJobs(const Model::ListWorldExportJobsRequest& request) const;


        /**
         * <p>Lists world generator jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldGenerationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldGenerationJobsOutcome ListWorldGenerationJobs(const Model::ListWorldGenerationJobsRequest& request) const;


        /**
         * <p>Lists world templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldTemplatesOutcome ListWorldTemplates(const Model::ListWorldTemplatesRequest& request) const;


        /**
         * <p>Lists worlds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorlds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldsOutcome ListWorlds(const Model::ListWorldsRequest& request) const;


        /**
         * <p>Restarts a running simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RestartSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::RestartSimulationJobOutcome RestartSimulationJob(const Model::RestartSimulationJobRequest& request) const;


        /**
         * <p>Starts a new simulation job batch. The batch is defined using one or more
         * <code>SimulationJobRequest</code> objects. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/StartSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSimulationJobBatchOutcome StartSimulationJobBatch(const Model::StartSimulationJobBatchRequest& request) const;


        /**
         * <p>Adds or edits tags for a AWS RoboMaker resource.</p> <p>Each tag consists of
         * a tag key and a tag value. Tag keys and tag values are both required, but tag
         * values can be empty strings. </p> <p>For information about the rules that apply
         * to tag keys and tag values, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the specified tags from the specified AWS RoboMaker resource.</p>
         * <p>To remove a tag, specify the tag key. To change the tag value of an existing
         * tag key, use <a
         * href="https://docs.aws.amazon.com/robomaker/latest/dg/API_TagResource.html">
         * <code>TagResource</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRobotApplicationOutcome UpdateRobotApplication(const Model::UpdateRobotApplicationRequest& request) const;


        /**
         * <p>Updates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSimulationApplicationOutcome UpdateSimulationApplication(const Model::UpdateSimulationApplicationRequest& request) const;


        /**
         * <p>Updates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorldTemplateOutcome UpdateWorldTemplate(const Model::UpdateWorldTemplateRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RoboMakerEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const RoboMakerClientConfiguration& clientConfiguration);

      RoboMakerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RoboMakerEndpointProviderBase> m_endpointProvider;
  };

} // namespace RoboMaker
} // namespace Aws
