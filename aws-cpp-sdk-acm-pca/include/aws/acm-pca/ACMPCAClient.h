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
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCAErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityResult.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityAuditReportResult.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityResult.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportResult.h>
#include <aws/acm-pca/model/GetCertificateResult.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCertificateResult.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCsrResult.h>
#include <aws/acm-pca/model/IssueCertificateResult.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesResult.h>
#include <aws/acm-pca/model/ListPermissionsResult.h>
#include <aws/acm-pca/model/ListTagsResult.h>
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

namespace ACMPCA
{

namespace Model
{
        class CreateCertificateAuthorityRequest;
        class CreateCertificateAuthorityAuditReportRequest;
        class CreatePermissionRequest;
        class DeleteCertificateAuthorityRequest;
        class DeletePermissionRequest;
        class DescribeCertificateAuthorityRequest;
        class DescribeCertificateAuthorityAuditReportRequest;
        class GetCertificateRequest;
        class GetCertificateAuthorityCertificateRequest;
        class GetCertificateAuthorityCsrRequest;
        class ImportCertificateAuthorityCertificateRequest;
        class IssueCertificateRequest;
        class ListCertificateAuthoritiesRequest;
        class ListPermissionsRequest;
        class ListTagsRequest;
        class RestoreCertificateAuthorityRequest;
        class RevokeCertificateRequest;
        class TagCertificateAuthorityRequest;
        class UntagCertificateAuthorityRequest;
        class UpdateCertificateAuthorityRequest;

        typedef Aws::Utils::Outcome<CreateCertificateAuthorityResult, Aws::Client::AWSError<ACMPCAErrors>> CreateCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<CreateCertificateAuthorityAuditReportResult, Aws::Client::AWSError<ACMPCAErrors>> CreateCertificateAuthorityAuditReportOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMPCAErrors>> CreatePermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMPCAErrors>> DeleteCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMPCAErrors>> DeletePermissionOutcome;
        typedef Aws::Utils::Outcome<DescribeCertificateAuthorityResult, Aws::Client::AWSError<ACMPCAErrors>> DescribeCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<DescribeCertificateAuthorityAuditReportResult, Aws::Client::AWSError<ACMPCAErrors>> DescribeCertificateAuthorityAuditReportOutcome;
        typedef Aws::Utils::Outcome<GetCertificateResult, Aws::Client::AWSError<ACMPCAErrors>> GetCertificateOutcome;
        typedef Aws::Utils::Outcome<GetCertificateAuthorityCertificateResult, Aws::Client::AWSError<ACMPCAErrors>> GetCertificateAuthorityCertificateOutcome;
        typedef Aws::Utils::Outcome<GetCertificateAuthorityCsrResult, Aws::Client::AWSError<ACMPCAErrors>> GetCertificateAuthorityCsrOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMPCAErrors>> ImportCertificateAuthorityCertificateOutcome;
        typedef Aws::Utils::Outcome<IssueCertificateResult, Aws::Client::AWSError<ACMPCAErrors>> IssueCertificateOutcome;
        typedef Aws::Utils::Outcome<ListCertificateAuthoritiesResult, Aws::Client::AWSError<ACMPCAErrors>> ListCertificateAuthoritiesOutcome;
        typedef Aws::Utils::Outcome<ListPermissionsResult, Aws::Client::AWSError<ACMPCAErrors>> ListPermissionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<ACMPCAErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMPCAErrors>> RestoreCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMPCAErrors>> RevokeCertificateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMPCAErrors>> TagCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMPCAErrors>> UntagCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMPCAErrors>> UpdateCertificateAuthorityOutcome;

        typedef std::future<CreateCertificateAuthorityOutcome> CreateCertificateAuthorityOutcomeCallable;
        typedef std::future<CreateCertificateAuthorityAuditReportOutcome> CreateCertificateAuthorityAuditReportOutcomeCallable;
        typedef std::future<CreatePermissionOutcome> CreatePermissionOutcomeCallable;
        typedef std::future<DeleteCertificateAuthorityOutcome> DeleteCertificateAuthorityOutcomeCallable;
        typedef std::future<DeletePermissionOutcome> DeletePermissionOutcomeCallable;
        typedef std::future<DescribeCertificateAuthorityOutcome> DescribeCertificateAuthorityOutcomeCallable;
        typedef std::future<DescribeCertificateAuthorityAuditReportOutcome> DescribeCertificateAuthorityAuditReportOutcomeCallable;
        typedef std::future<GetCertificateOutcome> GetCertificateOutcomeCallable;
        typedef std::future<GetCertificateAuthorityCertificateOutcome> GetCertificateAuthorityCertificateOutcomeCallable;
        typedef std::future<GetCertificateAuthorityCsrOutcome> GetCertificateAuthorityCsrOutcomeCallable;
        typedef std::future<ImportCertificateAuthorityCertificateOutcome> ImportCertificateAuthorityCertificateOutcomeCallable;
        typedef std::future<IssueCertificateOutcome> IssueCertificateOutcomeCallable;
        typedef std::future<ListCertificateAuthoritiesOutcome> ListCertificateAuthoritiesOutcomeCallable;
        typedef std::future<ListPermissionsOutcome> ListPermissionsOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<RestoreCertificateAuthorityOutcome> RestoreCertificateAuthorityOutcomeCallable;
        typedef std::future<RevokeCertificateOutcome> RevokeCertificateOutcomeCallable;
        typedef std::future<TagCertificateAuthorityOutcome> TagCertificateAuthorityOutcomeCallable;
        typedef std::future<UntagCertificateAuthorityOutcome> UntagCertificateAuthorityOutcomeCallable;
        typedef std::future<UpdateCertificateAuthorityOutcome> UpdateCertificateAuthorityOutcomeCallable;
} // namespace Model

  class ACMPCAClient;

