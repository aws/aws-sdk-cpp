/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/CheckoutType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/EntitlementData.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class CheckoutLicenseRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CheckoutLicenseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckoutLicense"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Product SKU.</p>
     */
    inline const Aws::String& GetProductSKU() const { return m_productSKU; }
    inline bool ProductSKUHasBeenSet() const { return m_productSKUHasBeenSet; }
    template<typename ProductSKUT = Aws::String>
    void SetProductSKU(ProductSKUT&& value) { m_productSKUHasBeenSet = true; m_productSKU = std::forward<ProductSKUT>(value); }
    template<typename ProductSKUT = Aws::String>
    CheckoutLicenseRequest& WithProductSKU(ProductSKUT&& value) { SetProductSKU(std::forward<ProductSKUT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checkout type.</p>
     */
    inline CheckoutType GetCheckoutType() const { return m_checkoutType; }
    inline bool CheckoutTypeHasBeenSet() const { return m_checkoutTypeHasBeenSet; }
    inline void SetCheckoutType(CheckoutType value) { m_checkoutTypeHasBeenSet = true; m_checkoutType = value; }
    inline CheckoutLicenseRequest& WithCheckoutType(CheckoutType value) { SetCheckoutType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key fingerprint identifying the license.</p>
     */
    inline const Aws::String& GetKeyFingerprint() const { return m_keyFingerprint; }
    inline bool KeyFingerprintHasBeenSet() const { return m_keyFingerprintHasBeenSet; }
    template<typename KeyFingerprintT = Aws::String>
    void SetKeyFingerprint(KeyFingerprintT&& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = std::forward<KeyFingerprintT>(value); }
    template<typename KeyFingerprintT = Aws::String>
    CheckoutLicenseRequest& WithKeyFingerprint(KeyFingerprintT&& value) { SetKeyFingerprint(std::forward<KeyFingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License entitlements.</p>
     */
    inline const Aws::Vector<EntitlementData>& GetEntitlements() const { return m_entitlements; }
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }
    template<typename EntitlementsT = Aws::Vector<EntitlementData>>
    void SetEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::forward<EntitlementsT>(value); }
    template<typename EntitlementsT = Aws::Vector<EntitlementData>>
    CheckoutLicenseRequest& WithEntitlements(EntitlementsT&& value) { SetEntitlements(std::forward<EntitlementsT>(value)); return *this;}
    template<typename EntitlementsT = EntitlementData>
    CheckoutLicenseRequest& AddEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements.emplace_back(std::forward<EntitlementsT>(value)); return *this; }
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
    CheckoutLicenseRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License beneficiary.</p>
     */
    inline const Aws::String& GetBeneficiary() const { return m_beneficiary; }
    inline bool BeneficiaryHasBeenSet() const { return m_beneficiaryHasBeenSet; }
    template<typename BeneficiaryT = Aws::String>
    void SetBeneficiary(BeneficiaryT&& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = std::forward<BeneficiaryT>(value); }
    template<typename BeneficiaryT = Aws::String>
    CheckoutLicenseRequest& WithBeneficiary(BeneficiaryT&& value) { SetBeneficiary(std::forward<BeneficiaryT>(value)); return *this;}
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
    CheckoutLicenseRequest& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productSKU;
    bool m_productSKUHasBeenSet = false;

    CheckoutType m_checkoutType{CheckoutType::NOT_SET};
    bool m_checkoutTypeHasBeenSet = false;

    Aws::String m_keyFingerprint;
    bool m_keyFingerprintHasBeenSet = false;

    Aws::Vector<EntitlementData> m_entitlements;
    bool m_entitlementsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_beneficiary;
    bool m_beneficiaryHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
