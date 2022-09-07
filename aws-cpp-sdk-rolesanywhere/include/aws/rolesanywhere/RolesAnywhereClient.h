/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rolesanywhere/model/CreateProfileResult.h>
#include <aws/rolesanywhere/model/CreateTrustAnchorResult.h>
#include <aws/rolesanywhere/model/DeleteCrlResult.h>
#include <aws/rolesanywhere/model/DeleteProfileResult.h>
#include <aws/rolesanywhere/model/DeleteTrustAnchorResult.h>
#include <aws/rolesanywhere/model/DisableCrlResult.h>
#include <aws/rolesanywhere/model/DisableProfileResult.h>
#include <aws/rolesanywhere/model/DisableTrustAnchorResult.h>
#include <aws/rolesanywhere/model/EnableCrlResult.h>
#include <aws/rolesanywhere/model/EnableProfileResult.h>
#include <aws/rolesanywhere/model/EnableTrustAnchorResult.h>
#include <aws/rolesanywhere/model/GetCrlResult.h>
#include <aws/rolesanywhere/model/GetProfileResult.h>
#include <aws/rolesanywhere/model/GetSubjectResult.h>
#include <aws/rolesanywhere/model/GetTrustAnchorResult.h>
#include <aws/rolesanywhere/model/ImportCrlResult.h>
#include <aws/rolesanywhere/model/ListCrlsResult.h>
#include <aws/rolesanywhere/model/ListProfilesResult.h>
#include <aws/rolesanywhere/model/ListSubjectsResult.h>
#include <aws/rolesanywhere/model/ListTagsForResourceResult.h>
#include <aws/rolesanywhere/model/ListTrustAnchorsResult.h>
#include <aws/rolesanywhere/model/TagResourceResult.h>
#include <aws/rolesanywhere/model/UntagResourceResult.h>
#include <aws/rolesanywhere/model/UpdateCrlResult.h>
#include <aws/rolesanywhere/model/UpdateProfileResult.h>
#include <aws/rolesanywhere/model/UpdateTrustAnchorResult.h>
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

namespace RolesAnywhere
{

namespace Model
{
        class CreateProfileRequest;
        class CreateTrustAnchorRequest;
        class DeleteCrlRequest;
        class DeleteProfileRequest;
        class DeleteTrustAnchorRequest;
        class DisableCrlRequest;
        class DisableProfileRequest;
        class DisableTrustAnchorRequest;
        class EnableCrlRequest;
        class EnableProfileRequest;
        class EnableTrustAnchorRequest;
        class GetCrlRequest;
        class GetProfileRequest;
        class GetSubjectRequest;
        class GetTrustAnchorRequest;
        class ImportCrlRequest;
        class ListCrlsRequest;
        class ListProfilesRequest;
        class ListSubjectsRequest;
        class ListTagsForResourceRequest;
        class ListTrustAnchorsRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateCrlRequest;
        class UpdateProfileRequest;
        class UpdateTrustAnchorRequest;

        typedef Aws::Utils::Outcome<CreateProfileResult, RolesAnywhereError> CreateProfileOutcome;
        typedef Aws::Utils::Outcome<CreateTrustAnchorResult, RolesAnywhereError> CreateTrustAnchorOutcome;
        typedef Aws::Utils::Outcome<DeleteCrlResult, RolesAnywhereError> DeleteCrlOutcome;
        typedef Aws::Utils::Outcome<DeleteProfileResult, RolesAnywhereError> DeleteProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteTrustAnchorResult, RolesAnywhereError> DeleteTrustAnchorOutcome;
        typedef Aws::Utils::Outcome<DisableCrlResult, RolesAnywhereError> DisableCrlOutcome;
        typedef Aws::Utils::Outcome<DisableProfileResult, RolesAnywhereError> DisableProfileOutcome;
        typedef Aws::Utils::Outcome<DisableTrustAnchorResult, RolesAnywhereError> DisableTrustAnchorOutcome;
        typedef Aws::Utils::Outcome<EnableCrlResult, RolesAnywhereError> EnableCrlOutcome;
        typedef Aws::Utils::Outcome<EnableProfileResult, RolesAnywhereError> EnableProfileOutcome;
        typedef Aws::Utils::Outcome<EnableTrustAnchorResult, RolesAnywhereError> EnableTrustAnchorOutcome;
        typedef Aws::Utils::Outcome<GetCrlResult, RolesAnywhereError> GetCrlOutcome;
        typedef Aws::Utils::Outcome<GetProfileResult, RolesAnywhereError> GetProfileOutcome;
        typedef Aws::Utils::Outcome<GetSubjectResult, RolesAnywhereError> GetSubjectOutcome;
        typedef Aws::Utils::Outcome<GetTrustAnchorResult, RolesAnywhereError> GetTrustAnchorOutcome;
        typedef Aws::Utils::Outcome<ImportCrlResult, RolesAnywhereError> ImportCrlOutcome;
        typedef Aws::Utils::Outcome<ListCrlsResult, RolesAnywhereError> ListCrlsOutcome;
        typedef Aws::Utils::Outcome<ListProfilesResult, RolesAnywhereError> ListProfilesOutcome;
        typedef Aws::Utils::Outcome<ListSubjectsResult, RolesAnywhereError> ListSubjectsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, RolesAnywhereError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTrustAnchorsResult, RolesAnywhereError> ListTrustAnchorsOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, RolesAnywhereError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, RolesAnywhereError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateCrlResult, RolesAnywhereError> UpdateCrlOutcome;
        typedef Aws::Utils::Outcome<UpdateProfileResult, RolesAnywhereError> UpdateProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateTrustAnchorResult, RolesAnywhereError> UpdateTrustAnchorOutcome;