    typedef std::function<void(const ACMPCAClient*, const Model::CreateCertificateAuthorityRequest&, const Model::CreateCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::CreateCertificateAuthorityAuditReportRequest&, const Model::CreateCertificateAuthorityAuditReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCertificateAuthorityAuditReportResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::CreatePermissionRequest&, const Model::CreatePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePermissionResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::DeleteCertificateAuthorityRequest&, const Model::DeleteCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::DeletePermissionRequest&, const Model::DeletePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::DescribeCertificateAuthorityRequest&, const Model::DescribeCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::DescribeCertificateAuthorityAuditReportRequest&, const Model::DescribeCertificateAuthorityAuditReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificateAuthorityAuditReportResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::GetCertificateRequest&, const Model::GetCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::GetCertificateAuthorityCertificateRequest&, const Model::GetCertificateAuthorityCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCertificateAuthorityCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::GetCertificateAuthorityCsrRequest&, const Model::GetCertificateAuthorityCsrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCertificateAuthorityCsrResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::ImportCertificateAuthorityCertificateRequest&, const Model::ImportCertificateAuthorityCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCertificateAuthorityCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::IssueCertificateRequest&, const Model::IssueCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IssueCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::ListCertificateAuthoritiesRequest&, const Model::ListCertificateAuthoritiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCertificateAuthoritiesResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::ListPermissionsRequest&, const Model::ListPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionsResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::RestoreCertificateAuthorityRequest&, const Model::RestoreCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::RevokeCertificateRequest&, const Model::RevokeCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::TagCertificateAuthorityRequest&, const Model::TagCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::UntagCertificateAuthorityRequest&, const Model::UntagCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::UpdateCertificateAuthorityRequest&, const Model::UpdateCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCertificateAuthorityResponseReceivedHandler;

  /**
   * <p>You can use the ACM PCA API to create a private certificate authority (CA).
   * You must first call the <a>CreateCertificateAuthority</a> operation. If
   * successful, the operation returns an Amazon Resource Name (ARN) for your private
   * CA. Use this ARN as input to the <a>GetCertificateAuthorityCsr</a> operation to
   * retrieve the certificate signing request (CSR) for your private CA certificate.
   * Sign the CSR using the root or an intermediate CA in your on-premises PKI
   * hierarchy, and call the <a>ImportCertificateAuthorityCertificate</a> to import
   * your signed private CA certificate into ACM PCA. </p> <p>Use your private CA to
   * issue and revoke certificates. These are private certificates that identify and
   * secure client computers, servers, applications, services, devices, and users
   * over SSLS/TLS connections within your organization. Call the
   * <a>IssueCertificate</a> operation to issue a certificate. Call the
   * <a>RevokeCertificate</a> operation to revoke a certificate. </p> <note>
   * <p>Certificates issued by your private CA can be trusted only within your
   * organization, not publicly.</p> </note> <p>Your private CA can optionally create
   * a certificate revocation list (CRL) to track the certificates you revoke. To
   * create a CRL, you must specify a <a>RevocationConfiguration</a> object when you
   * call the <a>CreateCertificateAuthority</a> operation. ACM PCA writes the CRL to
   * an S3 bucket that you specify. You must specify a bucket policy that grants ACM
   * PCA write permission. </p> <p>You can also call the
   * <a>CreateCertificateAuthorityAuditReport</a> to create an optional audit report,
   * which enumerates all of the issued, valid, expired, and revoked certificates
   * from the CA.</p> <note> <p>Each ACM PCA API operation has a throttling limit
   * which determines the number of times the operation can be called per second. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaLimits.html#PcaLimits-api">API
   * Rate Limits in ACM PCA</a> in the ACM PCA user guide.</p> </note>
   */
  class AWS_ACMPCA_API ACMPCAClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMPCAClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMPCAClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ACMPCAClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ACMPCAClient();

        inline virtual const char* GetServiceClientName() const override { return "ACM PCA"; }


        /**
         * <p>Creates a private subordinate certificate authority (CA). You must specify
         * the CA configuration, the revocation configuration, the CA type, and an optional
         * idempotency token. The CA configuration specifies the name of the algorithm and
         * key size to be used to create the CA private key, the type of signing algorithm
         * that the CA uses to sign, and X.500 subject information. The CRL (certificate
         * revocation list) configuration specifies the CRL expiration period in days (the
         * validity period of the CRL), the Amazon S3 bucket that will contain the CRL, and
         * a CNAME alias for the S3 bucket that is included in certificates issued by the
         * CA. If successful, this operation returns the Amazon Resource Name (ARN) of the
         * CA.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreateCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateAuthorityOutcome CreateCertificateAuthority(const Model::CreateCertificateAuthorityRequest& request) const;

        /**
         * <p>Creates a private subordinate certificate authority (CA). You must specify
         * the CA configuration, the revocation configuration, the CA type, and an optional
         * idempotency token. The CA configuration specifies the name of the algorithm and
         * key size to be used to create the CA private key, the type of signing algorithm
         * that the CA uses to sign, and X.500 subject information. The CRL (certificate
         * revocation list) configuration specifies the CRL expiration period in days (the
         * validity period of the CRL), the Amazon S3 bucket that will contain the CRL, and
         * a CNAME alias for the S3 bucket that is included in certificates issued by the
         * CA. If successful, this operation returns the Amazon Resource Name (ARN) of the
         * CA.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreateCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCertificateAuthorityOutcomeCallable CreateCertificateAuthorityCallable(const Model::CreateCertificateAuthorityRequest& request) const;

        /**
         * <p>Creates a private subordinate certificate authority (CA). You must specify
         * the CA configuration, the revocation configuration, the CA type, and an optional
         * idempotency token. The CA configuration specifies the name of the algorithm and
         * key size to be used to create the CA private key, the type of signing algorithm
         * that the CA uses to sign, and X.500 subject information. The CRL (certificate
         * revocation list) configuration specifies the CRL expiration period in days (the
         * validity period of the CRL), the Amazon S3 bucket that will contain the CRL, and
         * a CNAME alias for the S3 bucket that is included in certificates issued by the
         * CA. If successful, this operation returns the Amazon Resource Name (ARN) of the
         * CA.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreateCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCertificateAuthorityAsync(const Model::CreateCertificateAuthorityRequest& request, const CreateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an audit report that lists every time that your CA private key is
         * used. The report is saved in the Amazon S3 bucket that you specify on input. The
         * <a>IssueCertificate</a> and <a>RevokeCertificate</a> operations use the private
         * key. You can generate a new report every 30 minutes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreateCertificateAuthorityAuditReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateAuthorityAuditReportOutcome CreateCertificateAuthorityAuditReport(const Model::CreateCertificateAuthorityAuditReportRequest& request) const;

        /**
         * <p>Creates an audit report that lists every time that your CA private key is
         * used. The report is saved in the Amazon S3 bucket that you specify on input. The
         * <a>IssueCertificate</a> and <a>RevokeCertificate</a> operations use the private
         * key. You can generate a new report every 30 minutes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreateCertificateAuthorityAuditReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCertificateAuthorityAuditReportOutcomeCallable CreateCertificateAuthorityAuditReportCallable(const Model::CreateCertificateAuthorityAuditReportRequest& request) const;

        /**
         * <p>Creates an audit report that lists every time that your CA private key is
         * used. The report is saved in the Amazon S3 bucket that you specify on input. The
         * <a>IssueCertificate</a> and <a>RevokeCertificate</a> operations use the private
         * key. You can generate a new report every 30 minutes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreateCertificateAuthorityAuditReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCertificateAuthorityAuditReportAsync(const Model::CreateCertificateAuthorityAuditReportRequest& request, const CreateCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns permissions from a private CA to a designated AWS service. Services
         * are specified by their service principals and can be given permission to create
         * and retrieve certificates on a private CA. Services can also be given permission
         * to list the active permissions that the private CA has granted. For ACM to
         * automatically renew your private CA's certificates, you must assign all possible
         * permissions from the CA to the ACM service principal.</p> <p>At this time, you
         * can only assign permissions to ACM (<code>acm.amazonaws.com</code>). Permissions
         * can be revoked with the <a>DeletePermission</a> operation and listed with the
         * <a>ListPermissions</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreatePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePermissionOutcome CreatePermission(const Model::CreatePermissionRequest& request) const;

        /**
         * <p>Assigns permissions from a private CA to a designated AWS service. Services
         * are specified by their service principals and can be given permission to create
         * and retrieve certificates on a private CA. Services can also be given permission
         * to list the active permissions that the private CA has granted. For ACM to
         * automatically renew your private CA's certificates, you must assign all possible
         * permissions from the CA to the ACM service principal.</p> <p>At this time, you
         * can only assign permissions to ACM (<code>acm.amazonaws.com</code>). Permissions
         * can be revoked with the <a>DeletePermission</a> operation and listed with the
         * <a>ListPermissions</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreatePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePermissionOutcomeCallable CreatePermissionCallable(const Model::CreatePermissionRequest& request) const;

        /**
         * <p>Assigns permissions from a private CA to a designated AWS service. Services
         * are specified by their service principals and can be given permission to create
         * and retrieve certificates on a private CA. Services can also be given permission
         * to list the active permissions that the private CA has granted. For ACM to
         * automatically renew your private CA's certificates, you must assign all possible
         * permissions from the CA to the ACM service principal.</p> <p>At this time, you
         * can only assign permissions to ACM (<code>acm.amazonaws.com</code>). Permissions
         * can be revoked with the <a>DeletePermission</a> operation and listed with the
         * <a>ListPermissions</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CreatePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePermissionAsync(const Model::CreatePermissionRequest& request, const CreatePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a private certificate authority (CA). You must provide the ARN
         * (Amazon Resource Name) of the private CA that you want to delete. You can find
         * the ARN by calling the <a>ListCertificateAuthorities</a> operation. Before you
         * can delete a CA, you must disable it. Call the <a>UpdateCertificateAuthority</a>
         * operation and set the <b>CertificateAuthorityStatus</b> parameter to
         * <code>DISABLED</code>. </p> <p>Additionally, you can delete a CA if you are
         * waiting for it to be created (the <b>Status</b> field of the
         * <a>CertificateAuthority</a> is <code>CREATING</code>). You can also delete it if
         * the CA has been created but you haven't yet imported the signed certificate (the
         * <b>Status</b> is <code>PENDING_CERTIFICATE</code>) into ACM PCA. </p> <p>If the
         * CA is in one of the previously mentioned states and you call
         * <a>DeleteCertificateAuthority</a>, the CA's status changes to
         * <code>DELETED</code>. However, the CA won't be permanently deleted until the
         * restoration period has passed. By default, if you do not set the
         * <code>PermanentDeletionTimeInDays</code> parameter, the CA remains restorable
         * for 30 days. You can set the parameter from 7 to 30 days. The
         * <a>DescribeCertificateAuthority</a> operation returns the time remaining in the
         * restoration window of a Private CA in the <code>DELETED</code> state. To restore
         * an eligible CA, call the <a>RestoreCertificateAuthority</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DeleteCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateAuthorityOutcome DeleteCertificateAuthority(const Model::DeleteCertificateAuthorityRequest& request) const;

        /**
         * <p>Deletes a private certificate authority (CA). You must provide the ARN
         * (Amazon Resource Name) of the private CA that you want to delete. You can find
         * the ARN by calling the <a>ListCertificateAuthorities</a> operation. Before you
         * can delete a CA, you must disable it. Call the <a>UpdateCertificateAuthority</a>
         * operation and set the <b>CertificateAuthorityStatus</b> parameter to
         * <code>DISABLED</code>. </p> <p>Additionally, you can delete a CA if you are
         * waiting for it to be created (the <b>Status</b> field of the
         * <a>CertificateAuthority</a> is <code>CREATING</code>). You can also delete it if
         * the CA has been created but you haven't yet imported the signed certificate (the
         * <b>Status</b> is <code>PENDING_CERTIFICATE</code>) into ACM PCA. </p> <p>If the
         * CA is in one of the previously mentioned states and you call
         * <a>DeleteCertificateAuthority</a>, the CA's status changes to
         * <code>DELETED</code>. However, the CA won't be permanently deleted until the
         * restoration period has passed. By default, if you do not set the
         * <code>PermanentDeletionTimeInDays</code> parameter, the CA remains restorable
         * for 30 days. You can set the parameter from 7 to 30 days. The
         * <a>DescribeCertificateAuthority</a> operation returns the time remaining in the
         * restoration window of a Private CA in the <code>DELETED</code> state. To restore
         * an eligible CA, call the <a>RestoreCertificateAuthority</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DeleteCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateAuthorityOutcomeCallable DeleteCertificateAuthorityCallable(const Model::DeleteCertificateAuthorityRequest& request) const;

        /**
         * <p>Deletes a private certificate authority (CA). You must provide the ARN
         * (Amazon Resource Name) of the private CA that you want to delete. You can find
         * the ARN by calling the <a>ListCertificateAuthorities</a> operation. Before you
         * can delete a CA, you must disable it. Call the <a>UpdateCertificateAuthority</a>
         * operation and set the <b>CertificateAuthorityStatus</b> parameter to
         * <code>DISABLED</code>. </p> <p>Additionally, you can delete a CA if you are
         * waiting for it to be created (the <b>Status</b> field of the
         * <a>CertificateAuthority</a> is <code>CREATING</code>). You can also delete it if
         * the CA has been created but you haven't yet imported the signed certificate (the
         * <b>Status</b> is <code>PENDING_CERTIFICATE</code>) into ACM PCA. </p> <p>If the
         * CA is in one of the previously mentioned states and you call
         * <a>DeleteCertificateAuthority</a>, the CA's status changes to
         * <code>DELETED</code>. However, the CA won't be permanently deleted until the
         * restoration period has passed. By default, if you do not set the
         * <code>PermanentDeletionTimeInDays</code> parameter, the CA remains restorable
         * for 30 days. You can set the parameter from 7 to 30 days. The
         * <a>DescribeCertificateAuthority</a> operation returns the time remaining in the
         * restoration window of a Private CA in the <code>DELETED</code> state. To restore
         * an eligible CA, call the <a>RestoreCertificateAuthority</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DeleteCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAuthorityAsync(const Model::DeleteCertificateAuthorityRequest& request, const DeleteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes permissions that a private CA assigned to a designated AWS service.
         * Permissions can be created with the <a>CreatePermission</a> operation and listed
         * with the <a>ListPermissions</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DeletePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionOutcome DeletePermission(const Model::DeletePermissionRequest& request) const;

        /**
         * <p>Revokes permissions that a private CA assigned to a designated AWS service.
         * Permissions can be created with the <a>CreatePermission</a> operation and listed
         * with the <a>ListPermissions</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DeletePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePermissionOutcomeCallable DeletePermissionCallable(const Model::DeletePermissionRequest& request) const;

        /**
         * <p>Revokes permissions that a private CA assigned to a designated AWS service.
         * Permissions can be created with the <a>CreatePermission</a> operation and listed
         * with the <a>ListPermissions</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DeletePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePermissionAsync(const Model::DeletePermissionRequest& request, const DeletePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about your private certificate authority (CA). You specify
         * the private CA on input by its ARN (Amazon Resource Name). The output contains
         * the status of your CA. This can be any of the following: </p> <ul> <li> <p>
         * <code>CREATING</code> - ACM PCA is creating your private certificate
         * authority.</p> </li> <li> <p> <code>PENDING_CERTIFICATE</code> - The certificate
         * is pending. You must use your on-premises root or subordinate CA to sign your
         * private CA CSR and then import it into PCA. </p> </li> <li> <p>
         * <code>ACTIVE</code> - Your private CA is active.</p> </li> <li> <p>
         * <code>DISABLED</code> - Your private CA has been disabled.</p> </li> <li> <p>
         * <code>EXPIRED</code> - Your private CA certificate has expired.</p> </li> <li>
         * <p> <code>FAILED</code> - Your private CA has failed. Your CA can fail because
         * of problems such a network outage or backend AWS failure or other errors. A
         * failed CA can never return to the pending state. You must create a new CA. </p>
         * </li> <li> <p> <code>DELETED</code> - Your private CA is within the restoration
         * period, after which it is permanently deleted. The length of time remaining in
         * the CA's restoration period is also included in this operation's output.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DescribeCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateAuthorityOutcome DescribeCertificateAuthority(const Model::DescribeCertificateAuthorityRequest& request) const;

        /**
         * <p>Lists information about your private certificate authority (CA). You specify
         * the private CA on input by its ARN (Amazon Resource Name). The output contains
         * the status of your CA. This can be any of the following: </p> <ul> <li> <p>
         * <code>CREATING</code> - ACM PCA is creating your private certificate
         * authority.</p> </li> <li> <p> <code>PENDING_CERTIFICATE</code> - The certificate
         * is pending. You must use your on-premises root or subordinate CA to sign your
         * private CA CSR and then import it into PCA. </p> </li> <li> <p>
         * <code>ACTIVE</code> - Your private CA is active.</p> </li> <li> <p>
         * <code>DISABLED</code> - Your private CA has been disabled.</p> </li> <li> <p>
         * <code>EXPIRED</code> - Your private CA certificate has expired.</p> </li> <li>
         * <p> <code>FAILED</code> - Your private CA has failed. Your CA can fail because
         * of problems such a network outage or backend AWS failure or other errors. A
         * failed CA can never return to the pending state. You must create a new CA. </p>
         * </li> <li> <p> <code>DELETED</code> - Your private CA is within the restoration
         * period, after which it is permanently deleted. The length of time remaining in
         * the CA's restoration period is also included in this operation's output.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DescribeCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificateAuthorityOutcomeCallable DescribeCertificateAuthorityCallable(const Model::DescribeCertificateAuthorityRequest& request) const;

        /**
         * <p>Lists information about your private certificate authority (CA). You specify
         * the private CA on input by its ARN (Amazon Resource Name). The output contains
         * the status of your CA. This can be any of the following: </p> <ul> <li> <p>
         * <code>CREATING</code> - ACM PCA is creating your private certificate
         * authority.</p> </li> <li> <p> <code>PENDING_CERTIFICATE</code> - The certificate
         * is pending. You must use your on-premises root or subordinate CA to sign your
         * private CA CSR and then import it into PCA. </p> </li> <li> <p>
         * <code>ACTIVE</code> - Your private CA is active.</p> </li> <li> <p>
         * <code>DISABLED</code> - Your private CA has been disabled.</p> </li> <li> <p>
         * <code>EXPIRED</code> - Your private CA certificate has expired.</p> </li> <li>
         * <p> <code>FAILED</code> - Your private CA has failed. Your CA can fail because
         * of problems such a network outage or backend AWS failure or other errors. A
         * failed CA can never return to the pending state. You must create a new CA. </p>
         * </li> <li> <p> <code>DELETED</code> - Your private CA is within the restoration
         * period, after which it is permanently deleted. The length of time remaining in
         * the CA's restoration period is also included in this operation's output.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DescribeCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificateAuthorityAsync(const Model::DescribeCertificateAuthorityRequest& request, const DescribeCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about a specific audit report created by calling the
         * <a>CreateCertificateAuthorityAuditReport</a> operation. Audit information is
         * created every time the certificate authority (CA) private key is used. The
         * private key is used when you call the <a>IssueCertificate</a> operation or the
         * <a>RevokeCertificate</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DescribeCertificateAuthorityAuditReport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateAuthorityAuditReportOutcome DescribeCertificateAuthorityAuditReport(const Model::DescribeCertificateAuthorityAuditReportRequest& request) const;

        /**
         * <p>Lists information about a specific audit report created by calling the
         * <a>CreateCertificateAuthorityAuditReport</a> operation. Audit information is
         * created every time the certificate authority (CA) private key is used. The
         * private key is used when you call the <a>IssueCertificate</a> operation or the
         * <a>RevokeCertificate</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DescribeCertificateAuthorityAuditReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificateAuthorityAuditReportOutcomeCallable DescribeCertificateAuthorityAuditReportCallable(const Model::DescribeCertificateAuthorityAuditReportRequest& request) const;

        /**
         * <p>Lists information about a specific audit report created by calling the
         * <a>CreateCertificateAuthorityAuditReport</a> operation. Audit information is
         * created every time the certificate authority (CA) private key is used. The
         * private key is used when you call the <a>IssueCertificate</a> operation or the
         * <a>RevokeCertificate</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/DescribeCertificateAuthorityAuditReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificateAuthorityAuditReportAsync(const Model::DescribeCertificateAuthorityAuditReportRequest& request, const DescribeCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a certificate from your private CA. The ARN of the certificate is
         * returned when you call the <a>IssueCertificate</a> operation. You must specify
         * both the ARN of your private CA and the ARN of the issued certificate when
         * calling the <b>GetCertificate</b> operation. You can retrieve the certificate if
         * it is in the <b>ISSUED</b> state. You can call the
         * <a>CreateCertificateAuthorityAuditReport</a> operation to create a report that
         * contains information about all of the certificates issued and revoked by your
         * private CA. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCertificateOutcome GetCertificate(const Model::GetCertificateRequest& request) const;

        /**
         * <p>Retrieves a certificate from your private CA. The ARN of the certificate is
         * returned when you call the <a>IssueCertificate</a> operation. You must specify
         * both the ARN of your private CA and the ARN of the issued certificate when
         * calling the <b>GetCertificate</b> operation. You can retrieve the certificate if
         * it is in the <b>ISSUED</b> state. You can call the
         * <a>CreateCertificateAuthorityAuditReport</a> operation to create a report that
         * contains information about all of the certificates issued and revoked by your
         * private CA. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCertificateOutcomeCallable GetCertificateCallable(const Model::GetCertificateRequest& request) const;

        /**
         * <p>Retrieves a certificate from your private CA. The ARN of the certificate is
         * returned when you call the <a>IssueCertificate</a> operation. You must specify
         * both the ARN of your private CA and the ARN of the issued certificate when
         * calling the <b>GetCertificate</b> operation. You can retrieve the certificate if
         * it is in the <b>ISSUED</b> state. You can call the
         * <a>CreateCertificateAuthorityAuditReport</a> operation to create a report that
         * contains information about all of the certificates issued and revoked by your
         * private CA. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCertificateAsync(const Model::GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the certificate and certificate chain for your private certificate
         * authority (CA). Both the certificate and the chain are base64 PEM-encoded. The
         * chain does not include the CA certificate. Each certificate in the chain signs
         * the one before it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificateAuthorityCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCertificateAuthorityCertificateOutcome GetCertificateAuthorityCertificate(const Model::GetCertificateAuthorityCertificateRequest& request) const;

        /**
         * <p>Retrieves the certificate and certificate chain for your private certificate
         * authority (CA). Both the certificate and the chain are base64 PEM-encoded. The
         * chain does not include the CA certificate. Each certificate in the chain signs
         * the one before it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificateAuthorityCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCertificateAuthorityCertificateOutcomeCallable GetCertificateAuthorityCertificateCallable(const Model::GetCertificateAuthorityCertificateRequest& request) const;

        /**
         * <p>Retrieves the certificate and certificate chain for your private certificate
         * authority (CA). Both the certificate and the chain are base64 PEM-encoded. The
         * chain does not include the CA certificate. Each certificate in the chain signs
         * the one before it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificateAuthorityCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCertificateAuthorityCertificateAsync(const Model::GetCertificateAuthorityCertificateRequest& request, const GetCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the certificate signing request (CSR) for your private certificate
         * authority (CA). The CSR is created when you call the
         * <a>CreateCertificateAuthority</a> operation. Take the CSR to your on-premises
         * X.509 infrastructure and sign it by using your root or a subordinate CA. Then
         * import the signed certificate back into ACM PCA by calling the
         * <a>ImportCertificateAuthorityCertificate</a> operation. The CSR is returned as a
         * base64 PEM-encoded string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificateAuthorityCsr">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCertificateAuthorityCsrOutcome GetCertificateAuthorityCsr(const Model::GetCertificateAuthorityCsrRequest& request) const;

        /**
         * <p>Retrieves the certificate signing request (CSR) for your private certificate
         * authority (CA). The CSR is created when you call the
         * <a>CreateCertificateAuthority</a> operation. Take the CSR to your on-premises
         * X.509 infrastructure and sign it by using your root or a subordinate CA. Then
         * import the signed certificate back into ACM PCA by calling the
         * <a>ImportCertificateAuthorityCertificate</a> operation. The CSR is returned as a
         * base64 PEM-encoded string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificateAuthorityCsr">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCertificateAuthorityCsrOutcomeCallable GetCertificateAuthorityCsrCallable(const Model::GetCertificateAuthorityCsrRequest& request) const;

        /**
         * <p>Retrieves the certificate signing request (CSR) for your private certificate
         * authority (CA). The CSR is created when you call the
         * <a>CreateCertificateAuthority</a> operation. Take the CSR to your on-premises
         * X.509 infrastructure and sign it by using your root or a subordinate CA. Then
         * import the signed certificate back into ACM PCA by calling the
         * <a>ImportCertificateAuthorityCertificate</a> operation. The CSR is returned as a
         * base64 PEM-encoded string. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GetCertificateAuthorityCsr">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCertificateAuthorityCsrAsync(const Model::GetCertificateAuthorityCsrRequest& request, const GetCertificateAuthorityCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports your signed private CA certificate into ACM PCA. Before you can call
         * this operation, you must create the private certificate authority by calling the
         * <a>CreateCertificateAuthority</a> operation. You must then generate a
         * certificate signing request (CSR) by calling the
         * <a>GetCertificateAuthorityCsr</a> operation. Take the CSR to your on-premises CA
         * and use the root certificate or a subordinate certificate to sign it. Create a
         * certificate chain and copy the signed certificate and the certificate chain to
         * your working directory. </p> <note> <p>Your certificate chain must not include
         * the private CA certificate that you are importing.</p> </note> <note> <p>Your
         * on-premises CA certificate must be the last certificate in your chain. The
         * subordinate certificate, if any, that your root CA signed must be next to last.
         * The subordinate certificate signed by the preceding subordinate CA must come
         * next, and so on until your chain is built. </p> </note> <note> <p>The chain must
         * be PEM-encoded.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ImportCertificateAuthorityCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCertificateAuthorityCertificateOutcome ImportCertificateAuthorityCertificate(const Model::ImportCertificateAuthorityCertificateRequest& request) const;

        /**
         * <p>Imports your signed private CA certificate into ACM PCA. Before you can call
         * this operation, you must create the private certificate authority by calling the
         * <a>CreateCertificateAuthority</a> operation. You must then generate a
         * certificate signing request (CSR) by calling the
         * <a>GetCertificateAuthorityCsr</a> operation. Take the CSR to your on-premises CA
         * and use the root certificate or a subordinate certificate to sign it. Create a
         * certificate chain and copy the signed certificate and the certificate chain to
         * your working directory. </p> <note> <p>Your certificate chain must not include
         * the private CA certificate that you are importing.</p> </note> <note> <p>Your
         * on-premises CA certificate must be the last certificate in your chain. The
         * subordinate certificate, if any, that your root CA signed must be next to last.
         * The subordinate certificate signed by the preceding subordinate CA must come
         * next, and so on until your chain is built. </p> </note> <note> <p>The chain must
         * be PEM-encoded.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ImportCertificateAuthorityCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportCertificateAuthorityCertificateOutcomeCallable ImportCertificateAuthorityCertificateCallable(const Model::ImportCertificateAuthorityCertificateRequest& request) const;

        /**
         * <p>Imports your signed private CA certificate into ACM PCA. Before you can call
         * this operation, you must create the private certificate authority by calling the
         * <a>CreateCertificateAuthority</a> operation. You must then generate a
         * certificate signing request (CSR) by calling the
         * <a>GetCertificateAuthorityCsr</a> operation. Take the CSR to your on-premises CA
         * and use the root certificate or a subordinate certificate to sign it. Create a
         * certificate chain and copy the signed certificate and the certificate chain to
         * your working directory. </p> <note> <p>Your certificate chain must not include
         * the private CA certificate that you are importing.</p> </note> <note> <p>Your
         * on-premises CA certificate must be the last certificate in your chain. The
         * subordinate certificate, if any, that your root CA signed must be next to last.
         * The subordinate certificate signed by the preceding subordinate CA must come
         * next, and so on until your chain is built. </p> </note> <note> <p>The chain must
         * be PEM-encoded.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ImportCertificateAuthorityCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportCertificateAuthorityCertificateAsync(const Model::ImportCertificateAuthorityCertificateRequest& request, const ImportCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uses your private certificate authority (CA) to issue a client certificate.
         * This operation returns the Amazon Resource Name (ARN) of the certificate. You
         * can retrieve the certificate by calling the <a>GetCertificate</a> operation and
         * specifying the ARN. </p> <note> <p>You cannot use the ACM
         * <b>ListCertificateAuthorities</b> operation to retrieve the ARNs of the
         * certificates that you issue by using ACM PCA.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/IssueCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::IssueCertificateOutcome IssueCertificate(const Model::IssueCertificateRequest& request) const;

        /**
         * <p>Uses your private certificate authority (CA) to issue a client certificate.
         * This operation returns the Amazon Resource Name (ARN) of the certificate. You
         * can retrieve the certificate by calling the <a>GetCertificate</a> operation and
         * specifying the ARN. </p> <note> <p>You cannot use the ACM
         * <b>ListCertificateAuthorities</b> operation to retrieve the ARNs of the
         * certificates that you issue by using ACM PCA.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/IssueCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::IssueCertificateOutcomeCallable IssueCertificateCallable(const Model::IssueCertificateRequest& request) const;

        /**
         * <p>Uses your private certificate authority (CA) to issue a client certificate.
         * This operation returns the Amazon Resource Name (ARN) of the certificate. You
         * can retrieve the certificate by calling the <a>GetCertificate</a> operation and
         * specifying the ARN. </p> <note> <p>You cannot use the ACM
         * <b>ListCertificateAuthorities</b> operation to retrieve the ARNs of the
         * certificates that you issue by using ACM PCA.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/IssueCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IssueCertificateAsync(const Model::IssueCertificateRequest& request, const IssueCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the private certificate authorities that you created by using the
         * <a>CreateCertificateAuthority</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListCertificateAuthorities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificateAuthoritiesOutcome ListCertificateAuthorities(const Model::ListCertificateAuthoritiesRequest& request) const;

        /**
         * <p>Lists the private certificate authorities that you created by using the
         * <a>CreateCertificateAuthority</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListCertificateAuthorities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificateAuthoritiesOutcomeCallable ListCertificateAuthoritiesCallable(const Model::ListCertificateAuthoritiesRequest& request) const;

        /**
         * <p>Lists the private certificate authorities that you created by using the
         * <a>CreateCertificateAuthority</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListCertificateAuthorities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificateAuthoritiesAsync(const Model::ListCertificateAuthoritiesRequest& request, const ListCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the permissions, if any, that have been assigned by a private CA.
         * Permissions can be granted with the <a>CreatePermission</a> operation and
         * revoked with the <a>DeletePermission</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionsOutcome ListPermissions(const Model::ListPermissionsRequest& request) const;

        /**
         * <p>Lists all the permissions, if any, that have been assigned by a private CA.
         * Permissions can be granted with the <a>CreatePermission</a> operation and
         * revoked with the <a>DeletePermission</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionsOutcomeCallable ListPermissionsCallable(const Model::ListPermissionsRequest& request) const;

        /**
         * <p>Lists all the permissions, if any, that have been assigned by a private CA.
         * Permissions can be granted with the <a>CreatePermission</a> operation and
         * revoked with the <a>DeletePermission</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionsAsync(const Model::ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags, if any, that are associated with your private CA. Tags are
         * labels that you can use to identify and organize your CAs. Each tag consists of
         * a key and an optional value. Call the <a>TagCertificateAuthority</a> operation
         * to add one or more tags to your CA. Call the <a>UntagCertificateAuthority</a>
         * operation to remove tags. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists the tags, if any, that are associated with your private CA. Tags are
         * labels that you can use to identify and organize your CAs. Each tag consists of
         * a key and an optional value. Call the <a>TagCertificateAuthority</a> operation
         * to add one or more tags to your CA. Call the <a>UntagCertificateAuthority</a>
         * operation to remove tags. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists the tags, if any, that are associated with your private CA. Tags are
         * labels that you can use to identify and organize your CAs. Each tag consists of
         * a key and an optional value. Call the <a>TagCertificateAuthority</a> operation
         * to add one or more tags to your CA. Call the <a>UntagCertificateAuthority</a>
         * operation to remove tags. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ListTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a certificate authority (CA) that is in the <code>DELETED</code>
         * state. You can restore a CA during the period that you defined in the
         * <b>PermanentDeletionTimeInDays</b> parameter of the
         * <a>DeleteCertificateAuthority</a> operation. Currently, you can specify 7 to 30
         * days. If you did not specify a <b>PermanentDeletionTimeInDays</b> value, by
         * default you can restore the CA at any time in a 30 day period. You can check the
         * time remaining in the restoration period of a private CA in the
         * <code>DELETED</code> state by calling the <a>DescribeCertificateAuthority</a> or
         * <a>ListCertificateAuthorities</a> operations. The status of a restored CA is set
         * to its pre-deletion status when the <b>RestoreCertificateAuthority</b> operation
         * returns. To change its status to <code>ACTIVE</code>, call the
         * <a>UpdateCertificateAuthority</a> operation. If the private CA was in the
         * <code>PENDING_CERTIFICATE</code> state at deletion, you must use the
         * <a>ImportCertificateAuthorityCertificate</a> operation to import a certificate
         * authority into the private CA before it can be activated. You cannot restore a
         * CA after the restoration period has ended.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/RestoreCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreCertificateAuthorityOutcome RestoreCertificateAuthority(const Model::RestoreCertificateAuthorityRequest& request) const;

        /**
         * <p>Restores a certificate authority (CA) that is in the <code>DELETED</code>
         * state. You can restore a CA during the period that you defined in the
         * <b>PermanentDeletionTimeInDays</b> parameter of the
         * <a>DeleteCertificateAuthority</a> operation. Currently, you can specify 7 to 30
         * days. If you did not specify a <b>PermanentDeletionTimeInDays</b> value, by
         * default you can restore the CA at any time in a 30 day period. You can check the
         * time remaining in the restoration period of a private CA in the
         * <code>DELETED</code> state by calling the <a>DescribeCertificateAuthority</a> or
         * <a>ListCertificateAuthorities</a> operations. The status of a restored CA is set
         * to its pre-deletion status when the <b>RestoreCertificateAuthority</b> operation
         * returns. To change its status to <code>ACTIVE</code>, call the
         * <a>UpdateCertificateAuthority</a> operation. If the private CA was in the
         * <code>PENDING_CERTIFICATE</code> state at deletion, you must use the
         * <a>ImportCertificateAuthorityCertificate</a> operation to import a certificate
         * authority into the private CA before it can be activated. You cannot restore a
         * CA after the restoration period has ended.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/RestoreCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreCertificateAuthorityOutcomeCallable RestoreCertificateAuthorityCallable(const Model::RestoreCertificateAuthorityRequest& request) const;

        /**
         * <p>Restores a certificate authority (CA) that is in the <code>DELETED</code>
         * state. You can restore a CA during the period that you defined in the
         * <b>PermanentDeletionTimeInDays</b> parameter of the
         * <a>DeleteCertificateAuthority</a> operation. Currently, you can specify 7 to 30
         * days. If you did not specify a <b>PermanentDeletionTimeInDays</b> value, by
         * default you can restore the CA at any time in a 30 day period. You can check the
         * time remaining in the restoration period of a private CA in the
         * <code>DELETED</code> state by calling the <a>DescribeCertificateAuthority</a> or
         * <a>ListCertificateAuthorities</a> operations. The status of a restored CA is set
         * to its pre-deletion status when the <b>RestoreCertificateAuthority</b> operation
         * returns. To change its status to <code>ACTIVE</code>, call the
         * <a>UpdateCertificateAuthority</a> operation. If the private CA was in the
         * <code>PENDING_CERTIFICATE</code> state at deletion, you must use the
         * <a>ImportCertificateAuthorityCertificate</a> operation to import a certificate
         * authority into the private CA before it can be activated. You cannot restore a
         * CA after the restoration period has ended.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/RestoreCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreCertificateAuthorityAsync(const Model::RestoreCertificateAuthorityRequest& request, const RestoreCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes a certificate that you issued by calling the <a>IssueCertificate</a>
         * operation. If you enable a certificate revocation list (CRL) when you create or
         * update your private CA, information about the revoked certificates will be
         * included in the CRL. ACM PCA writes the CRL to an S3 bucket that you specify.
         * For more information about revocation, see the <a>CrlConfiguration</a>
         * structure. ACM PCA also writes revocation information to the audit report. For
         * more information, see <a>CreateCertificateAuthorityAuditReport</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/RevokeCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeCertificateOutcome RevokeCertificate(const Model::RevokeCertificateRequest& request) const;

        /**
         * <p>Revokes a certificate that you issued by calling the <a>IssueCertificate</a>
         * operation. If you enable a certificate revocation list (CRL) when you create or
         * update your private CA, information about the revoked certificates will be
         * included in the CRL. ACM PCA writes the CRL to an S3 bucket that you specify.
         * For more information about revocation, see the <a>CrlConfiguration</a>
         * structure. ACM PCA also writes revocation information to the audit report. For
         * more information, see <a>CreateCertificateAuthorityAuditReport</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/RevokeCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeCertificateOutcomeCallable RevokeCertificateCallable(const Model::RevokeCertificateRequest& request) const;

        /**
         * <p>Revokes a certificate that you issued by calling the <a>IssueCertificate</a>
         * operation. If you enable a certificate revocation list (CRL) when you create or
         * update your private CA, information about the revoked certificates will be
         * included in the CRL. ACM PCA writes the CRL to an S3 bucket that you specify.
         * For more information about revocation, see the <a>CrlConfiguration</a>
         * structure. ACM PCA also writes revocation information to the audit report. For
         * more information, see <a>CreateCertificateAuthorityAuditReport</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/RevokeCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeCertificateAsync(const Model::RevokeCertificateRequest& request, const RevokeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to your private CA. Tags are labels that you can use to
         * identify and organize your AWS resources. Each tag consists of a key and an
         * optional value. You specify the private CA on input by its Amazon Resource Name
         * (ARN). You specify the tag by using a key-value pair. You can apply a tag to
         * just one private CA if you want to identify a specific characteristic of that
         * CA, or you can apply the same tag to multiple private CAs if you want to filter
         * for a common relationship among those CAs. To remove one or more tags, use the
         * <a>UntagCertificateAuthority</a> operation. Call the <a>ListTags</a> operation
         * to see what tags are associated with your CA. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/TagCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::TagCertificateAuthorityOutcome TagCertificateAuthority(const Model::TagCertificateAuthorityRequest& request) const;

        /**
         * <p>Adds one or more tags to your private CA. Tags are labels that you can use to
         * identify and organize your AWS resources. Each tag consists of a key and an
         * optional value. You specify the private CA on input by its Amazon Resource Name
         * (ARN). You specify the tag by using a key-value pair. You can apply a tag to
         * just one private CA if you want to identify a specific characteristic of that
         * CA, or you can apply the same tag to multiple private CAs if you want to filter
         * for a common relationship among those CAs. To remove one or more tags, use the
         * <a>UntagCertificateAuthority</a> operation. Call the <a>ListTags</a> operation
         * to see what tags are associated with your CA. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/TagCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagCertificateAuthorityOutcomeCallable TagCertificateAuthorityCallable(const Model::TagCertificateAuthorityRequest& request) const;

        /**
         * <p>Adds one or more tags to your private CA. Tags are labels that you can use to
         * identify and organize your AWS resources. Each tag consists of a key and an
         * optional value. You specify the private CA on input by its Amazon Resource Name
         * (ARN). You specify the tag by using a key-value pair. You can apply a tag to
         * just one private CA if you want to identify a specific characteristic of that
         * CA, or you can apply the same tag to multiple private CAs if you want to filter
         * for a common relationship among those CAs. To remove one or more tags, use the
         * <a>UntagCertificateAuthority</a> operation. Call the <a>ListTags</a> operation
         * to see what tags are associated with your CA. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/TagCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagCertificateAuthorityAsync(const Model::TagCertificateAuthorityRequest& request, const TagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove one or more tags from your private CA. A tag consists of a key-value
         * pair. If you do not specify the value portion of the tag when calling this
         * operation, the tag will be removed regardless of value. If you specify a value,
         * the tag is removed only if it is associated with the specified value. To add
         * tags to a private CA, use the <a>TagCertificateAuthority</a>. Call the
         * <a>ListTags</a> operation to see what tags are associated with your CA.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/UntagCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagCertificateAuthorityOutcome UntagCertificateAuthority(const Model::UntagCertificateAuthorityRequest& request) const;

        /**
         * <p>Remove one or more tags from your private CA. A tag consists of a key-value
         * pair. If you do not specify the value portion of the tag when calling this
         * operation, the tag will be removed regardless of value. If you specify a value,
         * the tag is removed only if it is associated with the specified value. To add
         * tags to a private CA, use the <a>TagCertificateAuthority</a>. Call the
         * <a>ListTags</a> operation to see what tags are associated with your CA.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/UntagCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagCertificateAuthorityOutcomeCallable UntagCertificateAuthorityCallable(const Model::UntagCertificateAuthorityRequest& request) const;

        /**
         * <p>Remove one or more tags from your private CA. A tag consists of a key-value
         * pair. If you do not specify the value portion of the tag when calling this
         * operation, the tag will be removed regardless of value. If you specify a value,
         * the tag is removed only if it is associated with the specified value. To add
         * tags to a private CA, use the <a>TagCertificateAuthority</a>. Call the
         * <a>ListTags</a> operation to see what tags are associated with your CA.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/UntagCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagCertificateAuthorityAsync(const Model::UntagCertificateAuthorityRequest& request, const UntagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status or configuration of a private certificate authority (CA).
         * Your private CA must be in the <code>ACTIVE</code> or <code>DISABLED</code>
         * state before you can update it. You can disable a private CA that is in the
         * <code>ACTIVE</code> state or make a CA that is in the <code>DISABLED</code>
         * state active again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/UpdateCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCertificateAuthorityOutcome UpdateCertificateAuthority(const Model::UpdateCertificateAuthorityRequest& request) const;

        /**
         * <p>Updates the status or configuration of a private certificate authority (CA).
         * Your private CA must be in the <code>ACTIVE</code> or <code>DISABLED</code>
         * state before you can update it. You can disable a private CA that is in the
         * <code>ACTIVE</code> state or make a CA that is in the <code>DISABLED</code>
         * state active again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/UpdateCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCertificateAuthorityOutcomeCallable UpdateCertificateAuthorityCallable(const Model::UpdateCertificateAuthorityRequest& request) const;

        /**
         * <p>Updates the status or configuration of a private certificate authority (CA).
         * Your private CA must be in the <code>ACTIVE</code> or <code>DISABLED</code>
         * state before you can update it. You can disable a private CA that is in the
         * <code>ACTIVE</code> state or make a CA that is in the <code>DISABLED</code>
         * state active again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/UpdateCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCertificateAuthorityAsync(const Model::UpdateCertificateAuthorityRequest& request, const UpdateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateCertificateAuthorityAsyncHelper(const Model::CreateCertificateAuthorityRequest& request, const CreateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCertificateAuthorityAuditReportAsyncHelper(const Model::CreateCertificateAuthorityAuditReportRequest& request, const CreateCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePermissionAsyncHelper(const Model::CreatePermissionRequest& request, const CreatePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCertificateAuthorityAsyncHelper(const Model::DeleteCertificateAuthorityRequest& request, const DeleteCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePermissionAsyncHelper(const Model::DeletePermissionRequest& request, const DeletePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCertificateAuthorityAsyncHelper(const Model::DescribeCertificateAuthorityRequest& request, const DescribeCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCertificateAuthorityAuditReportAsyncHelper(const Model::DescribeCertificateAuthorityAuditReportRequest& request, const DescribeCertificateAuthorityAuditReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCertificateAsyncHelper(const Model::GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCertificateAuthorityCertificateAsyncHelper(const Model::GetCertificateAuthorityCertificateRequest& request, const GetCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCertificateAuthorityCsrAsyncHelper(const Model::GetCertificateAuthorityCsrRequest& request, const GetCertificateAuthorityCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportCertificateAuthorityCertificateAsyncHelper(const Model::ImportCertificateAuthorityCertificateRequest& request, const ImportCertificateAuthorityCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void IssueCertificateAsyncHelper(const Model::IssueCertificateRequest& request, const IssueCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCertificateAuthoritiesAsyncHelper(const Model::ListCertificateAuthoritiesRequest& request, const ListCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPermissionsAsyncHelper(const Model::ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreCertificateAuthorityAsyncHelper(const Model::RestoreCertificateAuthorityRequest& request, const RestoreCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeCertificateAsyncHelper(const Model::RevokeCertificateRequest& request, const RevokeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagCertificateAuthorityAsyncHelper(const Model::TagCertificateAuthorityRequest& request, const TagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagCertificateAuthorityAsyncHelper(const Model::UntagCertificateAuthorityRequest& request, const UntagCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCertificateAuthorityAsyncHelper(const Model::UpdateCertificateAuthorityRequest& request, const UpdateCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ACMPCA
} // namespace Aws
