/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/DigitalSignatureMethod.h>
#include <aws/license-manager/model/EntitlementData.h>
#include <aws/license-manager/model/Metadata.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class CheckoutBorrowLicenseRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CheckoutBorrowLicenseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckoutBorrowLicense"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license. The license must use the borrow
     * consumption configuration.</p>
     */
    inline const Aws::String& GetLicenseArn() const { return m_licenseArn; }
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }
    template<typename LicenseArnT = Aws::String>
    void SetLicenseArn(LicenseArnT&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::forward<LicenseArnT>(value); }
    template<typename LicenseArnT = Aws::String>
    CheckoutBorrowLicenseRequest& WithLicenseArn(LicenseArnT&& value) { SetLicenseArn(std::forward<LicenseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License entitlements. Partial checkouts are not supported.</p>
     */
    inline const Aws::Vector<EntitlementData>& GetEntitlements() const { return m_entitlements; }
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }
    template<typename EntitlementsT = Aws::Vector<EntitlementData>>
    void SetEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::forward<EntitlementsT>(value); }
    template<typename EntitlementsT = Aws::Vector<EntitlementData>>
    CheckoutBorrowLicenseRequest& WithEntitlements(EntitlementsT&& value) { SetEntitlements(std::forward<EntitlementsT>(value)); return *this;}
    template<typename EntitlementsT = EntitlementData>
    CheckoutBorrowLicenseRequest& AddEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements.emplace_back(std::forward<EntitlementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Digital signature method. The possible value is JSON Web Signature (JWS)
     * algorithm PS384. For more information, see <a
     * href="https://tools.ietf.org/html/rfc7518#section-3.5">RFC 7518 Digital
     * Signature with RSASSA-PSS</a>.</p>
     */
    inline DigitalSignatureMethod GetDigitalSignatureMethod() const { return m_digitalSignatureMethod; }
    inline bool DigitalSignatureMethodHasBeenSet() const { return m_digitalSignatureMethodHasBeenSet; }
    inline void SetDigitalSignatureMethod(DigitalSignatureMethod value) { m_digitalSignatureMethodHasBeenSet = true; m_digitalSignatureMethod = value; }
    inline CheckoutBorrowLicenseRequest& WithDigitalSignatureMethod(DigitalSignatureMethod value) { SetDigitalSignatureMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Node ID.</p>
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    CheckoutBorrowLicenseRequest& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about constraints.</p>
     */
    inline const Aws::Vector<Metadata>& GetCheckoutMetadata() const { return m_checkoutMetadata; }
    inline bool CheckoutMetadataHasBeenSet() const { return m_checkoutMetadataHasBeenSet; }
    template<typename CheckoutMetadataT = Aws::Vector<Metadata>>
    void SetCheckoutMetadata(CheckoutMetadataT&& value) { m_checkoutMetadataHasBeenSet = true; m_checkoutMetadata = std::forward<CheckoutMetadataT>(value); }
    template<typename CheckoutMetadataT = Aws::Vector<Metadata>>
    CheckoutBorrowLicenseRequest& WithCheckoutMetadata(CheckoutMetadataT&& value) { SetCheckoutMetadata(std::forward<CheckoutMetadataT>(value)); return *this;}
    template<typename CheckoutMetadataT = Metadata>
    CheckoutBorrowLicenseRequest& AddCheckoutMetadata(CheckoutMetadataT&& value) { m_checkoutMetadataHasBeenSet = true; m_checkoutMetadata.emplace_back(std::forward<CheckoutMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CheckoutBorrowLicenseRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::Vector<EntitlementData> m_entitlements;
    bool m_entitlementsHasBeenSet = false;

    DigitalSignatureMethod m_digitalSignatureMethod{DigitalSignatureMethod::NOT_SET};
    bool m_digitalSignatureMethodHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::Vector<Metadata> m_checkoutMetadata;
    bool m_checkoutMetadataHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
