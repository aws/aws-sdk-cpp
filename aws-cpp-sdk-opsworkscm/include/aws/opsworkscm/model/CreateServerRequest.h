/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <aws/opsworkscm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class CreateServerRequest : public OpsWorksCMRequest
  {
  public:
    AWS_OPSWORKSCM_API CreateServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServer"; }

    AWS_OPSWORKSCM_API Aws::String SerializePayload() const override;

    AWS_OPSWORKSCM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Associate a public IP address with a server that you are launching. Valid
     * values are <code>true</code> or <code>false</code>. The default value is
     * <code>true</code>. </p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p> Associate a public IP address with a server that you are launching. Valid
     * values are <code>true</code> or <code>false</code>. The default value is
     * <code>true</code>. </p>
     */
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }

    /**
     * <p> Associate a public IP address with a server that you are launching. Valid
     * values are <code>true</code> or <code>false</code>. The default value is
     * <code>true</code>. </p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p> Associate a public IP address with a server that you are launching. Valid
     * values are <code>true</code> or <code>false</code>. The default value is
     * <code>true</code>. </p>
     */
    inline CreateServerRequest& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}


    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. To access the server, create a CNAME
     * DNS record in your preferred DNS service that points the custom domain to the
     * endpoint that is generated when the server is created (the value of the
     * CreateServer Endpoint attribute). You cannot access the server by using the
     * generated <code>Endpoint</code> value if the server is using a custom domain. If
     * you specify a custom domain, you must also specify values for
     * <code>CustomCertificate</code> and <code>CustomPrivateKey</code>.</p>
     */
    inline const Aws::String& GetCustomDomain() const{ return m_customDomain; }

    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. To access the server, create a CNAME
     * DNS record in your preferred DNS service that points the custom domain to the
     * endpoint that is generated when the server is created (the value of the
     * CreateServer Endpoint attribute). You cannot access the server by using the
     * generated <code>Endpoint</code> value if the server is using a custom domain. If
     * you specify a custom domain, you must also specify values for
     * <code>CustomCertificate</code> and <code>CustomPrivateKey</code>.</p>
     */
    inline bool CustomDomainHasBeenSet() const { return m_customDomainHasBeenSet; }

    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. To access the server, create a CNAME
     * DNS record in your preferred DNS service that points the custom domain to the
     * endpoint that is generated when the server is created (the value of the
     * CreateServer Endpoint attribute). You cannot access the server by using the
     * generated <code>Endpoint</code> value if the server is using a custom domain. If
     * you specify a custom domain, you must also specify values for
     * <code>CustomCertificate</code> and <code>CustomPrivateKey</code>.</p>
     */
    inline void SetCustomDomain(const Aws::String& value) { m_customDomainHasBeenSet = true; m_customDomain = value; }

    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. To access the server, create a CNAME
     * DNS record in your preferred DNS service that points the custom domain to the
     * endpoint that is generated when the server is created (the value of the
     * CreateServer Endpoint attribute). You cannot access the server by using the
     * generated <code>Endpoint</code> value if the server is using a custom domain. If
     * you specify a custom domain, you must also specify values for
     * <code>CustomCertificate</code> and <code>CustomPrivateKey</code>.</p>
     */
    inline void SetCustomDomain(Aws::String&& value) { m_customDomainHasBeenSet = true; m_customDomain = std::move(value); }

    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. To access the server, create a CNAME
     * DNS record in your preferred DNS service that points the custom domain to the
     * endpoint that is generated when the server is created (the value of the
     * CreateServer Endpoint attribute). You cannot access the server by using the
     * generated <code>Endpoint</code> value if the server is using a custom domain. If
     * you specify a custom domain, you must also specify values for
     * <code>CustomCertificate</code> and <code>CustomPrivateKey</code>.</p>
     */
    inline void SetCustomDomain(const char* value) { m_customDomainHasBeenSet = true; m_customDomain.assign(value); }

    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. To access the server, create a CNAME
     * DNS record in your preferred DNS service that points the custom domain to the
     * endpoint that is generated when the server is created (the value of the
     * CreateServer Endpoint attribute). You cannot access the server by using the
     * generated <code>Endpoint</code> value if the server is using a custom domain. If
     * you specify a custom domain, you must also specify values for
     * <code>CustomCertificate</code> and <code>CustomPrivateKey</code>.</p>
     */
    inline CreateServerRequest& WithCustomDomain(const Aws::String& value) { SetCustomDomain(value); return *this;}

    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. To access the server, create a CNAME
     * DNS record in your preferred DNS service that points the custom domain to the
     * endpoint that is generated when the server is created (the value of the
     * CreateServer Endpoint attribute). You cannot access the server by using the
     * generated <code>Endpoint</code> value if the server is using a custom domain. If
     * you specify a custom domain, you must also specify values for
     * <code>CustomCertificate</code> and <code>CustomPrivateKey</code>.</p>
     */
    inline CreateServerRequest& WithCustomDomain(Aws::String&& value) { SetCustomDomain(std::move(value)); return *this;}

    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. To access the server, create a CNAME
     * DNS record in your preferred DNS service that points the custom domain to the
     * endpoint that is generated when the server is created (the value of the
     * CreateServer Endpoint attribute). You cannot access the server by using the
     * generated <code>Endpoint</code> value if the server is using a custom domain. If
     * you specify a custom domain, you must also specify values for
     * <code>CustomCertificate</code> and <code>CustomPrivateKey</code>.</p>
     */
    inline CreateServerRequest& WithCustomDomain(const char* value) { SetCustomDomain(value); return *this;}


    /**
     * <p>A PEM-formatted HTTPS certificate. The value can be be a single, self-signed
     * certificate, or a certificate chain. If you specify a custom certificate, you
     * must also specify values for <code>CustomDomain</code> and
     * <code>CustomPrivateKey</code>. The following are requirements for the
     * <code>CustomCertificate</code> value:</p> <ul> <li> <p>You can provide either a
     * self-signed, custom certificate, or the full certificate chain.</p> </li> <li>
     * <p>The certificate must be a valid X509 certificate, or a certificate chain in
     * PEM format.</p> </li> <li> <p>The certificate must be valid at the time of
     * upload. A certificate can't be used before its validity period begins (the
     * certificate's <code>NotBefore</code> date), or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> <li> <p>The certificate’s
     * common name or subject alternative names (SANs), if present, must match the
     * value of <code>CustomDomain</code>.</p> </li> <li> <p>The certificate must match
     * the value of <code>CustomPrivateKey</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetCustomCertificate() const{ return m_customCertificate; }

    /**
     * <p>A PEM-formatted HTTPS certificate. The value can be be a single, self-signed
     * certificate, or a certificate chain. If you specify a custom certificate, you
     * must also specify values for <code>CustomDomain</code> and
     * <code>CustomPrivateKey</code>. The following are requirements for the
     * <code>CustomCertificate</code> value:</p> <ul> <li> <p>You can provide either a
     * self-signed, custom certificate, or the full certificate chain.</p> </li> <li>
     * <p>The certificate must be a valid X509 certificate, or a certificate chain in
     * PEM format.</p> </li> <li> <p>The certificate must be valid at the time of
     * upload. A certificate can't be used before its validity period begins (the
     * certificate's <code>NotBefore</code> date), or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> <li> <p>The certificate’s
     * common name or subject alternative names (SANs), if present, must match the
     * value of <code>CustomDomain</code>.</p> </li> <li> <p>The certificate must match
     * the value of <code>CustomPrivateKey</code>.</p> </li> </ul>
     */
    inline bool CustomCertificateHasBeenSet() const { return m_customCertificateHasBeenSet; }

    /**
     * <p>A PEM-formatted HTTPS certificate. The value can be be a single, self-signed
     * certificate, or a certificate chain. If you specify a custom certificate, you
     * must also specify values for <code>CustomDomain</code> and
     * <code>CustomPrivateKey</code>. The following are requirements for the
     * <code>CustomCertificate</code> value:</p> <ul> <li> <p>You can provide either a
     * self-signed, custom certificate, or the full certificate chain.</p> </li> <li>
     * <p>The certificate must be a valid X509 certificate, or a certificate chain in
     * PEM format.</p> </li> <li> <p>The certificate must be valid at the time of
     * upload. A certificate can't be used before its validity period begins (the
     * certificate's <code>NotBefore</code> date), or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> <li> <p>The certificate’s
     * common name or subject alternative names (SANs), if present, must match the
     * value of <code>CustomDomain</code>.</p> </li> <li> <p>The certificate must match
     * the value of <code>CustomPrivateKey</code>.</p> </li> </ul>
     */
    inline void SetCustomCertificate(const Aws::String& value) { m_customCertificateHasBeenSet = true; m_customCertificate = value; }

    /**
     * <p>A PEM-formatted HTTPS certificate. The value can be be a single, self-signed
     * certificate, or a certificate chain. If you specify a custom certificate, you
     * must also specify values for <code>CustomDomain</code> and
     * <code>CustomPrivateKey</code>. The following are requirements for the
     * <code>CustomCertificate</code> value:</p> <ul> <li> <p>You can provide either a
     * self-signed, custom certificate, or the full certificate chain.</p> </li> <li>
     * <p>The certificate must be a valid X509 certificate, or a certificate chain in
     * PEM format.</p> </li> <li> <p>The certificate must be valid at the time of
     * upload. A certificate can't be used before its validity period begins (the
     * certificate's <code>NotBefore</code> date), or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> <li> <p>The certificate’s
     * common name or subject alternative names (SANs), if present, must match the
     * value of <code>CustomDomain</code>.</p> </li> <li> <p>The certificate must match
     * the value of <code>CustomPrivateKey</code>.</p> </li> </ul>
     */
    inline void SetCustomCertificate(Aws::String&& value) { m_customCertificateHasBeenSet = true; m_customCertificate = std::move(value); }

    /**
     * <p>A PEM-formatted HTTPS certificate. The value can be be a single, self-signed
     * certificate, or a certificate chain. If you specify a custom certificate, you
     * must also specify values for <code>CustomDomain</code> and
     * <code>CustomPrivateKey</code>. The following are requirements for the
     * <code>CustomCertificate</code> value:</p> <ul> <li> <p>You can provide either a
     * self-signed, custom certificate, or the full certificate chain.</p> </li> <li>
     * <p>The certificate must be a valid X509 certificate, or a certificate chain in
     * PEM format.</p> </li> <li> <p>The certificate must be valid at the time of
     * upload. A certificate can't be used before its validity period begins (the
     * certificate's <code>NotBefore</code> date), or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> <li> <p>The certificate’s
     * common name or subject alternative names (SANs), if present, must match the
     * value of <code>CustomDomain</code>.</p> </li> <li> <p>The certificate must match
     * the value of <code>CustomPrivateKey</code>.</p> </li> </ul>
     */
    inline void SetCustomCertificate(const char* value) { m_customCertificateHasBeenSet = true; m_customCertificate.assign(value); }

    /**
     * <p>A PEM-formatted HTTPS certificate. The value can be be a single, self-signed
     * certificate, or a certificate chain. If you specify a custom certificate, you
     * must also specify values for <code>CustomDomain</code> and
     * <code>CustomPrivateKey</code>. The following are requirements for the
     * <code>CustomCertificate</code> value:</p> <ul> <li> <p>You can provide either a
     * self-signed, custom certificate, or the full certificate chain.</p> </li> <li>
     * <p>The certificate must be a valid X509 certificate, or a certificate chain in
     * PEM format.</p> </li> <li> <p>The certificate must be valid at the time of
     * upload. A certificate can't be used before its validity period begins (the
     * certificate's <code>NotBefore</code> date), or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> <li> <p>The certificate’s
     * common name or subject alternative names (SANs), if present, must match the
     * value of <code>CustomDomain</code>.</p> </li> <li> <p>The certificate must match
     * the value of <code>CustomPrivateKey</code>.</p> </li> </ul>
     */
    inline CreateServerRequest& WithCustomCertificate(const Aws::String& value) { SetCustomCertificate(value); return *this;}

    /**
     * <p>A PEM-formatted HTTPS certificate. The value can be be a single, self-signed
     * certificate, or a certificate chain. If you specify a custom certificate, you
     * must also specify values for <code>CustomDomain</code> and
     * <code>CustomPrivateKey</code>. The following are requirements for the
     * <code>CustomCertificate</code> value:</p> <ul> <li> <p>You can provide either a
     * self-signed, custom certificate, or the full certificate chain.</p> </li> <li>
     * <p>The certificate must be a valid X509 certificate, or a certificate chain in
     * PEM format.</p> </li> <li> <p>The certificate must be valid at the time of
     * upload. A certificate can't be used before its validity period begins (the
     * certificate's <code>NotBefore</code> date), or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> <li> <p>The certificate’s
     * common name or subject alternative names (SANs), if present, must match the
     * value of <code>CustomDomain</code>.</p> </li> <li> <p>The certificate must match
     * the value of <code>CustomPrivateKey</code>.</p> </li> </ul>
     */
    inline CreateServerRequest& WithCustomCertificate(Aws::String&& value) { SetCustomCertificate(std::move(value)); return *this;}

    /**
     * <p>A PEM-formatted HTTPS certificate. The value can be be a single, self-signed
     * certificate, or a certificate chain. If you specify a custom certificate, you
     * must also specify values for <code>CustomDomain</code> and
     * <code>CustomPrivateKey</code>. The following are requirements for the
     * <code>CustomCertificate</code> value:</p> <ul> <li> <p>You can provide either a
     * self-signed, custom certificate, or the full certificate chain.</p> </li> <li>
     * <p>The certificate must be a valid X509 certificate, or a certificate chain in
     * PEM format.</p> </li> <li> <p>The certificate must be valid at the time of
     * upload. A certificate can't be used before its validity period begins (the
     * certificate's <code>NotBefore</code> date), or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> <li> <p>The certificate’s
     * common name or subject alternative names (SANs), if present, must match the
     * value of <code>CustomDomain</code>.</p> </li> <li> <p>The certificate must match
     * the value of <code>CustomPrivateKey</code>.</p> </li> </ul>
     */
    inline CreateServerRequest& WithCustomCertificate(const char* value) { SetCustomCertificate(value); return *this;}


    /**
     * <p>A private key in PEM format for connecting to the server by using HTTPS. The
     * private key must not be encrypted; it cannot be protected by a password or
     * passphrase. If you specify a custom private key, you must also specify values
     * for <code>CustomDomain</code> and <code>CustomCertificate</code>.</p>
     */
    inline const Aws::String& GetCustomPrivateKey() const{ return m_customPrivateKey; }

    /**
     * <p>A private key in PEM format for connecting to the server by using HTTPS. The
     * private key must not be encrypted; it cannot be protected by a password or
     * passphrase. If you specify a custom private key, you must also specify values
     * for <code>CustomDomain</code> and <code>CustomCertificate</code>.</p>
     */
    inline bool CustomPrivateKeyHasBeenSet() const { return m_customPrivateKeyHasBeenSet; }

    /**
     * <p>A private key in PEM format for connecting to the server by using HTTPS. The
     * private key must not be encrypted; it cannot be protected by a password or
     * passphrase. If you specify a custom private key, you must also specify values
     * for <code>CustomDomain</code> and <code>CustomCertificate</code>.</p>
     */
    inline void SetCustomPrivateKey(const Aws::String& value) { m_customPrivateKeyHasBeenSet = true; m_customPrivateKey = value; }

    /**
     * <p>A private key in PEM format for connecting to the server by using HTTPS. The
     * private key must not be encrypted; it cannot be protected by a password or
     * passphrase. If you specify a custom private key, you must also specify values
     * for <code>CustomDomain</code> and <code>CustomCertificate</code>.</p>
     */
    inline void SetCustomPrivateKey(Aws::String&& value) { m_customPrivateKeyHasBeenSet = true; m_customPrivateKey = std::move(value); }

    /**
     * <p>A private key in PEM format for connecting to the server by using HTTPS. The
     * private key must not be encrypted; it cannot be protected by a password or
     * passphrase. If you specify a custom private key, you must also specify values
     * for <code>CustomDomain</code> and <code>CustomCertificate</code>.</p>
     */
    inline void SetCustomPrivateKey(const char* value) { m_customPrivateKeyHasBeenSet = true; m_customPrivateKey.assign(value); }

    /**
     * <p>A private key in PEM format for connecting to the server by using HTTPS. The
     * private key must not be encrypted; it cannot be protected by a password or
     * passphrase. If you specify a custom private key, you must also specify values
     * for <code>CustomDomain</code> and <code>CustomCertificate</code>.</p>
     */
    inline CreateServerRequest& WithCustomPrivateKey(const Aws::String& value) { SetCustomPrivateKey(value); return *this;}

    /**
     * <p>A private key in PEM format for connecting to the server by using HTTPS. The
     * private key must not be encrypted; it cannot be protected by a password or
     * passphrase. If you specify a custom private key, you must also specify values
     * for <code>CustomDomain</code> and <code>CustomCertificate</code>.</p>
     */
    inline CreateServerRequest& WithCustomPrivateKey(Aws::String&& value) { SetCustomPrivateKey(std::move(value)); return *this;}

    /**
     * <p>A private key in PEM format for connecting to the server by using HTTPS. The
     * private key must not be encrypted; it cannot be protected by a password or
     * passphrase. If you specify a custom private key, you must also specify values
     * for <code>CustomDomain</code> and <code>CustomCertificate</code>.</p>
     */
    inline CreateServerRequest& WithCustomPrivateKey(const char* value) { SetCustomPrivateKey(value); return *this;}


    /**
     * <p> Enable or disable scheduled backups. Valid values are <code>true</code> or
     * <code>false</code>. The default value is <code>true</code>. </p>
     */
    inline bool GetDisableAutomatedBackup() const{ return m_disableAutomatedBackup; }

    /**
     * <p> Enable or disable scheduled backups. Valid values are <code>true</code> or
     * <code>false</code>. The default value is <code>true</code>. </p>
     */
    inline bool DisableAutomatedBackupHasBeenSet() const { return m_disableAutomatedBackupHasBeenSet; }

    /**
     * <p> Enable or disable scheduled backups. Valid values are <code>true</code> or
     * <code>false</code>. The default value is <code>true</code>. </p>
     */
    inline void SetDisableAutomatedBackup(bool value) { m_disableAutomatedBackupHasBeenSet = true; m_disableAutomatedBackup = value; }

    /**
     * <p> Enable or disable scheduled backups. Valid values are <code>true</code> or
     * <code>false</code>. The default value is <code>true</code>. </p>
     */
    inline CreateServerRequest& WithDisableAutomatedBackup(bool value) { SetDisableAutomatedBackup(value); return *this;}


    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline CreateServerRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline CreateServerRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline CreateServerRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline const Aws::String& GetEngineModel() const{ return m_engineModel; }

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline bool EngineModelHasBeenSet() const { return m_engineModelHasBeenSet; }

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline void SetEngineModel(const Aws::String& value) { m_engineModelHasBeenSet = true; m_engineModel = value; }

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline void SetEngineModel(Aws::String&& value) { m_engineModelHasBeenSet = true; m_engineModel = std::move(value); }

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline void SetEngineModel(const char* value) { m_engineModelHasBeenSet = true; m_engineModel.assign(value); }

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline CreateServerRequest& WithEngineModel(const Aws::String& value) { SetEngineModel(value); return *this;}

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline CreateServerRequest& WithEngineModel(Aws::String&& value) { SetEngineModel(std::move(value)); return *this;}

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline CreateServerRequest& WithEngineModel(const char* value) { SetEngineModel(value); return *this;}


    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>2</code>. For a
     * Puppet server, valid values are <code>2019</code> or <code>2017</code>. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>2</code>. For a
     * Puppet server, valid values are <code>2019</code> or <code>2017</code>. </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>2</code>. For a
     * Puppet server, valid values are <code>2019</code> or <code>2017</code>. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>2</code>. For a
     * Puppet server, valid values are <code>2019</code> or <code>2017</code>. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>2</code>. For a
     * Puppet server, valid values are <code>2019</code> or <code>2017</code>. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>2</code>. For a
     * Puppet server, valid values are <code>2019</code> or <code>2017</code>. </p>
     */
    inline CreateServerRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>2</code>. For a
     * Puppet server, valid values are <code>2019</code> or <code>2017</code>. </p>
     */
    inline CreateServerRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>2</code>. For a
     * Puppet server, valid values are <code>2019</code> or <code>2017</code>. </p>
     */
    inline CreateServerRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const{ return m_engineAttributes; }

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline bool EngineAttributesHasBeenSet() const { return m_engineAttributesHasBeenSet; }

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline void SetEngineAttributes(const Aws::Vector<EngineAttribute>& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = value; }

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline void SetEngineAttributes(Aws::Vector<EngineAttribute>&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = std::move(value); }

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline CreateServerRequest& WithEngineAttributes(const Aws::Vector<EngineAttribute>& value) { SetEngineAttributes(value); return *this;}

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline CreateServerRequest& WithEngineAttributes(Aws::Vector<EngineAttribute>&& value) { SetEngineAttributes(std::move(value)); return *this;}

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline CreateServerRequest& AddEngineAttributes(const EngineAttribute& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(value); return *this; }

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline CreateServerRequest& AddEngineAttributes(EngineAttribute&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p> The number of automated backups that you want to keep. Whenever a new backup
     * is created, AWS OpsWorks CM deletes the oldest backups if this number is
     * exceeded. The default value is <code>1</code>. </p>
     */
    inline int GetBackupRetentionCount() const{ return m_backupRetentionCount; }

    /**
     * <p> The number of automated backups that you want to keep. Whenever a new backup
     * is created, AWS OpsWorks CM deletes the oldest backups if this number is
     * exceeded. The default value is <code>1</code>. </p>
     */
    inline bool BackupRetentionCountHasBeenSet() const { return m_backupRetentionCountHasBeenSet; }

    /**
     * <p> The number of automated backups that you want to keep. Whenever a new backup
     * is created, AWS OpsWorks CM deletes the oldest backups if this number is
     * exceeded. The default value is <code>1</code>. </p>
     */
    inline void SetBackupRetentionCount(int value) { m_backupRetentionCountHasBeenSet = true; m_backupRetentionCount = value; }

    /**
     * <p> The number of automated backups that you want to keep. Whenever a new backup
     * is created, AWS OpsWorks CM deletes the oldest backups if this number is
     * exceeded. The default value is <code>1</code>. </p>
     */
    inline CreateServerRequest& WithBackupRetentionCount(int value) { SetBackupRetentionCount(value); return *this;}


    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline CreateServerRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline CreateServerRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline CreateServerRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline CreateServerRequest& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline CreateServerRequest& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline CreateServerRequest& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}


    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline CreateServerRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline CreateServerRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline CreateServerRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline const Aws::String& GetKeyPair() const{ return m_keyPair; }

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline void SetKeyPair(const Aws::String& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline void SetKeyPair(Aws::String&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::move(value); }

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline void SetKeyPair(const char* value) { m_keyPairHasBeenSet = true; m_keyPair.assign(value); }

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline CreateServerRequest& WithKeyPair(const Aws::String& value) { SetKeyPair(value); return *this;}

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline CreateServerRequest& WithKeyPair(Aws::String&& value) { SetKeyPair(std::move(value)); return *this;}

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline CreateServerRequest& WithKeyPair(const char* value) { SetKeyPair(value); return *this;}


    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random one-hour period on Tuesday, Wednesday, or Friday. See
     * <code>TimeWindowDefinition</code> for more information. </p> <p> <b>Example:</b>
     * <code>Mon:08:00</code>, which represents a start time of every Monday at 08:00
     * UTC. (8:00 a.m.) </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random one-hour period on Tuesday, Wednesday, or Friday. See
     * <code>TimeWindowDefinition</code> for more information. </p> <p> <b>Example:</b>
     * <code>Mon:08:00</code>, which represents a start time of every Monday at 08:00
     * UTC. (8:00 a.m.) </p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random one-hour period on Tuesday, Wednesday, or Friday. See
     * <code>TimeWindowDefinition</code> for more information. </p> <p> <b>Example:</b>
     * <code>Mon:08:00</code>, which represents a start time of every Monday at 08:00
     * UTC. (8:00 a.m.) </p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random one-hour period on Tuesday, Wednesday, or Friday. See
     * <code>TimeWindowDefinition</code> for more information. </p> <p> <b>Example:</b>
     * <code>Mon:08:00</code>, which represents a start time of every Monday at 08:00
     * UTC. (8:00 a.m.) </p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random one-hour period on Tuesday, Wednesday, or Friday. See
     * <code>TimeWindowDefinition</code> for more information. </p> <p> <b>Example:</b>
     * <code>Mon:08:00</code>, which represents a start time of every Monday at 08:00
     * UTC. (8:00 a.m.) </p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random one-hour period on Tuesday, Wednesday, or Friday. See
     * <code>TimeWindowDefinition</code> for more information. </p> <p> <b>Example:</b>
     * <code>Mon:08:00</code>, which represents a start time of every Monday at 08:00
     * UTC. (8:00 a.m.) </p>
     */
    inline CreateServerRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random one-hour period on Tuesday, Wednesday, or Friday. See
     * <code>TimeWindowDefinition</code> for more information. </p> <p> <b>Example:</b>
     * <code>Mon:08:00</code>, which represents a start time of every Monday at 08:00
     * UTC. (8:00 a.m.) </p>
     */
    inline CreateServerRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random one-hour period on Tuesday, Wednesday, or Friday. See
     * <code>TimeWindowDefinition</code> for more information. </p> <p> <b>Example:</b>
     * <code>Mon:08:00</code>, which represents a start time of every Monday at 08:00
     * UTC. (8:00 a.m.) </p>
     */
    inline CreateServerRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p> <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random, daily start time.</p> <p> <b>Example:</b>
     * <code>08:00</code>, which represents a daily start time of 08:00 UTC.</p> <p>
     * <b>Example:</b> <code>Mon:08:00</code>, which represents a start time of every
     * Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p> <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random, daily start time.</p> <p> <b>Example:</b>
     * <code>08:00</code>, which represents a daily start time of 08:00 UTC.</p> <p>
     * <b>Example:</b> <code>Mon:08:00</code>, which represents a start time of every
     * Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p> <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random, daily start time.</p> <p> <b>Example:</b>
     * <code>08:00</code>, which represents a daily start time of 08:00 UTC.</p> <p>
     * <b>Example:</b> <code>Mon:08:00</code>, which represents a start time of every
     * Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p> <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random, daily start time.</p> <p> <b>Example:</b>
     * <code>08:00</code>, which represents a daily start time of 08:00 UTC.</p> <p>
     * <b>Example:</b> <code>Mon:08:00</code>, which represents a start time of every
     * Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p> <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random, daily start time.</p> <p> <b>Example:</b>
     * <code>08:00</code>, which represents a daily start time of 08:00 UTC.</p> <p>
     * <b>Example:</b> <code>Mon:08:00</code>, which represents a start time of every
     * Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p> <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random, daily start time.</p> <p> <b>Example:</b>
     * <code>08:00</code>, which represents a daily start time of 08:00 UTC.</p> <p>
     * <b>Example:</b> <code>Mon:08:00</code>, which represents a start time of every
     * Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline CreateServerRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p> <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random, daily start time.</p> <p> <b>Example:</b>
     * <code>08:00</code>, which represents a daily start time of 08:00 UTC.</p> <p>
     * <b>Example:</b> <code>Mon:08:00</code>, which represents a start time of every
     * Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline CreateServerRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p> <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random, daily start time.</p> <p> <b>Example:</b>
     * <code>08:00</code>, which represents a daily start time of 08:00 UTC.</p> <p>
     * <b>Example:</b> <code>Mon:08:00</code>, which represents a start time of every
     * Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline CreateServerRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline CreateServerRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline CreateServerRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline CreateServerRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline CreateServerRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline CreateServerRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline CreateServerRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline CreateServerRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline CreateServerRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline CreateServerRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline CreateServerRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline CreateServerRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline CreateServerRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline CreateServerRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks for
     * Chef Automate or AWS OpsWorks for Puppet Enterprise server.</p> <ul> <li> <p>The
     * key cannot be empty.</p> </li> <li> <p>The key can be a maximum of 127
     * characters, and can contain only Unicode letters, numbers, or separators, or the
     * following special characters: <code>+ - = . _ : / @</code> </p> </li> <li>
     * <p>The value can be a maximum 255 characters, and contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ : /
     * @</code> </p> </li> <li> <p>Leading and trailing white spaces are trimmed from
     * both the key and value.</p> </li> <li> <p>A maximum of 50 user-applied tags is
     * allowed for any AWS OpsWorks-CM server.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks for
     * Chef Automate or AWS OpsWorks for Puppet Enterprise server.</p> <ul> <li> <p>The
     * key cannot be empty.</p> </li> <li> <p>The key can be a maximum of 127
     * characters, and can contain only Unicode letters, numbers, or separators, or the
     * following special characters: <code>+ - = . _ : / @</code> </p> </li> <li>
     * <p>The value can be a maximum 255 characters, and contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ : /
     * @</code> </p> </li> <li> <p>Leading and trailing white spaces are trimmed from
     * both the key and value.</p> </li> <li> <p>A maximum of 50 user-applied tags is
     * allowed for any AWS OpsWorks-CM server.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks for
     * Chef Automate or AWS OpsWorks for Puppet Enterprise server.</p> <ul> <li> <p>The
     * key cannot be empty.</p> </li> <li> <p>The key can be a maximum of 127
     * characters, and can contain only Unicode letters, numbers, or separators, or the
     * following special characters: <code>+ - = . _ : / @</code> </p> </li> <li>
     * <p>The value can be a maximum 255 characters, and contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ : /
     * @</code> </p> </li> <li> <p>Leading and trailing white spaces are trimmed from
     * both the key and value.</p> </li> <li> <p>A maximum of 50 user-applied tags is
     * allowed for any AWS OpsWorks-CM server.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks for
     * Chef Automate or AWS OpsWorks for Puppet Enterprise server.</p> <ul> <li> <p>The
     * key cannot be empty.</p> </li> <li> <p>The key can be a maximum of 127
     * characters, and can contain only Unicode letters, numbers, or separators, or the
     * following special characters: <code>+ - = . _ : / @</code> </p> </li> <li>
     * <p>The value can be a maximum 255 characters, and contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ : /
     * @</code> </p> </li> <li> <p>Leading and trailing white spaces are trimmed from
     * both the key and value.</p> </li> <li> <p>A maximum of 50 user-applied tags is
     * allowed for any AWS OpsWorks-CM server.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks for
     * Chef Automate or AWS OpsWorks for Puppet Enterprise server.</p> <ul> <li> <p>The
     * key cannot be empty.</p> </li> <li> <p>The key can be a maximum of 127
     * characters, and can contain only Unicode letters, numbers, or separators, or the
     * following special characters: <code>+ - = . _ : / @</code> </p> </li> <li>
     * <p>The value can be a maximum 255 characters, and contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ : /
     * @</code> </p> </li> <li> <p>Leading and trailing white spaces are trimmed from
     * both the key and value.</p> </li> <li> <p>A maximum of 50 user-applied tags is
     * allowed for any AWS OpsWorks-CM server.</p> </li> </ul>
     */
    inline CreateServerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks for
     * Chef Automate or AWS OpsWorks for Puppet Enterprise server.</p> <ul> <li> <p>The
     * key cannot be empty.</p> </li> <li> <p>The key can be a maximum of 127
     * characters, and can contain only Unicode letters, numbers, or separators, or the
     * following special characters: <code>+ - = . _ : / @</code> </p> </li> <li>
     * <p>The value can be a maximum 255 characters, and contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ : /
     * @</code> </p> </li> <li> <p>Leading and trailing white spaces are trimmed from
     * both the key and value.</p> </li> <li> <p>A maximum of 50 user-applied tags is
     * allowed for any AWS OpsWorks-CM server.</p> </li> </ul>
     */
    inline CreateServerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks for
     * Chef Automate or AWS OpsWorks for Puppet Enterprise server.</p> <ul> <li> <p>The
     * key cannot be empty.</p> </li> <li> <p>The key can be a maximum of 127
     * characters, and can contain only Unicode letters, numbers, or separators, or the
     * following special characters: <code>+ - = . _ : / @</code> </p> </li> <li>
     * <p>The value can be a maximum 255 characters, and contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ : /
     * @</code> </p> </li> <li> <p>Leading and trailing white spaces are trimmed from
     * both the key and value.</p> </li> <li> <p>A maximum of 50 user-applied tags is
     * allowed for any AWS OpsWorks-CM server.</p> </li> </ul>
     */
    inline CreateServerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks for
     * Chef Automate or AWS OpsWorks for Puppet Enterprise server.</p> <ul> <li> <p>The
     * key cannot be empty.</p> </li> <li> <p>The key can be a maximum of 127
     * characters, and can contain only Unicode letters, numbers, or separators, or the
     * following special characters: <code>+ - = . _ : / @</code> </p> </li> <li>
     * <p>The value can be a maximum 255 characters, and contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ : /
     * @</code> </p> </li> <li> <p>Leading and trailing white spaces are trimmed from
     * both the key and value.</p> </li> <li> <p>A maximum of 50 user-applied tags is
     * allowed for any AWS OpsWorks-CM server.</p> </li> </ul>
     */
    inline CreateServerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline CreateServerRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline CreateServerRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline CreateServerRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}

  private:

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet = false;

    Aws::String m_customDomain;
    bool m_customDomainHasBeenSet = false;

    Aws::String m_customCertificate;
    bool m_customCertificateHasBeenSet = false;

    Aws::String m_customPrivateKey;
    bool m_customPrivateKeyHasBeenSet = false;

    bool m_disableAutomatedBackup;
    bool m_disableAutomatedBackupHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineModel;
    bool m_engineModelHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::Vector<EngineAttribute> m_engineAttributes;
    bool m_engineAttributesHasBeenSet = false;

    int m_backupRetentionCount;
    bool m_backupRetentionCountHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
