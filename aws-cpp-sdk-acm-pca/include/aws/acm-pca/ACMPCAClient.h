/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/acm-pca/ACMPCAServiceClientModel.h>

namespace Aws
{
namespace ACMPCA
{
  /**
   * <p>This is the <i>Private Certificate Authority (PCA) API Reference</i>. It
   * provides descriptions, syntax, and usage examples for each of the actions and
   * data types involved in creating and managing a private certificate authority
   * (CA) for your organization.</p> <p>The documentation for each action shows the
   * API request parameters and the JSON response. Alternatively, you can use one of
   * the Amazon Web Services SDKs to access an API that is tailored to the
   * programming language or platform that you prefer. For more information, see <a
   * href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services SDKs</a>.</p>
   * <p>Each ACM Private CA API operation has a quota that determines the number of
   * times the operation can be called per second. ACM Private CA throttles API
   * requests at different rates depending on the operation. Throttling means that
   * ACM Private CA rejects an otherwise valid request because the request exceeds
   * the operation's quota for the number of requests per second. When a request is
   * throttled, ACM Private CA returns a <a
   * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/CommonErrors.html">ThrottlingException</a>
   * error. ACM Private CA does not guarantee a minimum request rate for APIs. </p>
   * <p>To see an up-to-date list of your ACM Private CA quotas, or to request a
   * quota increase, log into your Amazon Web Services account and visit the <a
   * href="https://console.aws.amazon.com/servicequotas/">Service Quotas</a>
   * console.</p>
   */
  class AWS_ACMPCA_API ACMPCAClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ACMPCAClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMPCAClient(const Aws::ACMPCA::ACMPCAClientConfiguration& clientConfiguration = Aws::ACMPCA::ACMPCAClientConfiguration(),
                     std::shared_ptr<ACMPCAEndpointProviderBase> endpointProvider = Aws::MakeShared<ACMPCAEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMPCAClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<ACMPCAEndpointProviderBase> endpointProvider = Aws::MakeShared<ACMPCAEndpointProvider>(ALLOCATION_TAG),
                     const Aws::ACMPCA::ACMPCAClientConfiguration& clientConfiguration = Aws::ACMPCA::ACMPCAClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ACMPCAClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<ACMPCAEndpointProviderBase> endpointProvider = Aws::MakeShared<ACMPCAEndpointProvider>(ALLOCATION_TAG),
                     const Aws::ACMPCA::ACMPCAClientConfiguration& clientConfiguration = Aws::ACMPCA::ACMPCAClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMPCAClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMPCAClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ACMPCAClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ACMPCAClient();

        /**
         * <p>Creates a root or subordinate private certificate authority (CA). You must
         * specify the CA configuration, an optional configuration for Online Certificate
         * Status Protocol (OCSP) and/or a certificate revocation list (CRL), the CA type,
         * and an optional idempotency token to avoid accidental creation of multiple CAs.
         * The CA configuration specifies the name of the algorithm and key size to be used
         * to create the CA private key, the type of signing algorithm that the CA uses,
         * and X.500 subject information. The OCSP configuration can optionally specify a
         * custom URL for the OCSP responder. The CRL configuration specifies the CRL
         * expiration period in days (the validity period of the CRL), the Amazon S3 bucket
         * that will contain the CRL, and a CNAME alias for the S3 bucket that is included
         * in certificates issued by the CA. If successful, this action returns the Amazon
         * Resource Name (ARN) of the CA.</p> <p>ACM Private CA assets that are stored in
         * Amazon S3 can be protected with encryption. For more information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaCreateCa.html#crl-encryption">Encrypting
         * Your CRLs</a>.</p>  <p>Both PCA and the IAM principal must have permission
         * to write to the S3 bucket that you specify. If the IAM principal making the call
         * does not have permission to write to the bucket, then an exception is thrown.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/crl-planning.html#s3-policies">Access
         * policies for CRLs in Amazon S3</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreateCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateAuthorityOutcome CreateCertificateAuthority(const Model::CreateCertificateAuthorityRequest& request) const;

        /**
         * A Callable wrapper for CreateCertificateAuthority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCertificateAuthorityOutcomeCallable CreateCertificateAuthorityCallable(const Model::CreateCertificateAuthorityRequest& request) const;

        /**
         * An Async wrapper for CreateCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCertificateAuthorityAsync(const Model::CreateCertificateAuthorityRequest& request, const CreateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an audit report that lists every time that your CA private key is
         * used. The report is saved in the Amazon S3 bucket that you specify on input. The
         * <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_IssueCertificate.html">IssueCertificate</a>
         * and <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_RevokeCertificate.html">RevokeCertificate</a>
         * actions use the private key. </p>  <p>Both PCA and the IAM principal must
         * have permission to write to the S3 bucket that you specify. If the IAM principal
         * making the call does not have permission to write to the bucket, then an
         * exception is thrown. For more information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/crl-planning.html#s3-policies">Access
         * policies for CRLs in Amazon S3</a>.</p>  <p>ACM Private CA assets that
         * are stored in Amazon S3 can be protected with encryption. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaAuditReport.html#audit-report-encryption">Encrypting
         * Your Audit Reports</a>.</p>  <p>You can generate a maximum of one report
         * every 30 minutes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreateCertificateAuthorityAuditReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateAuthorityAuditReportOutcome CreateCertificateAuthorityAuditReport(const Model::CreateCertificateAuthorityAuditReportRequest& request) const;

        /**
         * A Callable wrapper for CreateCertificateAuthorityAuditReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCertificateAuthorityAuditReportOutcomeCallable CreateCertificateAuthorityAuditReportCallable(const Model::CreateCertificateAuthorityAuditReportRequest& request) const;

        /**
         * An Async wrapper for CreateCertificateAuthorityAuditReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCertificateAuthorityAuditReportAsync(const Model::CreateCertificateAuthorityAuditReportRequest& request, const CreateCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants one or more permissions on a private CA to the Certificate Manager
         * (ACM) service principal (<code>acm.amazonaws.com</code>). These permissions
         * allow ACM to issue and renew ACM certificates that reside in the same Amazon Web
         * Services account as the CA.</p> <p>You can list current permissions with the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListPermissions.html">ListPermissions</a>
         * action and revoke them with the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeletePermission.html">DeletePermission</a>
         * action.</p> <p class="title"> <b>About Permissions</b> </p> <ul> <li> <p>If the
         * private CA and the certificates it issues reside in the same account, you can
         * use <code>CreatePermission</code> to grant permissions for ACM to carry out
         * automatic certificate renewals.</p> </li> <li> <p>For automatic certificate
         * renewal to succeed, the ACM service principal needs permissions to create,
         * retrieve, and list certificates.</p> </li> <li> <p>If the private CA and the ACM
         * certificates reside in different accounts, then permissions cannot be used to
         * enable automatic renewals. Instead, the ACM certificate owner must set up a
         * resource-based policy to enable cross-account issuance and renewals. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a
         * Resource Based Policy with ACM Private CA</a>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreatePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePermissionOutcome CreatePermission(const Model::CreatePermissionRequest& request) const;

        /**
         * A Callable wrapper for CreatePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePermissionOutcomeCallable CreatePermissionCallable(const Model::CreatePermissionRequest& request) const;

        /**
         * An Async wrapper for CreatePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePermissionAsync(const Model::CreatePermissionRequest& request, const CreatePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a private certificate authority (CA). You must provide the Amazon
         * Resource Name (ARN) of the private CA that you want to delete. You can find the
         * ARN by calling the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
         * action. </p>  <p>Deleting a CA will invalidate other CAs and certificates
         * below it in your CA hierarchy.</p>  <p>Before you can delete a CA that
         * you have created and activated, you must disable it. To do this, call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_UpdateCertificateAuthority.html">UpdateCertificateAuthority</a>
         * action and set the <b>CertificateAuthorityStatus</b> parameter to
         * <code>DISABLED</code>. </p> <p>Additionally, you can delete a CA if you are
         * waiting for it to be created (that is, the status of the CA is
         * <code>CREATING</code>). You can also delete it if the CA has been created but
         * you haven't yet imported the signed certificate into ACM Private CA (that is,
         * the status of the CA is <code>PENDING_CERTIFICATE</code>). </p> <p>When you
         * successfully call <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeleteCertificateAuthority.html">DeleteCertificateAuthority</a>,
         * the CA's status changes to <code>DELETED</code>. However, the CA won't be
         * permanently deleted until the restoration period has passed. By default, if you
         * do not set the <code>PermanentDeletionTimeInDays</code> parameter, the CA
         * remains restorable for 30 days. You can set the parameter from 7 to 30 days. The
         * <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DescribeCertificateAuthority.html">DescribeCertificateAuthority</a>
         * action returns the time remaining in the restoration window of a private CA in
         * the <code>DELETED</code> state. To restore an eligible CA, call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_RestoreCertificateAuthority.html">RestoreCertificateAuthority</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DeleteCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateAuthorityOutcome DeleteCertificateAuthority(const Model::DeleteCertificateAuthorityRequest& request) const;

        /**
         * A Callable wrapper for DeleteCertificateAuthority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateAuthorityOutcomeCallable DeleteCertificateAuthorityCallable(const Model::DeleteCertificateAuthorityRequest& request) const;

        /**
         * An Async wrapper for DeleteCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAuthorityAsync(const Model::DeleteCertificateAuthorityRequest& request, const DeleteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes permissions on a private CA granted to the Certificate Manager (ACM)
         * service principal (acm.amazonaws.com). </p> <p>These permissions allow ACM to
         * issue and renew ACM certificates that reside in the same Amazon Web Services
         * account as the CA. If you revoke these permissions, ACM will no longer renew the
         * affected certificates automatically.</p> <p>Permissions can be granted with the
         * <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreatePermission.html">CreatePermission</a>
         * action and listed with the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListPermissions.html">ListPermissions</a>
         * action. </p> <p class="title"> <b>About Permissions</b> </p> <ul> <li> <p>If the
         * private CA and the certificates it issues reside in the same account, you can
         * use <code>CreatePermission</code> to grant permissions for ACM to carry out
         * automatic certificate renewals.</p> </li> <li> <p>For automatic certificate
         * renewal to succeed, the ACM service principal needs permissions to create,
         * retrieve, and list certificates.</p> </li> <li> <p>If the private CA and the ACM
         * certificates reside in different accounts, then permissions cannot be used to
         * enable automatic renewals. Instead, the ACM certificate owner must set up a
         * resource-based policy to enable cross-account issuance and renewals. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a
         * Resource Based Policy with ACM Private CA</a>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DeletePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionOutcome DeletePermission(const Model::DeletePermissionRequest& request) const;

        /**
         * A Callable wrapper for DeletePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePermissionOutcomeCallable DeletePermissionCallable(const Model::DeletePermissionRequest& request) const;

        /**
         * An Async wrapper for DeletePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePermissionAsync(const Model::DeletePermissionRequest& request, const DeletePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the resource-based policy attached to a private CA. Deletion will
         * remove any access that the policy has granted. If there is no policy attached to
         * the private CA, this action will return successful.</p> <p>If you delete a
         * policy that was applied through Amazon Web Services Resource Access Manager
         * (RAM), the CA will be removed from all shares in which it was included. </p>
         * <p>The Certificate Manager Service Linked Role that the policy supports is not
         * affected when you delete the policy. </p> <p>The current policy can be shown
         * with <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_GetPolicy.html">GetPolicy</a>
         * and updated with <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_PutPolicy.html">PutPolicy</a>.</p>
         * <p class="title"> <b>About Policies</b> </p> <ul> <li> <p>A policy grants access
         * on a private CA to an Amazon Web Services customer account, to Amazon Web
         * Services Organizations, or to an Amazon Web Services Organizations unit.
         * Policies are under the control of a CA administrator. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a
         * Resource Based Policy with ACM Private CA</a>.</p> </li> <li> <p>A policy
         * permits a user of Certificate Manager (ACM) to issue ACM certificates signed by
         * a CA in another account.</p> </li> <li> <p>For ACM to manage automatic renewal
         * of these certificates, the ACM user must configure a Service Linked Role (SLR).
         * The SLR allows the ACM service to assume the identity of the user, subject to
         * confirmation against the ACM Private CA policy. For more information, see <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-slr.html">Using a
         * Service Linked Role with ACM</a>.</p> </li> <li> <p>Updates made in Amazon Web
         * Services Resource Manager (RAM) are reflected in policies. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-ram.html">Attach
         * a Policy for Cross-Account Access</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about your private certificate authority (CA) or one that
         * has been shared with you. You specify the private CA on input by its ARN (Amazon
         * Resource Name). The output contains the status of your CA. This can be any of
         * the following: </p> <ul> <li> <p> <code>CREATING</code> - ACM Private CA is
         * creating your private certificate authority.</p> </li> <li> <p>
         * <code>PENDING_CERTIFICATE</code> - The certificate is pending. You must use your
         * ACM Private CA-hosted or on-premises root or subordinate CA to sign your private
         * CA CSR and then import it into PCA. </p> </li> <li> <p> <code>ACTIVE</code> -
         * Your private CA is active.</p> </li> <li> <p> <code>DISABLED</code> - Your
         * private CA has been disabled.</p> </li> <li> <p> <code>EXPIRED</code> - Your
         * private CA certificate has expired.</p> </li> <li> <p> <code>FAILED</code> -
         * Your private CA has failed. Your CA can fail because of problems such a network
         * outage or back-end Amazon Web Services failure or other errors. A failed CA can
         * never return to the pending state. You must create a new CA. </p> </li> <li> <p>
         * <code>DELETED</code> - Your private CA is within the restoration period, after
         * which it is permanently deleted. The length of time remaining in the CA's
         * restoration period is also included in this action's output.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DescribeCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateAuthorityOutcome DescribeCertificateAuthority(const Model::DescribeCertificateAuthorityRequest& request) const;

        /**
         * A Callable wrapper for DescribeCertificateAuthority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificateAuthorityOutcomeCallable DescribeCertificateAuthorityCallable(const Model::DescribeCertificateAuthorityRequest& request) const;

        /**
         * An Async wrapper for DescribeCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificateAuthorityAsync(const Model::DescribeCertificateAuthorityRequest& request, const DescribeCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about a specific audit report created by calling the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthorityAuditReport.html">CreateCertificateAuthorityAuditReport</a>
         * action. Audit information is created every time the certificate authority (CA)
         * private key is used. The private key is used when you call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_IssueCertificate.html">IssueCertificate</a>
         * action or the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_RevokeCertificate.html">RevokeCertificate</a>
         * action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DescribeCertificateAuthorityAuditReport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateAuthorityAuditReportOutcome DescribeCertificateAuthorityAuditReport(const Model::DescribeCertificateAuthorityAuditReportRequest& request) const;

        /**
         * A Callable wrapper for DescribeCertificateAuthorityAuditReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificateAuthorityAuditReportOutcomeCallable DescribeCertificateAuthorityAuditReportCallable(const Model::DescribeCertificateAuthorityAuditReportRequest& request) const;

        /**
         * An Async wrapper for DescribeCertificateAuthorityAuditReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificateAuthorityAuditReportAsync(const Model::DescribeCertificateAuthorityAuditReportRequest& request, const DescribeCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a certificate from your private CA or one that has been shared with
         * you. The ARN of the certificate is returned when you call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_IssueCertificate.html">IssueCertificate</a>
         * action. You must specify both the ARN of your private CA and the ARN of the
         * issued certificate when calling the <b>GetCertificate</b> action. You can
         * retrieve the certificate if it is in the <b>ISSUED</b> state. You can call the
         * <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthorityAuditReport.html">CreateCertificateAuthorityAuditReport</a>
         * action to create a report that contains information about all of the
         * certificates issued and revoked by your private CA. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCertificateOutcome GetCertificate(const Model::GetCertificateRequest& request) const;

        /**
         * A Callable wrapper for GetCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCertificateOutcomeCallable GetCertificateCallable(const Model::GetCertificateRequest& request) const;

        /**
         * An Async wrapper for GetCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCertificateAsync(const Model::GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the certificate and certificate chain for your private certificate
         * authority (CA) or one that has been shared with you. Both the certificate and
         * the chain are base64 PEM-encoded. The chain does not include the CA certificate.
         * Each certificate in the chain signs the one before it. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificateAuthorityCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCertificateAuthorityCertificateOutcome GetCertificateAuthorityCertificate(const Model::GetCertificateAuthorityCertificateRequest& request) const;

        /**
         * A Callable wrapper for GetCertificateAuthorityCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCertificateAuthorityCertificateOutcomeCallable GetCertificateAuthorityCertificateCallable(const Model::GetCertificateAuthorityCertificateRequest& request) const;

        /**
         * An Async wrapper for GetCertificateAuthorityCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCertificateAuthorityCertificateAsync(const Model::GetCertificateAuthorityCertificateRequest& request, const GetCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the certificate signing request (CSR) for your private certificate
         * authority (CA). The CSR is created when you call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
         * action. Sign the CSR with your ACM Private CA-hosted or on-premises root or
         * subordinate CA. Then import the signed certificate back into ACM Private CA by
         * calling the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ImportCertificateAuthorityCertificate.html">ImportCertificateAuthorityCertificate</a>
         * action. The CSR is returned as a base64 PEM-encoded string. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificateAuthorityCsr">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCertificateAuthorityCsrOutcome GetCertificateAuthorityCsr(const Model::GetCertificateAuthorityCsrRequest& request) const;

        /**
         * A Callable wrapper for GetCertificateAuthorityCsr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCertificateAuthorityCsrOutcomeCallable GetCertificateAuthorityCsrCallable(const Model::GetCertificateAuthorityCsrRequest& request) const;

        /**
         * An Async wrapper for GetCertificateAuthorityCsr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCertificateAuthorityCsrAsync(const Model::GetCertificateAuthorityCsrRequest& request, const GetCertificateAuthorityCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resource-based policy attached to a private CA. If either the
         * private CA resource or the policy cannot be found, this action returns a
         * <code>ResourceNotFoundException</code>. </p> <p>The policy can be attached or
         * updated with <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_PutPolicy.html">PutPolicy</a>
         * and removed with <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeletePolicy.html">DeletePolicy</a>.</p>
         * <p class="title"> <b>About Policies</b> </p> <ul> <li> <p>A policy grants access
         * on a private CA to an Amazon Web Services customer account, to Amazon Web
         * Services Organizations, or to an Amazon Web Services Organizations unit.
         * Policies are under the control of a CA administrator. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a
         * Resource Based Policy with ACM Private CA</a>.</p> </li> <li> <p>A policy
         * permits a user of Certificate Manager (ACM) to issue ACM certificates signed by
         * a CA in another account.</p> </li> <li> <p>For ACM to manage automatic renewal
         * of these certificates, the ACM user must configure a Service Linked Role (SLR).
         * The SLR allows the ACM service to assume the identity of the user, subject to
         * confirmation against the ACM Private CA policy. For more information, see <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-slr.html">Using a
         * Service Linked Role with ACM</a>.</p> </li> <li> <p>Updates made in Amazon Web
         * Services Resource Manager (RAM) are reflected in policies. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-ram.html">Attach
         * a Policy for Cross-Account Access</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports a signed private CA certificate into ACM Private CA. This action is
         * used when you are using a chain of trust whose root is located outside ACM
         * Private CA. Before you can call this action, the following preparations must in
         * place:</p> <ol> <li> <p>In ACM Private CA, call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
         * action to create the private CA that you plan to back with the imported
         * certificate.</p> </li> <li> <p>Call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_GetCertificateAuthorityCsr.html">GetCertificateAuthorityCsr</a>
         * action to generate a certificate signing request (CSR).</p> </li> <li> <p>Sign
         * the CSR using a root or intermediate CA hosted by either an on-premises PKI
         * hierarchy or by a commercial CA.</p> </li> <li> <p>Create a certificate chain
         * and copy the signed certificate and the certificate chain to your working
         * directory.</p> </li> </ol> <p>ACM Private CA supports three scenarios for
         * installing a CA certificate:</p> <ul> <li> <p>Installing a certificate for a
         * root CA hosted by ACM Private CA.</p> </li> <li> <p>Installing a subordinate CA
         * certificate whose parent authority is hosted by ACM Private CA.</p> </li> <li>
         * <p>Installing a subordinate CA certificate whose parent authority is externally
         * hosted.</p> </li> </ul> <p>The following additional requirements apply when you
         * import a CA certificate.</p> <ul> <li> <p>Only a self-signed certificate can be
         * imported as a root CA.</p> </li> <li> <p>A self-signed certificate cannot be
         * imported as a subordinate CA.</p> </li> <li> <p>Your certificate chain must not
         * include the private CA certificate that you are importing.</p> </li> <li>
         * <p>Your root CA must be the last certificate in your chain. The subordinate
         * certificate, if any, that your root CA signed must be next to last. The
         * subordinate certificate signed by the preceding subordinate CA must come next,
         * and so on until your chain is built. </p> </li> <li> <p>The chain must be
         * PEM-encoded.</p> </li> <li> <p>The maximum allowed size of a certificate is 32
         * KB.</p> </li> <li> <p>The maximum allowed size of a certificate chain is 2
         * MB.</p> </li> </ul> <p> <i>Enforcement of Critical Constraints</i> </p> <p>ACM
         * Private CA allows the following extensions to be marked critical in the imported
         * CA certificate or chain.</p> <ul> <li> <p>Basic constraints (<i>must</i> be
         * marked critical)</p> </li> <li> <p>Subject alternative names</p> </li> <li>
         * <p>Key usage</p> </li> <li> <p>Extended key usage</p> </li> <li> <p>Authority
         * key identifier</p> </li> <li> <p>Subject key identifier</p> </li> <li> <p>Issuer
         * alternative name</p> </li> <li> <p>Subject directory attributes</p> </li> <li>
         * <p>Subject information access</p> </li> <li> <p>Certificate policies</p> </li>
         * <li> <p>Policy mappings</p> </li> <li> <p>Inhibit anyPolicy</p> </li> </ul>
         * <p>ACM Private CA rejects the following extensions when they are marked critical
         * in an imported CA certificate or chain.</p> <ul> <li> <p>Name constraints</p>
         * </li> <li> <p>Policy constraints</p> </li> <li> <p>CRL distribution points</p>
         * </li> <li> <p>Authority information access</p> </li> <li> <p>Freshest CRL</p>
         * </li> <li> <p>Any other extension</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ImportCertificateAuthorityCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCertificateAuthorityCertificateOutcome ImportCertificateAuthorityCertificate(const Model::ImportCertificateAuthorityCertificateRequest& request) const;

        /**
         * A Callable wrapper for ImportCertificateAuthorityCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportCertificateAuthorityCertificateOutcomeCallable ImportCertificateAuthorityCertificateCallable(const Model::ImportCertificateAuthorityCertificateRequest& request) const;

        /**
         * An Async wrapper for ImportCertificateAuthorityCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportCertificateAuthorityCertificateAsync(const Model::ImportCertificateAuthorityCertificateRequest& request, const ImportCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uses your private certificate authority (CA), or one that has been shared
         * with you, to issue a client certificate. This action returns the Amazon Resource
         * Name (ARN) of the certificate. You can retrieve the certificate by calling the
         * <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_GetCertificate.html">GetCertificate</a>
         * action and specifying the ARN. </p>  <p>You cannot use the ACM
         * <b>ListCertificateAuthorities</b> action to retrieve the ARNs of the
         * certificates that you issue by using ACM Private CA.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/IssueCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::IssueCertificateOutcome IssueCertificate(const Model::IssueCertificateRequest& request) const;

        /**
         * A Callable wrapper for IssueCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::IssueCertificateOutcomeCallable IssueCertificateCallable(const Model::IssueCertificateRequest& request) const;

        /**
         * An Async wrapper for IssueCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IssueCertificateAsync(const Model::IssueCertificateRequest& request, const IssueCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the private certificate authorities that you created by using the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListCertificateAuthorities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificateAuthoritiesOutcome ListCertificateAuthorities(const Model::ListCertificateAuthoritiesRequest& request) const;

        /**
         * A Callable wrapper for ListCertificateAuthorities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificateAuthoritiesOutcomeCallable ListCertificateAuthoritiesCallable(const Model::ListCertificateAuthoritiesRequest& request) const;

        /**
         * An Async wrapper for ListCertificateAuthorities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificateAuthoritiesAsync(const Model::ListCertificateAuthoritiesRequest& request, const ListCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all permissions on a private CA, if any, granted to the Certificate
         * Manager (ACM) service principal (acm.amazonaws.com). </p> <p>These permissions
         * allow ACM to issue and renew ACM certificates that reside in the same Amazon Web
         * Services account as the CA. </p> <p>Permissions can be granted with the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreatePermission.html">CreatePermission</a>
         * action and revoked with the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeletePermission.html">DeletePermission</a>
         * action.</p> <p class="title"> <b>About Permissions</b> </p> <ul> <li> <p>If the
         * private CA and the certificates it issues reside in the same account, you can
         * use <code>CreatePermission</code> to grant permissions for ACM to carry out
         * automatic certificate renewals.</p> </li> <li> <p>For automatic certificate
         * renewal to succeed, the ACM service principal needs permissions to create,
         * retrieve, and list certificates.</p> </li> <li> <p>If the private CA and the ACM
         * certificates reside in different accounts, then permissions cannot be used to
         * enable automatic renewals. Instead, the ACM certificate owner must set up a
         * resource-based policy to enable cross-account issuance and renewals. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a
         * Resource Based Policy with ACM Private CA</a>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionsOutcome ListPermissions(const Model::ListPermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionsOutcomeCallable ListPermissionsCallable(const Model::ListPermissionsRequest& request) const;

        /**
         * An Async wrapper for ListPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionsAsync(const Model::ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags, if any, that are associated with your private CA or one that
         * has been shared with you. Tags are labels that you can use to identify and
         * organize your CAs. Each tag consists of a key and an optional value. Call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_TagCertificateAuthority.html">TagCertificateAuthority</a>
         * action to add one or more tags to your CA. Call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_UntagCertificateAuthority.html">UntagCertificateAuthority</a>
         * action to remove tags. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a resource-based policy to a private CA. </p> <p>A policy can also
         * be applied by sharing a private CA through Amazon Web Services Resource Access
         * Manager (RAM). For more information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-ram.html">Attach
         * a Policy for Cross-Account Access</a>.</p> <p>The policy can be displayed with
         * <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_GetPolicy.html">GetPolicy</a>
         * and removed with <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeletePolicy.html">DeletePolicy</a>.</p>
         * <p class="title"> <b>About Policies</b> </p> <ul> <li> <p>A policy grants access
         * on a private CA to an Amazon Web Services customer account, to Amazon Web
         * Services Organizations, or to an Amazon Web Services Organizations unit.
         * Policies are under the control of a CA administrator. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-rbp.html">Using a
         * Resource Based Policy with ACM Private CA</a>.</p> </li> <li> <p>A policy
         * permits a user of Certificate Manager (ACM) to issue ACM certificates signed by
         * a CA in another account.</p> </li> <li> <p>For ACM to manage automatic renewal
         * of these certificates, the ACM user must configure a Service Linked Role (SLR).
         * The SLR allows the ACM service to assume the identity of the user, subject to
         * confirmation against the ACM Private CA policy. For more information, see <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-slr.html">Using a
         * Service Linked Role with ACM</a>.</p> </li> <li> <p>Updates made in Amazon Web
         * Services Resource Manager (RAM) are reflected in policies. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/pca-ram.html">Attach
         * a Policy for Cross-Account Access</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/PutPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPolicyOutcome PutPolicy(const Model::PutPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPolicyOutcomeCallable PutPolicyCallable(const Model::PutPolicyRequest& request) const;

        /**
         * An Async wrapper for PutPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPolicyAsync(const Model::PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a certificate authority (CA) that is in the <code>DELETED</code>
         * state. You can restore a CA during the period that you defined in the
         * <b>PermanentDeletionTimeInDays</b> parameter of the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeleteCertificateAuthority.html">DeleteCertificateAuthority</a>
         * action. Currently, you can specify 7 to 30 days. If you did not specify a
         * <b>PermanentDeletionTimeInDays</b> value, by default you can restore the CA at
         * any time in a 30 day period. You can check the time remaining in the restoration
         * period of a private CA in the <code>DELETED</code> state by calling the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DescribeCertificateAuthority.html">DescribeCertificateAuthority</a>
         * or <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
         * actions. The status of a restored CA is set to its pre-deletion status when the
         * <b>RestoreCertificateAuthority</b> action returns. To change its status to
         * <code>ACTIVE</code>, call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_UpdateCertificateAuthority.html">UpdateCertificateAuthority</a>
         * action. If the private CA was in the <code>PENDING_CERTIFICATE</code> state at
         * deletion, you must use the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ImportCertificateAuthorityCertificate.html">ImportCertificateAuthorityCertificate</a>
         * action to import a certificate authority into the private CA before it can be
         * activated. You cannot restore a CA after the restoration period has
         * ended.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/RestoreCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreCertificateAuthorityOutcome RestoreCertificateAuthority(const Model::RestoreCertificateAuthorityRequest& request) const;

        /**
         * A Callable wrapper for RestoreCertificateAuthority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreCertificateAuthorityOutcomeCallable RestoreCertificateAuthorityCallable(const Model::RestoreCertificateAuthorityRequest& request) const;

        /**
         * An Async wrapper for RestoreCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreCertificateAuthorityAsync(const Model::RestoreCertificateAuthorityRequest& request, const RestoreCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes a certificate that was issued inside ACM Private CA. If you enable a
         * certificate revocation list (CRL) when you create or update your private CA,
         * information about the revoked certificates will be included in the CRL. ACM
         * Private CA writes the CRL to an S3 bucket that you specify. A CRL is typically
         * updated approximately 30 minutes after a certificate is revoked. If for any
         * reason the CRL update fails, ACM Private CA attempts makes further attempts
         * every 15 minutes. With Amazon CloudWatch, you can create alarms for the metrics
         * <code>CRLGenerated</code> and <code>MisconfiguredCRLBucket</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaCloudWatch.html">Supported
         * CloudWatch Metrics</a>.</p>  <p>Both PCA and the IAM principal must have
         * permission to write to the S3 bucket that you specify. If the IAM principal
         * making the call does not have permission to write to the bucket, then an
         * exception is thrown. For more information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/crl-planning.html#s3-policies">Access
         * policies for CRLs in Amazon S3</a>.</p>  <p>ACM Private CA also writes
         * revocation information to the audit report. For more information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthorityAuditReport.html">CreateCertificateAuthorityAuditReport</a>.</p>
         *  <p>You cannot revoke a root CA self-signed certificate.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/RevokeCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeCertificateOutcome RevokeCertificate(const Model::RevokeCertificateRequest& request) const;

        /**
         * A Callable wrapper for RevokeCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeCertificateOutcomeCallable RevokeCertificateCallable(const Model::RevokeCertificateRequest& request) const;

        /**
         * An Async wrapper for RevokeCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeCertificateAsync(const Model::RevokeCertificateRequest& request, const RevokeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to your private CA. Tags are labels that you can use to
         * identify and organize your Amazon Web Services resources. Each tag consists of a
         * key and an optional value. You specify the private CA on input by its Amazon
         * Resource Name (ARN). You specify the tag by using a key-value pair. You can
         * apply a tag to just one private CA if you want to identify a specific
         * characteristic of that CA, or you can apply the same tag to multiple private CAs
         * if you want to filter for a common relationship among those CAs. To remove one
         * or more tags, use the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_UntagCertificateAuthority.html">UntagCertificateAuthority</a>
         * action. Call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListTags.html">ListTags</a>
         * action to see what tags are associated with your CA. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/TagCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::TagCertificateAuthorityOutcome TagCertificateAuthority(const Model::TagCertificateAuthorityRequest& request) const;

        /**
         * A Callable wrapper for TagCertificateAuthority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagCertificateAuthorityOutcomeCallable TagCertificateAuthorityCallable(const Model::TagCertificateAuthorityRequest& request) const;

        /**
         * An Async wrapper for TagCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagCertificateAuthorityAsync(const Model::TagCertificateAuthorityRequest& request, const TagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove one or more tags from your private CA. A tag consists of a key-value
         * pair. If you do not specify the value portion of the tag when calling this
         * action, the tag will be removed regardless of value. If you specify a value, the
         * tag is removed only if it is associated with the specified value. To add tags to
         * a private CA, use the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_TagCertificateAuthority.html">TagCertificateAuthority</a>.
         * Call the <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListTags.html">ListTags</a>
         * action to see what tags are associated with your CA. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/UntagCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagCertificateAuthorityOutcome UntagCertificateAuthority(const Model::UntagCertificateAuthorityRequest& request) const;

        /**
         * A Callable wrapper for UntagCertificateAuthority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagCertificateAuthorityOutcomeCallable UntagCertificateAuthorityCallable(const Model::UntagCertificateAuthorityRequest& request) const;

        /**
         * An Async wrapper for UntagCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagCertificateAuthorityAsync(const Model::UntagCertificateAuthorityRequest& request, const UntagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status or configuration of a private certificate authority (CA).
         * Your private CA must be in the <code>ACTIVE</code> or <code>DISABLED</code>
         * state before you can update it. You can disable a private CA that is in the
         * <code>ACTIVE</code> state or make a CA that is in the <code>DISABLED</code>
         * state active again.</p>  <p>Both PCA and the IAM principal must have
         * permission to write to the S3 bucket that you specify. If the IAM principal
         * making the call does not have permission to write to the bucket, then an
         * exception is thrown. For more information, see <a
         * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/crl-planning.html#s3-policies">Access
         * policies for CRLs in Amazon S3</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/UpdateCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCertificateAuthorityOutcome UpdateCertificateAuthority(const Model::UpdateCertificateAuthorityRequest& request) const;

        /**
         * A Callable wrapper for UpdateCertificateAuthority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCertificateAuthorityOutcomeCallable UpdateCertificateAuthorityCallable(const Model::UpdateCertificateAuthorityRequest& request) const;

        /**
         * An Async wrapper for UpdateCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCertificateAuthorityAsync(const Model::UpdateCertificateAuthorityRequest& request, const UpdateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ACMPCAEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ACMPCAClient>;
      void init(const ACMPCAClientConfiguration& clientConfiguration);

      ACMPCAClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ACMPCAEndpointProviderBase> m_endpointProvider;
  };

} // namespace ACMPCA
} // namespace Aws