        typedef std::future<CreateProfileOutcome> CreateProfileOutcomeCallable;
        typedef std::future<CreateTrustAnchorOutcome> CreateTrustAnchorOutcomeCallable;
        typedef std::future<DeleteCrlOutcome> DeleteCrlOutcomeCallable;
        typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
        typedef std::future<DeleteTrustAnchorOutcome> DeleteTrustAnchorOutcomeCallable;
        typedef std::future<DisableCrlOutcome> DisableCrlOutcomeCallable;
        typedef std::future<DisableProfileOutcome> DisableProfileOutcomeCallable;
        typedef std::future<DisableTrustAnchorOutcome> DisableTrustAnchorOutcomeCallable;
        typedef std::future<EnableCrlOutcome> EnableCrlOutcomeCallable;
        typedef std::future<EnableProfileOutcome> EnableProfileOutcomeCallable;
        typedef std::future<EnableTrustAnchorOutcome> EnableTrustAnchorOutcomeCallable;
        typedef std::future<GetCrlOutcome> GetCrlOutcomeCallable;
        typedef std::future<GetProfileOutcome> GetProfileOutcomeCallable;
        typedef std::future<GetSubjectOutcome> GetSubjectOutcomeCallable;
        typedef std::future<GetTrustAnchorOutcome> GetTrustAnchorOutcomeCallable;
        typedef std::future<ImportCrlOutcome> ImportCrlOutcomeCallable;
        typedef std::future<ListCrlsOutcome> ListCrlsOutcomeCallable;
        typedef std::future<ListProfilesOutcome> ListProfilesOutcomeCallable;
        typedef std::future<ListSubjectsOutcome> ListSubjectsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTrustAnchorsOutcome> ListTrustAnchorsOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateCrlOutcome> UpdateCrlOutcomeCallable;
        typedef std::future<UpdateProfileOutcome> UpdateProfileOutcomeCallable;
        typedef std::future<UpdateTrustAnchorOutcome> UpdateTrustAnchorOutcomeCallable;
} // namespace Model

  class RolesAnywhereClient;

