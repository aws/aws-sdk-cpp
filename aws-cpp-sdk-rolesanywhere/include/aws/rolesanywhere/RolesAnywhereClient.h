/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rolesanywhere/RolesAnywhereServiceClientModel.h>
#include <aws/rolesanywhere/RolesAnywhereLegacyAsyncMacros.h>

namespace Aws
{
namespace RolesAnywhere
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RolesAnywhereClient(const Aws::RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration = Aws::RolesAnywhere::RolesAnywhereClientConfiguration(),
                            std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider = Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RolesAnywhereClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider = Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG),
                            const Aws::RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration = Aws::RolesAnywhere::RolesAnywhereClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RolesAnywhereClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider = Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG),
                            const Aws::RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration = Aws::RolesAnywhere::RolesAnywhereClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RolesAnywhereClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RolesAnywhereClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RolesAnywhereClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RolesAnywhereClient();


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
         * <p>Deletes a certificate revocation list (CRL).</p> <p> <b>Required permissions:
         * </b> <code>rolesanywhere:DeleteCrl</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DeleteCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCrlOutcome DeleteCrl(const Model::DeleteCrlRequest& request) const;


        /**
         * <p>Deletes a profile.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:DeleteProfile</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;


        /**
         * <p>Deletes a trust anchor.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:DeleteTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DeleteTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrustAnchorOutcome DeleteTrustAnchor(const Model::DeleteTrustAnchorRequest& request) const;


        /**
         * <p>Disables a certificate revocation list (CRL).</p> <p> <b>Required
         * permissions: </b> <code>rolesanywhere:DisableCrl</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/DisableCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableCrlOutcome DisableCrl(const Model::DisableCrlRequest& request) const;


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
         * <p>Enables a certificate revocation list (CRL). When enabled, certificates
         * stored in the CRL are unauthorized to receive session credentials.</p> <p>
         * <b>Required permissions: </b> <code>rolesanywhere:EnableCrl</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/EnableCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableCrlOutcome EnableCrl(const Model::EnableCrlRequest& request) const;


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
         * <p>Enables a trust anchor. When enabled, certificates in the trust anchor chain
         * are authorized for trust validation. </p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:EnableTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/EnableTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableTrustAnchorOutcome EnableTrustAnchor(const Model::EnableTrustAnchorRequest& request) const;


        /**
         * <p>Gets a certificate revocation list (CRL).</p> <p> <b>Required permissions:
         * </b> <code>rolesanywhere:GetCrl</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetCrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCrlOutcome GetCrl(const Model::GetCrlRequest& request) const;


        /**
         * <p>Gets a profile.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:GetProfile</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;


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
         * <p>Gets a trust anchor.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:GetTrustAnchor</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/GetTrustAnchor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrustAnchorOutcome GetTrustAnchor(const Model::GetTrustAnchorRequest& request) const;


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
         * <p>Lists all Crls in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListCrls</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListCrls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrlsOutcome ListCrls(const Model::ListCrlsRequest& request) const;


        /**
         * <p>Lists all profiles in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListProfiles</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfilesOutcome ListProfiles(const Model::ListProfilesRequest& request) const;


        /**
         * <p>Lists the subjects in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListSubjects</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListSubjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubjectsOutcome ListSubjects(const Model::ListSubjectsRequest& request) const;


        /**
         * <p>Lists the tags attached to the resource.</p> <p> <b>Required permissions:
         * </b> <code>rolesanywhere:ListTagsForResource</code>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists the trust anchors in the authenticated account and Amazon Web Services
         * Region.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:ListTrustAnchors</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ListTrustAnchors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrustAnchorsOutcome ListTrustAnchors(const Model::ListTrustAnchorsRequest& request) const;


        /**
         * <p>Attaches tags to a resource.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:TagResource</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from the resource.</p> <p> <b>Required permissions: </b>
         * <code>rolesanywhere:UntagResource</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RolesAnywhereEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const RolesAnywhereClientConfiguration& clientConfiguration);

      RolesAnywhereClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RolesAnywhereEndpointProviderBase> m_endpointProvider;
  };

} // namespace RolesAnywhere
} // namespace Aws
