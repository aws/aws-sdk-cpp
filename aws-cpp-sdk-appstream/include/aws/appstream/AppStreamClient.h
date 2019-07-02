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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appstream/model/AssociateFleetResult.h>
#include <aws/appstream/model/BatchAssociateUserStackResult.h>
#include <aws/appstream/model/BatchDisassociateUserStackResult.h>
#include <aws/appstream/model/CopyImageResult.h>
#include <aws/appstream/model/CreateDirectoryConfigResult.h>
#include <aws/appstream/model/CreateFleetResult.h>
#include <aws/appstream/model/CreateImageBuilderResult.h>
#include <aws/appstream/model/CreateImageBuilderStreamingURLResult.h>
#include <aws/appstream/model/CreateStackResult.h>
#include <aws/appstream/model/CreateStreamingURLResult.h>
#include <aws/appstream/model/CreateUsageReportSubscriptionResult.h>
#include <aws/appstream/model/CreateUserResult.h>
#include <aws/appstream/model/DeleteDirectoryConfigResult.h>
#include <aws/appstream/model/DeleteFleetResult.h>
#include <aws/appstream/model/DeleteImageResult.h>
#include <aws/appstream/model/DeleteImageBuilderResult.h>
#include <aws/appstream/model/DeleteImagePermissionsResult.h>
#include <aws/appstream/model/DeleteStackResult.h>
#include <aws/appstream/model/DeleteUsageReportSubscriptionResult.h>
#include <aws/appstream/model/DeleteUserResult.h>
#include <aws/appstream/model/DescribeDirectoryConfigsResult.h>
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
#include <aws/appstream/model/DisassociateFleetResult.h>
#include <aws/appstream/model/EnableUserResult.h>
#include <aws/appstream/model/ExpireSessionResult.h>
#include <aws/appstream/model/ListAssociatedFleetsResult.h>
#include <aws/appstream/model/ListAssociatedStacksResult.h>
#include <aws/appstream/model/ListTagsForResourceResult.h>
#include <aws/appstream/model/StartFleetResult.h>
#include <aws/appstream/model/StartImageBuilderResult.h>
#include <aws/appstream/model/StopFleetResult.h>
#include <aws/appstream/model/StopImageBuilderResult.h>
#include <aws/appstream/model/TagResourceResult.h>
#include <aws/appstream/model/UntagResourceResult.h>
#include <aws/appstream/model/UpdateDirectoryConfigResult.h>
#include <aws/appstream/model/UpdateFleetResult.h>
#include <aws/appstream/model/UpdateImagePermissionsResult.h>
#include <aws/appstream/model/UpdateStackResult.h>
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

namespace Model
{
        class AssociateFleetRequest;
        class BatchAssociateUserStackRequest;
        class BatchDisassociateUserStackRequest;
        class CopyImageRequest;
        class CreateDirectoryConfigRequest;
        class CreateFleetRequest;
        class CreateImageBuilderRequest;
        class CreateImageBuilderStreamingURLRequest;
        class CreateStackRequest;
        class CreateStreamingURLRequest;
        class CreateUsageReportSubscriptionRequest;
        class CreateUserRequest;
        class DeleteDirectoryConfigRequest;
        class DeleteFleetRequest;
        class DeleteImageRequest;
        class DeleteImageBuilderRequest;
        class DeleteImagePermissionsRequest;
        class DeleteStackRequest;
        class DeleteUsageReportSubscriptionRequest;
        class DeleteUserRequest;
        class DescribeDirectoryConfigsRequest;
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
        class DisassociateFleetRequest;
        class EnableUserRequest;
        class ExpireSessionRequest;
        class ListAssociatedFleetsRequest;
        class ListAssociatedStacksRequest;
        class ListTagsForResourceRequest;
        class StartFleetRequest;
        class StartImageBuilderRequest;
        class StopFleetRequest;
        class StopImageBuilderRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDirectoryConfigRequest;
        class UpdateFleetRequest;
        class UpdateImagePermissionsRequest;
        class UpdateStackRequest;