    typedef std::function<void(const RolesAnywhereClient*, const Model::CreateProfileRequest&, const Model::CreateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::CreateTrustAnchorRequest&, const Model::CreateTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrustAnchorResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DeleteCrlRequest&, const Model::DeleteCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DeleteProfileRequest&, const Model::DeleteProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DeleteTrustAnchorRequest&, const Model::DeleteTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrustAnchorResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DisableCrlRequest&, const Model::DisableCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DisableProfileRequest&, const Model::DisableProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DisableTrustAnchorRequest&, const Model::DisableTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableTrustAnchorResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::EnableCrlRequest&, const Model::EnableCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::EnableProfileRequest&, const Model::EnableProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::EnableTrustAnchorRequest&, const Model::EnableTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableTrustAnchorResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::GetCrlRequest&, const Model::GetCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::GetProfileRequest&, const Model::GetProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::GetSubjectRequest&, const Model::GetSubjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubjectResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::GetTrustAnchorRequest&, const Model::GetTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrustAnchorResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ImportCrlRequest&, const Model::ImportCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ListCrlsRequest&, const Model::ListCrlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCrlsResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ListProfilesRequest&, const Model::ListProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfilesResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ListSubjectsRequest&, const Model::ListSubjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubjectsResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ListTrustAnchorsRequest&, const Model::ListTrustAnchorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrustAnchorsResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::UpdateCrlRequest&, const Model::UpdateCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::UpdateProfileRequest&, const Model::UpdateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::UpdateTrustAnchorRequest&, const Model::UpdateTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrustAnchorResponseReceivedHandler;

  /**
   * <p>AWS Identity and Access Management Roles Anywhere provides a secure way for
   * your workloads such as servers, containers, and applications running outside of
   * AWS to obtain Temporary AWS credentials. Your workloads can use the same IAM
   * policies and roles that you have configured with native AWS applications to
   * access AWS resources. Using IAM Roles Anywhere will eliminate the need to manage
   * long term credentials for workloads running outside of AWS.</p> <p>To use IAM
   * Roles Anywhere customer workloads will need to use X.509 certificates issued by
   * their Certificate Authority (CA) . The Certificate Authority (CA) needs to be
   * registered with IAM Roles Anywhere as a trust anchor to establish trust between
   * customer PKI and IAM Roles Anywhere. Customers who do not manage their own PKI
   * system can use AWS Certificate Manager Private Certificate Authority (ACM PCA)
   * to create a Certificate Authority and use that to establish trust with IAM Roles
   * Anywhere</p> <p>This guide describes the IAM rolesanywhere operations that you
   * can call programmatically. For general information about IAM Roles Anywhere see
   * <a href="https://docs.aws.amazon.com/">https://docs.aws.amazon.com/</a> </p>
   */
  class AWS_ROLESANYWHERE_API RolesAnywhereClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RolesAnywhereClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RolesAnywhereClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RolesAnywhereClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~RolesAnywhereClient();


        /**
         * <p>Creates a profile. A profile is configuration resource to list the roles that
         * RolesAnywhere service is trusted to assume. In addition, by applying a profile
         * you can intersect permissions with IAM managed policies.</p> <p> <b>Required
         * permissions: </b> <code>rolesanywhere:CreateProfile</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProfileOutcomeCallable CreateProfileCallable(const Model::CreateProfileRequest& request) const;

        /**
         * An Async wrapper for CreateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProfileAsync(const Model::CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a trust anchor. You establish trust between IAM Roles Anywhere and
         * your certificate authority (CA) by configuring a trust anchor. A Trust Anchor is
         * defined either as a reference to a AWS Certificate Manager Private Certificate
         * Authority (ACM PCA), or by uploading a Certificate Authority (CA) certificate.
         * Your AWS workloads can authenticate with the trust anchor using certificates
         * issued by the trusted Certificate Authority (CA) in exchange for temporary AWS
         * credentials.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:CreateTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/CreateTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrustAnchorOutcome CreateTrustAnchor(const Model::CreateTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for CreateTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrustAnchorOutcomeCallable CreateTrustAnchorCallable(const Model::CreateTrustAnchorRequest& request) const;

        /**
         * An Async wrapper for CreateTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrustAnchorAsync(const Model::CreateTrustAnchorRequest& request, const CreateTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a certificate revocation list (CRL).</p> <p> <b>Required permissions:
         * </b> <code>rolesanywhere:DeleteCrl</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DeleteCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCrlOutcome DeleteCrl(const Model::DeleteCrlRequest& request) const;

        /**
         * A Callable wrapper for DeleteCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCrlOutcomeCallable DeleteCrlCallable(const Model::DeleteCrlRequest& request) const;

        /**
         * An Async wrapper for DeleteCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCrlAsync(const Model::DeleteCrlRequest& request, const DeleteCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a profile.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:DeleteProfile</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProfileOutcomeCallable DeleteProfileCallable(const Model::DeleteProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProfileAsync(const Model::DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a trust anchor.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:DeleteTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DeleteTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrustAnchorOutcome DeleteTrustAnchor(const Model::DeleteTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrustAnchorOutcomeCallable DeleteTrustAnchorCallable(const Model::DeleteTrustAnchorRequest& request) const;

        /**
         * An Async wrapper for DeleteTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrustAnchorAsync(const Model::DeleteTrustAnchorRequest& request, const DeleteTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables a certificate revocation list (CRL).</p> <p> <b>Required
         * permissions: </b> <code>rolesanywhere:DisableCrl</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DisableCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableCrlOutcome DisableCrl(const Model::DisableCrlRequest& request) const;

        /**
         * A Callable wrapper for DisableCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableCrlOutcomeCallable DisableCrlCallable(const Model::DisableCrlRequest& request) const;

        /**
         * An Async wrapper for DisableCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableCrlAsync(const Model::DisableCrlRequest& request, const DisableCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables a profile. When disabled, <a
         * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
         * requests with this profile fail.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:DisableProfile</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DisableProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableProfileOutcome DisableProfile(const Model::DisableProfileRequest& request) const;

        /**
         * A Callable wrapper for DisableProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableProfileOutcomeCallable DisableProfileCallable(const Model::DisableProfileRequest& request) const;

        /**
         * An Async wrapper for DisableProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableProfileAsync(const Model::DisableProfileRequest& request, const DisableProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables a trust anchor. When disabled, <a
         * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
         * requests specifying this trust anchor are unauthorized.</p> <p> <b>Required
         * permissions: </b> <code>rolesanywhere:DisableTrustAnchor</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DisableTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableTrustAnchorOutcome DisableTrustAnchor(const Model::DisableTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for DisableTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableTrustAnchorOutcomeCallable DisableTrustAnchorCallable(const Model::DisableTrustAnchorRequest& request) const;

        /**
         * An Async wrapper for DisableTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableTrustAnchorAsync(const Model::DisableTrustAnchorRequest& request, const DisableTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables a certificate revocation list (CRL). When enabled, certificates
         * stored in the CRL are unauthorized to receive session credentials.</p> <p>
         * <b>Required permissions: </b> <code>rolesanywhere:EnableCrl</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/EnableCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableCrlOutcome EnableCrl(const Model::EnableCrlRequest& request) const;

        /**
         * A Callable wrapper for EnableCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableCrlOutcomeCallable EnableCrlCallable(const Model::EnableCrlRequest& request) const;

        /**
         * An Async wrapper for EnableCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableCrlAsync(const Model::EnableCrlRequest& request, const EnableCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the roles in a profile to receive session credentials in <a
         * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>.
         * </p> <p> <b>Required permissions: </b> <code>rolesanywhere:EnableProfile</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/EnableProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableProfileOutcome EnableProfile(const Model::EnableProfileRequest& request) const;

        /**
         * A Callable wrapper for EnableProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableProfileOutcomeCallable EnableProfileCallable(const Model::EnableProfileRequest& request) const;

        /**
         * An Async wrapper for EnableProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableProfileAsync(const Model::EnableProfileRequest& request, const EnableProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables a trust anchor. When enabled, certificates in the trust anchor chain
         * are authorized for trust validation. </p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:EnableTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/EnableTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableTrustAnchorOutcome EnableTrustAnchor(const Model::EnableTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for EnableTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableTrustAnchorOutcomeCallable EnableTrustAnchorCallable(const Model::EnableTrustAnchorRequest& request) const;

        /**
         * An Async wrapper for EnableTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableTrustAnchorAsync(const Model::EnableTrustAnchorRequest& request, const EnableTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a certificate revocation list (CRL).</p> <p> <b>Required permissions:
         * </b> <code>rolesanywhere:GetCrl</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCrlOutcome GetCrl(const Model::GetCrlRequest& request) const;

        /**
         * A Callable wrapper for GetCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCrlOutcomeCallable GetCrlCallable(const Model::GetCrlRequest& request) const;

        /**
         * An Async wrapper for GetCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCrlAsync(const Model::GetCrlRequest& request, const GetCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a profile.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:GetProfile</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;

        /**
         * A Callable wrapper for GetProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProfileOutcomeCallable GetProfileCallable(const Model::GetProfileRequest& request) const;

        /**
         * An Async wrapper for GetProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProfileAsync(const Model::GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a Subject. A Subject associates a certificate identity with
         * authentication attempts by CreateSession. The Subject resources stores audit
         * information such as status of the last authentication attempt, the certificate
         * data used in the attempt, and the last time the associated identity attempted
         * authentication. </p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:GetSubject</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetSubject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubjectOutcome GetSubject(const Model::GetSubjectRequest& request) const;

        /**
         * A Callable wrapper for GetSubject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSubjectOutcomeCallable GetSubjectCallable(const Model::GetSubjectRequest& request) const;

        /**
         * An Async wrapper for GetSubject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubjectAsync(const Model::GetSubjectRequest& request, const GetSubjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a trust anchor.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:GetTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustAnchorOutcome GetTrustAnchor(const Model::GetTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for GetTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrustAnchorOutcomeCallable GetTrustAnchorCallable(const Model::GetTrustAnchorRequest& request) const;

        /**
         * An Async wrapper for GetTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrustAnchorAsync(const Model::GetTrustAnchorRequest& request, const GetTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports the certificate revocation list (CRL). CRl is a list of certificates
         * that have been revoked by the issuing certificate Authority (CA). IAM Roles
         * Anywhere validates against the crl list before issuing credentials. </p> <p>
         * <b>Required permissions: </b> <code>rolesanywhere:ImportCrl</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ImportCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCrlOutcome ImportCrl(const Model::ImportCrlRequest& request) const;

        /**
         * A Callable wrapper for ImportCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportCrlOutcomeCallable ImportCrlCallable(const Model::ImportCrlRequest& request) const;

        /**
         * An Async wrapper for ImportCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportCrlAsync(const Model::ImportCrlRequest& request, const ImportCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Crls in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListCrls</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListCrls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrlsOutcome ListCrls(const Model::ListCrlsRequest& request) const;

        /**
         * A Callable wrapper for ListCrls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCrlsOutcomeCallable ListCrlsCallable(const Model::ListCrlsRequest& request) const;

        /**
         * An Async wrapper for ListCrls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCrlsAsync(const Model::ListCrlsRequest& request, const ListCrlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all profiles in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListProfiles</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfilesOutcome ListProfiles(const Model::ListProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProfilesOutcomeCallable ListProfilesCallable(const Model::ListProfilesRequest& request) const;

        /**
         * An Async wrapper for ListProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProfilesAsync(const Model::ListProfilesRequest& request, const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the subjects in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListSubjects</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListSubjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubjectsOutcome ListSubjects(const Model::ListSubjectsRequest& request) const;

        /**
         * A Callable wrapper for ListSubjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubjectsOutcomeCallable ListSubjectsCallable(const Model::ListSubjectsRequest& request) const;

        /**
         * An Async wrapper for ListSubjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubjectsAsync(const Model::ListSubjectsRequest& request, const ListSubjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags attached to the resource.</p> <p> <b>Required permissions:
         * </b> <code>rolesanywhere:ListTagsForResource</code>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListTagsForResource">AWS
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
         * <p>Lists the trust anchors in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListTrustAnchors</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListTrustAnchors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrustAnchorsOutcome ListTrustAnchors(const Model::ListTrustAnchorsRequest& request) const;

        /**
         * A Callable wrapper for ListTrustAnchors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrustAnchorsOutcomeCallable ListTrustAnchorsCallable(const Model::ListTrustAnchorsRequest& request) const;

        /**
         * An Async wrapper for ListTrustAnchors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrustAnchorsAsync(const Model::ListTrustAnchorsRequest& request, const ListTrustAnchorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches tags to a resource.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:TagResource</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/TagResource">AWS
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
         * <p>Removes tags from the resource.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:UntagResource</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/UntagResource">AWS
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
         * <p>Updates the certificate revocation list (CRL). CRl is a list of certificates
         * that have been revoked by the issuing certificate Authority (CA). IAM Roles
         * Anywhere validates against the crl list before issuing credentials.</p> <p>
         * <b>Required permissions: </b> <code>rolesanywhere:UpdateCrl</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/UpdateCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCrlOutcome UpdateCrl(const Model::UpdateCrlRequest& request) const;

        /**
         * A Callable wrapper for UpdateCrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCrlOutcomeCallable UpdateCrlCallable(const Model::UpdateCrlRequest& request) const;

        /**
         * An Async wrapper for UpdateCrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCrlAsync(const Model::UpdateCrlRequest& request, const UpdateCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the profile. A profile is configuration resource to list the roles
         * that RolesAnywhere service is trusted to assume. In addition, by applying a
         * profile you can scope-down permissions with IAM managed policies.</p> <p>
         * <b>Required permissions: </b> <code>rolesanywhere:UpdateProfile</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProfileOutcomeCallable UpdateProfileCallable(const Model::UpdateProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProfileAsync(const Model::UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the trust anchor.You establish trust between IAM Roles Anywhere and
         * your certificate authority (CA) by configuring a trust anchor. A Trust Anchor is
         * defined either as a reference to a AWS Certificate Manager Private Certificate
         * Authority (ACM PCA), or by uploading a Certificate Authority (CA) certificate.
         * Your AWS workloads can authenticate with the trust anchor using certificates
         * issued by the trusted Certificate Authority (CA) in exchange for temporary AWS
         * credentials.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:UpdateTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/UpdateTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrustAnchorOutcome UpdateTrustAnchor(const Model::UpdateTrustAnchorRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrustAnchor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrustAnchorOutcomeCallable UpdateTrustAnchorCallable(const Model::UpdateTrustAnchorRequest& request) const;

        /**
         * An Async wrapper for UpdateTrustAnchor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrustAnchorAsync(const Model::UpdateTrustAnchorRequest& request, const UpdateTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace RolesAnywhere
} // namespace Aws
