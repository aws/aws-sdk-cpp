/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector/model/AddAttributesToFindingsResult.h>
#include <aws/inspector/model/AttachAssessmentAndRulesPackageResult.h>
#include <aws/inspector/model/CreateApplicationResult.h>
#include <aws/inspector/model/CreateAssessmentResult.h>
#include <aws/inspector/model/CreateResourceGroupResult.h>
#include <aws/inspector/model/DeleteApplicationResult.h>
#include <aws/inspector/model/DeleteAssessmentResult.h>
#include <aws/inspector/model/DeleteRunResult.h>
#include <aws/inspector/model/DescribeApplicationResult.h>
#include <aws/inspector/model/DescribeAssessmentResult.h>
#include <aws/inspector/model/DescribeCrossAccountAccessRoleResult.h>
#include <aws/inspector/model/DescribeFindingResult.h>
#include <aws/inspector/model/DescribeResourceGroupResult.h>
#include <aws/inspector/model/DescribeRulesPackageResult.h>
#include <aws/inspector/model/DescribeRunResult.h>
#include <aws/inspector/model/DetachAssessmentAndRulesPackageResult.h>
#include <aws/inspector/model/GetAssessmentTelemetryResult.h>
#include <aws/inspector/model/ListApplicationsResult.h>
#include <aws/inspector/model/ListAssessmentAgentsResult.h>
#include <aws/inspector/model/ListAssessmentsResult.h>
#include <aws/inspector/model/ListAttachedAssessmentsResult.h>
#include <aws/inspector/model/ListAttachedRulesPackagesResult.h>
#include <aws/inspector/model/ListFindingsResult.h>
#include <aws/inspector/model/ListRulesPackagesResult.h>
#include <aws/inspector/model/ListRunsResult.h>
#include <aws/inspector/model/ListTagsForResourceResult.h>
#include <aws/inspector/model/LocalizeTextResult.h>
#include <aws/inspector/model/PreviewAgentsForResourceGroupResult.h>
#include <aws/inspector/model/RegisterCrossAccountAccessRoleResult.h>
#include <aws/inspector/model/RemoveAttributesFromFindingsResult.h>
#include <aws/inspector/model/RunAssessmentResult.h>
#include <aws/inspector/model/SetTagsForResourceResult.h>
#include <aws/inspector/model/StartDataCollectionResult.h>
#include <aws/inspector/model/StopDataCollectionResult.h>
#include <aws/inspector/model/UpdateApplicationResult.h>
#include <aws/inspector/model/UpdateAssessmentResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace Inspector
{

namespace Model
{
        class AddAttributesToFindingsRequest;
        class AttachAssessmentAndRulesPackageRequest;
        class CreateApplicationRequest;
        class CreateAssessmentRequest;
        class CreateResourceGroupRequest;
        class DeleteApplicationRequest;
        class DeleteAssessmentRequest;
        class DeleteRunRequest;
        class DescribeApplicationRequest;
        class DescribeAssessmentRequest;
        class DescribeFindingRequest;
        class DescribeResourceGroupRequest;
        class DescribeRulesPackageRequest;
        class DescribeRunRequest;
        class DetachAssessmentAndRulesPackageRequest;
        class GetAssessmentTelemetryRequest;
        class ListApplicationsRequest;
        class ListAssessmentAgentsRequest;
        class ListAssessmentsRequest;
        class ListAttachedAssessmentsRequest;
        class ListAttachedRulesPackagesRequest;
        class ListFindingsRequest;
        class ListRulesPackagesRequest;
        class ListRunsRequest;
        class ListTagsForResourceRequest;
        class LocalizeTextRequest;
        class PreviewAgentsForResourceGroupRequest;
        class RegisterCrossAccountAccessRoleRequest;
        class RemoveAttributesFromFindingsRequest;
        class RunAssessmentRequest;
        class SetTagsForResourceRequest;
        class StartDataCollectionRequest;
        class StopDataCollectionRequest;
        class UpdateApplicationRequest;
        class UpdateAssessmentRequest;

        typedef Aws::Utils::Outcome<AddAttributesToFindingsResult, Aws::Client::AWSError<InspectorErrors>> AddAttributesToFindingsOutcome;
        typedef Aws::Utils::Outcome<AttachAssessmentAndRulesPackageResult, Aws::Client::AWSError<InspectorErrors>> AttachAssessmentAndRulesPackageOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, Aws::Client::AWSError<InspectorErrors>> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateAssessmentResult, Aws::Client::AWSError<InspectorErrors>> CreateAssessmentOutcome;
        typedef Aws::Utils::Outcome<CreateResourceGroupResult, Aws::Client::AWSError<InspectorErrors>> CreateResourceGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, Aws::Client::AWSError<InspectorErrors>> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteAssessmentResult, Aws::Client::AWSError<InspectorErrors>> DeleteAssessmentOutcome;
        typedef Aws::Utils::Outcome<DeleteRunResult, Aws::Client::AWSError<InspectorErrors>> DeleteRunOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationResult, Aws::Client::AWSError<InspectorErrors>> DescribeApplicationOutcome;
        typedef Aws::Utils::Outcome<DescribeAssessmentResult, Aws::Client::AWSError<InspectorErrors>> DescribeAssessmentOutcome;
        typedef Aws::Utils::Outcome<DescribeCrossAccountAccessRoleResult, Aws::Client::AWSError<InspectorErrors>> DescribeCrossAccountAccessRoleOutcome;
        typedef Aws::Utils::Outcome<DescribeFindingResult, Aws::Client::AWSError<InspectorErrors>> DescribeFindingOutcome;
        typedef Aws::Utils::Outcome<DescribeResourceGroupResult, Aws::Client::AWSError<InspectorErrors>> DescribeResourceGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeRulesPackageResult, Aws::Client::AWSError<InspectorErrors>> DescribeRulesPackageOutcome;
        typedef Aws::Utils::Outcome<DescribeRunResult, Aws::Client::AWSError<InspectorErrors>> DescribeRunOutcome;
        typedef Aws::Utils::Outcome<DetachAssessmentAndRulesPackageResult, Aws::Client::AWSError<InspectorErrors>> DetachAssessmentAndRulesPackageOutcome;
        typedef Aws::Utils::Outcome<GetAssessmentTelemetryResult, Aws::Client::AWSError<InspectorErrors>> GetAssessmentTelemetryOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, Aws::Client::AWSError<InspectorErrors>> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListAssessmentAgentsResult, Aws::Client::AWSError<InspectorErrors>> ListAssessmentAgentsOutcome;
        typedef Aws::Utils::Outcome<ListAssessmentsResult, Aws::Client::AWSError<InspectorErrors>> ListAssessmentsOutcome;
        typedef Aws::Utils::Outcome<ListAttachedAssessmentsResult, Aws::Client::AWSError<InspectorErrors>> ListAttachedAssessmentsOutcome;
        typedef Aws::Utils::Outcome<ListAttachedRulesPackagesResult, Aws::Client::AWSError<InspectorErrors>> ListAttachedRulesPackagesOutcome;
        typedef Aws::Utils::Outcome<ListFindingsResult, Aws::Client::AWSError<InspectorErrors>> ListFindingsOutcome;
        typedef Aws::Utils::Outcome<ListRulesPackagesResult, Aws::Client::AWSError<InspectorErrors>> ListRulesPackagesOutcome;
        typedef Aws::Utils::Outcome<ListRunsResult, Aws::Client::AWSError<InspectorErrors>> ListRunsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<InspectorErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<LocalizeTextResult, Aws::Client::AWSError<InspectorErrors>> LocalizeTextOutcome;
        typedef Aws::Utils::Outcome<PreviewAgentsForResourceGroupResult, Aws::Client::AWSError<InspectorErrors>> PreviewAgentsForResourceGroupOutcome;
        typedef Aws::Utils::Outcome<RegisterCrossAccountAccessRoleResult, Aws::Client::AWSError<InspectorErrors>> RegisterCrossAccountAccessRoleOutcome;
        typedef Aws::Utils::Outcome<RemoveAttributesFromFindingsResult, Aws::Client::AWSError<InspectorErrors>> RemoveAttributesFromFindingsOutcome;
        typedef Aws::Utils::Outcome<RunAssessmentResult, Aws::Client::AWSError<InspectorErrors>> RunAssessmentOutcome;
        typedef Aws::Utils::Outcome<SetTagsForResourceResult, Aws::Client::AWSError<InspectorErrors>> SetTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartDataCollectionResult, Aws::Client::AWSError<InspectorErrors>> StartDataCollectionOutcome;
        typedef Aws::Utils::Outcome<StopDataCollectionResult, Aws::Client::AWSError<InspectorErrors>> StopDataCollectionOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, Aws::Client::AWSError<InspectorErrors>> UpdateApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateAssessmentResult, Aws::Client::AWSError<InspectorErrors>> UpdateAssessmentOutcome;

        typedef std::future<AddAttributesToFindingsOutcome> AddAttributesToFindingsOutcomeCallable;
        typedef std::future<AttachAssessmentAndRulesPackageOutcome> AttachAssessmentAndRulesPackageOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateAssessmentOutcome> CreateAssessmentOutcomeCallable;
        typedef std::future<CreateResourceGroupOutcome> CreateResourceGroupOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteAssessmentOutcome> DeleteAssessmentOutcomeCallable;
        typedef std::future<DeleteRunOutcome> DeleteRunOutcomeCallable;
        typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
        typedef std::future<DescribeAssessmentOutcome> DescribeAssessmentOutcomeCallable;
        typedef std::future<DescribeCrossAccountAccessRoleOutcome> DescribeCrossAccountAccessRoleOutcomeCallable;
        typedef std::future<DescribeFindingOutcome> DescribeFindingOutcomeCallable;
        typedef std::future<DescribeResourceGroupOutcome> DescribeResourceGroupOutcomeCallable;
        typedef std::future<DescribeRulesPackageOutcome> DescribeRulesPackageOutcomeCallable;
        typedef std::future<DescribeRunOutcome> DescribeRunOutcomeCallable;
        typedef std::future<DetachAssessmentAndRulesPackageOutcome> DetachAssessmentAndRulesPackageOutcomeCallable;
        typedef std::future<GetAssessmentTelemetryOutcome> GetAssessmentTelemetryOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListAssessmentAgentsOutcome> ListAssessmentAgentsOutcomeCallable;
        typedef std::future<ListAssessmentsOutcome> ListAssessmentsOutcomeCallable;
        typedef std::future<ListAttachedAssessmentsOutcome> ListAttachedAssessmentsOutcomeCallable;
        typedef std::future<ListAttachedRulesPackagesOutcome> ListAttachedRulesPackagesOutcomeCallable;
        typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
        typedef std::future<ListRulesPackagesOutcome> ListRulesPackagesOutcomeCallable;
        typedef std::future<ListRunsOutcome> ListRunsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<LocalizeTextOutcome> LocalizeTextOutcomeCallable;
        typedef std::future<PreviewAgentsForResourceGroupOutcome> PreviewAgentsForResourceGroupOutcomeCallable;
        typedef std::future<RegisterCrossAccountAccessRoleOutcome> RegisterCrossAccountAccessRoleOutcomeCallable;
        typedef std::future<RemoveAttributesFromFindingsOutcome> RemoveAttributesFromFindingsOutcomeCallable;
        typedef std::future<RunAssessmentOutcome> RunAssessmentOutcomeCallable;
        typedef std::future<SetTagsForResourceOutcome> SetTagsForResourceOutcomeCallable;
        typedef std::future<StartDataCollectionOutcome> StartDataCollectionOutcomeCallable;
        typedef std::future<StopDataCollectionOutcome> StopDataCollectionOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
        typedef std::future<UpdateAssessmentOutcome> UpdateAssessmentOutcomeCallable;
} // namespace Model

  class InspectorClient;

    typedef std::function<void(const InspectorClient*, const Model::AddAttributesToFindingsRequest&, const Model::AddAttributesToFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddAttributesToFindingsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::AttachAssessmentAndRulesPackageRequest&, const Model::AttachAssessmentAndRulesPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachAssessmentAndRulesPackageResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::CreateAssessmentRequest&, const Model::CreateAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssessmentResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::CreateResourceGroupRequest&, const Model::CreateResourceGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceGroupResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DeleteAssessmentRequest&, const Model::DeleteAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssessmentResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DeleteRunRequest&, const Model::DeleteRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRunResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeAssessmentRequest&, const Model::DescribeAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssessmentResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeCrossAccountAccessRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCrossAccountAccessRoleResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeFindingRequest&, const Model::DescribeFindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFindingResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeResourceGroupRequest&, const Model::DescribeResourceGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourceGroupResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeRulesPackageRequest&, const Model::DescribeRulesPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRulesPackageResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeRunRequest&, const Model::DescribeRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRunResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DetachAssessmentAndRulesPackageRequest&, const Model::DetachAssessmentAndRulesPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachAssessmentAndRulesPackageResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::GetAssessmentTelemetryRequest&, const Model::GetAssessmentTelemetryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssessmentTelemetryResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListAssessmentAgentsRequest&, const Model::ListAssessmentAgentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentAgentsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListAssessmentsRequest&, const Model::ListAssessmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListAttachedAssessmentsRequest&, const Model::ListAttachedAssessmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedAssessmentsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListAttachedRulesPackagesRequest&, const Model::ListAttachedRulesPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachedRulesPackagesResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListRulesPackagesRequest&, const Model::ListRulesPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesPackagesResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListRunsRequest&, const Model::ListRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRunsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::LocalizeTextRequest&, const Model::LocalizeTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LocalizeTextResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::PreviewAgentsForResourceGroupRequest&, const Model::PreviewAgentsForResourceGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PreviewAgentsForResourceGroupResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::RegisterCrossAccountAccessRoleRequest&, const Model::RegisterCrossAccountAccessRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterCrossAccountAccessRoleResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::RemoveAttributesFromFindingsRequest&, const Model::RemoveAttributesFromFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAttributesFromFindingsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::RunAssessmentRequest&, const Model::RunAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunAssessmentResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::SetTagsForResourceRequest&, const Model::SetTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::StartDataCollectionRequest&, const Model::StartDataCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataCollectionResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::StopDataCollectionRequest&, const Model::StopDataCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDataCollectionResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::UpdateAssessmentRequest&, const Model::UpdateAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssessmentResponseReceivedHandler;

  /**
   * <fullname>Amazon Inspector</fullname> <p>Amazon Inspector enables you to analyze
   * the behavior of the applications you run in AWS and to identify potential
   * security issues. For more information, see <a
   * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
   * Amazon Inspector User Guide</a>.</p>
   */
  class AWS_INSPECTOR_API InspectorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InspectorClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~InspectorClient();

        /**
         * <p>Assigns attributes (key and value pair) to the findings specified by the
         * findings' ARNs.</p>
         */
        virtual Model::AddAttributesToFindingsOutcome AddAttributesToFindings(const Model::AddAttributesToFindingsRequest& request) const;

        /**
         * <p>Assigns attributes (key and value pair) to the findings specified by the
         * findings' ARNs.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddAttributesToFindingsOutcomeCallable AddAttributesToFindingsCallable(const Model::AddAttributesToFindingsRequest& request) const;

        /**
         * <p>Assigns attributes (key and value pair) to the findings specified by the
         * findings' ARNs.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddAttributesToFindingsAsync(const Model::AddAttributesToFindingsRequest& request, const AddAttributesToFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the rules package specified by the rules package ARN to the
         * assessment specified by the assessment ARN.</p>
         */
        virtual Model::AttachAssessmentAndRulesPackageOutcome AttachAssessmentAndRulesPackage(const Model::AttachAssessmentAndRulesPackageRequest& request) const;

        /**
         * <p>Attaches the rules package specified by the rules package ARN to the
         * assessment specified by the assessment ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachAssessmentAndRulesPackageOutcomeCallable AttachAssessmentAndRulesPackageCallable(const Model::AttachAssessmentAndRulesPackageRequest& request) const;

        /**
         * <p>Attaches the rules package specified by the rules package ARN to the
         * assessment specified by the assessment ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachAssessmentAndRulesPackageAsync(const Model::AttachAssessmentAndRulesPackageRequest& request, const AttachAssessmentAndRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new application using the resource group ARN generated by
         * <a>CreateResourceGroup</a>. You can create up to 50 applications per AWS
         * account. You can run up to 500 concurrent agents per AWS account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide//inspector_applications.html">
         * Inspector Applications.</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates a new application using the resource group ARN generated by
         * <a>CreateResourceGroup</a>. You can create up to 50 applications per AWS
         * account. You can run up to 500 concurrent agents per AWS account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide//inspector_applications.html">
         * Inspector Applications.</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates a new application using the resource group ARN generated by
         * <a>CreateResourceGroup</a>. You can create up to 50 applications per AWS
         * account. You can run up to 500 concurrent agents per AWS account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide//inspector_applications.html">
         * Inspector Applications.</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an assessment for the application specified by the application ARN.
         * You can create up to 500 assessments per AWS account.</p>
         */
        virtual Model::CreateAssessmentOutcome CreateAssessment(const Model::CreateAssessmentRequest& request) const;

        /**
         * <p>Creates an assessment for the application specified by the application ARN.
         * You can create up to 500 assessments per AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssessmentOutcomeCallable CreateAssessmentCallable(const Model::CreateAssessmentRequest& request) const;

        /**
         * <p>Creates an assessment for the application specified by the application ARN.
         * You can create up to 500 assessments per AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssessmentAsync(const Model::CreateAssessmentRequest& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a resource group using the specified set of tags (key and value
         * pairs) that are used to select the EC2 instances to be included in an Inspector
         * application. The created resource group is then used to create an Inspector
         * application.</p>
         */
        virtual Model::CreateResourceGroupOutcome CreateResourceGroup(const Model::CreateResourceGroupRequest& request) const;

        /**
         * <p>Creates a resource group using the specified set of tags (key and value
         * pairs) that are used to select the EC2 instances to be included in an Inspector
         * application. The created resource group is then used to create an Inspector
         * application.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceGroupOutcomeCallable CreateResourceGroupCallable(const Model::CreateResourceGroupRequest& request) const;

        /**
         * <p>Creates a resource group using the specified set of tags (key and value
         * pairs) that are used to select the EC2 instances to be included in an Inspector
         * application. The created resource group is then used to create an Inspector
         * application.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceGroupAsync(const Model::CreateResourceGroupRequest& request, const CreateResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the application specified by the application ARN.</p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes the application specified by the application ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes the application specified by the application ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the assessment specified by the assessment ARN.</p>
         */
        virtual Model::DeleteAssessmentOutcome DeleteAssessment(const Model::DeleteAssessmentRequest& request) const;

        /**
         * <p>Deletes the assessment specified by the assessment ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssessmentOutcomeCallable DeleteAssessmentCallable(const Model::DeleteAssessmentRequest& request) const;

        /**
         * <p>Deletes the assessment specified by the assessment ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssessmentAsync(const Model::DeleteAssessmentRequest& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the assessment run specified by the run ARN.</p>
         */
        virtual Model::DeleteRunOutcome DeleteRun(const Model::DeleteRunRequest& request) const;

        /**
         * <p>Deletes the assessment run specified by the run ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRunOutcomeCallable DeleteRunCallable(const Model::DeleteRunRequest& request) const;

        /**
         * <p>Deletes the assessment run specified by the run ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRunAsync(const Model::DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the application specified by the application ARN.</p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * <p>Describes the application specified by the application ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request) const;

        /**
         * <p>Describes the application specified by the application ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the assessment specified by the assessment ARN.</p>
         */
        virtual Model::DescribeAssessmentOutcome DescribeAssessment(const Model::DescribeAssessmentRequest& request) const;

        /**
         * <p>Describes the assessment specified by the assessment ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssessmentOutcomeCallable DescribeAssessmentCallable(const Model::DescribeAssessmentRequest& request) const;

        /**
         * <p>Describes the assessment specified by the assessment ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssessmentAsync(const Model::DescribeAssessmentRequest& request, const DescribeAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the IAM role that enables Inspector to access your AWS account.</p>
         */
        virtual Model::DescribeCrossAccountAccessRoleOutcome DescribeCrossAccountAccessRole() const;

        /**
         * <p>Describes the IAM role that enables Inspector to access your AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCrossAccountAccessRoleOutcomeCallable DescribeCrossAccountAccessRoleCallable() const;

        /**
         * <p>Describes the IAM role that enables Inspector to access your AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCrossAccountAccessRoleAsync(const DescribeCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Describes the finding specified by the finding ARN.</p>
         */
        virtual Model::DescribeFindingOutcome DescribeFinding(const Model::DescribeFindingRequest& request) const;

        /**
         * <p>Describes the finding specified by the finding ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFindingOutcomeCallable DescribeFindingCallable(const Model::DescribeFindingRequest& request) const;

        /**
         * <p>Describes the finding specified by the finding ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFindingAsync(const Model::DescribeFindingRequest& request, const DescribeFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the resource group specified by the resource group ARN.</p>
         */
        virtual Model::DescribeResourceGroupOutcome DescribeResourceGroup(const Model::DescribeResourceGroupRequest& request) const;

        /**
         * <p>Describes the resource group specified by the resource group ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceGroupOutcomeCallable DescribeResourceGroupCallable(const Model::DescribeResourceGroupRequest& request) const;

        /**
         * <p>Describes the resource group specified by the resource group ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceGroupAsync(const Model::DescribeResourceGroupRequest& request, const DescribeResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the rules package specified by the rules package ARN.</p>
         */
        virtual Model::DescribeRulesPackageOutcome DescribeRulesPackage(const Model::DescribeRulesPackageRequest& request) const;

        /**
         * <p>Describes the rules package specified by the rules package ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRulesPackageOutcomeCallable DescribeRulesPackageCallable(const Model::DescribeRulesPackageRequest& request) const;

        /**
         * <p>Describes the rules package specified by the rules package ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRulesPackageAsync(const Model::DescribeRulesPackageRequest& request, const DescribeRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the assessment run specified by the run ARN.</p>
         */
        virtual Model::DescribeRunOutcome DescribeRun(const Model::DescribeRunRequest& request) const;

        /**
         * <p>Describes the assessment run specified by the run ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRunOutcomeCallable DescribeRunCallable(const Model::DescribeRunRequest& request) const;

        /**
         * <p>Describes the assessment run specified by the run ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRunAsync(const Model::DescribeRunRequest& request, const DescribeRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches the rules package specified by the rules package ARN from the
         * assessment specified by the assessment ARN.</p>
         */
        virtual Model::DetachAssessmentAndRulesPackageOutcome DetachAssessmentAndRulesPackage(const Model::DetachAssessmentAndRulesPackageRequest& request) const;

        /**
         * <p>Detaches the rules package specified by the rules package ARN from the
         * assessment specified by the assessment ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachAssessmentAndRulesPackageOutcomeCallable DetachAssessmentAndRulesPackageCallable(const Model::DetachAssessmentAndRulesPackageRequest& request) const;

        /**
         * <p>Detaches the rules package specified by the rules package ARN from the
         * assessment specified by the assessment ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachAssessmentAndRulesPackageAsync(const Model::DetachAssessmentAndRulesPackageRequest& request, const DetachAssessmentAndRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the metadata about the telemetry (application behavioral data) for
         * the assessment specified by the assessment ARN.</p>
         */
        virtual Model::GetAssessmentTelemetryOutcome GetAssessmentTelemetry(const Model::GetAssessmentTelemetryRequest& request) const;

        /**
         * <p>Returns the metadata about the telemetry (application behavioral data) for
         * the assessment specified by the assessment ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssessmentTelemetryOutcomeCallable GetAssessmentTelemetryCallable(const Model::GetAssessmentTelemetryRequest& request) const;

        /**
         * <p>Returns the metadata about the telemetry (application behavioral data) for
         * the assessment specified by the assessment ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssessmentTelemetryAsync(const Model::GetAssessmentTelemetryRequest& request, const GetAssessmentTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the ARNs of the applications within this AWS account. For more
         * information about applications, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide//inspector_applications.html">Inspector
         * Applications</a>.</p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists the ARNs of the applications within this AWS account. For more
         * information about applications, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide//inspector_applications.html">Inspector
         * Applications</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists the ARNs of the applications within this AWS account. For more
         * information about applications, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide//inspector_applications.html">Inspector
         * Applications</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the agents of the assessment specified by the assessment ARN.</p>
         */
        virtual Model::ListAssessmentAgentsOutcome ListAssessmentAgents(const Model::ListAssessmentAgentsRequest& request) const;

        /**
         * <p>Lists the agents of the assessment specified by the assessment ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentAgentsOutcomeCallable ListAssessmentAgentsCallable(const Model::ListAssessmentAgentsRequest& request) const;

        /**
         * <p>Lists the agents of the assessment specified by the assessment ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentAgentsAsync(const Model::ListAssessmentAgentsRequest& request, const ListAssessmentAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the assessments corresponding to applications specified by the
         * applications' ARNs.</p>
         */
        virtual Model::ListAssessmentsOutcome ListAssessments(const Model::ListAssessmentsRequest& request) const;

        /**
         * <p>Lists the assessments corresponding to applications specified by the
         * applications' ARNs.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentsOutcomeCallable ListAssessmentsCallable(const Model::ListAssessmentsRequest& request) const;

        /**
         * <p>Lists the assessments corresponding to applications specified by the
         * applications' ARNs.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentsAsync(const Model::ListAssessmentsRequest& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the assessments attached to the rules package specified by the rules
         * package ARN.</p>
         */
        virtual Model::ListAttachedAssessmentsOutcome ListAttachedAssessments(const Model::ListAttachedAssessmentsRequest& request) const;

        /**
         * <p>Lists the assessments attached to the rules package specified by the rules
         * package ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedAssessmentsOutcomeCallable ListAttachedAssessmentsCallable(const Model::ListAttachedAssessmentsRequest& request) const;

        /**
         * <p>Lists the assessments attached to the rules package specified by the rules
         * package ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedAssessmentsAsync(const Model::ListAttachedAssessmentsRequest& request, const ListAttachedAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the rules packages attached to the assessment specified by the
         * assessment ARN.</p>
         */
        virtual Model::ListAttachedRulesPackagesOutcome ListAttachedRulesPackages(const Model::ListAttachedRulesPackagesRequest& request) const;

        /**
         * <p>Lists the rules packages attached to the assessment specified by the
         * assessment ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedRulesPackagesOutcomeCallable ListAttachedRulesPackagesCallable(const Model::ListAttachedRulesPackagesRequest& request) const;

        /**
         * <p>Lists the rules packages attached to the assessment specified by the
         * assessment ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedRulesPackagesAsync(const Model::ListAttachedRulesPackagesRequest& request, const ListAttachedRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists findings generated by the assessment run specified by the run ARNs.</p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * <p>Lists findings generated by the assessment run specified by the run ARNs.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsOutcomeCallable ListFindingsCallable(const Model::ListFindingsRequest& request) const;

        /**
         * <p>Lists findings generated by the assessment run specified by the run ARNs.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsAsync(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available Inspector rules packages.</p>
         */
        virtual Model::ListRulesPackagesOutcome ListRulesPackages(const Model::ListRulesPackagesRequest& request) const;

        /**
         * <p>Lists all available Inspector rules packages.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesPackagesOutcomeCallable ListRulesPackagesCallable(const Model::ListRulesPackagesRequest& request) const;

        /**
         * <p>Lists all available Inspector rules packages.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesPackagesAsync(const Model::ListRulesPackagesRequest& request, const ListRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the assessment runs associated with the assessments specified by the
         * assessment ARNs.</p>
         */
        virtual Model::ListRunsOutcome ListRuns(const Model::ListRunsRequest& request) const;

        /**
         * <p>Lists the assessment runs associated with the assessments specified by the
         * assessment ARNs.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRunsOutcomeCallable ListRunsCallable(const Model::ListRunsRequest& request) const;

        /**
         * <p>Lists the assessment runs associated with the assessments specified by the
         * assessment ARNs.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRunsAsync(const Model::ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags associated with a resource.</p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags associated with a resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags associated with a resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Translates a textual identifier into a user-readable text in a specified
         * locale.</p>
         */
        virtual Model::LocalizeTextOutcome LocalizeText(const Model::LocalizeTextRequest& request) const;

        /**
         * <p>Translates a textual identifier into a user-readable text in a specified
         * locale.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LocalizeTextOutcomeCallable LocalizeTextCallable(const Model::LocalizeTextRequest& request) const;

        /**
         * <p>Translates a textual identifier into a user-readable text in a specified
         * locale.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LocalizeTextAsync(const Model::LocalizeTextRequest& request, const LocalizeTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Previews the agents installed on the EC2 instances that are included in the
         * application created with the specified resource group.</p>
         */
        virtual Model::PreviewAgentsForResourceGroupOutcome PreviewAgentsForResourceGroup(const Model::PreviewAgentsForResourceGroupRequest& request) const;

        /**
         * <p>Previews the agents installed on the EC2 instances that are included in the
         * application created with the specified resource group.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PreviewAgentsForResourceGroupOutcomeCallable PreviewAgentsForResourceGroupCallable(const Model::PreviewAgentsForResourceGroupRequest& request) const;

        /**
         * <p>Previews the agents installed on the EC2 instances that are included in the
         * application created with the specified resource group.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PreviewAgentsForResourceGroupAsync(const Model::PreviewAgentsForResourceGroupRequest& request, const PreviewAgentsForResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Register the role that Inspector uses to list your EC2 instances during the
         * assessment.</p>
         */
        virtual Model::RegisterCrossAccountAccessRoleOutcome RegisterCrossAccountAccessRole(const Model::RegisterCrossAccountAccessRoleRequest& request) const;

        /**
         * <p>Register the role that Inspector uses to list your EC2 instances during the
         * assessment.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCrossAccountAccessRoleOutcomeCallable RegisterCrossAccountAccessRoleCallable(const Model::RegisterCrossAccountAccessRoleRequest& request) const;

        /**
         * <p>Register the role that Inspector uses to list your EC2 instances during the
         * assessment.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCrossAccountAccessRoleAsync(const Model::RegisterCrossAccountAccessRoleRequest& request, const RegisterCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the entire attribute (key and value pair) from the findings specified
         * by the finding ARNs where an attribute with the specified key exists.</p>
         */
        virtual Model::RemoveAttributesFromFindingsOutcome RemoveAttributesFromFindings(const Model::RemoveAttributesFromFindingsRequest& request) const;

        /**
         * <p>Removes the entire attribute (key and value pair) from the findings specified
         * by the finding ARNs where an attribute with the specified key exists.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAttributesFromFindingsOutcomeCallable RemoveAttributesFromFindingsCallable(const Model::RemoveAttributesFromFindingsRequest& request) const;

        /**
         * <p>Removes the entire attribute (key and value pair) from the findings specified
         * by the finding ARNs where an attribute with the specified key exists.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAttributesFromFindingsAsync(const Model::RemoveAttributesFromFindingsRequest& request, const RemoveAttributesFromFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the analysis of the application’s behavior against selected rule
         * packages for the assessment specified by the assessment ARN.</p>
         */
        virtual Model::RunAssessmentOutcome RunAssessment(const Model::RunAssessmentRequest& request) const;

        /**
         * <p>Starts the analysis of the application’s behavior against selected rule
         * packages for the assessment specified by the assessment ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunAssessmentOutcomeCallable RunAssessmentCallable(const Model::RunAssessmentRequest& request) const;

        /**
         * <p>Starts the analysis of the application’s behavior against selected rule
         * packages for the assessment specified by the assessment ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunAssessmentAsync(const Model::RunAssessmentRequest& request, const RunAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets tags (key and value pairs) to the assessment specified by the assessment
         * ARN.</p>
         */
        virtual Model::SetTagsForResourceOutcome SetTagsForResource(const Model::SetTagsForResourceRequest& request) const;

        /**
         * <p>Sets tags (key and value pairs) to the assessment specified by the assessment
         * ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTagsForResourceOutcomeCallable SetTagsForResourceCallable(const Model::SetTagsForResourceRequest& request) const;

        /**
         * <p>Sets tags (key and value pairs) to the assessment specified by the assessment
         * ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTagsForResourceAsync(const Model::SetTagsForResourceRequest& request, const SetTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts data collection for the assessment specified by the assessment ARN.
         * For this API to function properly, you must not exceed the limit of running up
         * to 500 concurrent agents per AWS account.</p>
         */
        virtual Model::StartDataCollectionOutcome StartDataCollection(const Model::StartDataCollectionRequest& request) const;

        /**
         * <p>Starts data collection for the assessment specified by the assessment ARN.
         * For this API to function properly, you must not exceed the limit of running up
         * to 500 concurrent agents per AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDataCollectionOutcomeCallable StartDataCollectionCallable(const Model::StartDataCollectionRequest& request) const;

        /**
         * <p>Starts data collection for the assessment specified by the assessment ARN.
         * For this API to function properly, you must not exceed the limit of running up
         * to 500 concurrent agents per AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDataCollectionAsync(const Model::StartDataCollectionRequest& request, const StartDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stop data collection for the assessment specified by the assessment ARN.</p>
         */
        virtual Model::StopDataCollectionOutcome StopDataCollection(const Model::StopDataCollectionRequest& request) const;

        /**
         * <p>Stop data collection for the assessment specified by the assessment ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDataCollectionOutcomeCallable StopDataCollectionCallable(const Model::StopDataCollectionRequest& request) const;

        /**
         * <p>Stop data collection for the assessment specified by the assessment ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDataCollectionAsync(const Model::StopDataCollectionRequest& request, const StopDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates application specified by the application ARN.</p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates application specified by the application ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates application specified by the application ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the assessment specified by the assessment ARN.</p>
         */
        virtual Model::UpdateAssessmentOutcome UpdateAssessment(const Model::UpdateAssessmentRequest& request) const;

        /**
         * <p>Updates the assessment specified by the assessment ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssessmentOutcomeCallable UpdateAssessmentCallable(const Model::UpdateAssessmentRequest& request) const;

        /**
         * <p>Updates the assessment specified by the assessment ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssessmentAsync(const Model::UpdateAssessmentRequest& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddAttributesToFindingsAsyncHelper(const Model::AddAttributesToFindingsRequest& request, const AddAttributesToFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachAssessmentAndRulesPackageAsyncHelper(const Model::AttachAssessmentAndRulesPackageRequest& request, const AttachAssessmentAndRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssessmentAsyncHelper(const Model::CreateAssessmentRequest& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceGroupAsyncHelper(const Model::CreateResourceGroupRequest& request, const CreateResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssessmentAsyncHelper(const Model::DeleteAssessmentRequest& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRunAsyncHelper(const Model::DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationAsyncHelper(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssessmentAsyncHelper(const Model::DescribeAssessmentRequest& request, const DescribeAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCrossAccountAccessRoleAsyncHelper(const DescribeCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFindingAsyncHelper(const Model::DescribeFindingRequest& request, const DescribeFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourceGroupAsyncHelper(const Model::DescribeResourceGroupRequest& request, const DescribeResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRulesPackageAsyncHelper(const Model::DescribeRulesPackageRequest& request, const DescribeRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRunAsyncHelper(const Model::DescribeRunRequest& request, const DescribeRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachAssessmentAndRulesPackageAsyncHelper(const Model::DetachAssessmentAndRulesPackageRequest& request, const DetachAssessmentAndRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAssessmentTelemetryAsyncHelper(const Model::GetAssessmentTelemetryRequest& request, const GetAssessmentTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssessmentAgentsAsyncHelper(const Model::ListAssessmentAgentsRequest& request, const ListAssessmentAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssessmentsAsyncHelper(const Model::ListAssessmentsRequest& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttachedAssessmentsAsyncHelper(const Model::ListAttachedAssessmentsRequest& request, const ListAttachedAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttachedRulesPackagesAsyncHelper(const Model::ListAttachedRulesPackagesRequest& request, const ListAttachedRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFindingsAsyncHelper(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRulesPackagesAsyncHelper(const Model::ListRulesPackagesRequest& request, const ListRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRunsAsyncHelper(const Model::ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LocalizeTextAsyncHelper(const Model::LocalizeTextRequest& request, const LocalizeTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PreviewAgentsForResourceGroupAsyncHelper(const Model::PreviewAgentsForResourceGroupRequest& request, const PreviewAgentsForResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterCrossAccountAccessRoleAsyncHelper(const Model::RegisterCrossAccountAccessRoleRequest& request, const RegisterCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveAttributesFromFindingsAsyncHelper(const Model::RemoveAttributesFromFindingsRequest& request, const RemoveAttributesFromFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RunAssessmentAsyncHelper(const Model::RunAssessmentRequest& request, const RunAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetTagsForResourceAsyncHelper(const Model::SetTagsForResourceRequest& request, const SetTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDataCollectionAsyncHelper(const Model::StartDataCollectionRequest& request, const StartDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDataCollectionAsyncHelper(const Model::StopDataCollectionRequest& request, const StopDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssessmentAsyncHelper(const Model::UpdateAssessmentRequest& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace Inspector
} // namespace Aws