        typedef Aws::Utils::Outcome<AssociateFleetResult, Aws::Client::AWSError<AppStreamErrors>> AssociateFleetOutcome;
        typedef Aws::Utils::Outcome<BatchAssociateUserStackResult, Aws::Client::AWSError<AppStreamErrors>> BatchAssociateUserStackOutcome;
        typedef Aws::Utils::Outcome<BatchDisassociateUserStackResult, Aws::Client::AWSError<AppStreamErrors>> BatchDisassociateUserStackOutcome;
        typedef Aws::Utils::Outcome<CopyImageResult, Aws::Client::AWSError<AppStreamErrors>> CopyImageOutcome;
        typedef Aws::Utils::Outcome<CreateDirectoryConfigResult, Aws::Client::AWSError<AppStreamErrors>> CreateDirectoryConfigOutcome;
        typedef Aws::Utils::Outcome<CreateFleetResult, Aws::Client::AWSError<AppStreamErrors>> CreateFleetOutcome;
        typedef Aws::Utils::Outcome<CreateImageBuilderResult, Aws::Client::AWSError<AppStreamErrors>> CreateImageBuilderOutcome;
        typedef Aws::Utils::Outcome<CreateImageBuilderStreamingURLResult, Aws::Client::AWSError<AppStreamErrors>> CreateImageBuilderStreamingURLOutcome;
        typedef Aws::Utils::Outcome<CreateStackResult, Aws::Client::AWSError<AppStreamErrors>> CreateStackOutcome;
        typedef Aws::Utils::Outcome<CreateStreamingURLResult, Aws::Client::AWSError<AppStreamErrors>> CreateStreamingURLOutcome;
        typedef Aws::Utils::Outcome<CreateUsageReportSubscriptionResult, Aws::Client::AWSError<AppStreamErrors>> CreateUsageReportSubscriptionOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, Aws::Client::AWSError<AppStreamErrors>> CreateUserOutcome;
        typedef Aws::Utils::Outcome<DeleteDirectoryConfigResult, Aws::Client::AWSError<AppStreamErrors>> DeleteDirectoryConfigOutcome;
        typedef Aws::Utils::Outcome<DeleteFleetResult, Aws::Client::AWSError<AppStreamErrors>> DeleteFleetOutcome;
        typedef Aws::Utils::Outcome<DeleteImageResult, Aws::Client::AWSError<AppStreamErrors>> DeleteImageOutcome;
        typedef Aws::Utils::Outcome<DeleteImageBuilderResult, Aws::Client::AWSError<AppStreamErrors>> DeleteImageBuilderOutcome;
        typedef Aws::Utils::Outcome<DeleteImagePermissionsResult, Aws::Client::AWSError<AppStreamErrors>> DeleteImagePermissionsOutcome;
        typedef Aws::Utils::Outcome<DeleteStackResult, Aws::Client::AWSError<AppStreamErrors>> DeleteStackOutcome;
        typedef Aws::Utils::Outcome<DeleteUsageReportSubscriptionResult, Aws::Client::AWSError<AppStreamErrors>> DeleteUsageReportSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DeleteUserResult, Aws::Client::AWSError<AppStreamErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DescribeDirectoryConfigsResult, Aws::Client::AWSError<AppStreamErrors>> DescribeDirectoryConfigsOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetsResult, Aws::Client::AWSError<AppStreamErrors>> DescribeFleetsOutcome;
        typedef Aws::Utils::Outcome<DescribeImageBuildersResult, Aws::Client::AWSError<AppStreamErrors>> DescribeImageBuildersOutcome;
        typedef Aws::Utils::Outcome<DescribeImagePermissionsResult, Aws::Client::AWSError<AppStreamErrors>> DescribeImagePermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeImagesResult, Aws::Client::AWSError<AppStreamErrors>> DescribeImagesOutcome;
        typedef Aws::Utils::Outcome<DescribeSessionsResult, Aws::Client::AWSError<AppStreamErrors>> DescribeSessionsOutcome;
        typedef Aws::Utils::Outcome<DescribeStacksResult, Aws::Client::AWSError<AppStreamErrors>> DescribeStacksOutcome;
        typedef Aws::Utils::Outcome<DescribeUsageReportSubscriptionsResult, Aws::Client::AWSError<AppStreamErrors>> DescribeUsageReportSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeUserStackAssociationsResult, Aws::Client::AWSError<AppStreamErrors>> DescribeUserStackAssociationsOutcome;
        typedef Aws::Utils::Outcome<DescribeUsersResult, Aws::Client::AWSError<AppStreamErrors>> DescribeUsersOutcome;
        typedef Aws::Utils::Outcome<DisableUserResult, Aws::Client::AWSError<AppStreamErrors>> DisableUserOutcome;
        typedef Aws::Utils::Outcome<DisassociateFleetResult, Aws::Client::AWSError<AppStreamErrors>> DisassociateFleetOutcome;
        typedef Aws::Utils::Outcome<EnableUserResult, Aws::Client::AWSError<AppStreamErrors>> EnableUserOutcome;
        typedef Aws::Utils::Outcome<ExpireSessionResult, Aws::Client::AWSError<AppStreamErrors>> ExpireSessionOutcome;
        typedef Aws::Utils::Outcome<ListAssociatedFleetsResult, Aws::Client::AWSError<AppStreamErrors>> ListAssociatedFleetsOutcome;
        typedef Aws::Utils::Outcome<ListAssociatedStacksResult, Aws::Client::AWSError<AppStreamErrors>> ListAssociatedStacksOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<AppStreamErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartFleetResult, Aws::Client::AWSError<AppStreamErrors>> StartFleetOutcome;
        typedef Aws::Utils::Outcome<StartImageBuilderResult, Aws::Client::AWSError<AppStreamErrors>> StartImageBuilderOutcome;
        typedef Aws::Utils::Outcome<StopFleetResult, Aws::Client::AWSError<AppStreamErrors>> StopFleetOutcome;
        typedef Aws::Utils::Outcome<StopImageBuilderResult, Aws::Client::AWSError<AppStreamErrors>> StopImageBuilderOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<AppStreamErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<AppStreamErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDirectoryConfigResult, Aws::Client::AWSError<AppStreamErrors>> UpdateDirectoryConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateFleetResult, Aws::Client::AWSError<AppStreamErrors>> UpdateFleetOutcome;
        typedef Aws::Utils::Outcome<UpdateImagePermissionsResult, Aws::Client::AWSError<AppStreamErrors>> UpdateImagePermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateStackResult, Aws::Client::AWSError<AppStreamErrors>> UpdateStackOutcome;

