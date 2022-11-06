/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/appstream/AppStreamErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/appstream/AppStreamEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppStreamClient header */
#include <aws/appstream/model/AssociateApplicationFleetResult.h>
#include <aws/appstream/model/AssociateApplicationToEntitlementResult.h>
#include <aws/appstream/model/AssociateFleetResult.h>
#include <aws/appstream/model/BatchAssociateUserStackResult.h>
#include <aws/appstream/model/BatchDisassociateUserStackResult.h>
#include <aws/appstream/model/CopyImageResult.h>
#include <aws/appstream/model/CreateAppBlockResult.h>
#include <aws/appstream/model/CreateApplicationResult.h>
#include <aws/appstream/model/CreateDirectoryConfigResult.h>
#include <aws/appstream/model/CreateEntitlementResult.h>
#include <aws/appstream/model/CreateFleetResult.h>
#include <aws/appstream/model/CreateImageBuilderResult.h>
#include <aws/appstream/model/CreateImageBuilderStreamingURLResult.h>
#include <aws/appstream/model/CreateStackResult.h>
#include <aws/appstream/model/CreateStreamingURLResult.h>
#include <aws/appstream/model/CreateUpdatedImageResult.h>
#include <aws/appstream/model/CreateUsageReportSubscriptionResult.h>
#include <aws/appstream/model/CreateUserResult.h>
#include <aws/appstream/model/DeleteAppBlockResult.h>
#include <aws/appstream/model/DeleteApplicationResult.h>
#include <aws/appstream/model/DeleteDirectoryConfigResult.h>
#include <aws/appstream/model/DeleteEntitlementResult.h>
#include <aws/appstream/model/DeleteFleetResult.h>
#include <aws/appstream/model/DeleteImageResult.h>
#include <aws/appstream/model/DeleteImageBuilderResult.h>
#include <aws/appstream/model/DeleteImagePermissionsResult.h>
#include <aws/appstream/model/DeleteStackResult.h>
#include <aws/appstream/model/DeleteUsageReportSubscriptionResult.h>
#include <aws/appstream/model/DeleteUserResult.h>
#include <aws/appstream/model/DescribeAppBlocksResult.h>
#include <aws/appstream/model/DescribeApplicationFleetAssociationsResult.h>
#include <aws/appstream/model/DescribeApplicationsResult.h>
#include <aws/appstream/model/DescribeDirectoryConfigsResult.h>
#include <aws/appstream/model/DescribeEntitlementsResult.h>
#include <aws/appstream/model/DescribeFleetsResult.h>
#include <aws/appstream/model/DescribeImageBuildersResult.h>
#include <aws/appstream/model/DescribeImagePermissionsResult.h>
#include <aws/appstream/model/DescribeImagesResult.h>
#include <aws/appstream/model/DescribeSessionsResult.h>
#include <aws/appstream/model/DescribeStacksResult.h>
#include <aws/appstream/model/DescribeUsageReportSubscriptionsResult.h>
#include <aws/appstream/model/DescribeUserStackAssociationsResult.h>
#include <aws/appstream/model/DescribeUsersResult.h>
#include <aws/appstream/model/DisableUserResult.h>
#include <aws/appstream/model/DisassociateApplicationFleetResult.h>
#include <aws/appstream/model/DisassociateApplicationFromEntitlementResult.h>
#include <aws/appstream/model/DisassociateFleetResult.h>
#include <aws/appstream/model/EnableUserResult.h>
#include <aws/appstream/model/ExpireSessionResult.h>
#include <aws/appstream/model/ListAssociatedFleetsResult.h>
#include <aws/appstream/model/ListAssociatedStacksResult.h>
#include <aws/appstream/model/ListEntitledApplicationsResult.h>
#include <aws/appstream/model/ListTagsForResourceResult.h>
#include <aws/appstream/model/StartFleetResult.h>
#include <aws/appstream/model/StartImageBuilderResult.h>
#include <aws/appstream/model/StopFleetResult.h>
#include <aws/appstream/model/StopImageBuilderResult.h>
#include <aws/appstream/model/TagResourceResult.h>
#include <aws/appstream/model/UntagResourceResult.h>
#include <aws/appstream/model/UpdateApplicationResult.h>
#include <aws/appstream/model/UpdateDirectoryConfigResult.h>
#include <aws/appstream/model/UpdateEntitlementResult.h>
#include <aws/appstream/model/UpdateFleetResult.h>
#include <aws/appstream/model/UpdateImagePermissionsResult.h>
#include <aws/appstream/model/UpdateStackResult.h>
/* End of service model headers required in AppStreamClient header */

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

  namespace AppStream
  {
    using AppStreamClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AppStreamEndpointProviderBase = Aws::AppStream::Endpoint::AppStreamEndpointProviderBase;
    using AppStreamEndpointProvider = Aws::AppStream::Endpoint::AppStreamEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppStreamClient header */
      class AssociateApplicationFleetRequest;
      class AssociateApplicationToEntitlementRequest;
      class AssociateFleetRequest;
      class BatchAssociateUserStackRequest;
      class BatchDisassociateUserStackRequest;
      class CopyImageRequest;
      class CreateAppBlockRequest;
      class CreateApplicationRequest;
      class CreateDirectoryConfigRequest;
      class CreateEntitlementRequest;
      class CreateFleetRequest;
      class CreateImageBuilderRequest;
      class CreateImageBuilderStreamingURLRequest;
      class CreateStackRequest;
      class CreateStreamingURLRequest;
      class CreateUpdatedImageRequest;
      class CreateUsageReportSubscriptionRequest;
      class CreateUserRequest;
      class DeleteAppBlockRequest;
      class DeleteApplicationRequest;
      class DeleteDirectoryConfigRequest;
      class DeleteEntitlementRequest;
      class DeleteFleetRequest;
      class DeleteImageRequest;
      class DeleteImageBuilderRequest;
      class DeleteImagePermissionsRequest;
      class DeleteStackRequest;
      class DeleteUsageReportSubscriptionRequest;
      class DeleteUserRequest;
      class DescribeAppBlocksRequest;
      class DescribeApplicationFleetAssociationsRequest;
      class DescribeApplicationsRequest;
      class DescribeDirectoryConfigsRequest;
      class DescribeEntitlementsRequest;
      class DescribeFleetsRequest;
      class DescribeImageBuildersRequest;
      class DescribeImagePermissionsRequest;
      class DescribeImagesRequest;
      class DescribeSessionsRequest;
      class DescribeStacksRequest;
      class DescribeUsageReportSubscriptionsRequest;
      class DescribeUserStackAssociationsRequest;
      class DescribeUsersRequest;
      class DisableUserRequest;
      class DisassociateApplicationFleetRequest;
      class DisassociateApplicationFromEntitlementRequest;
      class DisassociateFleetRequest;
      class EnableUserRequest;
      class ExpireSessionRequest;
      class ListAssociatedFleetsRequest;
      class ListAssociatedStacksRequest;
      class ListEntitledApplicationsRequest;
      class ListTagsForResourceRequest;
      class StartFleetRequest;
      class StartImageBuilderRequest;
      class StopFleetRequest;
      class StopImageBuilderRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateDirectoryConfigRequest;
      class UpdateEntitlementRequest;
      class UpdateFleetRequest;
      class UpdateImagePermissionsRequest;
      class UpdateStackRequest;
      /* End of service model forward declarations required in AppStreamClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateApplicationFleetResult, AppStreamError> AssociateApplicationFleetOutcome;
      typedef Aws::Utils::Outcome<AssociateApplicationToEntitlementResult, AppStreamError> AssociateApplicationToEntitlementOutcome;
      typedef Aws::Utils::Outcome<AssociateFleetResult, AppStreamError> AssociateFleetOutcome;
      typedef Aws::Utils::Outcome<BatchAssociateUserStackResult, AppStreamError> BatchAssociateUserStackOutcome;
      typedef Aws::Utils::Outcome<BatchDisassociateUserStackResult, AppStreamError> BatchDisassociateUserStackOutcome;
      typedef Aws::Utils::Outcome<CopyImageResult, AppStreamError> CopyImageOutcome;
      typedef Aws::Utils::Outcome<CreateAppBlockResult, AppStreamError> CreateAppBlockOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, AppStreamError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateDirectoryConfigResult, AppStreamError> CreateDirectoryConfigOutcome;
      typedef Aws::Utils::Outcome<CreateEntitlementResult, AppStreamError> CreateEntitlementOutcome;
      typedef Aws::Utils::Outcome<CreateFleetResult, AppStreamError> CreateFleetOutcome;
      typedef Aws::Utils::Outcome<CreateImageBuilderResult, AppStreamError> CreateImageBuilderOutcome;
      typedef Aws::Utils::Outcome<CreateImageBuilderStreamingURLResult, AppStreamError> CreateImageBuilderStreamingURLOutcome;
      typedef Aws::Utils::Outcome<CreateStackResult, AppStreamError> CreateStackOutcome;
      typedef Aws::Utils::Outcome<CreateStreamingURLResult, AppStreamError> CreateStreamingURLOutcome;
      typedef Aws::Utils::Outcome<CreateUpdatedImageResult, AppStreamError> CreateUpdatedImageOutcome;
      typedef Aws::Utils::Outcome<CreateUsageReportSubscriptionResult, AppStreamError> CreateUsageReportSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, AppStreamError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<DeleteAppBlockResult, AppStreamError> DeleteAppBlockOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, AppStreamError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteDirectoryConfigResult, AppStreamError> DeleteDirectoryConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteEntitlementResult, AppStreamError> DeleteEntitlementOutcome;
      typedef Aws::Utils::Outcome<DeleteFleetResult, AppStreamError> DeleteFleetOutcome;
      typedef Aws::Utils::Outcome<DeleteImageResult, AppStreamError> DeleteImageOutcome;
      typedef Aws::Utils::Outcome<DeleteImageBuilderResult, AppStreamError> DeleteImageBuilderOutcome;
      typedef Aws::Utils::Outcome<DeleteImagePermissionsResult, AppStreamError> DeleteImagePermissionsOutcome;
      typedef Aws::Utils::Outcome<DeleteStackResult, AppStreamError> DeleteStackOutcome;
      typedef Aws::Utils::Outcome<DeleteUsageReportSubscriptionResult, AppStreamError> DeleteUsageReportSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteUserResult, AppStreamError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DescribeAppBlocksResult, AppStreamError> DescribeAppBlocksOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationFleetAssociationsResult, AppStreamError> DescribeApplicationFleetAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationsResult, AppStreamError> DescribeApplicationsOutcome;
      typedef Aws::Utils::Outcome<DescribeDirectoryConfigsResult, AppStreamError> DescribeDirectoryConfigsOutcome;
      typedef Aws::Utils::Outcome<DescribeEntitlementsResult, AppStreamError> DescribeEntitlementsOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetsResult, AppStreamError> DescribeFleetsOutcome;
      typedef Aws::Utils::Outcome<DescribeImageBuildersResult, AppStreamError> DescribeImageBuildersOutcome;
      typedef Aws::Utils::Outcome<DescribeImagePermissionsResult, AppStreamError> DescribeImagePermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeImagesResult, AppStreamError> DescribeImagesOutcome;
      typedef Aws::Utils::Outcome<DescribeSessionsResult, AppStreamError> DescribeSessionsOutcome;
      typedef Aws::Utils::Outcome<DescribeStacksResult, AppStreamError> DescribeStacksOutcome;
      typedef Aws::Utils::Outcome<DescribeUsageReportSubscriptionsResult, AppStreamError> DescribeUsageReportSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeUserStackAssociationsResult, AppStreamError> DescribeUserStackAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeUsersResult, AppStreamError> DescribeUsersOutcome;
      typedef Aws::Utils::Outcome<DisableUserResult, AppStreamError> DisableUserOutcome;
      typedef Aws::Utils::Outcome<DisassociateApplicationFleetResult, AppStreamError> DisassociateApplicationFleetOutcome;
      typedef Aws::Utils::Outcome<DisassociateApplicationFromEntitlementResult, AppStreamError> DisassociateApplicationFromEntitlementOutcome;
      typedef Aws::Utils::Outcome<DisassociateFleetResult, AppStreamError> DisassociateFleetOutcome;
      typedef Aws::Utils::Outcome<EnableUserResult, AppStreamError> EnableUserOutcome;
      typedef Aws::Utils::Outcome<ExpireSessionResult, AppStreamError> ExpireSessionOutcome;
      typedef Aws::Utils::Outcome<ListAssociatedFleetsResult, AppStreamError> ListAssociatedFleetsOutcome;
      typedef Aws::Utils::Outcome<ListAssociatedStacksResult, AppStreamError> ListAssociatedStacksOutcome;
      typedef Aws::Utils::Outcome<ListEntitledApplicationsResult, AppStreamError> ListEntitledApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppStreamError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartFleetResult, AppStreamError> StartFleetOutcome;
      typedef Aws::Utils::Outcome<StartImageBuilderResult, AppStreamError> StartImageBuilderOutcome;
      typedef Aws::Utils::Outcome<StopFleetResult, AppStreamError> StopFleetOutcome;
      typedef Aws::Utils::Outcome<StopImageBuilderResult, AppStreamError> StopImageBuilderOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AppStreamError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AppStreamError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, AppStreamError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateDirectoryConfigResult, AppStreamError> UpdateDirectoryConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateEntitlementResult, AppStreamError> UpdateEntitlementOutcome;
      typedef Aws::Utils::Outcome<UpdateFleetResult, AppStreamError> UpdateFleetOutcome;
      typedef Aws::Utils::Outcome<UpdateImagePermissionsResult, AppStreamError> UpdateImagePermissionsOutcome;
      typedef Aws::Utils::Outcome<UpdateStackResult, AppStreamError> UpdateStackOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateApplicationFleetOutcome> AssociateApplicationFleetOutcomeCallable;
      typedef std::future<AssociateApplicationToEntitlementOutcome> AssociateApplicationToEntitlementOutcomeCallable;
      typedef std::future<AssociateFleetOutcome> AssociateFleetOutcomeCallable;
      typedef std::future<BatchAssociateUserStackOutcome> BatchAssociateUserStackOutcomeCallable;
      typedef std::future<BatchDisassociateUserStackOutcome> BatchDisassociateUserStackOutcomeCallable;
      typedef std::future<CopyImageOutcome> CopyImageOutcomeCallable;
      typedef std::future<CreateAppBlockOutcome> CreateAppBlockOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateDirectoryConfigOutcome> CreateDirectoryConfigOutcomeCallable;
      typedef std::future<CreateEntitlementOutcome> CreateEntitlementOutcomeCallable;
      typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
      typedef std::future<CreateImageBuilderOutcome> CreateImageBuilderOutcomeCallable;
      typedef std::future<CreateImageBuilderStreamingURLOutcome> CreateImageBuilderStreamingURLOutcomeCallable;
      typedef std::future<CreateStackOutcome> CreateStackOutcomeCallable;
      typedef std::future<CreateStreamingURLOutcome> CreateStreamingURLOutcomeCallable;
      typedef std::future<CreateUpdatedImageOutcome> CreateUpdatedImageOutcomeCallable;
      typedef std::future<CreateUsageReportSubscriptionOutcome> CreateUsageReportSubscriptionOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<DeleteAppBlockOutcome> DeleteAppBlockOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteDirectoryConfigOutcome> DeleteDirectoryConfigOutcomeCallable;
      typedef std::future<DeleteEntitlementOutcome> DeleteEntitlementOutcomeCallable;
      typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
      typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
      typedef std::future<DeleteImageBuilderOutcome> DeleteImageBuilderOutcomeCallable;
      typedef std::future<DeleteImagePermissionsOutcome> DeleteImagePermissionsOutcomeCallable;
      typedef std::future<DeleteStackOutcome> DeleteStackOutcomeCallable;
      typedef std::future<DeleteUsageReportSubscriptionOutcome> DeleteUsageReportSubscriptionOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DescribeAppBlocksOutcome> DescribeAppBlocksOutcomeCallable;
      typedef std::future<DescribeApplicationFleetAssociationsOutcome> DescribeApplicationFleetAssociationsOutcomeCallable;
      typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
      typedef std::future<DescribeDirectoryConfigsOutcome> DescribeDirectoryConfigsOutcomeCallable;
      typedef std::future<DescribeEntitlementsOutcome> DescribeEntitlementsOutcomeCallable;
      typedef std::future<DescribeFleetsOutcome> DescribeFleetsOutcomeCallable;
      typedef std::future<DescribeImageBuildersOutcome> DescribeImageBuildersOutcomeCallable;
      typedef std::future<DescribeImagePermissionsOutcome> DescribeImagePermissionsOutcomeCallable;
      typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
      typedef std::future<DescribeSessionsOutcome> DescribeSessionsOutcomeCallable;
      typedef std::future<DescribeStacksOutcome> DescribeStacksOutcomeCallable;
      typedef std::future<DescribeUsageReportSubscriptionsOutcome> DescribeUsageReportSubscriptionsOutcomeCallable;
      typedef std::future<DescribeUserStackAssociationsOutcome> DescribeUserStackAssociationsOutcomeCallable;
      typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
      typedef std::future<DisableUserOutcome> DisableUserOutcomeCallable;
      typedef std::future<DisassociateApplicationFleetOutcome> DisassociateApplicationFleetOutcomeCallable;
      typedef std::future<DisassociateApplicationFromEntitlementOutcome> DisassociateApplicationFromEntitlementOutcomeCallable;
      typedef std::future<DisassociateFleetOutcome> DisassociateFleetOutcomeCallable;
      typedef std::future<EnableUserOutcome> EnableUserOutcomeCallable;
      typedef std::future<ExpireSessionOutcome> ExpireSessionOutcomeCallable;
      typedef std::future<ListAssociatedFleetsOutcome> ListAssociatedFleetsOutcomeCallable;
      typedef std::future<ListAssociatedStacksOutcome> ListAssociatedStacksOutcomeCallable;
      typedef std::future<ListEntitledApplicationsOutcome> ListEntitledApplicationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartFleetOutcome> StartFleetOutcomeCallable;
      typedef std::future<StartImageBuilderOutcome> StartImageBuilderOutcomeCallable;
      typedef std::future<StopFleetOutcome> StopFleetOutcomeCallable;
      typedef std::future<StopImageBuilderOutcome> StopImageBuilderOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateDirectoryConfigOutcome> UpdateDirectoryConfigOutcomeCallable;
      typedef std::future<UpdateEntitlementOutcome> UpdateEntitlementOutcomeCallable;
      typedef std::future<UpdateFleetOutcome> UpdateFleetOutcomeCallable;
      typedef std::future<UpdateImagePermissionsOutcome> UpdateImagePermissionsOutcomeCallable;
      typedef std::future<UpdateStackOutcome> UpdateStackOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppStreamClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AppStreamClient*, const Model::AssociateApplicationFleetRequest&, const Model::AssociateApplicationFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateApplicationFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::AssociateApplicationToEntitlementRequest&, const Model::AssociateApplicationToEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateApplicationToEntitlementResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::AssociateFleetRequest&, const Model::AssociateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::BatchAssociateUserStackRequest&, const Model::BatchAssociateUserStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateUserStackResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::BatchDisassociateUserStackRequest&, const Model::BatchDisassociateUserStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateUserStackResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CopyImageRequest&, const Model::CopyImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyImageResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateAppBlockRequest&, const Model::CreateAppBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppBlockResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateDirectoryConfigRequest&, const Model::CreateDirectoryConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDirectoryConfigResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateEntitlementRequest&, const Model::CreateEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEntitlementResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateImageBuilderRequest&, const Model::CreateImageBuilderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageBuilderResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateImageBuilderStreamingURLRequest&, const Model::CreateImageBuilderStreamingURLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageBuilderStreamingURLResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateStackRequest&, const Model::CreateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateStreamingURLRequest&, const Model::CreateStreamingURLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingURLResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateUpdatedImageRequest&, const Model::CreateUpdatedImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUpdatedImageResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateUsageReportSubscriptionRequest&, const Model::CreateUsageReportSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUsageReportSubscriptionResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteAppBlockRequest&, const Model::DeleteAppBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppBlockResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteDirectoryConfigRequest&, const Model::DeleteDirectoryConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDirectoryConfigResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteEntitlementRequest&, const Model::DeleteEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEntitlementResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteFleetRequest&, const Model::DeleteFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteImageRequest&, const Model::DeleteImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteImageBuilderRequest&, const Model::DeleteImageBuilderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageBuilderResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteImagePermissionsRequest&, const Model::DeleteImagePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImagePermissionsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteStackRequest&, const Model::DeleteStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteUsageReportSubscriptionRequest&, const Model::DeleteUsageReportSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUsageReportSubscriptionResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeAppBlocksRequest&, const Model::DescribeAppBlocksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppBlocksResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeApplicationFleetAssociationsRequest&, const Model::DescribeApplicationFleetAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationFleetAssociationsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeApplicationsRequest&, const Model::DescribeApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeDirectoryConfigsRequest&, const Model::DescribeDirectoryConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectoryConfigsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeEntitlementsRequest&, const Model::DescribeEntitlementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntitlementsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeFleetsRequest&, const Model::DescribeFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeImageBuildersRequest&, const Model::DescribeImageBuildersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageBuildersResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeImagePermissionsRequest&, const Model::DescribeImagePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImagePermissionsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeImagesRequest&, const Model::DescribeImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImagesResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeSessionsRequest&, const Model::DescribeSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSessionsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeStacksRequest&, const Model::DescribeStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStacksResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeUsageReportSubscriptionsRequest&, const Model::DescribeUsageReportSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUsageReportSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeUserStackAssociationsRequest&, const Model::DescribeUserStackAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserStackAssociationsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeUsersRequest&, const Model::DescribeUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUsersResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DisableUserRequest&, const Model::DisableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableUserResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DisassociateApplicationFleetRequest&, const Model::DisassociateApplicationFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateApplicationFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DisassociateApplicationFromEntitlementRequest&, const Model::DisassociateApplicationFromEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateApplicationFromEntitlementResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DisassociateFleetRequest&, const Model::DisassociateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::EnableUserRequest&, const Model::EnableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableUserResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::ExpireSessionRequest&, const Model::ExpireSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExpireSessionResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::ListAssociatedFleetsRequest&, const Model::ListAssociatedFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedFleetsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::ListAssociatedStacksRequest&, const Model::ListAssociatedStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedStacksResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::ListEntitledApplicationsRequest&, const Model::ListEntitledApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitledApplicationsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::StartFleetRequest&, const Model::StartFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::StartImageBuilderRequest&, const Model::StartImageBuilderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImageBuilderResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::StopFleetRequest&, const Model::StopFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::StopImageBuilderRequest&, const Model::StopImageBuilderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopImageBuilderResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UpdateDirectoryConfigRequest&, const Model::UpdateDirectoryConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDirectoryConfigResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UpdateEntitlementRequest&, const Model::UpdateEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEntitlementResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UpdateFleetRequest&, const Model::UpdateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UpdateImagePermissionsRequest&, const Model::UpdateImagePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateImagePermissionsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UpdateStackRequest&, const Model::UpdateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AppStream
} // namespace Aws
