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
    AWS_FINSPACE_API FederationParameters() = default;
    AWS_FINSPACE_API FederationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API FederationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>SAML 2.0 Metadata document from identity provider (IdP).</p>
     */
    inline const Aws::String& GetSamlMetadataDocument() const { return m_samlMetadataDocument; }
    inline bool SamlMetadataDocumentHasBeenSet() const { return m_samlMetadataDocumentHasBeenSet; }
    template<typename SamlMetadataDocumentT = Aws::String>
    void SetSamlMetadataDocument(SamlMetadataDocumentT&& value) { m_samlMetadataDocumentHasBeenSet = true; m_samlMetadataDocument = std::forward<SamlMetadataDocumentT>(value); }
    template<typename SamlMetadataDocumentT = Aws::String>
    FederationParameters& WithSamlMetadataDocument(SamlMetadataDocumentT&& value) { SetSamlMetadataDocument(std::forward<SamlMetadataDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide the metadata URL from your SAML 2.0 compliant identity provider
     * (IdP).</p>
     */
    inline const Aws::String& GetSamlMetadataURL() const { return m_samlMetadataURL; }
    inline bool SamlMetadataURLHasBeenSet() const { return m_samlMetadataURLHasBeenSet; }
    template<typename SamlMetadataURLT = Aws::String>
    void SetSamlMetadataURL(SamlMetadataURLT&& value) { m_samlMetadataURLHasBeenSet = true; m_samlMetadataURL = std::forward<SamlMetadataURLT>(value); }
    template<typename SamlMetadataURLT = Aws::String>
    FederationParameters& WithSamlMetadataURL(SamlMetadataURLT&& value) { SetSamlMetadataURL(std::forward<SamlMetadataURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The redirect or sign-in URL that should be entered into the SAML 2.0
     * compliant identity provider configuration (IdP).</p>
     */
    inline const Aws::String& GetApplicationCallBackURL() const { return m_applicationCallBackURL; }
    inline bool ApplicationCallBackURLHasBeenSet() const { return m_applicationCallBackURLHasBeenSet; }
    template<typename ApplicationCallBackURLT = Aws::String>
    void SetApplicationCallBackURL(ApplicationCallBackURLT&& value) { m_applicationCallBackURLHasBeenSet = true; m_applicationCallBackURL = std::forward<ApplicationCallBackURLT>(value); }
    template<typename ApplicationCallBackURLT = Aws::String>
    FederationParameters& WithApplicationCallBackURL(ApplicationCallBackURLT&& value) { SetApplicationCallBackURL(std::forward<ApplicationCallBackURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Uniform Resource Name (URN). Also referred as Service Provider URN or
     * Audience URI or Service Provider Entity ID.</p>
     */
    inline const Aws::String& GetFederationURN() const { return m_federationURN; }
    inline bool FederationURNHasBeenSet() const { return m_federationURNHasBeenSet; }
    template<typename FederationURNT = Aws::String>
    void SetFederationURN(FederationURNT&& value) { m_federationURNHasBeenSet = true; m_federationURN = std::forward<FederationURNT>(value); }
    template<typename FederationURNT = Aws::String>
    FederationParameters& WithFederationURN(FederationURNT&& value) { SetFederationURN(std::forward<FederationURNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the identity provider (IdP).</p>
     */
    inline const Aws::String& GetFederationProviderName() const { return m_federationProviderName; }
    inline bool FederationProviderNameHasBeenSet() const { return m_federationProviderNameHasBeenSet; }
    template<typename FederationProviderNameT = Aws::String>
    void SetFederationProviderName(FederationProviderNameT&& value) { m_federationProviderNameHasBeenSet = true; m_federationProviderName = std::forward<FederationProviderNameT>(value); }
    template<typename FederationProviderNameT = Aws::String>
    FederationParameters& WithFederationProviderName(FederationProviderNameT&& value) { SetFederationProviderName(std::forward<FederationProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>SAML attribute name and value. The name must always be <code>Email</code> and
     * the value should be set to the attribute definition in which user email is set.
     * For example, name would be <code>Email</code> and value
     * <code>http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress</code>.
     * Please check your SAML 2.0 compliant identity provider (IdP) documentation for
     * details.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributeMap() const { return m_attributeMap; }
    inline bool AttributeMapHasBeenSet() const { return m_attributeMapHasBeenSet; }
    template<typename AttributeMapT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributeMap(AttributeMapT&& value) { m_attributeMapHasBeenSet = true; m_attributeMap = std::forward<AttributeMapT>(value); }
    template<typename AttributeMapT = Aws::Map<Aws::String, Aws::String>>
    FederationParameters& WithAttributeMap(AttributeMapT&& value) { SetAttributeMap(std::forward<AttributeMapT>(value)); return *this;}
    template<typename AttributeMapKeyT = Aws::String, typename AttributeMapValueT = Aws::String>
    FederationParameters& AddAttributeMap(AttributeMapKeyT&& key, AttributeMapValueT&& value) {
      m_attributeMapHasBeenSet = true; m_attributeMap.emplace(std::forward<AttributeMapKeyT>(key), std::forward<AttributeMapValueT>(value)); return *this;
    }
    ///@}
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
