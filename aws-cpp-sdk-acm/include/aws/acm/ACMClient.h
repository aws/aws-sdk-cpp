/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/acm/ACMServiceClientModel.h>

namespace Aws
{
namespace ACM
{
  /**
   * <fullname>Certificate Manager</fullname> <p>You can use Certificate Manager
   * (ACM) to manage SSL/TLS certificates for your Amazon Web Services-based websites
   * and applications. For more information about using ACM, see the <a
   * href="https://docs.aws.amazon.com/acm/latest/userguide/">Certificate Manager
   * User Guide</a>.</p>
   */
  class AWS_ACM_API ACMClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ACMClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMClient(const Aws::ACM::ACMClientConfiguration& clientConfiguration = Aws::ACM::ACMClientConfiguration(),
                  std::shared_ptr<ACMEndpointProviderBase> endpointProvider = Aws::MakeShared<ACMEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<ACMEndpointProviderBase> endpointProvider = Aws::MakeShared<ACMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::ACM::ACMClientConfiguration& clientConfiguration = Aws::ACM::ACMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ACMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<ACMEndpointProviderBase> endpointProvider = Aws::MakeShared<ACMEndpointProvider>(ALLOCATION_TAG),
                  const Aws::ACM::ACMClientConfiguration& clientConfiguration = Aws::ACM::ACMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ACMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ACMClient();

        /**
         * <p>Adds one or more tags to an ACM certificate. Tags are labels that you can use
         * to identify and organize your Amazon Web Services resources. Each tag consists
         * of a <code>key</code> and an optional <code>value</code>. You specify the
         * certificate on input by its Amazon Resource Name (ARN). You specify the tag by
         * using a key-value pair. </p> <p>You can apply a tag to just one certificate if
         * you want to identify a specific characteristic of that certificate, or you can
         * apply the same tag to multiple certificates if you want to filter for a common
         * relationship among those certificates. Similarly, you can apply the same tag to
         * multiple resources if you want to specify a relationship among those resources.
         * For example, you can add the same tag to an ACM certificate and an Elastic Load
         * Balancing load balancer to indicate that they are both used by the same website.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/tags.html">Tagging ACM
         * certificates</a>. </p> <p>To remove one or more tags, use the
         * <a>RemoveTagsFromCertificate</a> action. To view all of the tags that have been
         * applied to the certificate, use the <a>ListTagsForCertificate</a> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/AddTagsToCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToCertificateOutcome AddTagsToCertificate(const Model::AddTagsToCertificateRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToCertificateOutcomeCallable AddTagsToCertificateCallable(const Model::AddTagsToCertificateRequest& request) const;

        /**
         * An Async wrapper for AddTagsToCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToCertificateAsync(const Model::AddTagsToCertificateRequest& request, const AddTagsToCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a certificate and its associated private key. If this action
         * succeeds, the certificate no longer appears in the list that can be displayed by
         * calling the <a>ListCertificates</a> action or be retrieved by calling the
         * <a>GetCertificate</a> action. The certificate will not be available for use by
         * Amazon Web Services services integrated with ACM. </p>  <p>You cannot
         * delete an ACM certificate that is being used by another Amazon Web Services
         * service. To delete a certificate that is in use, the certificate association
         * must first be removed.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed metadata about the specified ACM certificate.</p> <p>If you
         * have just created a certificate using the <code>RequestCertificate</code>
         * action, there is a delay of several seconds before you can retrieve information
         * about it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DescribeCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest& request) const;

        /**
         * A Callable wrapper for DescribeCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificateOutcomeCallable DescribeCertificateCallable(const Model::DescribeCertificateRequest& request) const;

        /**
         * An Async wrapper for DescribeCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports a private certificate issued by a private certificate authority (CA)
         * for use anywhere. The exported file contains the certificate, the certificate
         * chain, and the encrypted private 2048-bit RSA key associated with the public key
         * that is embedded in the certificate. For security, you must assign a passphrase
         * for the private key when exporting it. </p> <p>For information about exporting
         * and formatting a certificate using the ACM console or CLI, see <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-export-private.html">Export
         * a Private Certificate</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ExportCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportCertificateOutcome ExportCertificate(const Model::ExportCertificateRequest& request) const;

        /**
         * A Callable wrapper for ExportCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportCertificateOutcomeCallable ExportCertificateCallable(const Model::ExportCertificateRequest& request) const;

        /**
         * An Async wrapper for ExportCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportCertificateAsync(const Model::ExportCertificateRequest& request, const ExportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the account configuration options associated with an Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/GetAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountConfigurationOutcome GetAccountConfiguration() const;

        /**
         * A Callable wrapper for GetAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountConfigurationOutcomeCallable GetAccountConfigurationCallable() const;

        /**
         * An Async wrapper for GetAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountConfigurationAsync(const GetAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Retrieves an Amazon-issued certificate and its certificate chain. The chain
         * consists of the certificate of the issuing CA and the intermediate certificates
         * of any other subordinate CAs. All of the certificates are base64 encoded. You
         * can use <a
         * href="https://wiki.openssl.org/index.php/Command_Line_Utilities">OpenSSL</a> to
         * decode the certificates and inspect individual fields.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/GetCertificate">AWS
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
         * <p>Imports a certificate into Certificate Manager (ACM) to use with services
         * that are integrated with ACM. Note that <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-services.html">integrated
         * services</a> allow only certificate types and keys they support to be associated
         * with their resources. Further, their support differs depending on whether the
         * certificate is imported into IAM or into ACM. For more information, see the
         * documentation for each service. For more information about importing
         * certificates into ACM, see <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
         * Certificates</a> in the <i>Certificate Manager User Guide</i>. </p> 
         * <p>ACM does not provide <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
         * renewal</a> for certificates that you import.</p>  <p>Note the following
         * guidelines when importing third party certificates:</p> <ul> <li> <p>You must
         * enter the private key that matches the certificate you are importing.</p> </li>
         * <li> <p>The private key must be unencrypted. You cannot import a private key
         * that is protected by a password or a passphrase.</p> </li> <li> <p>The private
         * key must be no larger than 5 KB (5,120 bytes).</p> </li> <li> <p>If the
         * certificate you are importing is not self-signed, you must enter its certificate
         * chain.</p> </li> <li> <p>If a certificate chain is included, the issuer must be
         * the subject of one of the certificates in the chain.</p> </li> <li> <p>The
         * certificate, private key, and certificate chain must be PEM-encoded.</p> </li>
         * <li> <p>The current time must be between the <code>Not Before</code> and
         * <code>Not After</code> certificate fields.</p> </li> <li> <p>The
         * <code>Issuer</code> field must not be empty.</p> </li> <li> <p>The OCSP
         * authority URL, if present, must not exceed 1000 characters.</p> </li> <li> <p>To
         * import a new certificate, omit the <code>CertificateArn</code> argument. Include
         * this argument only when you want to replace a previously imported
         * certificate.</p> </li> <li> <p>When you import a certificate by using the CLI,
         * you must specify the certificate, the certificate chain, and the private key by
         * their file names preceded by <code>fileb://</code>. For example, you can specify
         * a certificate saved in the <code>C:\temp</code> folder as
         * <code>fileb://C:\temp\certificate_to_import.pem</code>. If you are making an
         * HTTP or HTTPS Query request, include these arguments as BLOBs. </p> </li> <li>
         * <p>When you import a certificate by using an SDK, you must specify the
         * certificate, the certificate chain, and the private key files in the manner
         * required by the programming language you're using. </p> </li> <li> <p>The
         * cryptographic algorithm of an imported certificate must match the algorithm of
         * the signing CA. For example, if the signing CA key type is RSA, then the
         * certificate key type must also be RSA.</p> </li> </ul> <p>This operation returns
         * the <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
         * Resource Name (ARN)</a> of the imported certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ImportCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCertificateOutcome ImportCertificate(const Model::ImportCertificateRequest& request) const;

        /**
         * A Callable wrapper for ImportCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportCertificateOutcomeCallable ImportCertificateCallable(const Model::ImportCertificateRequest& request) const;

        /**
         * An Async wrapper for ImportCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportCertificateAsync(const Model::ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of certificate ARNs and domain names. You can request that
         * only certificates that match a specific status be listed. You can also filter by
         * specific attributes of the certificate. Default filtering returns only
         * <code>RSA_2048</code> certificates. For more information, see
         * <a>Filters</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ListCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificatesOutcome ListCertificates(const Model::ListCertificatesRequest& request) const;

        /**
         * A Callable wrapper for ListCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificatesOutcomeCallable ListCertificatesCallable(const Model::ListCertificatesRequest& request) const;

        /**
         * An Async wrapper for ListCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificatesAsync(const Model::ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that have been applied to the ACM certificate. Use the
         * certificate's Amazon Resource Name (ARN) to specify the certificate. To add a
         * tag to an ACM certificate, use the <a>AddTagsToCertificate</a> action. To delete
         * a tag, use the <a>RemoveTagsFromCertificate</a> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ListTagsForCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForCertificateOutcome ListTagsForCertificate(const Model::ListTagsForCertificateRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForCertificateOutcomeCallable ListTagsForCertificateCallable(const Model::ListTagsForCertificateRequest& request) const;

        /**
         * An Async wrapper for ListTagsForCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForCertificateAsync(const Model::ListTagsForCertificateRequest& request, const ListTagsForCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or modifies account-level configurations in ACM. </p> <p>The supported
         * configuration option is <code>DaysBeforeExpiry</code>. This option specifies the
         * number of days prior to certificate expiration when ACM starts generating
         * <code>EventBridge</code> events. ACM sends one event per day per certificate
         * until the certificate expires. By default, accounts receive events starting 45
         * days before certificate expiration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/PutAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountConfigurationOutcome PutAccountConfiguration(const Model::PutAccountConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountConfigurationOutcomeCallable PutAccountConfigurationCallable(const Model::PutAccountConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountConfigurationAsync(const Model::PutAccountConfigurationRequest& request, const PutAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove one or more tags from an ACM certificate. A tag consists of a
         * key-value pair. If you do not specify the value portion of the tag when calling
         * this function, the tag will be removed regardless of value. If you specify a
         * value, the tag is removed only if it is associated with the specified value.
         * </p> <p>To add tags to a certificate, use the <a>AddTagsToCertificate</a>
         * action. To view all of the tags that have been applied to a specific ACM
         * certificate, use the <a>ListTagsForCertificate</a> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RemoveTagsFromCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromCertificateOutcome RemoveTagsFromCertificate(const Model::RemoveTagsFromCertificateRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromCertificateOutcomeCallable RemoveTagsFromCertificateCallable(const Model::RemoveTagsFromCertificateRequest& request) const;

        /**
         * An Async wrapper for RemoveTagsFromCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromCertificateAsync(const Model::RemoveTagsFromCertificateRequest& request, const RemoveTagsFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Renews an eligible ACM certificate. At this time, only exported private
         * certificates can be renewed with this operation. In order to renew your Amazon
         * Web Services Private CA certificates with ACM, you must first <a
         * href="https://docs.aws.amazon.com/privateca/latest/userguide/PcaPermissions.html">grant
         * the ACM service principal permission to do so</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/manual-renewal.html">Testing
         * Managed Renewal</a> in the ACM User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RenewCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RenewCertificateOutcome RenewCertificate(const Model::RenewCertificateRequest& request) const;

        /**
         * A Callable wrapper for RenewCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RenewCertificateOutcomeCallable RenewCertificateCallable(const Model::RenewCertificateRequest& request) const;

        /**
         * An Async wrapper for RenewCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RenewCertificateAsync(const Model::RenewCertificateRequest& request, const RenewCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests an ACM certificate for use with other Amazon Web Services services.
         * To request an ACM certificate, you must specify a fully qualified domain name
         * (FQDN) in the <code>DomainName</code> parameter. You can also specify additional
         * FQDNs in the <code>SubjectAlternativeNames</code> parameter. </p> <p>If you are
         * requesting a private certificate, domain validation is not required. If you are
         * requesting a public certificate, each domain name that you specify must be
         * validated to verify that you own or control the domain. You can use <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">DNS
         * validation</a> or <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-email.html">email
         * validation</a>. We recommend that you use DNS validation. ACM issues public
         * certificates after receiving approval from the domain owner. </p>  <p>ACM
         * behavior differs from the <a
         * href="https://datatracker.ietf.org/doc/html/rfc6125#appendix-B.2">RFC 6125</a>
         * specification of the certificate validation process. ACM first checks for a
         * Subject Alternative Name, and, if it finds one, ignores the common name
         * (CN).</p>  <p>After successful completion of the
         * <code>RequestCertificate</code> action, there is a delay of several seconds
         * before you can retrieve information about the new certificate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RequestCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestCertificateOutcome RequestCertificate(const Model::RequestCertificateRequest& request) const;

        /**
         * A Callable wrapper for RequestCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestCertificateOutcomeCallable RequestCertificateCallable(const Model::RequestCertificateRequest& request) const;

        /**
         * An Async wrapper for RequestCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestCertificateAsync(const Model::RequestCertificateRequest& request, const RequestCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resends the email that requests domain ownership validation. The domain owner
         * or an authorized representative must approve the ACM certificate before it can
         * be issued. The certificate can be approved by clicking a link in the mail to
         * navigate to the Amazon certificate approval website and then clicking <b>I
         * Approve</b>. However, the validation email can be blocked by spam filters.
         * Therefore, if you do not receive the original mail, you can request that the
         * mail be resent within 72 hours of requesting the ACM certificate. If more than
         * 72 hours have elapsed since your original request or since your last attempt to
         * resend validation mail, you must request a new certificate. For more information
         * about setting up your contact email addresses, see <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/setup-email.html">Configure
         * Email for your Domain</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ResendValidationEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::ResendValidationEmailOutcome ResendValidationEmail(const Model::ResendValidationEmailRequest& request) const;

        /**
         * A Callable wrapper for ResendValidationEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResendValidationEmailOutcomeCallable ResendValidationEmailCallable(const Model::ResendValidationEmailRequest& request) const;

        /**
         * An Async wrapper for ResendValidationEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResendValidationEmailAsync(const Model::ResendValidationEmailRequest& request, const ResendValidationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a certificate. Currently, you can use this function to specify
         * whether to opt in to or out of recording your certificate in a certificate
         * transparency log. For more information, see <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-bestpractices.html#best-practices-transparency">
         * Opting Out of Certificate Transparency Logging</a>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/UpdateCertificateOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCertificateOptionsOutcome UpdateCertificateOptions(const Model::UpdateCertificateOptionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateCertificateOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCertificateOptionsOutcomeCallable UpdateCertificateOptionsCallable(const Model::UpdateCertificateOptionsRequest& request) const;

        /**
         * An Async wrapper for UpdateCertificateOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCertificateOptionsAsync(const Model::UpdateCertificateOptionsRequest& request, const UpdateCertificateOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ACMEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ACMClient>;
      void init(const ACMClientConfiguration& clientConfiguration);

      ACMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ACMEndpointProviderBase> m_endpointProvider;
  };

} // namespace ACM
} // namespace Aws