        typedef std::future<AssociateFleetOutcome> AssociateFleetOutcomeCallable;
        typedef std::future<BatchAssociateUserStackOutcome> BatchAssociateUserStackOutcomeCallable;
        typedef std::future<BatchDisassociateUserStackOutcome> BatchDisassociateUserStackOutcomeCallable;
        typedef std::future<CopyImageOutcome> CopyImageOutcomeCallable;
        typedef std::future<CreateDirectoryConfigOutcome> CreateDirectoryConfigOutcomeCallable;
        typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
        typedef std::future<CreateImageBuilderOutcome> CreateImageBuilderOutcomeCallable;
        typedef std::future<CreateImageBuilderStreamingURLOutcome> CreateImageBuilderStreamingURLOutcomeCallable;
        typedef std::future<CreateStackOutcome> CreateStackOutcomeCallable;
        typedef std::future<CreateStreamingURLOutcome> CreateStreamingURLOutcomeCallable;
        typedef std::future<CreateUsageReportSubscriptionOutcome> CreateUsageReportSubscriptionOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<DeleteDirectoryConfigOutcome> DeleteDirectoryConfigOutcomeCallable;
        typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
        typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
        typedef std::future<DeleteImageBuilderOutcome> DeleteImageBuilderOutcomeCallable;
        typedef std::future<DeleteImagePermissionsOutcome> DeleteImagePermissionsOutcomeCallable;
        typedef std::future<DeleteStackOutcome> DeleteStackOutcomeCallable;
        typedef std::future<DeleteUsageReportSubscriptionOutcome> DeleteUsageReportSubscriptionOutcomeCallable;
        typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
        typedef std::future<DescribeDirectoryConfigsOutcome> DescribeDirectoryConfigsOutcomeCallable;
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
        typedef std::future<DisassociateFleetOutcome> DisassociateFleetOutcomeCallable;
        typedef std::future<EnableUserOutcome> EnableUserOutcomeCallable;
        typedef std::future<ExpireSessionOutcome> ExpireSessionOutcomeCallable;
        typedef std::future<ListAssociatedFleetsOutcome> ListAssociatedFleetsOutcomeCallable;
        typedef std::future<ListAssociatedStacksOutcome> ListAssociatedStacksOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartFleetOutcome> StartFleetOutcomeCallable;
        typedef std::future<StartImageBuilderOutcome> StartImageBuilderOutcomeCallable;
        typedef std::future<StopFleetOutcome> StopFleetOutcomeCallable;
        typedef std::future<StopImageBuilderOutcome> StopImageBuilderOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDirectoryConfigOutcome> UpdateDirectoryConfigOutcomeCallable;
        typedef std::future<UpdateFleetOutcome> UpdateFleetOutcomeCallable;
        typedef std::future<UpdateImagePermissionsOutcome> UpdateImagePermissionsOutcomeCallable;
        typedef std::future<UpdateStackOutcome> UpdateStackOutcomeCallable;
} // namespace Model

  class AppStreamClient;

    typedef std::function<void(const AppStreamClient*, const Model::AssociateFleetRequest&, const Model::AssociateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::BatchAssociateUserStackRequest&, const Model::BatchAssociateUserStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateUserStackResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::BatchDisassociateUserStackRequest&, const Model::BatchDisassociateUserStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateUserStackResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CopyImageRequest&, const Model::CopyImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyImageResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateDirectoryConfigRequest&, const Model::CreateDirectoryConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDirectoryConfigResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateImageBuilderRequest&, const Model::CreateImageBuilderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageBuilderResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateImageBuilderStreamingURLRequest&, const Model::CreateImageBuilderStreamingURLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageBuilderStreamingURLResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateStackRequest&, const Model::CreateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateStreamingURLRequest&, const Model::CreateStreamingURLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingURLResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateUsageReportSubscriptionRequest&, const Model::CreateUsageReportSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUsageReportSubscriptionResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteDirectoryConfigRequest&, const Model::DeleteDirectoryConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDirectoryConfigResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteFleetRequest&, const Model::DeleteFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteImageRequest&, const Model::DeleteImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteImageBuilderRequest&, const Model::DeleteImageBuilderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageBuilderResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteImagePermissionsRequest&, const Model::DeleteImagePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImagePermissionsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteStackRequest&, const Model::DeleteStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteUsageReportSubscriptionRequest&, const Model::DeleteUsageReportSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUsageReportSubscriptionResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::DescribeDirectoryConfigsRequest&, const Model::DescribeDirectoryConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectoryConfigsResponseReceivedHandler;
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
    typedef std::function<void(const AppStreamClient*, const Model::DisassociateFleetRequest&, const Model::DisassociateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::EnableUserRequest&, const Model::EnableUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableUserResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::ExpireSessionRequest&, const Model::ExpireSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExpireSessionResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::ListAssociatedFleetsRequest&, const Model::ListAssociatedFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedFleetsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::ListAssociatedStacksRequest&, const Model::ListAssociatedStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedStacksResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::StartFleetRequest&, const Model::StartFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::StartImageBuilderRequest&, const Model::StartImageBuilderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImageBuilderResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::StopFleetRequest&, const Model::StopFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::StopImageBuilderRequest&, const Model::StopImageBuilderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopImageBuilderResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UpdateDirectoryConfigRequest&, const Model::UpdateDirectoryConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDirectoryConfigResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UpdateFleetRequest&, const Model::UpdateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFleetResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UpdateImagePermissionsRequest&, const Model::UpdateImagePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateImagePermissionsResponseReceivedHandler;
    typedef std::function<void(const AppStreamClient*, const Model::UpdateStackRequest&, const Model::UpdateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackResponseReceivedHandler;

  /**
   * <fullname>Amazon AppStream 2.0</fullname> <p>This is the <i>Amazon AppStream 2.0
   * API Reference</i>. This documentation provides descriptions and syntax for each
   * of the actions and data types in AppStream 2.0. AppStream 2.0 is a fully
   * managed, secure application streaming service that lets you stream desktop
   * applications to users without rewriting applications. AppStream 2.0 manages the
   * AWS resources that are required to host and run your applications, scales
   * automatically, and provides access to your users on demand.</p> <p>To learn more
   * about AppStream 2.0, see the following resources:</p> <ul> <li> <p> <a
   * href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
   * </p> </li> <li> <p> <a
   * href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0
   * documentation</a> </p> </li> </ul>
   */
  class AWS_APPSTREAM_API AppStreamClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppStreamClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppStreamClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppStreamClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AppStreamClient();

        inline virtual const char* GetServiceClientName() const override { return "AppStream"; }


        /**
         * <p>Associates the specified fleet with the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFleetOutcome AssociateFleet(const Model::AssociateFleetRequest& request) const;

        /**
         * <p>Associates the specified fleet with the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateFleetOutcomeCallable AssociateFleetCallable(const Model::AssociateFleetRequest& request) const;

        /**
         * <p>Associates the specified fleet with the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AssociateFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateFleetAsync(const Model::AssociateFleetRequest& request, const AssociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified users with the specified stacks. Users in a user
         * pool cannot be assigned to stacks with fleets that are joined to an Active
         * Directory domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/BatchAssociateUserStack">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateUserStackOutcome BatchAssociateUserStack(const Model::BatchAssociateUserStackRequest& request) const;

        /**
         * <p>Associates the specified users with the specified stacks. Users in a user
         * pool cannot be assigned to stacks with fleets that are joined to an Active
         * Directory domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/BatchAssociateUserStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAssociateUserStackOutcomeCallable BatchAssociateUserStackCallable(const Model::BatchAssociateUserStackRequest& request) const;

        /**
         * <p>Associates the specified users with the specified stacks. Users in a user
         * pool cannot be assigned to stacks with fleets that are joined to an Active
         * Directory domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/BatchAssociateUserStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAssociateUserStackAsync(const Model::BatchAssociateUserStackRequest& request, const BatchAssociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified users from the specified stacks.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/BatchDisassociateUserStack">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateUserStackOutcome BatchDisassociateUserStack(const Model::BatchDisassociateUserStackRequest& request) const;

        /**
         * <p>Disassociates the specified users from the specified stacks.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/BatchDisassociateUserStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisassociateUserStackOutcomeCallable BatchDisassociateUserStackCallable(const Model::BatchDisassociateUserStackRequest& request) const;

        /**
         * <p>Disassociates the specified users from the specified stacks.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/BatchDisassociateUserStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateUserStackAsync(const Model::BatchDisassociateUserStackRequest& request, const BatchDisassociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the image within the same region or to a new region within the same
         * AWS account. Note that any tags you added to the image will not be
         * copied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CopyImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyImageOutcome CopyImage(const Model::CopyImageRequest& request) const;

        /**
         * <p>Copies the image within the same region or to a new region within the same
         * AWS account. Note that any tags you added to the image will not be
         * copied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CopyImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyImageOutcomeCallable CopyImageCallable(const Model::CopyImageRequest& request) const;

        /**
         * <p>Copies the image within the same region or to a new region within the same
         * AWS account. Note that any tags you added to the image will not be
         * copied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CopyImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyImageAsync(const Model::CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Directory Config object in AppStream 2.0. This object includes the
         * configuration information required to join fleets and image builders to
         * Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateDirectoryConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectoryConfigOutcome CreateDirectoryConfig(const Model::CreateDirectoryConfigRequest& request) const;

        /**
         * <p>Creates a Directory Config object in AppStream 2.0. This object includes the
         * configuration information required to join fleets and image builders to
         * Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateDirectoryConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDirectoryConfigOutcomeCallable CreateDirectoryConfigCallable(const Model::CreateDirectoryConfigRequest& request) const;

        /**
         * <p>Creates a Directory Config object in AppStream 2.0. This object includes the
         * configuration information required to join fleets and image builders to
         * Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateDirectoryConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDirectoryConfigAsync(const Model::CreateDirectoryConfigRequest& request, const CreateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a fleet. A fleet consists of streaming instances that run a specified
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a fleet. A fleet consists of streaming instances that run a specified
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetOutcomeCallable CreateFleetCallable(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a fleet. A fleet consists of streaming instances that run a specified
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an image builder. An image builder is a virtual machine that is used
         * to create an image.</p> <p>The initial state of the builder is
         * <code>PENDING</code>. When it is ready, the state is
         * <code>RUNNING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageBuilderOutcome CreateImageBuilder(const Model::CreateImageBuilderRequest& request) const;

        /**
         * <p>Creates an image builder. An image builder is a virtual machine that is used
         * to create an image.</p> <p>The initial state of the builder is
         * <code>PENDING</code>. When it is ready, the state is
         * <code>RUNNING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateImageBuilder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageBuilderOutcomeCallable CreateImageBuilderCallable(const Model::CreateImageBuilderRequest& request) const;

        /**
         * <p>Creates an image builder. An image builder is a virtual machine that is used
         * to create an image.</p> <p>The initial state of the builder is
         * <code>PENDING</code>. When it is ready, the state is
         * <code>RUNNING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateImageBuilder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageBuilderAsync(const Model::CreateImageBuilderRequest& request, const CreateImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a URL to start an image builder streaming session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateImageBuilderStreamingURL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageBuilderStreamingURLOutcome CreateImageBuilderStreamingURL(const Model::CreateImageBuilderStreamingURLRequest& request) const;

        /**
         * <p>Creates a URL to start an image builder streaming session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateImageBuilderStreamingURL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageBuilderStreamingURLOutcomeCallable CreateImageBuilderStreamingURLCallable(const Model::CreateImageBuilderStreamingURLRequest& request) const;

        /**
         * <p>Creates a URL to start an image builder streaming session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateImageBuilderStreamingURL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageBuilderStreamingURLAsync(const Model::CreateImageBuilderStreamingURLRequest& request, const CreateImageBuilderStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a stack to start streaming applications to users. A stack consists of
         * an associated fleet, user access policies, and storage configurations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackOutcome CreateStack(const Model::CreateStackRequest& request) const;

        /**
         * <p>Creates a stack to start streaming applications to users. A stack consists of
         * an associated fleet, user access policies, and storage configurations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStackOutcomeCallable CreateStackCallable(const Model::CreateStackRequest& request) const;

        /**
         * <p>Creates a stack to start streaming applications to users. A stack consists of
         * an associated fleet, user access policies, and storage configurations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackAsync(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a temporary URL to start an AppStream 2.0 streaming session for the
         * specified user. A streaming URL enables application streaming to be tested
         * without user setup. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateStreamingURL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingURLOutcome CreateStreamingURL(const Model::CreateStreamingURLRequest& request) const;

        /**
         * <p>Creates a temporary URL to start an AppStream 2.0 streaming session for the
         * specified user. A streaming URL enables application streaming to be tested
         * without user setup. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateStreamingURL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingURLOutcomeCallable CreateStreamingURLCallable(const Model::CreateStreamingURLRequest& request) const;

        /**
         * <p>Creates a temporary URL to start an AppStream 2.0 streaming session for the
         * specified user. A streaming URL enables application streaming to be tested
         * without user setup. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateStreamingURL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingURLAsync(const Model::CreateStreamingURLRequest& request, const CreateStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a usage report subscription. Usage reports are generated
         * daily.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUsageReportSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsageReportSubscriptionOutcome CreateUsageReportSubscription(const Model::CreateUsageReportSubscriptionRequest& request) const;

        /**
         * <p>Creates a usage report subscription. Usage reports are generated
         * daily.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUsageReportSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUsageReportSubscriptionOutcomeCallable CreateUsageReportSubscriptionCallable(const Model::CreateUsageReportSubscriptionRequest& request) const;

        /**
         * <p>Creates a usage report subscription. Usage reports are generated
         * daily.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUsageReportSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUsageReportSubscriptionAsync(const Model::CreateUsageReportSubscriptionRequest& request, const CreateUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new user in the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a new user in the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a new user in the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CreateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Directory Config object from AppStream 2.0. This object
         * includes the information required to join streaming instances to an Active
         * Directory domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteDirectoryConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectoryConfigOutcome DeleteDirectoryConfig(const Model::DeleteDirectoryConfigRequest& request) const;

        /**
         * <p>Deletes the specified Directory Config object from AppStream 2.0. This object
         * includes the information required to join streaming instances to an Active
         * Directory domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteDirectoryConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDirectoryConfigOutcomeCallable DeleteDirectoryConfigCallable(const Model::DeleteDirectoryConfigRequest& request) const;

        /**
         * <p>Deletes the specified Directory Config object from AppStream 2.0. This object
         * includes the information required to join streaming instances to an Active
         * Directory domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteDirectoryConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDirectoryConfigAsync(const Model::DeleteDirectoryConfigRequest& request, const DeleteDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified image. You cannot delete an image when it is in use.
         * After you delete an image, you cannot provision new capacity using the
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest& request) const;

        /**
         * <p>Deletes the specified image. You cannot delete an image when it is in use.
         * After you delete an image, you cannot provision new capacity using the
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request) const;

        /**
         * <p>Deletes the specified image. You cannot delete an image when it is in use.
         * After you delete an image, you cannot provision new capacity using the
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified image builder and releases the capacity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageBuilderOutcome DeleteImageBuilder(const Model::DeleteImageBuilderRequest& request) const;

        /**
         * <p>Deletes the specified image builder and releases the capacity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImageBuilder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImageBuilderOutcomeCallable DeleteImageBuilderCallable(const Model::DeleteImageBuilderRequest& request) const;

        /**
         * <p>Deletes the specified image builder and releases the capacity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImageBuilder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageBuilderAsync(const Model::DeleteImageBuilderRequest& request, const DeleteImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes permissions for the specified private image. After you delete
         * permissions for an image, AWS accounts to which you previously granted these
         * permissions can no longer use the image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImagePermissionsOutcome DeleteImagePermissions(const Model::DeleteImagePermissionsRequest& request) const;

        /**
         * <p>Deletes permissions for the specified private image. After you delete
         * permissions for an image, AWS accounts to which you previously granted these
         * permissions can no longer use the image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImagePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImagePermissionsOutcomeCallable DeleteImagePermissionsCallable(const Model::DeleteImagePermissionsRequest& request) const;

        /**
         * <p>Deletes permissions for the specified private image. After you delete
         * permissions for an image, AWS accounts to which you previously granted these
         * permissions can no longer use the image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteImagePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImagePermissionsAsync(const Model::DeleteImagePermissionsRequest& request, const DeleteImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified stack. After the stack is deleted, the application
         * streaming environment provided by the stack is no longer available to users.
         * Also, any reservations made for application streaming sessions for the stack are
         * released.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteStack">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStackOutcome DeleteStack(const Model::DeleteStackRequest& request) const;

        /**
         * <p>Deletes the specified stack. After the stack is deleted, the application
         * streaming environment provided by the stack is no longer available to users.
         * Also, any reservations made for application streaming sessions for the stack are
         * released.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStackOutcomeCallable DeleteStackCallable(const Model::DeleteStackRequest& request) const;

        /**
         * <p>Deletes the specified stack. After the stack is deleted, the application
         * streaming environment provided by the stack is no longer available to users.
         * Also, any reservations made for application streaming sessions for the stack are
         * released.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackAsync(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables usage report generation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUsageReportSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsageReportSubscriptionOutcome DeleteUsageReportSubscription(const Model::DeleteUsageReportSubscriptionRequest& request) const;

        /**
         * <p>Disables usage report generation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUsageReportSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUsageReportSubscriptionOutcomeCallable DeleteUsageReportSubscriptionCallable(const Model::DeleteUsageReportSubscriptionRequest& request) const;

        /**
         * <p>Disables usage report generation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUsageReportSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUsageReportSubscriptionAsync(const Model::DeleteUsageReportSubscriptionRequest& request, const DeleteUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user from the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a user from the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes a user from the user pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes one or more specified Directory Config
         * objects for AppStream 2.0, if the names for these objects are provided.
         * Otherwise, all Directory Config objects in the account are described. These
         * objects include the configuration information required to join fleets and image
         * builders to Microsoft Active Directory domains. </p> <p>Although the response
         * syntax in this topic includes the account password, this password is not
         * returned in the actual response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeDirectoryConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDirectoryConfigsOutcome DescribeDirectoryConfigs(const Model::DescribeDirectoryConfigsRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified Directory Config
         * objects for AppStream 2.0, if the names for these objects are provided.
         * Otherwise, all Directory Config objects in the account are described. These
         * objects include the configuration information required to join fleets and image
         * builders to Microsoft Active Directory domains. </p> <p>Although the response
         * syntax in this topic includes the account password, this password is not
         * returned in the actual response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeDirectoryConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDirectoryConfigsOutcomeCallable DescribeDirectoryConfigsCallable(const Model::DescribeDirectoryConfigsRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified Directory Config
         * objects for AppStream 2.0, if the names for these objects are provided.
         * Otherwise, all Directory Config objects in the account are described. These
         * objects include the configuration information required to join fleets and image
         * builders to Microsoft Active Directory domains. </p> <p>Although the response
         * syntax in this topic includes the account password, this password is not
         * returned in the actual response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeDirectoryConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDirectoryConfigsAsync(const Model::DescribeDirectoryConfigsRequest& request, const DescribeDirectoryConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes one or more specified fleets, if the fleet
         * names are provided. Otherwise, all fleets in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetsOutcome DescribeFleets(const Model::DescribeFleetsRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified fleets, if the fleet
         * names are provided. Otherwise, all fleets in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeFleets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetsOutcomeCallable DescribeFleetsCallable(const Model::DescribeFleetsRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified fleets, if the fleet
         * names are provided. Otherwise, all fleets in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeFleets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetsAsync(const Model::DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes one or more specified image builders, if the
         * image builder names are provided. Otherwise, all image builders in the account
         * are described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImageBuilders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageBuildersOutcome DescribeImageBuilders(const Model::DescribeImageBuildersRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified image builders, if the
         * image builder names are provided. Otherwise, all image builders in the account
         * are described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImageBuilders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImageBuildersOutcomeCallable DescribeImageBuildersCallable(const Model::DescribeImageBuildersRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified image builders, if the
         * image builder names are provided. Otherwise, all image builders in the account
         * are described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImageBuilders">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageBuildersAsync(const Model::DescribeImageBuildersRequest& request, const DescribeImageBuildersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes the permissions for shared AWS account IDs on
         * a private image that you own. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagePermissionsOutcome DescribeImagePermissions(const Model::DescribeImagePermissionsRequest& request) const;

        /**
         * <p>Retrieves a list that describes the permissions for shared AWS account IDs on
         * a private image that you own. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImagePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImagePermissionsOutcomeCallable DescribeImagePermissionsCallable(const Model::DescribeImagePermissionsRequest& request) const;

        /**
         * <p>Retrieves a list that describes the permissions for shared AWS account IDs on
         * a private image that you own. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImagePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImagePermissionsAsync(const Model::DescribeImagePermissionsRequest& request, const DescribeImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes one or more specified images, if the image
         * names or image ARNs are provided. Otherwise, all images in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified images, if the image
         * names or image ARNs are provided. Otherwise, all images in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified images, if the image
         * names or image ARNs are provided. Otherwise, all images in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes the streaming sessions for a specified stack
         * and fleet. If a UserId is provided for the stack and fleet, only streaming
         * sessions for that user are described. If an authentication type is not provided,
         * the default is to authenticate users using a streaming URL.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSessionsOutcome DescribeSessions(const Model::DescribeSessionsRequest& request) const;

        /**
         * <p>Retrieves a list that describes the streaming sessions for a specified stack
         * and fleet. If a UserId is provided for the stack and fleet, only streaming
         * sessions for that user are described. If an authentication type is not provided,
         * the default is to authenticate users using a streaming URL.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSessionsOutcomeCallable DescribeSessionsCallable(const Model::DescribeSessionsRequest& request) const;

        /**
         * <p>Retrieves a list that describes the streaming sessions for a specified stack
         * and fleet. If a UserId is provided for the stack and fleet, only streaming
         * sessions for that user are described. If an authentication type is not provided,
         * the default is to authenticate users using a streaming URL.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSessionsAsync(const Model::DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes one or more specified stacks, if the stack
         * names are provided. Otherwise, all stacks in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStacksOutcome DescribeStacks(const Model::DescribeStacksRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified stacks, if the stack
         * names are provided. Otherwise, all stacks in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeStacks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStacksOutcomeCallable DescribeStacksCallable(const Model::DescribeStacksRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified stacks, if the stack
         * names are provided. Otherwise, all stacks in the account are
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeStacks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStacksAsync(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes one or more usage report
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUsageReportSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsageReportSubscriptionsOutcome DescribeUsageReportSubscriptions(const Model::DescribeUsageReportSubscriptionsRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more usage report
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUsageReportSubscriptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUsageReportSubscriptionsOutcomeCallable DescribeUsageReportSubscriptionsCallable(const Model::DescribeUsageReportSubscriptionsRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more usage report
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUsageReportSubscriptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUsageReportSubscriptionsAsync(const Model::DescribeUsageReportSubscriptionsRequest& request, const DescribeUsageReportSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes the UserStackAssociation objects. You must
         * specify either or both of the following:</p> <ul> <li> <p>The stack name</p>
         * </li> <li> <p>The user name (email address of the user associated with the
         * stack) and the authentication type for the user</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUserStackAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserStackAssociationsOutcome DescribeUserStackAssociations(const Model::DescribeUserStackAssociationsRequest& request) const;

        /**
         * <p>Retrieves a list that describes the UserStackAssociation objects. You must
         * specify either or both of the following:</p> <ul> <li> <p>The stack name</p>
         * </li> <li> <p>The user name (email address of the user associated with the
         * stack) and the authentication type for the user</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUserStackAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserStackAssociationsOutcomeCallable DescribeUserStackAssociationsCallable(const Model::DescribeUserStackAssociationsRequest& request) const;

        /**
         * <p>Retrieves a list that describes the UserStackAssociation objects. You must
         * specify either or both of the following:</p> <ul> <li> <p>The stack name</p>
         * </li> <li> <p>The user name (email address of the user associated with the
         * stack) and the authentication type for the user</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUserStackAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserStackAssociationsAsync(const Model::DescribeUserStackAssociationsRequest& request, const DescribeUserStackAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes one or more specified users in the user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified users in the user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified users in the user
         * pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DescribeUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the specified user in the user pool. Users can't sign in to
         * AppStream 2.0 until they are re-enabled. This action does not delete the user.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableUserOutcome DisableUser(const Model::DisableUserRequest& request) const;

        /**
         * <p>Disables the specified user in the user pool. Users can't sign in to
         * AppStream 2.0 until they are re-enabled. This action does not delete the user.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisableUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableUserOutcomeCallable DisableUserCallable(const Model::DisableUserRequest& request) const;

        /**
         * <p>Disables the specified user in the user pool. Users can't sign in to
         * AppStream 2.0 until they are re-enabled. This action does not delete the user.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisableUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableUserAsync(const Model::DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified fleet from the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisassociateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFleetOutcome DisassociateFleet(const Model::DisassociateFleetRequest& request) const;

        /**
         * <p>Disassociates the specified fleet from the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisassociateFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFleetOutcomeCallable DisassociateFleetCallable(const Model::DisassociateFleetRequest& request) const;

        /**
         * <p>Disassociates the specified fleet from the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DisassociateFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFleetAsync(const Model::DisassociateFleetRequest& request, const DisassociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables a user in the user pool. After being enabled, users can sign in to
         * AppStream 2.0 and open applications from the stacks to which they are
         * assigned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/EnableUser">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableUserOutcome EnableUser(const Model::EnableUserRequest& request) const;

        /**
         * <p>Enables a user in the user pool. After being enabled, users can sign in to
         * AppStream 2.0 and open applications from the stacks to which they are
         * assigned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/EnableUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableUserOutcomeCallable EnableUserCallable(const Model::EnableUserRequest& request) const;

        /**
         * <p>Enables a user in the user pool. After being enabled, users can sign in to
         * AppStream 2.0 and open applications from the stacks to which they are
         * assigned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/EnableUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableUserAsync(const Model::EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Immediately stops the specified streaming session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ExpireSession">AWS
         * API Reference</a></p>
         */
        virtual Model::ExpireSessionOutcome ExpireSession(const Model::ExpireSessionRequest& request) const;

        /**
         * <p>Immediately stops the specified streaming session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ExpireSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExpireSessionOutcomeCallable ExpireSessionCallable(const Model::ExpireSessionRequest& request) const;

        /**
         * <p>Immediately stops the specified streaming session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ExpireSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExpireSessionAsync(const Model::ExpireSessionRequest& request, const ExpireSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the name of the fleet that is associated with the specified
         * stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedFleetsOutcome ListAssociatedFleets(const Model::ListAssociatedFleetsRequest& request) const;

        /**
         * <p>Retrieves the name of the fleet that is associated with the specified
         * stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedFleets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedFleetsOutcomeCallable ListAssociatedFleetsCallable(const Model::ListAssociatedFleetsRequest& request) const;

        /**
         * <p>Retrieves the name of the fleet that is associated with the specified
         * stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedFleets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedFleetsAsync(const Model::ListAssociatedFleetsRequest& request, const ListAssociatedFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the name of the stack with which the specified fleet is
         * associated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedStacksOutcome ListAssociatedStacks(const Model::ListAssociatedStacksRequest& request) const;

        /**
         * <p>Retrieves the name of the stack with which the specified fleet is
         * associated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedStacks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedStacksOutcomeCallable ListAssociatedStacksCallable(const Model::ListAssociatedStacksRequest& request) const;

        /**
         * <p>Retrieves the name of the stack with which the specified fleet is
         * associated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedStacks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedStacksAsync(const Model::ListAssociatedStacksRequest& request, const ListAssociatedStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of all tags for the specified AppStream 2.0 resource. You
         * can tag AppStream 2.0 image builders, images, fleets, and stacks.</p> <p>For
         * more information about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves a list of all tags for the specified AppStream 2.0 resource. You
         * can tag AppStream 2.0 image builders, images, fleets, and stacks.</p> <p>For
         * more information about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves a list of all tags for the specified AppStream 2.0 resource. You
         * can tag AppStream 2.0 image builders, images, fleets, and stacks.</p> <p>For
         * more information about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFleetOutcome StartFleet(const Model::StartFleetRequest& request) const;

        /**
         * <p>Starts the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFleetOutcomeCallable StartFleetCallable(const Model::StartFleetRequest& request) const;

        /**
         * <p>Starts the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFleetAsync(const Model::StartFleetRequest& request, const StartFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImageBuilderOutcome StartImageBuilder(const Model::StartImageBuilderRequest& request) const;

        /**
         * <p>Starts the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartImageBuilder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartImageBuilderOutcomeCallable StartImageBuilderCallable(const Model::StartImageBuilderRequest& request) const;

        /**
         * <p>Starts the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StartImageBuilder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImageBuilderAsync(const Model::StartImageBuilderRequest& request, const StartImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFleetOutcome StopFleet(const Model::StopFleetRequest& request) const;

        /**
         * <p>Stops the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopFleetOutcomeCallable StopFleetCallable(const Model::StopFleetRequest& request) const;

        /**
         * <p>Stops the specified fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopFleetAsync(const Model::StopFleetRequest& request, const StopFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopImageBuilder">AWS
         * API Reference</a></p>
         */
        virtual Model::StopImageBuilderOutcome StopImageBuilder(const Model::StopImageBuilderRequest& request) const;

        /**
         * <p>Stops the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopImageBuilder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopImageBuilderOutcomeCallable StopImageBuilderCallable(const Model::StopImageBuilderRequest& request) const;

        /**
         * <p>Stops the specified image builder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StopImageBuilder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopImageBuilderAsync(const Model::StopImageBuilderRequest& request, const StopImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified AppStream 2.0 resource.
         * You can tag AppStream 2.0 image builders, images, fleets, and stacks.</p>
         * <p>Each tag consists of a key and an optional value. If a resource already has a
         * tag with the same key, this operation updates its value.</p> <p>To list the
         * current tags for your resources, use <a>ListTagsForResource</a>. To disassociate
         * tags from your resources, use <a>UntagResource</a>.</p> <p>For more information
         * about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified AppStream 2.0 resource.
         * You can tag AppStream 2.0 image builders, images, fleets, and stacks.</p>
         * <p>Each tag consists of a key and an optional value. If a resource already has a
         * tag with the same key, this operation updates its value.</p> <p>To list the
         * current tags for your resources, use <a>ListTagsForResource</a>. To disassociate
         * tags from your resources, use <a>UntagResource</a>.</p> <p>For more information
         * about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified AppStream 2.0 resource.
         * You can tag AppStream 2.0 image builders, images, fleets, and stacks.</p>
         * <p>Each tag consists of a key and an optional value. If a resource already has a
         * tag with the same key, this operation updates its value.</p> <p>To list the
         * current tags for your resources, use <a>ListTagsForResource</a>. To disassociate
         * tags from your resources, use <a>UntagResource</a>.</p> <p>For more information
         * about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates one or more specified tags from the specified AppStream 2.0
         * resource.</p> <p>To list the current tags for your resources, use
         * <a>ListTagsForResource</a>.</p> <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Disassociates one or more specified tags from the specified AppStream 2.0
         * resource.</p> <p>To list the current tags for your resources, use
         * <a>ListTagsForResource</a>.</p> <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Disassociates one or more specified tags from the specified AppStream 2.0
         * resource.</p> <p>To list the current tags for your resources, use
         * <a>ListTagsForResource</a>.</p> <p>For more information about tags, see <a
         * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
         * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified Directory Config object in AppStream 2.0. This object
         * includes the configuration information required to join fleets and image
         * builders to Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateDirectoryConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDirectoryConfigOutcome UpdateDirectoryConfig(const Model::UpdateDirectoryConfigRequest& request) const;

        /**
         * <p>Updates the specified Directory Config object in AppStream 2.0. This object
         * includes the configuration information required to join fleets and image
         * builders to Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateDirectoryConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDirectoryConfigOutcomeCallable UpdateDirectoryConfigCallable(const Model::UpdateDirectoryConfigRequest& request) const;

        /**
         * <p>Updates the specified Directory Config object in AppStream 2.0. This object
         * includes the configuration information required to join fleets and image
         * builders to Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateDirectoryConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDirectoryConfigAsync(const Model::UpdateDirectoryConfigRequest& request, const UpdateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified fleet.</p> <p>If the fleet is in the
         * <code>STOPPED</code> state, you can update any attribute except the fleet name.
         * If the fleet is in the <code>RUNNING</code> state, you can update the
         * <code>DisplayName</code>, <code>ComputeCapacity</code>, <code>ImageARN</code>,
         * <code>ImageName</code>, and <code>DisconnectTimeoutInSeconds</code> attributes.
         * If the fleet is in the <code>STARTING</code> or <code>STOPPING</code> state, you
         * can't update it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetOutcome UpdateFleet(const Model::UpdateFleetRequest& request) const;

        /**
         * <p>Updates the specified fleet.</p> <p>If the fleet is in the
         * <code>STOPPED</code> state, you can update any attribute except the fleet name.
         * If the fleet is in the <code>RUNNING</code> state, you can update the
         * <code>DisplayName</code>, <code>ComputeCapacity</code>, <code>ImageARN</code>,
         * <code>ImageName</code>, and <code>DisconnectTimeoutInSeconds</code> attributes.
         * If the fleet is in the <code>STARTING</code> or <code>STOPPING</code> state, you
         * can't update it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetOutcomeCallable UpdateFleetCallable(const Model::UpdateFleetRequest& request) const;

        /**
         * <p>Updates the specified fleet.</p> <p>If the fleet is in the
         * <code>STOPPED</code> state, you can update any attribute except the fleet name.
         * If the fleet is in the <code>RUNNING</code> state, you can update the
         * <code>DisplayName</code>, <code>ComputeCapacity</code>, <code>ImageARN</code>,
         * <code>ImageName</code>, and <code>DisconnectTimeoutInSeconds</code> attributes.
         * If the fleet is in the <code>STARTING</code> or <code>STOPPING</code> state, you
         * can't update it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetAsync(const Model::UpdateFleetRequest& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates permissions for the specified private image. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImagePermissionsOutcome UpdateImagePermissions(const Model::UpdateImagePermissionsRequest& request) const;

        /**
         * <p>Adds or updates permissions for the specified private image. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateImagePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateImagePermissionsOutcomeCallable UpdateImagePermissionsCallable(const Model::UpdateImagePermissionsRequest& request) const;

        /**
         * <p>Adds or updates permissions for the specified private image. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateImagePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateImagePermissionsAsync(const Model::UpdateImagePermissionsRequest& request, const UpdateImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified fields for the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackOutcome UpdateStack(const Model::UpdateStackRequest& request) const;

        /**
         * <p>Updates the specified fields for the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStackOutcomeCallable UpdateStackCallable(const Model::UpdateStackRequest& request) const;

        /**
         * <p>Updates the specified fields for the specified stack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UpdateStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackAsync(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateFleetAsyncHelper(const Model::AssociateFleetRequest& request, const AssociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchAssociateUserStackAsyncHelper(const Model::BatchAssociateUserStackRequest& request, const BatchAssociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDisassociateUserStackAsyncHelper(const Model::BatchDisassociateUserStackRequest& request, const BatchDisassociateUserStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyImageAsyncHelper(const Model::CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDirectoryConfigAsyncHelper(const Model::CreateDirectoryConfigRequest& request, const CreateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFleetAsyncHelper(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImageBuilderAsyncHelper(const Model::CreateImageBuilderRequest& request, const CreateImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImageBuilderStreamingURLAsyncHelper(const Model::CreateImageBuilderStreamingURLRequest& request, const CreateImageBuilderStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStackAsyncHelper(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingURLAsyncHelper(const Model::CreateStreamingURLRequest& request, const CreateStreamingURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUsageReportSubscriptionAsyncHelper(const Model::CreateUsageReportSubscriptionRequest& request, const CreateUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDirectoryConfigAsyncHelper(const Model::DeleteDirectoryConfigRequest& request, const DeleteDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFleetAsyncHelper(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteImageAsyncHelper(const Model::DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteImageBuilderAsyncHelper(const Model::DeleteImageBuilderRequest& request, const DeleteImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteImagePermissionsAsyncHelper(const Model::DeleteImagePermissionsRequest& request, const DeleteImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStackAsyncHelper(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUsageReportSubscriptionAsyncHelper(const Model::DeleteUsageReportSubscriptionRequest& request, const DeleteUsageReportSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDirectoryConfigsAsyncHelper(const Model::DescribeDirectoryConfigsRequest& request, const DescribeDirectoryConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetsAsyncHelper(const Model::DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImageBuildersAsyncHelper(const Model::DescribeImageBuildersRequest& request, const DescribeImageBuildersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImagePermissionsAsyncHelper(const Model::DescribeImagePermissionsRequest& request, const DescribeImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImagesAsyncHelper(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSessionsAsyncHelper(const Model::DescribeSessionsRequest& request, const DescribeSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStacksAsyncHelper(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUsageReportSubscriptionsAsyncHelper(const Model::DescribeUsageReportSubscriptionsRequest& request, const DescribeUsageReportSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserStackAssociationsAsyncHelper(const Model::DescribeUserStackAssociationsRequest& request, const DescribeUserStackAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUsersAsyncHelper(const Model::DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableUserAsyncHelper(const Model::DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateFleetAsyncHelper(const Model::DisassociateFleetRequest& request, const DisassociateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableUserAsyncHelper(const Model::EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExpireSessionAsyncHelper(const Model::ExpireSessionRequest& request, const ExpireSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociatedFleetsAsyncHelper(const Model::ListAssociatedFleetsRequest& request, const ListAssociatedFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociatedStacksAsyncHelper(const Model::ListAssociatedStacksRequest& request, const ListAssociatedStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartFleetAsyncHelper(const Model::StartFleetRequest& request, const StartFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartImageBuilderAsyncHelper(const Model::StartImageBuilderRequest& request, const StartImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopFleetAsyncHelper(const Model::StopFleetRequest& request, const StopFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopImageBuilderAsyncHelper(const Model::StopImageBuilderRequest& request, const StopImageBuilderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDirectoryConfigAsyncHelper(const Model::UpdateDirectoryConfigRequest& request, const UpdateDirectoryConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFleetAsyncHelper(const Model::UpdateFleetRequest& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateImagePermissionsAsyncHelper(const Model::UpdateImagePermissionsRequest& request, const UpdateImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStackAsyncHelper(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppStream
} // namespace Aws
