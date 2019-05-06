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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudformation/model/ContinueUpdateRollbackResult.h>
#include <aws/cloudformation/model/CreateChangeSetResult.h>
#include <aws/cloudformation/model/CreateStackResult.h>
#include <aws/cloudformation/model/CreateStackInstancesResult.h>
#include <aws/cloudformation/model/CreateStackSetResult.h>
#include <aws/cloudformation/model/DeleteChangeSetResult.h>
#include <aws/cloudformation/model/DeleteStackInstancesResult.h>
#include <aws/cloudformation/model/DeleteStackSetResult.h>
#include <aws/cloudformation/model/DescribeAccountLimitsResult.h>
#include <aws/cloudformation/model/DescribeChangeSetResult.h>
#include <aws/cloudformation/model/DescribeStackDriftDetectionStatusResult.h>
#include <aws/cloudformation/model/DescribeStackEventsResult.h>
#include <aws/cloudformation/model/DescribeStackInstanceResult.h>
#include <aws/cloudformation/model/DescribeStackResourceResult.h>
#include <aws/cloudformation/model/DescribeStackResourceDriftsResult.h>
#include <aws/cloudformation/model/DescribeStackResourcesResult.h>
#include <aws/cloudformation/model/DescribeStackSetResult.h>
#include <aws/cloudformation/model/DescribeStackSetOperationResult.h>
#include <aws/cloudformation/model/DescribeStacksResult.h>
#include <aws/cloudformation/model/DetectStackDriftResult.h>
#include <aws/cloudformation/model/DetectStackResourceDriftResult.h>
#include <aws/cloudformation/model/EstimateTemplateCostResult.h>
#include <aws/cloudformation/model/ExecuteChangeSetResult.h>
#include <aws/cloudformation/model/GetStackPolicyResult.h>
#include <aws/cloudformation/model/GetTemplateResult.h>
#include <aws/cloudformation/model/GetTemplateSummaryResult.h>
#include <aws/cloudformation/model/ListChangeSetsResult.h>
#include <aws/cloudformation/model/ListExportsResult.h>
#include <aws/cloudformation/model/ListImportsResult.h>
#include <aws/cloudformation/model/ListStackInstancesResult.h>
#include <aws/cloudformation/model/ListStackResourcesResult.h>
#include <aws/cloudformation/model/ListStackSetOperationResultsResult.h>
#include <aws/cloudformation/model/ListStackSetOperationsResult.h>
#include <aws/cloudformation/model/ListStackSetsResult.h>
#include <aws/cloudformation/model/ListStacksResult.h>
#include <aws/cloudformation/model/StopStackSetOperationResult.h>
#include <aws/cloudformation/model/UpdateStackResult.h>
#include <aws/cloudformation/model/UpdateStackInstancesResult.h>
#include <aws/cloudformation/model/UpdateStackSetResult.h>
#include <aws/cloudformation/model/UpdateTerminationProtectionResult.h>
#include <aws/cloudformation/model/ValidateTemplateResult.h>
#include <aws/core/NoResult.h>
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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace CloudFormation
{

namespace Model
{
        class CancelUpdateStackRequest;
        class ContinueUpdateRollbackRequest;
        class CreateChangeSetRequest;
        class CreateStackRequest;
        class CreateStackInstancesRequest;
        class CreateStackSetRequest;
        class DeleteChangeSetRequest;
        class DeleteStackRequest;
        class DeleteStackInstancesRequest;
        class DeleteStackSetRequest;
        class DescribeAccountLimitsRequest;
        class DescribeChangeSetRequest;
        class DescribeStackDriftDetectionStatusRequest;
        class DescribeStackEventsRequest;
        class DescribeStackInstanceRequest;
        class DescribeStackResourceRequest;
        class DescribeStackResourceDriftsRequest;
        class DescribeStackResourcesRequest;
        class DescribeStackSetRequest;
        class DescribeStackSetOperationRequest;
        class DescribeStacksRequest;
        class DetectStackDriftRequest;
        class DetectStackResourceDriftRequest;
        class EstimateTemplateCostRequest;
        class ExecuteChangeSetRequest;
        class GetStackPolicyRequest;
        class GetTemplateRequest;
        class GetTemplateSummaryRequest;
        class ListChangeSetsRequest;
        class ListExportsRequest;
        class ListImportsRequest;
        class ListStackInstancesRequest;
        class ListStackResourcesRequest;
        class ListStackSetOperationResultsRequest;
        class ListStackSetOperationsRequest;
        class ListStackSetsRequest;
        class ListStacksRequest;
        class SetStackPolicyRequest;
        class SignalResourceRequest;
        class StopStackSetOperationRequest;
        class UpdateStackRequest;
        class UpdateStackInstancesRequest;
        class UpdateStackSetRequest;
        class UpdateTerminationProtectionRequest;
        class ValidateTemplateRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFormationErrors>> CancelUpdateStackOutcome;
        typedef Aws::Utils::Outcome<ContinueUpdateRollbackResult, Aws::Client::AWSError<CloudFormationErrors>> ContinueUpdateRollbackOutcome;
        typedef Aws::Utils::Outcome<CreateChangeSetResult, Aws::Client::AWSError<CloudFormationErrors>> CreateChangeSetOutcome;
        typedef Aws::Utils::Outcome<CreateStackResult, Aws::Client::AWSError<CloudFormationErrors>> CreateStackOutcome;
        typedef Aws::Utils::Outcome<CreateStackInstancesResult, Aws::Client::AWSError<CloudFormationErrors>> CreateStackInstancesOutcome;
        typedef Aws::Utils::Outcome<CreateStackSetResult, Aws::Client::AWSError<CloudFormationErrors>> CreateStackSetOutcome;
        typedef Aws::Utils::Outcome<DeleteChangeSetResult, Aws::Client::AWSError<CloudFormationErrors>> DeleteChangeSetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFormationErrors>> DeleteStackOutcome;
        typedef Aws::Utils::Outcome<DeleteStackInstancesResult, Aws::Client::AWSError<CloudFormationErrors>> DeleteStackInstancesOutcome;
        typedef Aws::Utils::Outcome<DeleteStackSetResult, Aws::Client::AWSError<CloudFormationErrors>> DeleteStackSetOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountLimitsResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeAccountLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeChangeSetResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeChangeSetOutcome;
        typedef Aws::Utils::Outcome<DescribeStackDriftDetectionStatusResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackDriftDetectionStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeStackEventsResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeStackInstanceResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackInstanceOutcome;
        typedef Aws::Utils::Outcome<DescribeStackResourceResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackResourceOutcome;
        typedef Aws::Utils::Outcome<DescribeStackResourceDriftsResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackResourceDriftsOutcome;
        typedef Aws::Utils::Outcome<DescribeStackResourcesResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackResourcesOutcome;
        typedef Aws::Utils::Outcome<DescribeStackSetResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackSetOutcome;
        typedef Aws::Utils::Outcome<DescribeStackSetOperationResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStackSetOperationOutcome;
        typedef Aws::Utils::Outcome<DescribeStacksResult, Aws::Client::AWSError<CloudFormationErrors>> DescribeStacksOutcome;
        typedef Aws::Utils::Outcome<DetectStackDriftResult, Aws::Client::AWSError<CloudFormationErrors>> DetectStackDriftOutcome;
        typedef Aws::Utils::Outcome<DetectStackResourceDriftResult, Aws::Client::AWSError<CloudFormationErrors>> DetectStackResourceDriftOutcome;
        typedef Aws::Utils::Outcome<EstimateTemplateCostResult, Aws::Client::AWSError<CloudFormationErrors>> EstimateTemplateCostOutcome;
        typedef Aws::Utils::Outcome<ExecuteChangeSetResult, Aws::Client::AWSError<CloudFormationErrors>> ExecuteChangeSetOutcome;
        typedef Aws::Utils::Outcome<GetStackPolicyResult, Aws::Client::AWSError<CloudFormationErrors>> GetStackPolicyOutcome;
        typedef Aws::Utils::Outcome<GetTemplateResult, Aws::Client::AWSError<CloudFormationErrors>> GetTemplateOutcome;
        typedef Aws::Utils::Outcome<GetTemplateSummaryResult, Aws::Client::AWSError<CloudFormationErrors>> GetTemplateSummaryOutcome;
        typedef Aws::Utils::Outcome<ListChangeSetsResult, Aws::Client::AWSError<CloudFormationErrors>> ListChangeSetsOutcome;
        typedef Aws::Utils::Outcome<ListExportsResult, Aws::Client::AWSError<CloudFormationErrors>> ListExportsOutcome;
        typedef Aws::Utils::Outcome<ListImportsResult, Aws::Client::AWSError<CloudFormationErrors>> ListImportsOutcome;
        typedef Aws::Utils::Outcome<ListStackInstancesResult, Aws::Client::AWSError<CloudFormationErrors>> ListStackInstancesOutcome;
        typedef Aws::Utils::Outcome<ListStackResourcesResult, Aws::Client::AWSError<CloudFormationErrors>> ListStackResourcesOutcome;
        typedef Aws::Utils::Outcome<ListStackSetOperationResultsResult, Aws::Client::AWSError<CloudFormationErrors>> ListStackSetOperationResultsOutcome;
        typedef Aws::Utils::Outcome<ListStackSetOperationsResult, Aws::Client::AWSError<CloudFormationErrors>> ListStackSetOperationsOutcome;
        typedef Aws::Utils::Outcome<ListStackSetsResult, Aws::Client::AWSError<CloudFormationErrors>> ListStackSetsOutcome;
        typedef Aws::Utils::Outcome<ListStacksResult, Aws::Client::AWSError<CloudFormationErrors>> ListStacksOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFormationErrors>> SetStackPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFormationErrors>> SignalResourceOutcome;
        typedef Aws::Utils::Outcome<StopStackSetOperationResult, Aws::Client::AWSError<CloudFormationErrors>> StopStackSetOperationOutcome;
        typedef Aws::Utils::Outcome<UpdateStackResult, Aws::Client::AWSError<CloudFormationErrors>> UpdateStackOutcome;
        typedef Aws::Utils::Outcome<UpdateStackInstancesResult, Aws::Client::AWSError<CloudFormationErrors>> UpdateStackInstancesOutcome;
        typedef Aws::Utils::Outcome<UpdateStackSetResult, Aws::Client::AWSError<CloudFormationErrors>> UpdateStackSetOutcome;
        typedef Aws::Utils::Outcome<UpdateTerminationProtectionResult, Aws::Client::AWSError<CloudFormationErrors>> UpdateTerminationProtectionOutcome;
        typedef Aws::Utils::Outcome<ValidateTemplateResult, Aws::Client::AWSError<CloudFormationErrors>> ValidateTemplateOutcome;

        typedef std::future<CancelUpdateStackOutcome> CancelUpdateStackOutcomeCallable;
        typedef std::future<ContinueUpdateRollbackOutcome> ContinueUpdateRollbackOutcomeCallable;
        typedef std::future<CreateChangeSetOutcome> CreateChangeSetOutcomeCallable;
        typedef std::future<CreateStackOutcome> CreateStackOutcomeCallable;
        typedef std::future<CreateStackInstancesOutcome> CreateStackInstancesOutcomeCallable;
        typedef std::future<CreateStackSetOutcome> CreateStackSetOutcomeCallable;
        typedef std::future<DeleteChangeSetOutcome> DeleteChangeSetOutcomeCallable;
        typedef std::future<DeleteStackOutcome> DeleteStackOutcomeCallable;
        typedef std::future<DeleteStackInstancesOutcome> DeleteStackInstancesOutcomeCallable;
        typedef std::future<DeleteStackSetOutcome> DeleteStackSetOutcomeCallable;
        typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
        typedef std::future<DescribeChangeSetOutcome> DescribeChangeSetOutcomeCallable;
        typedef std::future<DescribeStackDriftDetectionStatusOutcome> DescribeStackDriftDetectionStatusOutcomeCallable;
        typedef std::future<DescribeStackEventsOutcome> DescribeStackEventsOutcomeCallable;
        typedef std::future<DescribeStackInstanceOutcome> DescribeStackInstanceOutcomeCallable;
        typedef std::future<DescribeStackResourceOutcome> DescribeStackResourceOutcomeCallable;
        typedef std::future<DescribeStackResourceDriftsOutcome> DescribeStackResourceDriftsOutcomeCallable;
        typedef std::future<DescribeStackResourcesOutcome> DescribeStackResourcesOutcomeCallable;
        typedef std::future<DescribeStackSetOutcome> DescribeStackSetOutcomeCallable;
        typedef std::future<DescribeStackSetOperationOutcome> DescribeStackSetOperationOutcomeCallable;
        typedef std::future<DescribeStacksOutcome> DescribeStacksOutcomeCallable;
        typedef std::future<DetectStackDriftOutcome> DetectStackDriftOutcomeCallable;
        typedef std::future<DetectStackResourceDriftOutcome> DetectStackResourceDriftOutcomeCallable;
        typedef std::future<EstimateTemplateCostOutcome> EstimateTemplateCostOutcomeCallable;
        typedef std::future<ExecuteChangeSetOutcome> ExecuteChangeSetOutcomeCallable;
        typedef std::future<GetStackPolicyOutcome> GetStackPolicyOutcomeCallable;
        typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
        typedef std::future<GetTemplateSummaryOutcome> GetTemplateSummaryOutcomeCallable;
        typedef std::future<ListChangeSetsOutcome> ListChangeSetsOutcomeCallable;
        typedef std::future<ListExportsOutcome> ListExportsOutcomeCallable;
        typedef std::future<ListImportsOutcome> ListImportsOutcomeCallable;
        typedef std::future<ListStackInstancesOutcome> ListStackInstancesOutcomeCallable;
        typedef std::future<ListStackResourcesOutcome> ListStackResourcesOutcomeCallable;
        typedef std::future<ListStackSetOperationResultsOutcome> ListStackSetOperationResultsOutcomeCallable;
        typedef std::future<ListStackSetOperationsOutcome> ListStackSetOperationsOutcomeCallable;
        typedef std::future<ListStackSetsOutcome> ListStackSetsOutcomeCallable;
        typedef std::future<ListStacksOutcome> ListStacksOutcomeCallable;
        typedef std::future<SetStackPolicyOutcome> SetStackPolicyOutcomeCallable;
        typedef std::future<SignalResourceOutcome> SignalResourceOutcomeCallable;
        typedef std::future<StopStackSetOperationOutcome> StopStackSetOperationOutcomeCallable;
        typedef std::future<UpdateStackOutcome> UpdateStackOutcomeCallable;
        typedef std::future<UpdateStackInstancesOutcome> UpdateStackInstancesOutcomeCallable;
        typedef std::future<UpdateStackSetOutcome> UpdateStackSetOutcomeCallable;
        typedef std::future<UpdateTerminationProtectionOutcome> UpdateTerminationProtectionOutcomeCallable;
        typedef std::future<ValidateTemplateOutcome> ValidateTemplateOutcomeCallable;
} // namespace Model

  class CloudFormationClient;

    typedef std::function<void(const CloudFormationClient*, const Model::CancelUpdateStackRequest&, const Model::CancelUpdateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelUpdateStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ContinueUpdateRollbackRequest&, const Model::ContinueUpdateRollbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ContinueUpdateRollbackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::CreateChangeSetRequest&, const Model::CreateChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChangeSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::CreateStackRequest&, const Model::CreateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::CreateStackInstancesRequest&, const Model::CreateStackInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackInstancesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::CreateStackSetRequest&, const Model::CreateStackSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeleteChangeSetRequest&, const Model::DeleteChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChangeSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeleteStackRequest&, const Model::DeleteStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeleteStackInstancesRequest&, const Model::DeleteStackInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackInstancesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DeleteStackSetRequest&, const Model::DeleteStackSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountLimitsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeChangeSetRequest&, const Model::DescribeChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChangeSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackDriftDetectionStatusRequest&, const Model::DescribeStackDriftDetectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackDriftDetectionStatusResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackEventsRequest&, const Model::DescribeStackEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackEventsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackInstanceRequest&, const Model::DescribeStackInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackInstanceResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackResourceRequest&, const Model::DescribeStackResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackResourceResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackResourceDriftsRequest&, const Model::DescribeStackResourceDriftsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackResourceDriftsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackResourcesRequest&, const Model::DescribeStackResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackResourcesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackSetRequest&, const Model::DescribeStackSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStackSetOperationRequest&, const Model::DescribeStackSetOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackSetOperationResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DescribeStacksRequest&, const Model::DescribeStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStacksResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DetectStackDriftRequest&, const Model::DetectStackDriftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectStackDriftResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::DetectStackResourceDriftRequest&, const Model::DetectStackResourceDriftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectStackResourceDriftResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::EstimateTemplateCostRequest&, const Model::EstimateTemplateCostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EstimateTemplateCostResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ExecuteChangeSetRequest&, const Model::ExecuteChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteChangeSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::GetStackPolicyRequest&, const Model::GetStackPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStackPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::GetTemplateRequest&, const Model::GetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::GetTemplateSummaryRequest&, const Model::GetTemplateSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateSummaryResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListChangeSetsRequest&, const Model::ListChangeSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChangeSetsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListExportsRequest&, const Model::ListExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExportsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListImportsRequest&, const Model::ListImportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackInstancesRequest&, const Model::ListStackInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackInstancesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackResourcesRequest&, const Model::ListStackResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackResourcesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackSetOperationResultsRequest&, const Model::ListStackSetOperationResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackSetOperationResultsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackSetOperationsRequest&, const Model::ListStackSetOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackSetOperationsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStackSetsRequest&, const Model::ListStackSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackSetsResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ListStacksRequest&, const Model::ListStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStacksResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::SetStackPolicyRequest&, const Model::SetStackPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetStackPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::SignalResourceRequest&, const Model::SignalResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SignalResourceResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::StopStackSetOperationRequest&, const Model::StopStackSetOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopStackSetOperationResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::UpdateStackRequest&, const Model::UpdateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::UpdateStackInstancesRequest&, const Model::UpdateStackInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackInstancesResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::UpdateStackSetRequest&, const Model::UpdateStackSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackSetResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::UpdateTerminationProtectionRequest&, const Model::UpdateTerminationProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTerminationProtectionResponseReceivedHandler;
    typedef std::function<void(const CloudFormationClient*, const Model::ValidateTemplateRequest&, const Model::ValidateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateTemplateResponseReceivedHandler;

  /**
   * <fullname>AWS CloudFormation</fullname> <p>AWS CloudFormation allows you to
   * create and manage AWS infrastructure deployments predictably and repeatedly. You
   * can use AWS CloudFormation to leverage AWS products, such as Amazon Elastic
   * Compute Cloud, Amazon Elastic Block Store, Amazon Simple Notification Service,
   * Elastic Load Balancing, and Auto Scaling to build highly-reliable, highly
   * scalable, cost-effective applications without creating or configuring the
   * underlying AWS infrastructure.</p> <p>With AWS CloudFormation, you declare all
   * of your resources and dependencies in a template file. The template defines a
   * collection of resources as a single unit called a stack. AWS CloudFormation
   * creates and deletes all member resources of the stack together and manages all
   * dependencies between the resources for you.</p> <p>For more information about
   * AWS CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">AWS
   * CloudFormation Product Page</a>.</p> <p>Amazon CloudFormation makes use of other
   * AWS products. If you need additional technical information about a specific AWS
   * product, you can find the product's technical documentation at <a
   * href="https://docs.aws.amazon.com/">docs.aws.amazon.com</a>.</p>
   */
  class AWS_CLOUDFORMATION_API CloudFormationClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFormationClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFormationClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFormationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudFormationClient();

        inline virtual const char* GetServiceClientName() const override { return "CloudFormation"; }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Cancels an update on the specified stack. If the call completes successfully,
         * the stack rolls back the update and reverts to the previous stack
         * configuration.</p> <note> <p>You can cancel only stacks that are in the
         * UPDATE_IN_PROGRESS state.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CancelUpdateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelUpdateStackOutcome CancelUpdateStack(const Model::CancelUpdateStackRequest& request) const;

        /**
         * <p>Cancels an update on the specified stack. If the call completes successfully,
         * the stack rolls back the update and reverts to the previous stack
         * configuration.</p> <note> <p>You can cancel only stacks that are in the
         * UPDATE_IN_PROGRESS state.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CancelUpdateStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelUpdateStackOutcomeCallable CancelUpdateStackCallable(const Model::CancelUpdateStackRequest& request) const;

        /**
         * <p>Cancels an update on the specified stack. If the call completes successfully,
         * the stack rolls back the update and reverts to the previous stack
         * configuration.</p> <note> <p>You can cancel only stacks that are in the
         * UPDATE_IN_PROGRESS state.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CancelUpdateStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelUpdateStackAsync(const Model::CancelUpdateStackRequest& request, const CancelUpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a specified stack that is in the <code>UPDATE_ROLLBACK_FAILED</code>
         * state, continues rolling it back to the <code>UPDATE_ROLLBACK_COMPLETE</code>
         * state. Depending on the cause of the failure, you can manually <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
         * fix the error</a> and continue the rollback. By continuing the rollback, you can
         * return your stack to a working state (the <code>UPDATE_ROLLBACK_COMPLETE</code>
         * state), and then try to update the stack again.</p> <p>A stack goes into the
         * <code>UPDATE_ROLLBACK_FAILED</code> state when AWS CloudFormation cannot roll
         * back all changes after a failed stack update. For example, you might have a
         * stack that is rolling back to an old database instance that was deleted outside
         * of AWS CloudFormation. Because AWS CloudFormation doesn't know the database was
         * deleted, it assumes that the database instance still exists and attempts to roll
         * back to it, causing the update rollback to fail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ContinueUpdateRollback">AWS
         * API Reference</a></p>
         */
        virtual Model::ContinueUpdateRollbackOutcome ContinueUpdateRollback(const Model::ContinueUpdateRollbackRequest& request) const;

        /**
         * <p>For a specified stack that is in the <code>UPDATE_ROLLBACK_FAILED</code>
         * state, continues rolling it back to the <code>UPDATE_ROLLBACK_COMPLETE</code>
         * state. Depending on the cause of the failure, you can manually <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
         * fix the error</a> and continue the rollback. By continuing the rollback, you can
         * return your stack to a working state (the <code>UPDATE_ROLLBACK_COMPLETE</code>
         * state), and then try to update the stack again.</p> <p>A stack goes into the
         * <code>UPDATE_ROLLBACK_FAILED</code> state when AWS CloudFormation cannot roll
         * back all changes after a failed stack update. For example, you might have a
         * stack that is rolling back to an old database instance that was deleted outside
         * of AWS CloudFormation. Because AWS CloudFormation doesn't know the database was
         * deleted, it assumes that the database instance still exists and attempts to roll
         * back to it, causing the update rollback to fail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ContinueUpdateRollback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ContinueUpdateRollbackOutcomeCallable ContinueUpdateRollbackCallable(const Model::ContinueUpdateRollbackRequest& request) const;

        /**
         * <p>For a specified stack that is in the <code>UPDATE_ROLLBACK_FAILED</code>
         * state, continues rolling it back to the <code>UPDATE_ROLLBACK_COMPLETE</code>
         * state. Depending on the cause of the failure, you can manually <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
         * fix the error</a> and continue the rollback. By continuing the rollback, you can
         * return your stack to a working state (the <code>UPDATE_ROLLBACK_COMPLETE</code>
         * state), and then try to update the stack again.</p> <p>A stack goes into the
         * <code>UPDATE_ROLLBACK_FAILED</code> state when AWS CloudFormation cannot roll
         * back all changes after a failed stack update. For example, you might have a
         * stack that is rolling back to an old database instance that was deleted outside
         * of AWS CloudFormation. Because AWS CloudFormation doesn't know the database was
         * deleted, it assumes that the database instance still exists and attempts to roll
         * back to it, causing the update rollback to fail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ContinueUpdateRollback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ContinueUpdateRollbackAsync(const Model::ContinueUpdateRollbackRequest& request, const ContinueUpdateRollbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a list of changes that will be applied to a stack so that you can
         * review the changes before executing them. You can create a change set for a
         * stack that doesn't exist or an existing stack. If you create a change set for a
         * stack that doesn't exist, the change set shows all of the resources that AWS
         * CloudFormation will create. If you create a change set for an existing stack,
         * AWS CloudFormation compares the stack's information with the information that
         * you submit in the change set and lists the differences. Use change sets to
         * understand which resources AWS CloudFormation will create or change, and how it
         * will change resources in an existing stack, before you create or update a
         * stack.</p> <p>To create a change set for a stack that doesn't exist, for the
         * <code>ChangeSetType</code> parameter, specify <code>CREATE</code>. To create a
         * change set for an existing stack, specify <code>UPDATE</code> for the
         * <code>ChangeSetType</code> parameter. After the <code>CreateChangeSet</code>
         * call successfully completes, AWS CloudFormation starts creating the change set.
         * To check the status of the change set or to review it, use the
         * <a>DescribeChangeSet</a> action.</p> <p>When you are satisfied with the changes
         * the change set will make, execute the change set by using the
         * <a>ExecuteChangeSet</a> action. AWS CloudFormation doesn't make changes until
         * you execute the change set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChangeSetOutcome CreateChangeSet(const Model::CreateChangeSetRequest& request) const;

        /**
         * <p>Creates a list of changes that will be applied to a stack so that you can
         * review the changes before executing them. You can create a change set for a
         * stack that doesn't exist or an existing stack. If you create a change set for a
         * stack that doesn't exist, the change set shows all of the resources that AWS
         * CloudFormation will create. If you create a change set for an existing stack,
         * AWS CloudFormation compares the stack's information with the information that
         * you submit in the change set and lists the differences. Use change sets to
         * understand which resources AWS CloudFormation will create or change, and how it
         * will change resources in an existing stack, before you create or update a
         * stack.</p> <p>To create a change set for a stack that doesn't exist, for the
         * <code>ChangeSetType</code> parameter, specify <code>CREATE</code>. To create a
         * change set for an existing stack, specify <code>UPDATE</code> for the
         * <code>ChangeSetType</code> parameter. After the <code>CreateChangeSet</code>
         * call successfully completes, AWS CloudFormation starts creating the change set.
         * To check the status of the change set or to review it, use the
         * <a>DescribeChangeSet</a> action.</p> <p>When you are satisfied with the changes
         * the change set will make, execute the change set by using the
         * <a>ExecuteChangeSet</a> action. AWS CloudFormation doesn't make changes until
         * you execute the change set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChangeSetOutcomeCallable CreateChangeSetCallable(const Model::CreateChangeSetRequest& request) const;

        /**
         * <p>Creates a list of changes that will be applied to a stack so that you can
         * review the changes before executing them. You can create a change set for a
         * stack that doesn't exist or an existing stack. If you create a change set for a
         * stack that doesn't exist, the change set shows all of the resources that AWS
         * CloudFormation will create. If you create a change set for an existing stack,
         * AWS CloudFormation compares the stack's information with the information that
         * you submit in the change set and lists the differences. Use change sets to
         * understand which resources AWS CloudFormation will create or change, and how it
         * will change resources in an existing stack, before you create or update a
         * stack.</p> <p>To create a change set for a stack that doesn't exist, for the
         * <code>ChangeSetType</code> parameter, specify <code>CREATE</code>. To create a
         * change set for an existing stack, specify <code>UPDATE</code> for the
         * <code>ChangeSetType</code> parameter. After the <code>CreateChangeSet</code>
         * call successfully completes, AWS CloudFormation starts creating the change set.
         * To check the status of the change set or to review it, use the
         * <a>DescribeChangeSet</a> action.</p> <p>When you are satisfied with the changes
         * the change set will make, execute the change set by using the
         * <a>ExecuteChangeSet</a> action. AWS CloudFormation doesn't make changes until
         * you execute the change set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChangeSetAsync(const Model::CreateChangeSetRequest& request, const CreateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a stack as specified in the template. After the call completes
         * successfully, the stack creation starts. You can check the status of the stack
         * via the <a>DescribeStacks</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackOutcome CreateStack(const Model::CreateStackRequest& request) const;

        /**
         * <p>Creates a stack as specified in the template. After the call completes
         * successfully, the stack creation starts. You can check the status of the stack
         * via the <a>DescribeStacks</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStackOutcomeCallable CreateStackCallable(const Model::CreateStackRequest& request) const;

        /**
         * <p>Creates a stack as specified in the template. After the call completes
         * successfully, the stack creation starts. You can check the status of the stack
         * via the <a>DescribeStacks</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackAsync(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates stack instances for the specified accounts, within the specified
         * regions. A stack instance refers to a stack in a specific account and region.
         * <code>Accounts</code> and <code>Regions</code> are required parameters—you must
         * specify at least one account and one region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStackInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackInstancesOutcome CreateStackInstances(const Model::CreateStackInstancesRequest& request) const;

        /**
         * <p>Creates stack instances for the specified accounts, within the specified
         * regions. A stack instance refers to a stack in a specific account and region.
         * <code>Accounts</code> and <code>Regions</code> are required parameters—you must
         * specify at least one account and one region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStackInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStackInstancesOutcomeCallable CreateStackInstancesCallable(const Model::CreateStackInstancesRequest& request) const;

        /**
         * <p>Creates stack instances for the specified accounts, within the specified
         * regions. A stack instance refers to a stack in a specific account and region.
         * <code>Accounts</code> and <code>Regions</code> are required parameters—you must
         * specify at least one account and one region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStackInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackInstancesAsync(const Model::CreateStackInstancesRequest& request, const CreateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a stack set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStackSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackSetOutcome CreateStackSet(const Model::CreateStackSetRequest& request) const;

        /**
         * <p>Creates a stack set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStackSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStackSetOutcomeCallable CreateStackSetCallable(const Model::CreateStackSetRequest& request) const;

        /**
         * <p>Creates a stack set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStackSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackSetAsync(const Model::CreateStackSetRequest& request, const CreateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified change set. Deleting change sets ensures that no one
         * executes the wrong change set.</p> <p>If the call successfully completes, AWS
         * CloudFormation successfully deleted the change set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChangeSetOutcome DeleteChangeSet(const Model::DeleteChangeSetRequest& request) const;

        /**
         * <p>Deletes the specified change set. Deleting change sets ensures that no one
         * executes the wrong change set.</p> <p>If the call successfully completes, AWS
         * CloudFormation successfully deleted the change set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteChangeSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChangeSetOutcomeCallable DeleteChangeSetCallable(const Model::DeleteChangeSetRequest& request) const;

        /**
         * <p>Deletes the specified change set. Deleting change sets ensures that no one
         * executes the wrong change set.</p> <p>If the call successfully completes, AWS
         * CloudFormation successfully deleted the change set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteChangeSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChangeSetAsync(const Model::DeleteChangeSetRequest& request, const DeleteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified stack. Once the call completes successfully, stack
         * deletion starts. Deleted stacks do not show up in the <a>DescribeStacks</a> API
         * if the deletion has been completed successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStack">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStackOutcome DeleteStack(const Model::DeleteStackRequest& request) const;

        /**
         * <p>Deletes a specified stack. Once the call completes successfully, stack
         * deletion starts. Deleted stacks do not show up in the <a>DescribeStacks</a> API
         * if the deletion has been completed successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStackOutcomeCallable DeleteStackCallable(const Model::DeleteStackRequest& request) const;

        /**
         * <p>Deletes a specified stack. Once the call completes successfully, stack
         * deletion starts. Deleted stacks do not show up in the <a>DescribeStacks</a> API
         * if the deletion has been completed successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackAsync(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes stack instances for the specified accounts, in the specified regions.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStackInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStackInstancesOutcome DeleteStackInstances(const Model::DeleteStackInstancesRequest& request) const;

        /**
         * <p>Deletes stack instances for the specified accounts, in the specified regions.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStackInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStackInstancesOutcomeCallable DeleteStackInstancesCallable(const Model::DeleteStackInstancesRequest& request) const;

        /**
         * <p>Deletes stack instances for the specified accounts, in the specified regions.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStackInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackInstancesAsync(const Model::DeleteStackInstancesRequest& request, const DeleteStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a stack set. Before you can delete a stack set, all of its member
         * stack instances must be deleted. For more information about how to do this, see
         * <a>DeleteStackInstances</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStackSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStackSetOutcome DeleteStackSet(const Model::DeleteStackSetRequest& request) const;

        /**
         * <p>Deletes a stack set. Before you can delete a stack set, all of its member
         * stack instances must be deleted. For more information about how to do this, see
         * <a>DeleteStackInstances</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStackSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStackSetOutcomeCallable DeleteStackSetCallable(const Model::DeleteStackSetRequest& request) const;

        /**
         * <p>Deletes a stack set. Before you can delete a stack set, all of its member
         * stack instances must be deleted. For more information about how to do this, see
         * <a>DeleteStackInstances</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStackSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackSetAsync(const Model::DeleteStackSetRequest& request, const DeleteStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves your account's AWS CloudFormation limits, such as the maximum
         * number of stacks that you can create in your account. For more information about
         * account limits, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/cloudformation-limits.html">AWS
         * CloudFormation Limits</a> in the <i>AWS CloudFormation User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeAccountLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Retrieves your account's AWS CloudFormation limits, such as the maximum
         * number of stacks that you can create in your account. For more information about
         * account limits, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/cloudformation-limits.html">AWS
         * CloudFormation Limits</a> in the <i>AWS CloudFormation User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Retrieves your account's AWS CloudFormation limits, such as the maximum
         * number of stacks that you can create in your account. For more information about
         * account limits, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/cloudformation-limits.html">AWS
         * CloudFormation Limits</a> in the <i>AWS CloudFormation User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the inputs for the change set and a list of changes that AWS
         * CloudFormation will make if you execute the change set. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-changesets.html">Updating
         * Stacks Using Change Sets</a> in the AWS CloudFormation User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChangeSetOutcome DescribeChangeSet(const Model::DescribeChangeSetRequest& request) const;

        /**
         * <p>Returns the inputs for the change set and a list of changes that AWS
         * CloudFormation will make if you execute the change set. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-changesets.html">Updating
         * Stacks Using Change Sets</a> in the AWS CloudFormation User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeChangeSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChangeSetOutcomeCallable DescribeChangeSetCallable(const Model::DescribeChangeSetRequest& request) const;

        /**
         * <p>Returns the inputs for the change set and a list of changes that AWS
         * CloudFormation will make if you execute the change set. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-changesets.html">Updating
         * Stacks Using Change Sets</a> in the AWS CloudFormation User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeChangeSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChangeSetAsync(const Model::DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a stack drift detection operation. A stack drift
         * detection operation detects whether a stack's actual configuration differs, or
         * has <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. A stack is considered
         * to have drifted if one or more of its resources have drifted. For more
         * information on stack and resource drift, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <a>DetectStackDrift</a> to initiate a stack drift detection operation.
         * <code>DetectStackDrift</code> returns a <code>StackDriftDetectionId</code> you
         * can use to monitor the progress of the operation using
         * <code>DescribeStackDriftDetectionStatus</code>. Once the drift detection
         * operation has completed, use <a>DescribeStackResourceDrifts</a> to return drift
         * information about the stack and its resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackDriftDetectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackDriftDetectionStatusOutcome DescribeStackDriftDetectionStatus(const Model::DescribeStackDriftDetectionStatusRequest& request) const;

        /**
         * <p>Returns information about a stack drift detection operation. A stack drift
         * detection operation detects whether a stack's actual configuration differs, or
         * has <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. A stack is considered
         * to have drifted if one or more of its resources have drifted. For more
         * information on stack and resource drift, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <a>DetectStackDrift</a> to initiate a stack drift detection operation.
         * <code>DetectStackDrift</code> returns a <code>StackDriftDetectionId</code> you
         * can use to monitor the progress of the operation using
         * <code>DescribeStackDriftDetectionStatus</code>. Once the drift detection
         * operation has completed, use <a>DescribeStackResourceDrifts</a> to return drift
         * information about the stack and its resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackDriftDetectionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackDriftDetectionStatusOutcomeCallable DescribeStackDriftDetectionStatusCallable(const Model::DescribeStackDriftDetectionStatusRequest& request) const;

        /**
         * <p>Returns information about a stack drift detection operation. A stack drift
         * detection operation detects whether a stack's actual configuration differs, or
         * has <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. A stack is considered
         * to have drifted if one or more of its resources have drifted. For more
         * information on stack and resource drift, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <a>DetectStackDrift</a> to initiate a stack drift detection operation.
         * <code>DetectStackDrift</code> returns a <code>StackDriftDetectionId</code> you
         * can use to monitor the progress of the operation using
         * <code>DescribeStackDriftDetectionStatus</code>. Once the drift detection
         * operation has completed, use <a>DescribeStackResourceDrifts</a> to return drift
         * information about the stack and its resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackDriftDetectionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackDriftDetectionStatusAsync(const Model::DescribeStackDriftDetectionStatusRequest& request, const DescribeStackDriftDetectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all stack related events for a specified stack in reverse
         * chronological order. For more information about a stack's event history, go to
         * <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/concept-stack.html">Stacks</a>
         * in the AWS CloudFormation User Guide.</p> <note> <p>You can list events for
         * stacks that have failed to create or have been deleted by specifying the unique
         * stack identifier (stack ID).</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackEventsOutcome DescribeStackEvents(const Model::DescribeStackEventsRequest& request) const;

        /**
         * <p>Returns all stack related events for a specified stack in reverse
         * chronological order. For more information about a stack's event history, go to
         * <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/concept-stack.html">Stacks</a>
         * in the AWS CloudFormation User Guide.</p> <note> <p>You can list events for
         * stacks that have failed to create or have been deleted by specifying the unique
         * stack identifier (stack ID).</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackEventsOutcomeCallable DescribeStackEventsCallable(const Model::DescribeStackEventsRequest& request) const;

        /**
         * <p>Returns all stack related events for a specified stack in reverse
         * chronological order. For more information about a stack's event history, go to
         * <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/concept-stack.html">Stacks</a>
         * in the AWS CloudFormation User Guide.</p> <note> <p>You can list events for
         * stacks that have failed to create or have been deleted by specifying the unique
         * stack identifier (stack ID).</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackEventsAsync(const Model::DescribeStackEventsRequest& request, const DescribeStackEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the stack instance that's associated with the specified stack set,
         * AWS account, and region.</p> <p>For a list of stack instances that are
         * associated with a specific stack set, use
         * <a>ListStackInstances</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackInstanceOutcome DescribeStackInstance(const Model::DescribeStackInstanceRequest& request) const;

        /**
         * <p>Returns the stack instance that's associated with the specified stack set,
         * AWS account, and region.</p> <p>For a list of stack instances that are
         * associated with a specific stack set, use
         * <a>ListStackInstances</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackInstanceOutcomeCallable DescribeStackInstanceCallable(const Model::DescribeStackInstanceRequest& request) const;

        /**
         * <p>Returns the stack instance that's associated with the specified stack set,
         * AWS account, and region.</p> <p>For a list of stack instances that are
         * associated with a specific stack set, use
         * <a>ListStackInstances</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackInstanceAsync(const Model::DescribeStackInstanceRequest& request, const DescribeStackInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the specified resource in the specified stack.</p>
         * <p>For deleted stacks, DescribeStackResource returns resource information for up
         * to 90 days after the stack has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackResourceOutcome DescribeStackResource(const Model::DescribeStackResourceRequest& request) const;

        /**
         * <p>Returns a description of the specified resource in the specified stack.</p>
         * <p>For deleted stacks, DescribeStackResource returns resource information for up
         * to 90 days after the stack has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackResourceOutcomeCallable DescribeStackResourceCallable(const Model::DescribeStackResourceRequest& request) const;

        /**
         * <p>Returns a description of the specified resource in the specified stack.</p>
         * <p>For deleted stacks, DescribeStackResource returns resource information for up
         * to 90 days after the stack has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackResourceAsync(const Model::DescribeStackResourceRequest& request, const DescribeStackResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns drift information for the resources that have been checked for drift
         * in the specified stack. This includes actual and expected configuration values
         * for resources where AWS CloudFormation detects configuration drift.</p> <p>For a
         * given stack, there will be one <code>StackResourceDrift</code> for each stack
         * resource that has been checked for drift. Resources that have not yet been
         * checked for drift are not included. Resources that do not currently support
         * drift detection are not checked, and so not included. For a list of resources
         * that support drift detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p> <p>Use <a>DetectStackResourceDrift</a> to
         * detect drift on individual resources, or <a>DetectStackDrift</a> to detect drift
         * on all supported resources for a given stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResourceDrifts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackResourceDriftsOutcome DescribeStackResourceDrifts(const Model::DescribeStackResourceDriftsRequest& request) const;

        /**
         * <p>Returns drift information for the resources that have been checked for drift
         * in the specified stack. This includes actual and expected configuration values
         * for resources where AWS CloudFormation detects configuration drift.</p> <p>For a
         * given stack, there will be one <code>StackResourceDrift</code> for each stack
         * resource that has been checked for drift. Resources that have not yet been
         * checked for drift are not included. Resources that do not currently support
         * drift detection are not checked, and so not included. For a list of resources
         * that support drift detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p> <p>Use <a>DetectStackResourceDrift</a> to
         * detect drift on individual resources, or <a>DetectStackDrift</a> to detect drift
         * on all supported resources for a given stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResourceDrifts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackResourceDriftsOutcomeCallable DescribeStackResourceDriftsCallable(const Model::DescribeStackResourceDriftsRequest& request) const;

        /**
         * <p>Returns drift information for the resources that have been checked for drift
         * in the specified stack. This includes actual and expected configuration values
         * for resources where AWS CloudFormation detects configuration drift.</p> <p>For a
         * given stack, there will be one <code>StackResourceDrift</code> for each stack
         * resource that has been checked for drift. Resources that have not yet been
         * checked for drift are not included. Resources that do not currently support
         * drift detection are not checked, and so not included. For a list of resources
         * that support drift detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p> <p>Use <a>DetectStackResourceDrift</a> to
         * detect drift on individual resources, or <a>DetectStackDrift</a> to detect drift
         * on all supported resources for a given stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResourceDrifts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackResourceDriftsAsync(const Model::DescribeStackResourceDriftsRequest& request, const DescribeStackResourceDriftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns AWS resource descriptions for running and deleted stacks. If
         * <code>StackName</code> is specified, all the associated resources that are part
         * of the stack are returned. If <code>PhysicalResourceId</code> is specified, the
         * associated resources of the stack that the resource belongs to are returned.</p>
         * <note> <p>Only the first 100 resources will be returned. If your stack has more
         * resources than this, you should use <code>ListStackResources</code> instead.</p>
         * </note> <p>For deleted stacks, <code>DescribeStackResources</code> returns
         * resource information for up to 90 days after the stack has been deleted.</p>
         * <p>You must specify either <code>StackName</code> or
         * <code>PhysicalResourceId</code>, but not both. In addition, you can specify
         * <code>LogicalResourceId</code> to filter the returned result. For more
         * information about resources, the <code>LogicalResourceId</code> and
         * <code>PhysicalResourceId</code>, go to the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/">AWS
         * CloudFormation User Guide</a>.</p> <note> <p>A <code>ValidationError</code> is
         * returned if you specify both <code>StackName</code> and
         * <code>PhysicalResourceId</code> in the same request.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResources">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackResourcesOutcome DescribeStackResources(const Model::DescribeStackResourcesRequest& request) const;

        /**
         * <p>Returns AWS resource descriptions for running and deleted stacks. If
         * <code>StackName</code> is specified, all the associated resources that are part
         * of the stack are returned. If <code>PhysicalResourceId</code> is specified, the
         * associated resources of the stack that the resource belongs to are returned.</p>
         * <note> <p>Only the first 100 resources will be returned. If your stack has more
         * resources than this, you should use <code>ListStackResources</code> instead.</p>
         * </note> <p>For deleted stacks, <code>DescribeStackResources</code> returns
         * resource information for up to 90 days after the stack has been deleted.</p>
         * <p>You must specify either <code>StackName</code> or
         * <code>PhysicalResourceId</code>, but not both. In addition, you can specify
         * <code>LogicalResourceId</code> to filter the returned result. For more
         * information about resources, the <code>LogicalResourceId</code> and
         * <code>PhysicalResourceId</code>, go to the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/">AWS
         * CloudFormation User Guide</a>.</p> <note> <p>A <code>ValidationError</code> is
         * returned if you specify both <code>StackName</code> and
         * <code>PhysicalResourceId</code> in the same request.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackResourcesOutcomeCallable DescribeStackResourcesCallable(const Model::DescribeStackResourcesRequest& request) const;

        /**
         * <p>Returns AWS resource descriptions for running and deleted stacks. If
         * <code>StackName</code> is specified, all the associated resources that are part
         * of the stack are returned. If <code>PhysicalResourceId</code> is specified, the
         * associated resources of the stack that the resource belongs to are returned.</p>
         * <note> <p>Only the first 100 resources will be returned. If your stack has more
         * resources than this, you should use <code>ListStackResources</code> instead.</p>
         * </note> <p>For deleted stacks, <code>DescribeStackResources</code> returns
         * resource information for up to 90 days after the stack has been deleted.</p>
         * <p>You must specify either <code>StackName</code> or
         * <code>PhysicalResourceId</code>, but not both. In addition, you can specify
         * <code>LogicalResourceId</code> to filter the returned result. For more
         * information about resources, the <code>LogicalResourceId</code> and
         * <code>PhysicalResourceId</code>, go to the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/">AWS
         * CloudFormation User Guide</a>.</p> <note> <p>A <code>ValidationError</code> is
         * returned if you specify both <code>StackName</code> and
         * <code>PhysicalResourceId</code> in the same request.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackResourcesAsync(const Model::DescribeStackResourcesRequest& request, const DescribeStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of the specified stack set. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackSetOutcome DescribeStackSet(const Model::DescribeStackSetRequest& request) const;

        /**
         * <p>Returns the description of the specified stack set. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackSetOutcomeCallable DescribeStackSetCallable(const Model::DescribeStackSetRequest& request) const;

        /**
         * <p>Returns the description of the specified stack set. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackSetAsync(const Model::DescribeStackSetRequest& request, const DescribeStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of the specified stack set operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackSetOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackSetOperationOutcome DescribeStackSetOperation(const Model::DescribeStackSetOperationRequest& request) const;

        /**
         * <p>Returns the description of the specified stack set operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackSetOperation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackSetOperationOutcomeCallable DescribeStackSetOperationCallable(const Model::DescribeStackSetOperationRequest& request) const;

        /**
         * <p>Returns the description of the specified stack set operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackSetOperation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackSetOperationAsync(const Model::DescribeStackSetOperationRequest& request, const DescribeStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description for the specified stack; if no stack name was
         * specified, then it returns the description for all the stacks created.</p>
         * <note> <p>If the stack does not exist, an
         * <code>AmazonCloudFormationException</code> is returned.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStacksOutcome DescribeStacks(const Model::DescribeStacksRequest& request) const;

        /**
         * <p>Returns the description for the specified stack; if no stack name was
         * specified, then it returns the description for all the stacks created.</p>
         * <note> <p>If the stack does not exist, an
         * <code>AmazonCloudFormationException</code> is returned.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStacks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStacksOutcomeCallable DescribeStacksCallable(const Model::DescribeStacksRequest& request) const;

        /**
         * <p>Returns the description for the specified stack; if no stack name was
         * specified, then it returns the description for all the stacks created.</p>
         * <note> <p>If the stack does not exist, an
         * <code>AmazonCloudFormationException</code> is returned.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStacks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStacksAsync(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects whether a stack's actual configuration differs, or has
         * <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. For each resource in
         * the stack that supports drift detection, AWS CloudFormation compares the actual
         * configuration of the resource with its expected template configuration. Only
         * resource properties explicitly defined in the stack template are checked for
         * drift. A stack is considered to have drifted if one or more of its resources
         * differ from their expected template configurations. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <code>DetectStackDrift</code> to detect drift on all supported resources for a
         * given stack, or <a>DetectStackResourceDrift</a> to detect drift on individual
         * resources.</p> <p>For a list of stack resources that currently support drift
         * detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p> <p> <code>DetectStackDrift</code> can take
         * up to several minutes, depending on the number of resources contained within the
         * stack. Use <a>DescribeStackDriftDetectionStatus</a> to monitor the progress of a
         * detect stack drift operation. Once the drift detection operation has completed,
         * use <a>DescribeStackResourceDrifts</a> to return drift information about the
         * stack and its resources.</p> <p>When detecting drift on a stack, AWS
         * CloudFormation does not detect drift on any nested stacks belonging to that
         * stack. Perform <code>DetectStackDrift</code> directly on the nested stack
         * itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DetectStackDrift">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectStackDriftOutcome DetectStackDrift(const Model::DetectStackDriftRequest& request) const;

        /**
         * <p>Detects whether a stack's actual configuration differs, or has
         * <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. For each resource in
         * the stack that supports drift detection, AWS CloudFormation compares the actual
         * configuration of the resource with its expected template configuration. Only
         * resource properties explicitly defined in the stack template are checked for
         * drift. A stack is considered to have drifted if one or more of its resources
         * differ from their expected template configurations. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <code>DetectStackDrift</code> to detect drift on all supported resources for a
         * given stack, or <a>DetectStackResourceDrift</a> to detect drift on individual
         * resources.</p> <p>For a list of stack resources that currently support drift
         * detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p> <p> <code>DetectStackDrift</code> can take
         * up to several minutes, depending on the number of resources contained within the
         * stack. Use <a>DescribeStackDriftDetectionStatus</a> to monitor the progress of a
         * detect stack drift operation. Once the drift detection operation has completed,
         * use <a>DescribeStackResourceDrifts</a> to return drift information about the
         * stack and its resources.</p> <p>When detecting drift on a stack, AWS
         * CloudFormation does not detect drift on any nested stacks belonging to that
         * stack. Perform <code>DetectStackDrift</code> directly on the nested stack
         * itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DetectStackDrift">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectStackDriftOutcomeCallable DetectStackDriftCallable(const Model::DetectStackDriftRequest& request) const;

        /**
         * <p>Detects whether a stack's actual configuration differs, or has
         * <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. For each resource in
         * the stack that supports drift detection, AWS CloudFormation compares the actual
         * configuration of the resource with its expected template configuration. Only
         * resource properties explicitly defined in the stack template are checked for
         * drift. A stack is considered to have drifted if one or more of its resources
         * differ from their expected template configurations. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <code>DetectStackDrift</code> to detect drift on all supported resources for a
         * given stack, or <a>DetectStackResourceDrift</a> to detect drift on individual
         * resources.</p> <p>For a list of stack resources that currently support drift
         * detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p> <p> <code>DetectStackDrift</code> can take
         * up to several minutes, depending on the number of resources contained within the
         * stack. Use <a>DescribeStackDriftDetectionStatus</a> to monitor the progress of a
         * detect stack drift operation. Once the drift detection operation has completed,
         * use <a>DescribeStackResourceDrifts</a> to return drift information about the
         * stack and its resources.</p> <p>When detecting drift on a stack, AWS
         * CloudFormation does not detect drift on any nested stacks belonging to that
         * stack. Perform <code>DetectStackDrift</code> directly on the nested stack
         * itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DetectStackDrift">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectStackDriftAsync(const Model::DetectStackDriftRequest& request, const DetectStackDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about whether a resource's actual configuration differs,
         * or has <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. This information
         * includes actual and expected property values for resources in which AWS
         * CloudFormation detects drift. Only resource properties explicitly defined in the
         * stack template are checked for drift. For more information about stack and
         * resource drift, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <code>DetectStackResourceDrift</code> to detect drift on individual resources,
         * or <a>DetectStackDrift</a> to detect drift on all resources in a given stack
         * that support drift detection.</p> <p>Resources that do not currently support
         * drift detection cannot be checked. For a list of resources that support drift
         * detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DetectStackResourceDrift">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectStackResourceDriftOutcome DetectStackResourceDrift(const Model::DetectStackResourceDriftRequest& request) const;

        /**
         * <p>Returns information about whether a resource's actual configuration differs,
         * or has <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. This information
         * includes actual and expected property values for resources in which AWS
         * CloudFormation detects drift. Only resource properties explicitly defined in the
         * stack template are checked for drift. For more information about stack and
         * resource drift, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <code>DetectStackResourceDrift</code> to detect drift on individual resources,
         * or <a>DetectStackDrift</a> to detect drift on all resources in a given stack
         * that support drift detection.</p> <p>Resources that do not currently support
         * drift detection cannot be checked. For a list of resources that support drift
         * detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DetectStackResourceDrift">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectStackResourceDriftOutcomeCallable DetectStackResourceDriftCallable(const Model::DetectStackResourceDriftRequest& request) const;

        /**
         * <p>Returns information about whether a resource's actual configuration differs,
         * or has <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. This information
         * includes actual and expected property values for resources in which AWS
         * CloudFormation detects drift. Only resource properties explicitly defined in the
         * stack template are checked for drift. For more information about stack and
         * resource drift, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <code>DetectStackResourceDrift</code> to detect drift on individual resources,
         * or <a>DetectStackDrift</a> to detect drift on all resources in a given stack
         * that support drift detection.</p> <p>Resources that do not currently support
         * drift detection cannot be checked. For a list of resources that support drift
         * detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DetectStackResourceDrift">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectStackResourceDriftAsync(const Model::DetectStackResourceDriftRequest& request, const DetectStackResourceDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the estimated monthly cost of a template. The return value is an AWS
         * Simple Monthly Calculator URL with a query string that describes the resources
         * required to run the template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/EstimateTemplateCost">AWS
         * API Reference</a></p>
         */
        virtual Model::EstimateTemplateCostOutcome EstimateTemplateCost(const Model::EstimateTemplateCostRequest& request) const;

        /**
         * <p>Returns the estimated monthly cost of a template. The return value is an AWS
         * Simple Monthly Calculator URL with a query string that describes the resources
         * required to run the template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/EstimateTemplateCost">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EstimateTemplateCostOutcomeCallable EstimateTemplateCostCallable(const Model::EstimateTemplateCostRequest& request) const;

        /**
         * <p>Returns the estimated monthly cost of a template. The return value is an AWS
         * Simple Monthly Calculator URL with a query string that describes the resources
         * required to run the template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/EstimateTemplateCost">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EstimateTemplateCostAsync(const Model::EstimateTemplateCostRequest& request, const EstimateTemplateCostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a stack using the input information that was provided when the
         * specified change set was created. After the call successfully completes, AWS
         * CloudFormation starts updating the stack. Use the <a>DescribeStacks</a> action
         * to view the status of the update.</p> <p>When you execute a change set, AWS
         * CloudFormation deletes all other change sets associated with the stack because
         * they aren't valid for the updated stack.</p> <p>If a stack policy is associated
         * with the stack, AWS CloudFormation enforces the policy during the update. You
         * can't specify a temporary stack policy that overrides the current
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ExecuteChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteChangeSetOutcome ExecuteChangeSet(const Model::ExecuteChangeSetRequest& request) const;

        /**
         * <p>Updates a stack using the input information that was provided when the
         * specified change set was created. After the call successfully completes, AWS
         * CloudFormation starts updating the stack. Use the <a>DescribeStacks</a> action
         * to view the status of the update.</p> <p>When you execute a change set, AWS
         * CloudFormation deletes all other change sets associated with the stack because
         * they aren't valid for the updated stack.</p> <p>If a stack policy is associated
         * with the stack, AWS CloudFormation enforces the policy during the update. You
         * can't specify a temporary stack policy that overrides the current
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ExecuteChangeSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteChangeSetOutcomeCallable ExecuteChangeSetCallable(const Model::ExecuteChangeSetRequest& request) const;

        /**
         * <p>Updates a stack using the input information that was provided when the
         * specified change set was created. After the call successfully completes, AWS
         * CloudFormation starts updating the stack. Use the <a>DescribeStacks</a> action
         * to view the status of the update.</p> <p>When you execute a change set, AWS
         * CloudFormation deletes all other change sets associated with the stack because
         * they aren't valid for the updated stack.</p> <p>If a stack policy is associated
         * with the stack, AWS CloudFormation enforces the policy during the update. You
         * can't specify a temporary stack policy that overrides the current
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ExecuteChangeSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteChangeSetAsync(const Model::ExecuteChangeSetRequest& request, const ExecuteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the stack policy for a specified stack. If a stack doesn't have a
         * policy, a null value is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetStackPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStackPolicyOutcome GetStackPolicy(const Model::GetStackPolicyRequest& request) const;

        /**
         * <p>Returns the stack policy for a specified stack. If a stack doesn't have a
         * policy, a null value is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetStackPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStackPolicyOutcomeCallable GetStackPolicyCallable(const Model::GetStackPolicyRequest& request) const;

        /**
         * <p>Returns the stack policy for a specified stack. If a stack doesn't have a
         * policy, a null value is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetStackPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStackPolicyAsync(const Model::GetStackPolicyRequest& request, const GetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the template body for a specified stack. You can get the template for
         * running or deleted stacks.</p> <p>For deleted stacks, GetTemplate returns the
         * template for up to 90 days after the stack has been deleted.</p> <note> <p> If
         * the template does not exist, a <code>ValidationError</code> is returned. </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

        /**
         * <p>Returns the template body for a specified stack. You can get the template for
         * running or deleted stacks.</p> <p>For deleted stacks, GetTemplate returns the
         * template for up to 90 days after the stack has been deleted.</p> <note> <p> If
         * the template does not exist, a <code>ValidationError</code> is returned. </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateOutcomeCallable GetTemplateCallable(const Model::GetTemplateRequest& request) const;

        /**
         * <p>Returns the template body for a specified stack. You can get the template for
         * running or deleted stacks.</p> <p>For deleted stacks, GetTemplate returns the
         * template for up to 90 days after the stack has been deleted.</p> <note> <p> If
         * the template does not exist, a <code>ValidationError</code> is returned. </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateAsync(const Model::GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a new or existing template. The
         * <code>GetTemplateSummary</code> action is useful for viewing parameter
         * information, such as default parameter values and parameter types, before you
         * create or update a stack or stack set.</p> <p>You can use the
         * <code>GetTemplateSummary</code> action when you submit a template, or you can
         * get template information for a stack set, or a running or deleted stack.</p>
         * <p>For deleted stacks, <code>GetTemplateSummary</code> returns the template
         * information for up to 90 days after the stack has been deleted. If the template
         * does not exist, a <code>ValidationError</code> is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplateSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateSummaryOutcome GetTemplateSummary(const Model::GetTemplateSummaryRequest& request) const;

        /**
         * <p>Returns information about a new or existing template. The
         * <code>GetTemplateSummary</code> action is useful for viewing parameter
         * information, such as default parameter values and parameter types, before you
         * create or update a stack or stack set.</p> <p>You can use the
         * <code>GetTemplateSummary</code> action when you submit a template, or you can
         * get template information for a stack set, or a running or deleted stack.</p>
         * <p>For deleted stacks, <code>GetTemplateSummary</code> returns the template
         * information for up to 90 days after the stack has been deleted. If the template
         * does not exist, a <code>ValidationError</code> is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplateSummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateSummaryOutcomeCallable GetTemplateSummaryCallable(const Model::GetTemplateSummaryRequest& request) const;

        /**
         * <p>Returns information about a new or existing template. The
         * <code>GetTemplateSummary</code> action is useful for viewing parameter
         * information, such as default parameter values and parameter types, before you
         * create or update a stack or stack set.</p> <p>You can use the
         * <code>GetTemplateSummary</code> action when you submit a template, or you can
         * get template information for a stack set, or a running or deleted stack.</p>
         * <p>For deleted stacks, <code>GetTemplateSummary</code> returns the template
         * information for up to 90 days after the stack has been deleted. If the template
         * does not exist, a <code>ValidationError</code> is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplateSummary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateSummaryAsync(const Model::GetTemplateSummaryRequest& request, const GetTemplateSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the ID and status of each active change set for a stack. For example,
         * AWS CloudFormation lists change sets that are in the
         * <code>CREATE_IN_PROGRESS</code> or <code>CREATE_PENDING</code>
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListChangeSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChangeSetsOutcome ListChangeSets(const Model::ListChangeSetsRequest& request) const;

        /**
         * <p>Returns the ID and status of each active change set for a stack. For example,
         * AWS CloudFormation lists change sets that are in the
         * <code>CREATE_IN_PROGRESS</code> or <code>CREATE_PENDING</code>
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListChangeSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChangeSetsOutcomeCallable ListChangeSetsCallable(const Model::ListChangeSetsRequest& request) const;

        /**
         * <p>Returns the ID and status of each active change set for a stack. For example,
         * AWS CloudFormation lists change sets that are in the
         * <code>CREATE_IN_PROGRESS</code> or <code>CREATE_PENDING</code>
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListChangeSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChangeSetsAsync(const Model::ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all exported output values in the account and region in which you call
         * this action. Use this action to see the exported output values that you can
         * import into other stacks. To import values, use the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
         * <code>Fn::ImportValue</code> </a> function. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-exports.html">
         * AWS CloudFormation Export Stack Output Values</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListExports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExportsOutcome ListExports(const Model::ListExportsRequest& request) const;

        /**
         * <p>Lists all exported output values in the account and region in which you call
         * this action. Use this action to see the exported output values that you can
         * import into other stacks. To import values, use the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
         * <code>Fn::ImportValue</code> </a> function. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-exports.html">
         * AWS CloudFormation Export Stack Output Values</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListExports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExportsOutcomeCallable ListExportsCallable(const Model::ListExportsRequest& request) const;

        /**
         * <p>Lists all exported output values in the account and region in which you call
         * this action. Use this action to see the exported output values that you can
         * import into other stacks. To import values, use the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
         * <code>Fn::ImportValue</code> </a> function. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-exports.html">
         * AWS CloudFormation Export Stack Output Values</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListExports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExportsAsync(const Model::ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all stacks that are importing an exported output value. To modify or
         * remove an exported output value, first use this action to see which stacks are
         * using it. To see the exported output values in your account, see
         * <a>ListExports</a>. </p> <p>For more information about importing an exported
         * output value, see the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
         * <code>Fn::ImportValue</code> </a> function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListImports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportsOutcome ListImports(const Model::ListImportsRequest& request) const;

        /**
         * <p>Lists all stacks that are importing an exported output value. To modify or
         * remove an exported output value, first use this action to see which stacks are
         * using it. To see the exported output values in your account, see
         * <a>ListExports</a>. </p> <p>For more information about importing an exported
         * output value, see the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
         * <code>Fn::ImportValue</code> </a> function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListImports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImportsOutcomeCallable ListImportsCallable(const Model::ListImportsRequest& request) const;

        /**
         * <p>Lists all stacks that are importing an exported output value. To modify or
         * remove an exported output value, first use this action to see which stacks are
         * using it. To see the exported output values in your account, see
         * <a>ListExports</a>. </p> <p>For more information about importing an exported
         * output value, see the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
         * <code>Fn::ImportValue</code> </a> function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListImports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImportsAsync(const Model::ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about stack instances that are associated with
         * the specified stack set. You can filter for stack instances that are associated
         * with a specific AWS account name or region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackInstancesOutcome ListStackInstances(const Model::ListStackInstancesRequest& request) const;

        /**
         * <p>Returns summary information about stack instances that are associated with
         * the specified stack set. You can filter for stack instances that are associated
         * with a specific AWS account name or region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackInstancesOutcomeCallable ListStackInstancesCallable(const Model::ListStackInstancesRequest& request) const;

        /**
         * <p>Returns summary information about stack instances that are associated with
         * the specified stack set. You can filter for stack instances that are associated
         * with a specific AWS account name or region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackInstancesAsync(const Model::ListStackInstancesRequest& request, const ListStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptions of all resources of the specified stack.</p> <p>For
         * deleted stacks, ListStackResources returns resource information for up to 90
         * days after the stack has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackResourcesOutcome ListStackResources(const Model::ListStackResourcesRequest& request) const;

        /**
         * <p>Returns descriptions of all resources of the specified stack.</p> <p>For
         * deleted stacks, ListStackResources returns resource information for up to 90
         * days after the stack has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackResourcesOutcomeCallable ListStackResourcesCallable(const Model::ListStackResourcesRequest& request) const;

        /**
         * <p>Returns descriptions of all resources of the specified stack.</p> <p>For
         * deleted stacks, ListStackResources returns resource information for up to 90
         * days after the stack has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackResourcesAsync(const Model::ListStackResourcesRequest& request, const ListStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about the results of a stack set operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSetOperationResults">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackSetOperationResultsOutcome ListStackSetOperationResults(const Model::ListStackSetOperationResultsRequest& request) const;

        /**
         * <p>Returns summary information about the results of a stack set operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSetOperationResults">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackSetOperationResultsOutcomeCallable ListStackSetOperationResultsCallable(const Model::ListStackSetOperationResultsRequest& request) const;

        /**
         * <p>Returns summary information about the results of a stack set operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSetOperationResults">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackSetOperationResultsAsync(const Model::ListStackSetOperationResultsRequest& request, const ListStackSetOperationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about operations performed on a stack set.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSetOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackSetOperationsOutcome ListStackSetOperations(const Model::ListStackSetOperationsRequest& request) const;

        /**
         * <p>Returns summary information about operations performed on a stack set.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSetOperations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackSetOperationsOutcomeCallable ListStackSetOperationsCallable(const Model::ListStackSetOperationsRequest& request) const;

        /**
         * <p>Returns summary information about operations performed on a stack set.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSetOperations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackSetOperationsAsync(const Model::ListStackSetOperationsRequest& request, const ListStackSetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about stack sets that are associated with the
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackSetsOutcome ListStackSets(const Model::ListStackSetsRequest& request) const;

        /**
         * <p>Returns summary information about stack sets that are associated with the
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackSetsOutcomeCallable ListStackSetsCallable(const Model::ListStackSetsRequest& request) const;

        /**
         * <p>Returns summary information about stack sets that are associated with the
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackSetsAsync(const Model::ListStackSetsRequest& request, const ListStackSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the summary information for stacks whose status matches the specified
         * StackStatusFilter. Summary information for stacks that have been deleted is kept
         * for 90 days after the stack is deleted. If no StackStatusFilter is specified,
         * summary information for all stacks is returned (including existing stacks and
         * stacks that have been deleted).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStacksOutcome ListStacks(const Model::ListStacksRequest& request) const;

        /**
         * <p>Returns the summary information for stacks whose status matches the specified
         * StackStatusFilter. Summary information for stacks that have been deleted is kept
         * for 90 days after the stack is deleted. If no StackStatusFilter is specified,
         * summary information for all stacks is returned (including existing stacks and
         * stacks that have been deleted).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStacks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStacksOutcomeCallable ListStacksCallable(const Model::ListStacksRequest& request) const;

        /**
         * <p>Returns the summary information for stacks whose status matches the specified
         * StackStatusFilter. Summary information for stacks that have been deleted is kept
         * for 90 days after the stack is deleted. If no StackStatusFilter is specified,
         * summary information for all stacks is returned (including existing stacks and
         * stacks that have been deleted).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStacks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStacksAsync(const Model::ListStacksRequest& request, const ListStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets a stack policy for a specified stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SetStackPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SetStackPolicyOutcome SetStackPolicy(const Model::SetStackPolicyRequest& request) const;

        /**
         * <p>Sets a stack policy for a specified stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SetStackPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetStackPolicyOutcomeCallable SetStackPolicyCallable(const Model::SetStackPolicyRequest& request) const;

        /**
         * <p>Sets a stack policy for a specified stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SetStackPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetStackPolicyAsync(const Model::SetStackPolicyRequest& request, const SetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a signal to the specified resource with a success or failure status.
         * You can use the SignalResource API in conjunction with a creation policy or
         * update policy. AWS CloudFormation doesn't proceed with a stack creation or
         * update until resources receive the required number of signals or the timeout
         * period is exceeded. The SignalResource API is useful in cases where you want to
         * send signals from anywhere other than an Amazon EC2 instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SignalResource">AWS
         * API Reference</a></p>
         */
        virtual Model::SignalResourceOutcome SignalResource(const Model::SignalResourceRequest& request) const;

        /**
         * <p>Sends a signal to the specified resource with a success or failure status.
         * You can use the SignalResource API in conjunction with a creation policy or
         * update policy. AWS CloudFormation doesn't proceed with a stack creation or
         * update until resources receive the required number of signals or the timeout
         * period is exceeded. The SignalResource API is useful in cases where you want to
         * send signals from anywhere other than an Amazon EC2 instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SignalResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SignalResourceOutcomeCallable SignalResourceCallable(const Model::SignalResourceRequest& request) const;

        /**
         * <p>Sends a signal to the specified resource with a success or failure status.
         * You can use the SignalResource API in conjunction with a creation policy or
         * update policy. AWS CloudFormation doesn't proceed with a stack creation or
         * update until resources receive the required number of signals or the timeout
         * period is exceeded. The SignalResource API is useful in cases where you want to
         * send signals from anywhere other than an Amazon EC2 instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SignalResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SignalResourceAsync(const Model::SignalResourceRequest& request, const SignalResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an in-progress operation on a stack set and its associated stack
         * instances. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StopStackSetOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::StopStackSetOperationOutcome StopStackSetOperation(const Model::StopStackSetOperationRequest& request) const;

        /**
         * <p>Stops an in-progress operation on a stack set and its associated stack
         * instances. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StopStackSetOperation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopStackSetOperationOutcomeCallable StopStackSetOperationCallable(const Model::StopStackSetOperationRequest& request) const;

        /**
         * <p>Stops an in-progress operation on a stack set and its associated stack
         * instances. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StopStackSetOperation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopStackSetOperationAsync(const Model::StopStackSetOperationRequest& request, const StopStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a stack as specified in the template. After the call completes
         * successfully, the stack update starts. You can check the status of the stack via
         * the <a>DescribeStacks</a> action.</p> <p>To get a copy of the template for an
         * existing stack, you can use the <a>GetTemplate</a> action.</p> <p>For more
         * information about creating an update template, updating a stack, and monitoring
         * the progress of the update, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks.html">Updating
         * a Stack</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackOutcome UpdateStack(const Model::UpdateStackRequest& request) const;

        /**
         * <p>Updates a stack as specified in the template. After the call completes
         * successfully, the stack update starts. You can check the status of the stack via
         * the <a>DescribeStacks</a> action.</p> <p>To get a copy of the template for an
         * existing stack, you can use the <a>GetTemplate</a> action.</p> <p>For more
         * information about creating an update template, updating a stack, and monitoring
         * the progress of the update, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks.html">Updating
         * a Stack</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStackOutcomeCallable UpdateStackCallable(const Model::UpdateStackRequest& request) const;

        /**
         * <p>Updates a stack as specified in the template. After the call completes
         * successfully, the stack update starts. You can check the status of the stack via
         * the <a>DescribeStacks</a> action.</p> <p>To get a copy of the template for an
         * existing stack, you can use the <a>GetTemplate</a> action.</p> <p>For more
         * information about creating an update template, updating a stack, and monitoring
         * the progress of the update, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks.html">Updating
         * a Stack</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackAsync(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the parameter values for stack instances for the specified accounts,
         * within the specified regions. A stack instance refers to a stack in a specific
         * account and region. </p> <p>You can only update stack instances in regions and
         * accounts where they already exist; to create additional stack instances, use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateStackInstances.html">CreateStackInstances</a>.
         * </p> <p>During stack set updates, any parameters overridden for a stack instance
         * are not updated, but retain their overridden value.</p> <p>You can only update
         * the parameter <i>values</i> that are specified in the stack set; to add or
         * delete a parameter itself, use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
         * to update the stack set template. If you add a parameter to a template, before
         * you can override the parameter value specified in the stack set you must first
         * use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
         * to update all stack instances with the updated template and parameter value
         * specified in the stack set. Once a stack instance has been updated with the new
         * parameter, you can then override the parameter value using
         * <code>UpdateStackInstances</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStackInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackInstancesOutcome UpdateStackInstances(const Model::UpdateStackInstancesRequest& request) const;

        /**
         * <p>Updates the parameter values for stack instances for the specified accounts,
         * within the specified regions. A stack instance refers to a stack in a specific
         * account and region. </p> <p>You can only update stack instances in regions and
         * accounts where they already exist; to create additional stack instances, use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateStackInstances.html">CreateStackInstances</a>.
         * </p> <p>During stack set updates, any parameters overridden for a stack instance
         * are not updated, but retain their overridden value.</p> <p>You can only update
         * the parameter <i>values</i> that are specified in the stack set; to add or
         * delete a parameter itself, use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
         * to update the stack set template. If you add a parameter to a template, before
         * you can override the parameter value specified in the stack set you must first
         * use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
         * to update all stack instances with the updated template and parameter value
         * specified in the stack set. Once a stack instance has been updated with the new
         * parameter, you can then override the parameter value using
         * <code>UpdateStackInstances</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStackInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStackInstancesOutcomeCallable UpdateStackInstancesCallable(const Model::UpdateStackInstancesRequest& request) const;

        /**
         * <p>Updates the parameter values for stack instances for the specified accounts,
         * within the specified regions. A stack instance refers to a stack in a specific
         * account and region. </p> <p>You can only update stack instances in regions and
         * accounts where they already exist; to create additional stack instances, use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateStackInstances.html">CreateStackInstances</a>.
         * </p> <p>During stack set updates, any parameters overridden for a stack instance
         * are not updated, but retain their overridden value.</p> <p>You can only update
         * the parameter <i>values</i> that are specified in the stack set; to add or
         * delete a parameter itself, use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
         * to update the stack set template. If you add a parameter to a template, before
         * you can override the parameter value specified in the stack set you must first
         * use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
         * to update all stack instances with the updated template and parameter value
         * specified in the stack set. Once a stack instance has been updated with the new
         * parameter, you can then override the parameter value using
         * <code>UpdateStackInstances</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStackInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackInstancesAsync(const Model::UpdateStackInstancesRequest& request, const UpdateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the stack set, and associated stack instances in the specified
         * accounts and regions.</p> <p>Even if the stack set operation created by updating
         * the stack set fails (completely or partially, below or above a specified failure
         * tolerance), the stack set is updated with your changes. Subsequent
         * <a>CreateStackInstances</a> calls on the specified stack set use the updated
         * stack set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStackSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackSetOutcome UpdateStackSet(const Model::UpdateStackSetRequest& request) const;

        /**
         * <p>Updates the stack set, and associated stack instances in the specified
         * accounts and regions.</p> <p>Even if the stack set operation created by updating
         * the stack set fails (completely or partially, below or above a specified failure
         * tolerance), the stack set is updated with your changes. Subsequent
         * <a>CreateStackInstances</a> calls on the specified stack set use the updated
         * stack set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStackSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStackSetOutcomeCallable UpdateStackSetCallable(const Model::UpdateStackSetRequest& request) const;

        /**
         * <p>Updates the stack set, and associated stack instances in the specified
         * accounts and regions.</p> <p>Even if the stack set operation created by updating
         * the stack set fails (completely or partially, below or above a specified failure
         * tolerance), the stack set is updated with your changes. Subsequent
         * <a>CreateStackInstances</a> calls on the specified stack set use the updated
         * stack set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStackSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackSetAsync(const Model::UpdateStackSetRequest& request, const UpdateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates termination protection for the specified stack. If a user attempts to
         * delete a stack with termination protection enabled, the operation fails and the
         * stack remains unchanged. For more information, see <a
         * href="AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting
         * a Stack From Being Deleted</a> in the <i>AWS CloudFormation User Guide</i>.</p>
         * <p> For <a
         * href="AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
         * stacks</a>, termination protection is set on the root stack and cannot be
         * changed directly on the nested stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateTerminationProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTerminationProtectionOutcome UpdateTerminationProtection(const Model::UpdateTerminationProtectionRequest& request) const;

        /**
         * <p>Updates termination protection for the specified stack. If a user attempts to
         * delete a stack with termination protection enabled, the operation fails and the
         * stack remains unchanged. For more information, see <a
         * href="AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting
         * a Stack From Being Deleted</a> in the <i>AWS CloudFormation User Guide</i>.</p>
         * <p> For <a
         * href="AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
         * stacks</a>, termination protection is set on the root stack and cannot be
         * changed directly on the nested stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateTerminationProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTerminationProtectionOutcomeCallable UpdateTerminationProtectionCallable(const Model::UpdateTerminationProtectionRequest& request) const;

        /**
         * <p>Updates termination protection for the specified stack. If a user attempts to
         * delete a stack with termination protection enabled, the operation fails and the
         * stack remains unchanged. For more information, see <a
         * href="AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting
         * a Stack From Being Deleted</a> in the <i>AWS CloudFormation User Guide</i>.</p>
         * <p> For <a
         * href="AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
         * stacks</a>, termination protection is set on the root stack and cannot be
         * changed directly on the nested stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateTerminationProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTerminationProtectionAsync(const Model::UpdateTerminationProtectionRequest& request, const UpdateTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Validates a specified template. AWS CloudFormation first checks if the
         * template is valid JSON. If it isn't, AWS CloudFormation checks if the template
         * is valid YAML. If both these checks fail, AWS CloudFormation returns a template
         * validation error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ValidateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateTemplateOutcome ValidateTemplate(const Model::ValidateTemplateRequest& request) const;

        /**
         * <p>Validates a specified template. AWS CloudFormation first checks if the
         * template is valid JSON. If it isn't, AWS CloudFormation checks if the template
         * is valid YAML. If both these checks fail, AWS CloudFormation returns a template
         * validation error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ValidateTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateTemplateOutcomeCallable ValidateTemplateCallable(const Model::ValidateTemplateRequest& request) const;

        /**
         * <p>Validates a specified template. AWS CloudFormation first checks if the
         * template is valid JSON. If it isn't, AWS CloudFormation checks if the template
         * is valid YAML. If both these checks fail, AWS CloudFormation returns a template
         * validation error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ValidateTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateTemplateAsync(const Model::ValidateTemplateRequest& request, const ValidateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelUpdateStackAsyncHelper(const Model::CancelUpdateStackRequest& request, const CancelUpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ContinueUpdateRollbackAsyncHelper(const Model::ContinueUpdateRollbackRequest& request, const ContinueUpdateRollbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChangeSetAsyncHelper(const Model::CreateChangeSetRequest& request, const CreateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStackAsyncHelper(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStackInstancesAsyncHelper(const Model::CreateStackInstancesRequest& request, const CreateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStackSetAsyncHelper(const Model::CreateStackSetRequest& request, const CreateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChangeSetAsyncHelper(const Model::DeleteChangeSetRequest& request, const DeleteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStackAsyncHelper(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStackInstancesAsyncHelper(const Model::DeleteStackInstancesRequest& request, const DeleteStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStackSetAsyncHelper(const Model::DeleteStackSetRequest& request, const DeleteStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountLimitsAsyncHelper(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChangeSetAsyncHelper(const Model::DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackDriftDetectionStatusAsyncHelper(const Model::DescribeStackDriftDetectionStatusRequest& request, const DescribeStackDriftDetectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackEventsAsyncHelper(const Model::DescribeStackEventsRequest& request, const DescribeStackEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackInstanceAsyncHelper(const Model::DescribeStackInstanceRequest& request, const DescribeStackInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackResourceAsyncHelper(const Model::DescribeStackResourceRequest& request, const DescribeStackResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackResourceDriftsAsyncHelper(const Model::DescribeStackResourceDriftsRequest& request, const DescribeStackResourceDriftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackResourcesAsyncHelper(const Model::DescribeStackResourcesRequest& request, const DescribeStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackSetAsyncHelper(const Model::DescribeStackSetRequest& request, const DescribeStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackSetOperationAsyncHelper(const Model::DescribeStackSetOperationRequest& request, const DescribeStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStacksAsyncHelper(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectStackDriftAsyncHelper(const Model::DetectStackDriftRequest& request, const DetectStackDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectStackResourceDriftAsyncHelper(const Model::DetectStackResourceDriftRequest& request, const DetectStackResourceDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EstimateTemplateCostAsyncHelper(const Model::EstimateTemplateCostRequest& request, const EstimateTemplateCostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecuteChangeSetAsyncHelper(const Model::ExecuteChangeSetRequest& request, const ExecuteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStackPolicyAsyncHelper(const Model::GetStackPolicyRequest& request, const GetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTemplateAsyncHelper(const Model::GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTemplateSummaryAsyncHelper(const Model::GetTemplateSummaryRequest& request, const GetTemplateSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChangeSetsAsyncHelper(const Model::ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListExportsAsyncHelper(const Model::ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImportsAsyncHelper(const Model::ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStackInstancesAsyncHelper(const Model::ListStackInstancesRequest& request, const ListStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStackResourcesAsyncHelper(const Model::ListStackResourcesRequest& request, const ListStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStackSetOperationResultsAsyncHelper(const Model::ListStackSetOperationResultsRequest& request, const ListStackSetOperationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStackSetOperationsAsyncHelper(const Model::ListStackSetOperationsRequest& request, const ListStackSetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStackSetsAsyncHelper(const Model::ListStackSetsRequest& request, const ListStackSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStacksAsyncHelper(const Model::ListStacksRequest& request, const ListStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetStackPolicyAsyncHelper(const Model::SetStackPolicyRequest& request, const SetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SignalResourceAsyncHelper(const Model::SignalResourceRequest& request, const SignalResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopStackSetOperationAsyncHelper(const Model::StopStackSetOperationRequest& request, const StopStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStackAsyncHelper(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStackInstancesAsyncHelper(const Model::UpdateStackInstancesRequest& request, const UpdateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStackSetAsyncHelper(const Model::UpdateStackSetRequest& request, const UpdateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTerminationProtectionAsyncHelper(const Model::UpdateTerminationProtectionRequest& request, const UpdateTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ValidateTemplateAsyncHelper(const Model::ValidateTemplateRequest& request, const ValidateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudFormation
} // namespace Aws
