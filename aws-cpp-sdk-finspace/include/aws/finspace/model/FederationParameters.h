/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace finspace
{
namespace Model
{

  /**
   * <p>Configuration information when authentication mode is
   * FEDERATED.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/FederationParameters">AWS
   * API Reference</a></p>
   */
  class FederationParameters
  {
  public:
    AWS_FINSPACE_API FederationParameters();
    AWS_FINSPACE_API FederationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API FederationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>SAML 2.0 Metadata document from identity provider (IdP).</p>
     */
    inline const Aws::String& GetSamlMetadataDocument() const{ return m_samlMetadataDocument; }

    /**
     * <p>SAML 2.0 Metadata document from identity provider (IdP).</p>
     */
    inline bool SamlMetadataDocumentHasBeenSet() const { return m_samlMetadataDocumentHasBeenSet; }

    /**
     * <p>SAML 2.0 Metadata document from identity provider (IdP).</p>
     */
    inline void SetSamlMetadataDocument(const Aws::String& value) { m_samlMetadataDocumentHasBeenSet = true; m_samlMetadataDocument = value; }

    /**
     * <p>SAML 2.0 Metadata document from identity provider (IdP).</p>
     */
    inline void SetSamlMetadataDocument(Aws::String&& value) { m_samlMetadataDocumentHasBeenSet = true; m_samlMetadataDocument = std::move(value); }

    /**
     * <p>SAML 2.0 Metadata document from identity provider (IdP).</p>
     */
    inline void SetSamlMetadataDocument(const char* value) { m_samlMetadataDocumentHasBeenSet = true; m_samlMetadataDocument.assign(value); }

    /**
     * <p>SAML 2.0 Metadata document from identity provider (IdP).</p>
     */
    inline FederationParameters& WithSamlMetadataDocument(const Aws::String& value) { SetSamlMetadataDocument(value); return *this;}

    /**
     * <p>SAML 2.0 Metadata document from identity provider (IdP).</p>
     */
    inline FederationParameters& WithSamlMetadataDocument(Aws::String&& value) { SetSamlMetadataDocument(std::move(value)); return *this;}

    /**
     * <p>SAML 2.0 Metadata document from identity provider (IdP).</p>
     */
    inline FederationParameters& WithSamlMetadataDocument(const char* value) { SetSamlMetadataDocument(value); return *this;}


    /**
     * <p>Provide the metadata URL from your SAML 2.0 compliant identity provider
     * (IdP).</p>
     */
    inline const Aws::String& GetSamlMetadataURL() const{ return m_samlMetadataURL; }

    /**
     * <p>Provide the metadata URL from your SAML 2.0 compliant identity provider
     * (IdP).</p>
     */
    inline bool SamlMetadataURLHasBeenSet() const { return m_samlMetadataURLHasBeenSet; }

    /**
     * <p>Provide the metadata URL from your SAML 2.0 compliant identity provider
     * (IdP).</p>
     */
    inline void SetSamlMetadataURL(const Aws::String& value) { m_samlMetadataURLHasBeenSet = true; m_samlMetadataURL = value; }

    /**
     * <p>Provide the metadata URL from your SAML 2.0 compliant identity provider
     * (IdP).</p>
     */
    inline void SetSamlMetadataURL(Aws::String&& value) { m_samlMetadataURLHasBeenSet = true; m_samlMetadataURL = std::move(value); }

    /**
     * <p>Provide the metadata URL from your SAML 2.0 compliant identity provider
     * (IdP).</p>
     */
    inline void SetSamlMetadataURL(const char* value) { m_samlMetadataURLHasBeenSet = true; m_samlMetadataURL.assign(value); }

    /**
     * <p>Provide the metadata URL from your SAML 2.0 compliant identity provider
     * (IdP).</p>
     */
    inline FederationParameters& WithSamlMetadataURL(const Aws::String& value) { SetSamlMetadataURL(value); return *this;}

    /**
     * <p>Provide the metadata URL from your SAML 2.0 compliant identity provider
     * (IdP).</p>
     */
    inline FederationParameters& WithSamlMetadataURL(Aws::String&& value) { SetSamlMetadataURL(std::move(value)); return *this;}

    /**
     * <p>Provide the metadata URL from your SAML 2.0 compliant identity provider
     * (IdP).</p>
     */
    inline FederationParameters& WithSamlMetadataURL(const char* value) { SetSamlMetadataURL(value); return *this;}


    /**
     * <p>The redirect or sign-in URL that should be entered into the SAML 2.0
     * compliant identity provider configuration (IdP).</p>
     */
    inline const Aws::String& GetApplicationCallBackURL() const{ return m_applicationCallBackURL; }

    /**
     * <p>The redirect or sign-in URL that should be entered into the SAML 2.0
     * compliant identity provider configuration (IdP).</p>
     */
    inline bool ApplicationCallBackURLHasBeenSet() const { return m_applicationCallBackURLHasBeenSet; }

    /**
     * <p>The redirect or sign-in URL that should be entered into the SAML 2.0
     * compliant identity provider configuration (IdP).</p>
     */
    inline void SetApplicationCallBackURL(const Aws::String& value) { m_applicationCallBackURLHasBeenSet = true; m_applicationCallBackURL = value; }

    /**
     * <p>The redirect or sign-in URL that should be entered into the SAML 2.0
     * compliant identity provider configuration (IdP).</p>
     */
    inline void SetApplicationCallBackURL(Aws::String&& value) { m_applicationCallBackURLHasBeenSet = true; m_applicationCallBackURL = std::move(value); }

    /**
     * <p>The redirect or sign-in URL that should be entered into the SAML 2.0
     * compliant identity provider configuration (IdP).</p>
     */
    inline void SetApplicationCallBackURL(const char* value) { m_applicationCallBackURLHasBeenSet = true; m_applicationCallBackURL.assign(value); }

    /**
     * <p>The redirect or sign-in URL that should be entered into the SAML 2.0
     * compliant identity provider configuration (IdP).</p>
     */
    inline FederationParameters& WithApplicationCallBackURL(const Aws::String& value) { SetApplicationCallBackURL(value); return *this;}

    /**
     * <p>The redirect or sign-in URL that should be entered into the SAML 2.0
     * compliant identity provider configuration (IdP).</p>
     */
    inline FederationParameters& WithApplicationCallBackURL(Aws::String&& value) { SetApplicationCallBackURL(std::move(value)); return *this;}

    /**
     * <p>The redirect or sign-in URL that should be entered into the SAML 2.0
     * compliant identity provider configuration (IdP).</p>
     */
    inline FederationParameters& WithApplicationCallBackURL(const char* value) { SetApplicationCallBackURL(value); return *this;}


    /**
     * <p>The Uniform Resource Name (URN). Also referred as Service Provider URN or
     * Audience URI or Service Provider Entity ID.</p>
     */
    inline const Aws::String& GetFederationURN() const{ return m_federationURN; }

    /**
     * <p>The Uniform Resource Name (URN). Also referred as Service Provider URN or
     * Audience URI or Service Provider Entity ID.</p>
     */
    inline bool FederationURNHasBeenSet() const { return m_federationURNHasBeenSet; }

    /**
     * <p>The Uniform Resource Name (URN). Also referred as Service Provider URN or
     * Audience URI or Service Provider Entity ID.</p>
     */
    inline void SetFederationURN(const Aws::String& value) { m_federationURNHasBeenSet = true; m_federationURN = value; }

    /**
     * <p>The Uniform Resource Name (URN). Also referred as Service Provider URN or
     * Audience URI or Service Provider Entity ID.</p>
     */
    inline void SetFederationURN(Aws::String&& value) { m_federationURNHasBeenSet = true; m_federationURN = std::move(value); }

    /**
     * <p>The Uniform Resource Name (URN). Also referred as Service Provider URN or
     * Audience URI or Service Provider Entity ID.</p>
     */
    inline void SetFederationURN(const char* value) { m_federationURNHasBeenSet = true; m_federationURN.assign(value); }

    /**
     * <p>The Uniform Resource Name (URN). Also referred as Service Provider URN or
     * Audience URI or Service Provider Entity ID.</p>
     */
    inline FederationParameters& WithFederationURN(const Aws::String& value) { SetFederationURN(value); return *this;}

    /**
     * <p>The Uniform Resource Name (URN). Also referred as Service Provider URN or
     * Audience URI or Service Provider Entity ID.</p>
     */
    inline FederationParameters& WithFederationURN(Aws::String&& value) { SetFederationURN(std::move(value)); return *this;}

    /**
     * <p>The Uniform Resource Name (URN). Also referred as Service Provider URN or
     * Audience URI or Service Provider Entity ID.</p>
     */
    inline FederationParameters& WithFederationURN(const char* value) { SetFederationURN(value); return *this;}


    /**
     * <p>Name of the identity provider (IdP).</p>
     */
    inline const Aws::String& GetFederationProviderName() const{ return m_federationProviderName; }

    /**
     * <p>Name of the identity provider (IdP).</p>
     */
    inline bool FederationProviderNameHasBeenSet() const { return m_federationProviderNameHasBeenSet; }

    /**
     * <p>Name of the identity provider (IdP).</p>
     */
    inline void SetFederationProviderName(const Aws::String& value) { m_federationProviderNameHasBeenSet = true; m_federationProviderName = value; }

    /**
     * <p>Name of the identity provider (IdP).</p>
     */
    inline void SetFederationProviderName(Aws::String&& value) { m_federationProviderNameHasBeenSet = true; m_federationProviderName = std::move(value); }

    /**
     * <p>Name of the identity provider (IdP).</p>
     */
    inline void SetFederationProviderName(const char* value) { m_federationProviderNameHasBeenSet = true; m_federationProviderName.assign(value); }

    /**
     * <p>Name of the identity provider (IdP).</p>
     */
    inline FederationParameters& WithFederationProviderName(const Aws::String& value) { SetFederationProviderName(value); return *this;}

    /**
     * <p>Name of the identity provider (IdP).</p>
     */
    inline FederationParameters& WithFederationProviderName(Aws::String&& value) { SetFederationProviderName(std::move(value)); return *this;}

    /**
     * <p>Name of the identity provider (IdP).</p>
     */
    inline FederationParameters& WithFederationProviderName(const char* value) { SetFederationProviderName(value); return *this;}


    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributeMap() const{ return m_attributeMap; }

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline bool AttributeMapHasBeenSet() const { return m_attributeMapHasBeenSet; }

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline void SetAttributeMap(const Aws::Map<Aws::String, Aws::String>& value) { m_attributeMapHasBeenSet = true; m_attributeMap = value; }

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline void SetAttributeMap(Aws::Map<Aws::String, Aws::String>&& value) { m_attributeMapHasBeenSet = true; m_attributeMap = std::move(value); }

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline FederationParameters& WithAttributeMap(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributeMap(value); return *this;}

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline FederationParameters& WithAttributeMap(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributeMap(std::move(value)); return *this;}

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline FederationParameters& AddAttributeMap(const Aws::String& key, const Aws::String& value) { m_attributeMapHasBeenSet = true; m_attributeMap.emplace(key, value); return *this; }

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline FederationParameters& AddAttributeMap(Aws::String&& key, const Aws::String& value) { m_attributeMapHasBeenSet = true; m_attributeMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline FederationParameters& AddAttributeMap(const Aws::String& key, Aws::String&& value) { m_attributeMapHasBeenSet = true; m_attributeMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline FederationParameters& AddAttributeMap(Aws::String&& key, Aws::String&& value) { m_attributeMapHasBeenSet = true; m_attributeMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline FederationParameters& AddAttributeMap(const char* key, Aws::String&& value) { m_attributeMapHasBeenSet = true; m_attributeMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline FederationParameters& AddAttributeMap(Aws::String&& key, const char* value) { m_attributeMapHasBeenSet = true; m_attributeMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline FederationParameters& AddAttributeMap(const char* key, const char* value) { m_attributeMapHasBeenSet = true; m_attributeMap.emplace(key, value); return *this; }

  private:

    Aws::String m_samlMetadataDocument;
    bool m_samlMetadataDocumentHasBeenSet = false;

    Aws::String m_samlMetadataURL;
    bool m_samlMetadataURLHasBeenSet = false;

    Aws::String m_applicationCallBackURL;
    bool m_applicationCallBackURLHasBeenSet = false;

    Aws::String m_federationURN;
    bool m_federationURNHasBeenSet = false;

    Aws::String m_federationProviderName;
    bool m_federationProviderNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributeMap;
    bool m_attributeMapHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
