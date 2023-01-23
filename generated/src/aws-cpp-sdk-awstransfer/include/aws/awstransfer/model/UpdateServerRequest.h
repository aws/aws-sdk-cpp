/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/ProtocolDetails.h>
#include <aws/awstransfer/model/EndpointDetails.h>
#include <aws/awstransfer/model/EndpointType.h>
#include <aws/awstransfer/model/IdentityProviderDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/WorkflowDetails.h>
#include <aws/awstransfer/model/Protocol.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class UpdateServerRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API UpdateServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServer"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline UpdateServerRequest& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline UpdateServerRequest& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web ServicesCertificate Manager
     * (ACM) certificate. Required when <code>Protocols</code> is set to
     * <code>FTPS</code>.</p> <p>To request a new public certificate, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
     * a public certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To import an existing certificate into ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into ACM</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>To request a private certificate to use FTPS through private
     * IP addresses, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-private.html">Request
     * a private certificate</a> in the <i> Amazon Web ServicesCertificate Manager User
     * Guide</i>.</p> <p>Certificates with the following cryptographic algorithms and
     * key sizes are supported:</p> <ul> <li> <p>2048-bit RSA (RSA_2048)</p> </li> <li>
     * <p>4096-bit RSA (RSA_4096)</p> </li> <li> <p>Elliptic Prime Curve 256 bit
     * (EC_prime256v1)</p> </li> <li> <p>Elliptic Prime Curve 384 bit
     * (EC_secp384r1)</p> </li> <li> <p>Elliptic Prime Curve 521 bit (EC_secp521r1)</p>
     * </li> </ul>  <p>The certificate must be a valid SSL/TLS X.509 version 3
     * certificate with FQDN or IP address specified and information about the
     * issuer.</p> 
     */
    inline UpdateServerRequest& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>The protocol settings that are configured for your server.</p> <ul> <li> <p>
     * To indicate passive mode (for FTP and FTPS protocols), use the
     * <code>PassiveIp</code> parameter. Enter a single dotted-quad IPv4 address, such
     * as the external IP address of a firewall, router, or load balancer. </p> </li>
     * <li> <p>To ignore the error that is generated when the client attempts to use
     * the <code>SETSTAT</code> command on a file that you are uploading to an Amazon
     * S3 bucket, use the <code>SetStatOption</code> parameter. To have the Transfer
     * Family server ignore the <code>SETSTAT</code> command and upload files without
     * needing to make any changes to your SFTP client, set the value to
     * <code>ENABLE_NO_OP</code>. If you set the <code>SetStatOption</code> parameter
     * to <code>ENABLE_NO_OP</code>, Transfer Family generates a log entry to Amazon
     * CloudWatch Logs, so that you can determine when the client is making a
     * <code>SETSTAT</code> call.</p> </li> <li> <p>To determine whether your Transfer
     * Family server resumes recent, negotiated sessions through a unique session ID,
     * use the <code>TlsSessionResumptionMode</code> parameter.</p> </li> <li> <p>
     * <code>As2Transports</code> indicates the transport method for the AS2 messages.
     * Currently, only HTTP is supported.</p> </li> </ul>
     */
    inline const ProtocolDetails& GetProtocolDetails() const{ return m_protocolDetails; }

    /**
     * <p>The protocol settings that are configured for your server.</p> <ul> <li> <p>
     * To indicate passive mode (for FTP and FTPS protocols), use the
     * <code>PassiveIp</code> parameter. Enter a single dotted-quad IPv4 address, such
     * as the external IP address of a firewall, router, or load balancer. </p> </li>
     * <li> <p>To ignore the error that is generated when the client attempts to use
     * the <code>SETSTAT</code> command on a file that you are uploading to an Amazon
     * S3 bucket, use the <code>SetStatOption</code> parameter. To have the Transfer
     * Family server ignore the <code>SETSTAT</code> command and upload files without
     * needing to make any changes to your SFTP client, set the value to
     * <code>ENABLE_NO_OP</code>. If you set the <code>SetStatOption</code> parameter
     * to <code>ENABLE_NO_OP</code>, Transfer Family generates a log entry to Amazon
     * CloudWatch Logs, so that you can determine when the client is making a
     * <code>SETSTAT</code> call.</p> </li> <li> <p>To determine whether your Transfer
     * Family server resumes recent, negotiated sessions through a unique session ID,
     * use the <code>TlsSessionResumptionMode</code> parameter.</p> </li> <li> <p>
     * <code>As2Transports</code> indicates the transport method for the AS2 messages.
     * Currently, only HTTP is supported.</p> </li> </ul>
     */
    inline bool ProtocolDetailsHasBeenSet() const { return m_protocolDetailsHasBeenSet; }

    /**
     * <p>The protocol settings that are configured for your server.</p> <ul> <li> <p>
     * To indicate passive mode (for FTP and FTPS protocols), use the
     * <code>PassiveIp</code> parameter. Enter a single dotted-quad IPv4 address, such
     * as the external IP address of a firewall, router, or load balancer. </p> </li>
     * <li> <p>To ignore the error that is generated when the client attempts to use
     * the <code>SETSTAT</code> command on a file that you are uploading to an Amazon
     * S3 bucket, use the <code>SetStatOption</code> parameter. To have the Transfer
     * Family server ignore the <code>SETSTAT</code> command and upload files without
     * needing to make any changes to your SFTP client, set the value to
     * <code>ENABLE_NO_OP</code>. If you set the <code>SetStatOption</code> parameter
     * to <code>ENABLE_NO_OP</code>, Transfer Family generates a log entry to Amazon
     * CloudWatch Logs, so that you can determine when the client is making a
     * <code>SETSTAT</code> call.</p> </li> <li> <p>To determine whether your Transfer
     * Family server resumes recent, negotiated sessions through a unique session ID,
     * use the <code>TlsSessionResumptionMode</code> parameter.</p> </li> <li> <p>
     * <code>As2Transports</code> indicates the transport method for the AS2 messages.
     * Currently, only HTTP is supported.</p> </li> </ul>
     */
    inline void SetProtocolDetails(const ProtocolDetails& value) { m_protocolDetailsHasBeenSet = true; m_protocolDetails = value; }

    /**
     * <p>The protocol settings that are configured for your server.</p> <ul> <li> <p>
     * To indicate passive mode (for FTP and FTPS protocols), use the
     * <code>PassiveIp</code> parameter. Enter a single dotted-quad IPv4 address, such
     * as the external IP address of a firewall, router, or load balancer. </p> </li>
     * <li> <p>To ignore the error that is generated when the client attempts to use
     * the <code>SETSTAT</code> command on a file that you are uploading to an Amazon
     * S3 bucket, use the <code>SetStatOption</code> parameter. To have the Transfer
     * Family server ignore the <code>SETSTAT</code> command and upload files without
     * needing to make any changes to your SFTP client, set the value to
     * <code>ENABLE_NO_OP</code>. If you set the <code>SetStatOption</code> parameter
     * to <code>ENABLE_NO_OP</code>, Transfer Family generates a log entry to Amazon
     * CloudWatch Logs, so that you can determine when the client is making a
     * <code>SETSTAT</code> call.</p> </li> <li> <p>To determine whether your Transfer
     * Family server resumes recent, negotiated sessions through a unique session ID,
     * use the <code>TlsSessionResumptionMode</code> parameter.</p> </li> <li> <p>
     * <code>As2Transports</code> indicates the transport method for the AS2 messages.
     * Currently, only HTTP is supported.</p> </li> </ul>
     */
    inline void SetProtocolDetails(ProtocolDetails&& value) { m_protocolDetailsHasBeenSet = true; m_protocolDetails = std::move(value); }

    /**
     * <p>The protocol settings that are configured for your server.</p> <ul> <li> <p>
     * To indicate passive mode (for FTP and FTPS protocols), use the
     * <code>PassiveIp</code> parameter. Enter a single dotted-quad IPv4 address, such
     * as the external IP address of a firewall, router, or load balancer. </p> </li>
     * <li> <p>To ignore the error that is generated when the client attempts to use
     * the <code>SETSTAT</code> command on a file that you are uploading to an Amazon
     * S3 bucket, use the <code>SetStatOption</code> parameter. To have the Transfer
     * Family server ignore the <code>SETSTAT</code> command and upload files without
     * needing to make any changes to your SFTP client, set the value to
     * <code>ENABLE_NO_OP</code>. If you set the <code>SetStatOption</code> parameter
     * to <code>ENABLE_NO_OP</code>, Transfer Family generates a log entry to Amazon
     * CloudWatch Logs, so that you can determine when the client is making a
     * <code>SETSTAT</code> call.</p> </li> <li> <p>To determine whether your Transfer
     * Family server resumes recent, negotiated sessions through a unique session ID,
     * use the <code>TlsSessionResumptionMode</code> parameter.</p> </li> <li> <p>
     * <code>As2Transports</code> indicates the transport method for the AS2 messages.
     * Currently, only HTTP is supported.</p> </li> </ul>
     */
    inline UpdateServerRequest& WithProtocolDetails(const ProtocolDetails& value) { SetProtocolDetails(value); return *this;}

    /**
     * <p>The protocol settings that are configured for your server.</p> <ul> <li> <p>
     * To indicate passive mode (for FTP and FTPS protocols), use the
     * <code>PassiveIp</code> parameter. Enter a single dotted-quad IPv4 address, such
     * as the external IP address of a firewall, router, or load balancer. </p> </li>
     * <li> <p>To ignore the error that is generated when the client attempts to use
     * the <code>SETSTAT</code> command on a file that you are uploading to an Amazon
     * S3 bucket, use the <code>SetStatOption</code> parameter. To have the Transfer
     * Family server ignore the <code>SETSTAT</code> command and upload files without
     * needing to make any changes to your SFTP client, set the value to
     * <code>ENABLE_NO_OP</code>. If you set the <code>SetStatOption</code> parameter
     * to <code>ENABLE_NO_OP</code>, Transfer Family generates a log entry to Amazon
     * CloudWatch Logs, so that you can determine when the client is making a
     * <code>SETSTAT</code> call.</p> </li> <li> <p>To determine whether your Transfer
     * Family server resumes recent, negotiated sessions through a unique session ID,
     * use the <code>TlsSessionResumptionMode</code> parameter.</p> </li> <li> <p>
     * <code>As2Transports</code> indicates the transport method for the AS2 messages.
     * Currently, only HTTP is supported.</p> </li> </ul>
     */
    inline UpdateServerRequest& WithProtocolDetails(ProtocolDetails&& value) { SetProtocolDetails(std::move(value)); return *this;}


    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make your
     * endpoint accessible only to resources within your VPC, or you can attach Elastic
     * IP addresses and make your endpoint accessible to clients over the internet.
     * Your VPC's default security groups are automatically assigned to your
     * endpoint.</p>
     */
    inline const EndpointDetails& GetEndpointDetails() const{ return m_endpointDetails; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make your
     * endpoint accessible only to resources within your VPC, or you can attach Elastic
     * IP addresses and make your endpoint accessible to clients over the internet.
     * Your VPC's default security groups are automatically assigned to your
     * endpoint.</p>
     */
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make your
     * endpoint accessible only to resources within your VPC, or you can attach Elastic
     * IP addresses and make your endpoint accessible to clients over the internet.
     * Your VPC's default security groups are automatically assigned to your
     * endpoint.</p>
     */
    inline void SetEndpointDetails(const EndpointDetails& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = value; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make your
     * endpoint accessible only to resources within your VPC, or you can attach Elastic
     * IP addresses and make your endpoint accessible to clients over the internet.
     * Your VPC's default security groups are automatically assigned to your
     * endpoint.</p>
     */
    inline void SetEndpointDetails(EndpointDetails&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make your
     * endpoint accessible only to resources within your VPC, or you can attach Elastic
     * IP addresses and make your endpoint accessible to clients over the internet.
     * Your VPC's default security groups are automatically assigned to your
     * endpoint.</p>
     */
    inline UpdateServerRequest& WithEndpointDetails(const EndpointDetails& value) { SetEndpointDetails(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that are configured for
     * your server. When you host your endpoint within your VPC, you can make your
     * endpoint accessible only to resources within your VPC, or you can attach Elastic
     * IP addresses and make your endpoint accessible to clients over the internet.
     * Your VPC's default security groups are automatically assigned to your
     * endpoint.</p>
     */
    inline UpdateServerRequest& WithEndpointDetails(EndpointDetails&& value) { SetEndpointDetails(std::move(value)); return *this;}


    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline UpdateServerRequest& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint that you want your server to use. You can choose to make
     * your server's endpoint publicly accessible (PUBLIC) or host it inside your VPC.
     * With an endpoint that is hosted in a VPC, you can restrict access to your server
     * and resources only within your VPC or choose to make it internet facing by
     * attaching Elastic IP addresses directly to it.</p>  <p> After May 19,
     * 2021, you won't be able to create a server using
     * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
     * your account hasn't already done so before May 19, 2021. If you have already
     * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
     * Servicesaccount on or before May 19, 2021, you will not be affected. After this
     * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
     * information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * <p>It is recommended that you use <code>VPC</code> as the
     * <code>EndpointType</code>. With this endpoint type, you have the option to
     * directly associate up to three Elastic IPv4 addresses (BYO IP included) with
     * your server's endpoint and use VPC security groups to restrict traffic by the
     * client's public IP address. This is not possible with <code>EndpointType</code>
     * set to <code>VPC_ENDPOINT</code>.</p> 
     */
    inline UpdateServerRequest& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The RSA, ECDSA, or ED25519 private key to use for your SFTP-enabled server.
     * You can add multiple host keys, in case you want to rotate keys, or have a set
     * of active keys that use different algorithms.</p> <p>Use the following command
     * to generate an RSA 2048 bit key with no passphrase:</p> <p> <code>ssh-keygen -t
     * rsa -b 2048 -N "" -m PEM -f my-new-server-key</code>.</p> <p>Use a minimum value
     * of 2048 for the <code>-b</code> option. You can create a stronger key by using
     * 3072 or 4096.</p> <p>Use the following command to generate an ECDSA 256 bit key
     * with no passphrase:</p> <p> <code>ssh-keygen -t ecdsa -b 256 -N "" -m PEM -f
     * my-new-server-key</code>.</p> <p>Valid values for the <code>-b</code> option for
     * ECDSA are 256, 384, and 521.</p> <p>Use the following command to generate an
     * ED25519 key with no passphrase:</p> <p> <code>ssh-keygen -t ed25519 -N "" -f
     * my-new-server-key</code>.</p> <p>For all of these commands, you can replace
     * <i>my-new-server-key</i> with a string of your choice.</p>  <p>If you
     * aren't planning to migrate existing users from an existing SFTP-enabled server
     * to a new server, don't update the host key. Accidentally changing a server's
     * host key can be disruptive.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Update
     * host keys for your SFTP-enabled server</a> in the <i>Transfer Family User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetHostKey() const{ return m_hostKey; }

    /**
     * <p>The RSA, ECDSA, or ED25519 private key to use for your SFTP-enabled server.
     * You can add multiple host keys, in case you want to rotate keys, or have a set
     * of active keys that use different algorithms.</p> <p>Use the following command
     * to generate an RSA 2048 bit key with no passphrase:</p> <p> <code>ssh-keygen -t
     * rsa -b 2048 -N "" -m PEM -f my-new-server-key</code>.</p> <p>Use a minimum value
     * of 2048 for the <code>-b</code> option. You can create a stronger key by using
     * 3072 or 4096.</p> <p>Use the following command to generate an ECDSA 256 bit key
     * with no passphrase:</p> <p> <code>ssh-keygen -t ecdsa -b 256 -N "" -m PEM -f
     * my-new-server-key</code>.</p> <p>Valid values for the <code>-b</code> option for
     * ECDSA are 256, 384, and 521.</p> <p>Use the following command to generate an
     * ED25519 key with no passphrase:</p> <p> <code>ssh-keygen -t ed25519 -N "" -f
     * my-new-server-key</code>.</p> <p>For all of these commands, you can replace
     * <i>my-new-server-key</i> with a string of your choice.</p>  <p>If you
     * aren't planning to migrate existing users from an existing SFTP-enabled server
     * to a new server, don't update the host key. Accidentally changing a server's
     * host key can be disruptive.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Update
     * host keys for your SFTP-enabled server</a> in the <i>Transfer Family User
     * Guide</i>.</p>
     */
    inline bool HostKeyHasBeenSet() const { return m_hostKeyHasBeenSet; }

    /**
     * <p>The RSA, ECDSA, or ED25519 private key to use for your SFTP-enabled server.
     * You can add multiple host keys, in case you want to rotate keys, or have a set
     * of active keys that use different algorithms.</p> <p>Use the following command
     * to generate an RSA 2048 bit key with no passphrase:</p> <p> <code>ssh-keygen -t
     * rsa -b 2048 -N "" -m PEM -f my-new-server-key</code>.</p> <p>Use a minimum value
     * of 2048 for the <code>-b</code> option. You can create a stronger key by using
     * 3072 or 4096.</p> <p>Use the following command to generate an ECDSA 256 bit key
     * with no passphrase:</p> <p> <code>ssh-keygen -t ecdsa -b 256 -N "" -m PEM -f
     * my-new-server-key</code>.</p> <p>Valid values for the <code>-b</code> option for
     * ECDSA are 256, 384, and 521.</p> <p>Use the following command to generate an
     * ED25519 key with no passphrase:</p> <p> <code>ssh-keygen -t ed25519 -N "" -f
     * my-new-server-key</code>.</p> <p>For all of these commands, you can replace
     * <i>my-new-server-key</i> with a string of your choice.</p>  <p>If you
     * aren't planning to migrate existing users from an existing SFTP-enabled server
     * to a new server, don't update the host key. Accidentally changing a server's
     * host key can be disruptive.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Update
     * host keys for your SFTP-enabled server</a> in the <i>Transfer Family User
     * Guide</i>.</p>
     */
    inline void SetHostKey(const Aws::String& value) { m_hostKeyHasBeenSet = true; m_hostKey = value; }

    /**
     * <p>The RSA, ECDSA, or ED25519 private key to use for your SFTP-enabled server.
     * You can add multiple host keys, in case you want to rotate keys, or have a set
     * of active keys that use different algorithms.</p> <p>Use the following command
     * to generate an RSA 2048 bit key with no passphrase:</p> <p> <code>ssh-keygen -t
     * rsa -b 2048 -N "" -m PEM -f my-new-server-key</code>.</p> <p>Use a minimum value
     * of 2048 for the <code>-b</code> option. You can create a stronger key by using
     * 3072 or 4096.</p> <p>Use the following command to generate an ECDSA 256 bit key
     * with no passphrase:</p> <p> <code>ssh-keygen -t ecdsa -b 256 -N "" -m PEM -f
     * my-new-server-key</code>.</p> <p>Valid values for the <code>-b</code> option for
     * ECDSA are 256, 384, and 521.</p> <p>Use the following command to generate an
     * ED25519 key with no passphrase:</p> <p> <code>ssh-keygen -t ed25519 -N "" -f
     * my-new-server-key</code>.</p> <p>For all of these commands, you can replace
     * <i>my-new-server-key</i> with a string of your choice.</p>  <p>If you
     * aren't planning to migrate existing users from an existing SFTP-enabled server
     * to a new server, don't update the host key. Accidentally changing a server's
     * host key can be disruptive.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Update
     * host keys for your SFTP-enabled server</a> in the <i>Transfer Family User
     * Guide</i>.</p>
     */
    inline void SetHostKey(Aws::String&& value) { m_hostKeyHasBeenSet = true; m_hostKey = std::move(value); }

    /**
     * <p>The RSA, ECDSA, or ED25519 private key to use for your SFTP-enabled server.
     * You can add multiple host keys, in case you want to rotate keys, or have a set
     * of active keys that use different algorithms.</p> <p>Use the following command
     * to generate an RSA 2048 bit key with no passphrase:</p> <p> <code>ssh-keygen -t
     * rsa -b 2048 -N "" -m PEM -f my-new-server-key</code>.</p> <p>Use a minimum value
     * of 2048 for the <code>-b</code> option. You can create a stronger key by using
     * 3072 or 4096.</p> <p>Use the following command to generate an ECDSA 256 bit key
     * with no passphrase:</p> <p> <code>ssh-keygen -t ecdsa -b 256 -N "" -m PEM -f
     * my-new-server-key</code>.</p> <p>Valid values for the <code>-b</code> option for
     * ECDSA are 256, 384, and 521.</p> <p>Use the following command to generate an
     * ED25519 key with no passphrase:</p> <p> <code>ssh-keygen -t ed25519 -N "" -f
     * my-new-server-key</code>.</p> <p>For all of these commands, you can replace
     * <i>my-new-server-key</i> with a string of your choice.</p>  <p>If you
     * aren't planning to migrate existing users from an existing SFTP-enabled server
     * to a new server, don't update the host key. Accidentally changing a server's
     * host key can be disruptive.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Update
     * host keys for your SFTP-enabled server</a> in the <i>Transfer Family User
     * Guide</i>.</p>
     */
    inline void SetHostKey(const char* value) { m_hostKeyHasBeenSet = true; m_hostKey.assign(value); }

    /**
     * <p>The RSA, ECDSA, or ED25519 private key to use for your SFTP-enabled server.
     * You can add multiple host keys, in case you want to rotate keys, or have a set
     * of active keys that use different algorithms.</p> <p>Use the following command
     * to generate an RSA 2048 bit key with no passphrase:</p> <p> <code>ssh-keygen -t
     * rsa -b 2048 -N "" -m PEM -f my-new-server-key</code>.</p> <p>Use a minimum value
     * of 2048 for the <code>-b</code> option. You can create a stronger key by using
     * 3072 or 4096.</p> <p>Use the following command to generate an ECDSA 256 bit key
     * with no passphrase:</p> <p> <code>ssh-keygen -t ecdsa -b 256 -N "" -m PEM -f
     * my-new-server-key</code>.</p> <p>Valid values for the <code>-b</code> option for
     * ECDSA are 256, 384, and 521.</p> <p>Use the following command to generate an
     * ED25519 key with no passphrase:</p> <p> <code>ssh-keygen -t ed25519 -N "" -f
     * my-new-server-key</code>.</p> <p>For all of these commands, you can replace
     * <i>my-new-server-key</i> with a string of your choice.</p>  <p>If you
     * aren't planning to migrate existing users from an existing SFTP-enabled server
     * to a new server, don't update the host key. Accidentally changing a server's
     * host key can be disruptive.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Update
     * host keys for your SFTP-enabled server</a> in the <i>Transfer Family User
     * Guide</i>.</p>
     */
    inline UpdateServerRequest& WithHostKey(const Aws::String& value) { SetHostKey(value); return *this;}

    /**
     * <p>The RSA, ECDSA, or ED25519 private key to use for your SFTP-enabled server.
     * You can add multiple host keys, in case you want to rotate keys, or have a set
     * of active keys that use different algorithms.</p> <p>Use the following command
     * to generate an RSA 2048 bit key with no passphrase:</p> <p> <code>ssh-keygen -t
     * rsa -b 2048 -N "" -m PEM -f my-new-server-key</code>.</p> <p>Use a minimum value
     * of 2048 for the <code>-b</code> option. You can create a stronger key by using
     * 3072 or 4096.</p> <p>Use the following command to generate an ECDSA 256 bit key
     * with no passphrase:</p> <p> <code>ssh-keygen -t ecdsa -b 256 -N "" -m PEM -f
     * my-new-server-key</code>.</p> <p>Valid values for the <code>-b</code> option for
     * ECDSA are 256, 384, and 521.</p> <p>Use the following command to generate an
     * ED25519 key with no passphrase:</p> <p> <code>ssh-keygen -t ed25519 -N "" -f
     * my-new-server-key</code>.</p> <p>For all of these commands, you can replace
     * <i>my-new-server-key</i> with a string of your choice.</p>  <p>If you
     * aren't planning to migrate existing users from an existing SFTP-enabled server
     * to a new server, don't update the host key. Accidentally changing a server's
     * host key can be disruptive.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Update
     * host keys for your SFTP-enabled server</a> in the <i>Transfer Family User
     * Guide</i>.</p>
     */
    inline UpdateServerRequest& WithHostKey(Aws::String&& value) { SetHostKey(std::move(value)); return *this;}

    /**
     * <p>The RSA, ECDSA, or ED25519 private key to use for your SFTP-enabled server.
     * You can add multiple host keys, in case you want to rotate keys, or have a set
     * of active keys that use different algorithms.</p> <p>Use the following command
     * to generate an RSA 2048 bit key with no passphrase:</p> <p> <code>ssh-keygen -t
     * rsa -b 2048 -N "" -m PEM -f my-new-server-key</code>.</p> <p>Use a minimum value
     * of 2048 for the <code>-b</code> option. You can create a stronger key by using
     * 3072 or 4096.</p> <p>Use the following command to generate an ECDSA 256 bit key
     * with no passphrase:</p> <p> <code>ssh-keygen -t ecdsa -b 256 -N "" -m PEM -f
     * my-new-server-key</code>.</p> <p>Valid values for the <code>-b</code> option for
     * ECDSA are 256, 384, and 521.</p> <p>Use the following command to generate an
     * ED25519 key with no passphrase:</p> <p> <code>ssh-keygen -t ed25519 -N "" -f
     * my-new-server-key</code>.</p> <p>For all of these commands, you can replace
     * <i>my-new-server-key</i> with a string of your choice.</p>  <p>If you
     * aren't planning to migrate existing users from an existing SFTP-enabled server
     * to a new server, don't update the host key. Accidentally changing a server's
     * host key can be disruptive.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/edit-server-config.html#configuring-servers-change-host-key">Update
     * host keys for your SFTP-enabled server</a> in the <i>Transfer Family User
     * Guide</i>.</p>
     */
    inline UpdateServerRequest& WithHostKey(const char* value) { SetHostKey(value); return *this;}


    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline const IdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline void SetIdentityProviderDetails(const IdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline void SetIdentityProviderDetails(IdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline UpdateServerRequest& WithIdentityProviderDetails(const IdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}

    /**
     * <p>An array containing all of the information required to call a customer's
     * authentication API method.</p>
     */
    inline UpdateServerRequest& WithIdentityProviderDetails(IdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline UpdateServerRequest& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline const Aws::String& GetPostAuthenticationLoginBanner() const{ return m_postAuthenticationLoginBanner; }

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline bool PostAuthenticationLoginBannerHasBeenSet() const { return m_postAuthenticationLoginBannerHasBeenSet; }

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline void SetPostAuthenticationLoginBanner(const Aws::String& value) { m_postAuthenticationLoginBannerHasBeenSet = true; m_postAuthenticationLoginBanner = value; }

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline void SetPostAuthenticationLoginBanner(Aws::String&& value) { m_postAuthenticationLoginBannerHasBeenSet = true; m_postAuthenticationLoginBanner = std::move(value); }

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline void SetPostAuthenticationLoginBanner(const char* value) { m_postAuthenticationLoginBannerHasBeenSet = true; m_postAuthenticationLoginBanner.assign(value); }

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline UpdateServerRequest& WithPostAuthenticationLoginBanner(const Aws::String& value) { SetPostAuthenticationLoginBanner(value); return *this;}

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline UpdateServerRequest& WithPostAuthenticationLoginBanner(Aws::String&& value) { SetPostAuthenticationLoginBanner(std::move(value)); return *this;}

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed after the user authenticates.</p>  <p>The SFTP protocol does not
     * support post-authentication display banners.</p> 
     */
    inline UpdateServerRequest& WithPostAuthenticationLoginBanner(const char* value) { SetPostAuthenticationLoginBanner(value); return *this;}


    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system:</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline const Aws::String& GetPreAuthenticationLoginBanner() const{ return m_preAuthenticationLoginBanner; }

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system:</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline bool PreAuthenticationLoginBannerHasBeenSet() const { return m_preAuthenticationLoginBannerHasBeenSet; }

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system:</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline void SetPreAuthenticationLoginBanner(const Aws::String& value) { m_preAuthenticationLoginBannerHasBeenSet = true; m_preAuthenticationLoginBanner = value; }

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system:</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline void SetPreAuthenticationLoginBanner(Aws::String&& value) { m_preAuthenticationLoginBannerHasBeenSet = true; m_preAuthenticationLoginBanner = std::move(value); }

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system:</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline void SetPreAuthenticationLoginBanner(const char* value) { m_preAuthenticationLoginBannerHasBeenSet = true; m_preAuthenticationLoginBanner.assign(value); }

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system:</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline UpdateServerRequest& WithPreAuthenticationLoginBanner(const Aws::String& value) { SetPreAuthenticationLoginBanner(value); return *this;}

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system:</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline UpdateServerRequest& WithPreAuthenticationLoginBanner(Aws::String&& value) { SetPreAuthenticationLoginBanner(std::move(value)); return *this;}

    /**
     * <p>Specifies a string to display when users connect to a server. This string is
     * displayed before the user authenticates. For example, the following banner
     * displays details about using the system:</p> <p> <code>This system is for the
     * use of authorized users only. Individuals using this computer system without
     * authority, or in excess of their authority, are subject to having all of their
     * activities on this system monitored and recorded by system personnel.</code>
     * </p>
     */
    inline UpdateServerRequest& WithPreAuthenticationLoginBanner(const char* value) { SetPreAuthenticationLoginBanner(value); return *this;}


    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> <li> <p> <code>AS2</code> (Applicability Statement 2): used
     * for transporting structured business-to-business data</p> </li> </ul> 
     * <ul> <li> <p>If you select <code>FTPS</code>, you must choose a certificate
     * stored in Certificate Manager (ACM) which is used to identify your server when
     * clients connect to it over FTPS.</p> </li> <li> <p>If <code>Protocol</code>
     * includes either <code>FTP</code> or <code>FTPS</code>, then the
     * <code>EndpointType</code> must be <code>VPC</code> and the
     * <code>IdentityProviderType</code> must be <code>AWS_DIRECTORY_SERVICE</code> or
     * <code>API_GATEWAY</code>.</p> </li> <li> <p>If <code>Protocol</code> includes
     * <code>FTP</code>, then <code>AddressAllocationIds</code> cannot be
     * associated.</p> </li> <li> <p>If <code>Protocol</code> is set only to
     * <code>SFTP</code>, the <code>EndpointType</code> can be set to
     * <code>PUBLIC</code> and the <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> </li> <li> <p>If <code>Protocol</code>
     * includes <code>AS2</code>, then the <code>EndpointType</code> must be
     * <code>VPC</code>, and domain must be Amazon S3.</p> </li> </ul> 
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> <li> <p> <code>AS2</code> (Applicability Statement 2): used
     * for transporting structured business-to-business data</p> </li> </ul> 
     * <ul> <li> <p>If you select <code>FTPS</code>, you must choose a certificate
     * stored in Certificate Manager (ACM) which is used to identify your server when
     * clients connect to it over FTPS.</p> </li> <li> <p>If <code>Protocol</code>
     * includes either <code>FTP</code> or <code>FTPS</code>, then the
     * <code>EndpointType</code> must be <code>VPC</code> and the
     * <code>IdentityProviderType</code> must be <code>AWS_DIRECTORY_SERVICE</code> or
     * <code>API_GATEWAY</code>.</p> </li> <li> <p>If <code>Protocol</code> includes
     * <code>FTP</code>, then <code>AddressAllocationIds</code> cannot be
     * associated.</p> </li> <li> <p>If <code>Protocol</code> is set only to
     * <code>SFTP</code>, the <code>EndpointType</code> can be set to
     * <code>PUBLIC</code> and the <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> </li> <li> <p>If <code>Protocol</code>
     * includes <code>AS2</code>, then the <code>EndpointType</code> must be
     * <code>VPC</code>, and domain must be Amazon S3.</p> </li> </ul> 
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> <li> <p> <code>AS2</code> (Applicability Statement 2): used
     * for transporting structured business-to-business data</p> </li> </ul> 
     * <ul> <li> <p>If you select <code>FTPS</code>, you must choose a certificate
     * stored in Certificate Manager (ACM) which is used to identify your server when
     * clients connect to it over FTPS.</p> </li> <li> <p>If <code>Protocol</code>
     * includes either <code>FTP</code> or <code>FTPS</code>, then the
     * <code>EndpointType</code> must be <code>VPC</code> and the
     * <code>IdentityProviderType</code> must be <code>AWS_DIRECTORY_SERVICE</code> or
     * <code>API_GATEWAY</code>.</p> </li> <li> <p>If <code>Protocol</code> includes
     * <code>FTP</code>, then <code>AddressAllocationIds</code> cannot be
     * associated.</p> </li> <li> <p>If <code>Protocol</code> is set only to
     * <code>SFTP</code>, the <code>EndpointType</code> can be set to
     * <code>PUBLIC</code> and the <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> </li> <li> <p>If <code>Protocol</code>
     * includes <code>AS2</code>, then the <code>EndpointType</code> must be
     * <code>VPC</code>, and domain must be Amazon S3.</p> </li> </ul> 
     */
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> <li> <p> <code>AS2</code> (Applicability Statement 2): used
     * for transporting structured business-to-business data</p> </li> </ul> 
     * <ul> <li> <p>If you select <code>FTPS</code>, you must choose a certificate
     * stored in Certificate Manager (ACM) which is used to identify your server when
     * clients connect to it over FTPS.</p> </li> <li> <p>If <code>Protocol</code>
     * includes either <code>FTP</code> or <code>FTPS</code>, then the
     * <code>EndpointType</code> must be <code>VPC</code> and the
     * <code>IdentityProviderType</code> must be <code>AWS_DIRECTORY_SERVICE</code> or
     * <code>API_GATEWAY</code>.</p> </li> <li> <p>If <code>Protocol</code> includes
     * <code>FTP</code>, then <code>AddressAllocationIds</code> cannot be
     * associated.</p> </li> <li> <p>If <code>Protocol</code> is set only to
     * <code>SFTP</code>, the <code>EndpointType</code> can be set to
     * <code>PUBLIC</code> and the <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> </li> <li> <p>If <code>Protocol</code>
     * includes <code>AS2</code>, then the <code>EndpointType</code> must be
     * <code>VPC</code>, and domain must be Amazon S3.</p> </li> </ul> 
     */
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> <li> <p> <code>AS2</code> (Applicability Statement 2): used
     * for transporting structured business-to-business data</p> </li> </ul> 
     * <ul> <li> <p>If you select <code>FTPS</code>, you must choose a certificate
     * stored in Certificate Manager (ACM) which is used to identify your server when
     * clients connect to it over FTPS.</p> </li> <li> <p>If <code>Protocol</code>
     * includes either <code>FTP</code> or <code>FTPS</code>, then the
     * <code>EndpointType</code> must be <code>VPC</code> and the
     * <code>IdentityProviderType</code> must be <code>AWS_DIRECTORY_SERVICE</code> or
     * <code>API_GATEWAY</code>.</p> </li> <li> <p>If <code>Protocol</code> includes
     * <code>FTP</code>, then <code>AddressAllocationIds</code> cannot be
     * associated.</p> </li> <li> <p>If <code>Protocol</code> is set only to
     * <code>SFTP</code>, the <code>EndpointType</code> can be set to
     * <code>PUBLIC</code> and the <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> </li> <li> <p>If <code>Protocol</code>
     * includes <code>AS2</code>, then the <code>EndpointType</code> must be
     * <code>VPC</code>, and domain must be Amazon S3.</p> </li> </ul> 
     */
    inline UpdateServerRequest& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> <li> <p> <code>AS2</code> (Applicability Statement 2): used
     * for transporting structured business-to-business data</p> </li> </ul> 
     * <ul> <li> <p>If you select <code>FTPS</code>, you must choose a certificate
     * stored in Certificate Manager (ACM) which is used to identify your server when
     * clients connect to it over FTPS.</p> </li> <li> <p>If <code>Protocol</code>
     * includes either <code>FTP</code> or <code>FTPS</code>, then the
     * <code>EndpointType</code> must be <code>VPC</code> and the
     * <code>IdentityProviderType</code> must be <code>AWS_DIRECTORY_SERVICE</code> or
     * <code>API_GATEWAY</code>.</p> </li> <li> <p>If <code>Protocol</code> includes
     * <code>FTP</code>, then <code>AddressAllocationIds</code> cannot be
     * associated.</p> </li> <li> <p>If <code>Protocol</code> is set only to
     * <code>SFTP</code>, the <code>EndpointType</code> can be set to
     * <code>PUBLIC</code> and the <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> </li> <li> <p>If <code>Protocol</code>
     * includes <code>AS2</code>, then the <code>EndpointType</code> must be
     * <code>VPC</code>, and domain must be Amazon S3.</p> </li> </ul> 
     */
    inline UpdateServerRequest& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> <li> <p> <code>AS2</code> (Applicability Statement 2): used
     * for transporting structured business-to-business data</p> </li> </ul> 
     * <ul> <li> <p>If you select <code>FTPS</code>, you must choose a certificate
     * stored in Certificate Manager (ACM) which is used to identify your server when
     * clients connect to it over FTPS.</p> </li> <li> <p>If <code>Protocol</code>
     * includes either <code>FTP</code> or <code>FTPS</code>, then the
     * <code>EndpointType</code> must be <code>VPC</code> and the
     * <code>IdentityProviderType</code> must be <code>AWS_DIRECTORY_SERVICE</code> or
     * <code>API_GATEWAY</code>.</p> </li> <li> <p>If <code>Protocol</code> includes
     * <code>FTP</code>, then <code>AddressAllocationIds</code> cannot be
     * associated.</p> </li> <li> <p>If <code>Protocol</code> is set only to
     * <code>SFTP</code>, the <code>EndpointType</code> can be set to
     * <code>PUBLIC</code> and the <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> </li> <li> <p>If <code>Protocol</code>
     * includes <code>AS2</code>, then the <code>EndpointType</code> must be
     * <code>VPC</code>, and domain must be Amazon S3.</p> </li> </ul> 
     */
    inline UpdateServerRequest& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>Specifies the file transfer protocol or protocols over which your file
     * transfer protocol client can connect to your server's endpoint. The available
     * protocols are:</p> <ul> <li> <p> <code>SFTP</code> (Secure Shell (SSH) File
     * Transfer Protocol): File transfer over SSH</p> </li> <li> <p> <code>FTPS</code>
     * (File Transfer Protocol Secure): File transfer with TLS encryption</p> </li>
     * <li> <p> <code>FTP</code> (File Transfer Protocol): Unencrypted file
     * transfer</p> </li> <li> <p> <code>AS2</code> (Applicability Statement 2): used
     * for transporting structured business-to-business data</p> </li> </ul> 
     * <ul> <li> <p>If you select <code>FTPS</code>, you must choose a certificate
     * stored in Certificate Manager (ACM) which is used to identify your server when
     * clients connect to it over FTPS.</p> </li> <li> <p>If <code>Protocol</code>
     * includes either <code>FTP</code> or <code>FTPS</code>, then the
     * <code>EndpointType</code> must be <code>VPC</code> and the
     * <code>IdentityProviderType</code> must be <code>AWS_DIRECTORY_SERVICE</code> or
     * <code>API_GATEWAY</code>.</p> </li> <li> <p>If <code>Protocol</code> includes
     * <code>FTP</code>, then <code>AddressAllocationIds</code> cannot be
     * associated.</p> </li> <li> <p>If <code>Protocol</code> is set only to
     * <code>SFTP</code>, the <code>EndpointType</code> can be set to
     * <code>PUBLIC</code> and the <code>IdentityProviderType</code> can be set to
     * <code>SERVICE_MANAGED</code>.</p> </li> <li> <p>If <code>Protocol</code>
     * includes <code>AS2</code>, then the <code>EndpointType</code> must be
     * <code>VPC</code>, and domain must be Amazon S3.</p> </li> </ul> 
     */
    inline UpdateServerRequest& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline const Aws::String& GetSecurityPolicyName() const{ return m_securityPolicyName; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline bool SecurityPolicyNameHasBeenSet() const { return m_securityPolicyNameHasBeenSet; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(const Aws::String& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = value; }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(Aws::String&& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = std::move(value); }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline void SetSecurityPolicyName(const char* value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName.assign(value); }

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline UpdateServerRequest& WithSecurityPolicyName(const Aws::String& value) { SetSecurityPolicyName(value); return *this;}

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline UpdateServerRequest& WithSecurityPolicyName(Aws::String&& value) { SetSecurityPolicyName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the security policy that is attached to the server.</p>
     */
    inline UpdateServerRequest& WithSecurityPolicyName(const char* value) { SetSecurityPolicyName(value); return *this;}


    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateServerRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * that's used for executing the workflow.</p> <p>In additon to a workflow to
     * execute when a file is uploaded completely, <code>WorkflowDeatails</code> can
     * also contain a workflow ID (and execution role) for a workflow to execute on
     * partial upload. A partial upload occurs when a file is open when the session
     * disconnects.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline const WorkflowDetails& GetWorkflowDetails() const{ return m_workflowDetails; }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * that's used for executing the workflow.</p> <p>In additon to a workflow to
     * execute when a file is uploaded completely, <code>WorkflowDeatails</code> can
     * also contain a workflow ID (and execution role) for a workflow to execute on
     * partial upload. A partial upload occurs when a file is open when the session
     * disconnects.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline bool WorkflowDetailsHasBeenSet() const { return m_workflowDetailsHasBeenSet; }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * that's used for executing the workflow.</p> <p>In additon to a workflow to
     * execute when a file is uploaded completely, <code>WorkflowDeatails</code> can
     * also contain a workflow ID (and execution role) for a workflow to execute on
     * partial upload. A partial upload occurs when a file is open when the session
     * disconnects.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline void SetWorkflowDetails(const WorkflowDetails& value) { m_workflowDetailsHasBeenSet = true; m_workflowDetails = value; }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * that's used for executing the workflow.</p> <p>In additon to a workflow to
     * execute when a file is uploaded completely, <code>WorkflowDeatails</code> can
     * also contain a workflow ID (and execution role) for a workflow to execute on
     * partial upload. A partial upload occurs when a file is open when the session
     * disconnects.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline void SetWorkflowDetails(WorkflowDetails&& value) { m_workflowDetailsHasBeenSet = true; m_workflowDetails = std::move(value); }

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * that's used for executing the workflow.</p> <p>In additon to a workflow to
     * execute when a file is uploaded completely, <code>WorkflowDeatails</code> can
     * also contain a workflow ID (and execution role) for a workflow to execute on
     * partial upload. A partial upload occurs when a file is open when the session
     * disconnects.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline UpdateServerRequest& WithWorkflowDetails(const WorkflowDetails& value) { SetWorkflowDetails(value); return *this;}

    /**
     * <p>Specifies the workflow ID for the workflow to assign and the execution role
     * that's used for executing the workflow.</p> <p>In additon to a workflow to
     * execute when a file is uploaded completely, <code>WorkflowDeatails</code> can
     * also contain a workflow ID (and execution role) for a workflow to execute on
     * partial upload. A partial upload occurs when a file is open when the session
     * disconnects.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline UpdateServerRequest& WithWorkflowDetails(WorkflowDetails&& value) { SetWorkflowDetails(std::move(value)); return *this;}

  private:

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    ProtocolDetails m_protocolDetails;
    bool m_protocolDetailsHasBeenSet = false;

    EndpointDetails m_endpointDetails;
    bool m_endpointDetailsHasBeenSet = false;

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_hostKey;
    bool m_hostKeyHasBeenSet = false;

    IdentityProviderDetails m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet = false;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet = false;

    Aws::String m_postAuthenticationLoginBanner;
    bool m_postAuthenticationLoginBannerHasBeenSet = false;

    Aws::String m_preAuthenticationLoginBanner;
    bool m_preAuthenticationLoginBannerHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;

    Aws::String m_securityPolicyName;
    bool m_securityPolicyNameHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    WorkflowDetails m_workflowDetails;
    bool m_workflowDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
