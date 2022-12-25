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
    AWS_LICENSEMANAGER_API CheckoutLicenseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckoutLicense"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Product SKU.</p>
     */
    inline const Aws::String& GetProductSKU() const{ return m_productSKU; }

    /**
     * <p>Product SKU.</p>
     */
    inline bool ProductSKUHasBeenSet() const { return m_productSKUHasBeenSet; }

    /**
     * <p>Product SKU.</p>
     */
    inline void SetProductSKU(const Aws::String& value) { m_productSKUHasBeenSet = true; m_productSKU = value; }

    /**
     * <p>Product SKU.</p>
     */
    inline void SetProductSKU(Aws::String&& value) { m_productSKUHasBeenSet = true; m_productSKU = std::move(value); }

    /**
     * <p>Product SKU.</p>
     */
    inline void SetProductSKU(const char* value) { m_productSKUHasBeenSet = true; m_productSKU.assign(value); }

    /**
     * <p>Product SKU.</p>
     */
    inline CheckoutLicenseRequest& WithProductSKU(const Aws::String& value) { SetProductSKU(value); return *this;}

    /**
     * <p>Product SKU.</p>
     */
    inline CheckoutLicenseRequest& WithProductSKU(Aws::String&& value) { SetProductSKU(std::move(value)); return *this;}

    /**
     * <p>Product SKU.</p>
     */
    inline CheckoutLicenseRequest& WithProductSKU(const char* value) { SetProductSKU(value); return *this;}


    /**
     * <p>Checkout type.</p>
     */
    inline const CheckoutType& GetCheckoutType() const{ return m_checkoutType; }

    /**
     * <p>Checkout type.</p>
     */
    inline bool CheckoutTypeHasBeenSet() const { return m_checkoutTypeHasBeenSet; }

    /**
     * <p>Checkout type.</p>
     */
    inline void SetCheckoutType(const CheckoutType& value) { m_checkoutTypeHasBeenSet = true; m_checkoutType = value; }

    /**
     * <p>Checkout type.</p>
     */
    inline void SetCheckoutType(CheckoutType&& value) { m_checkoutTypeHasBeenSet = true; m_checkoutType = std::move(value); }

    /**
     * <p>Checkout type.</p>
     */
    inline CheckoutLicenseRequest& WithCheckoutType(const CheckoutType& value) { SetCheckoutType(value); return *this;}

    /**
     * <p>Checkout type.</p>
     */
    inline CheckoutLicenseRequest& WithCheckoutType(CheckoutType&& value) { SetCheckoutType(std::move(value)); return *this;}


    /**
     * <p>Key fingerprint identifying the license.</p>
     */
    inline const Aws::String& GetKeyFingerprint() const{ return m_keyFingerprint; }

    /**
     * <p>Key fingerprint identifying the license.</p>
     */
    inline bool KeyFingerprintHasBeenSet() const { return m_keyFingerprintHasBeenSet; }

    /**
     * <p>Key fingerprint identifying the license.</p>
     */
    inline void SetKeyFingerprint(const Aws::String& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = value; }

    /**
     * <p>Key fingerprint identifying the license.</p>
     */
    inline void SetKeyFingerprint(Aws::String&& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = std::move(value); }

    /**
     * <p>Key fingerprint identifying the license.</p>
     */
    inline void SetKeyFingerprint(const char* value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint.assign(value); }

    /**
     * <p>Key fingerprint identifying the license.</p>
     */
    inline CheckoutLicenseRequest& WithKeyFingerprint(const Aws::String& value) { SetKeyFingerprint(value); return *this;}

    /**
     * <p>Key fingerprint identifying the license.</p>
     */
    inline CheckoutLicenseRequest& WithKeyFingerprint(Aws::String&& value) { SetKeyFingerprint(std::move(value)); return *this;}

    /**
     * <p>Key fingerprint identifying the license.</p>
     */
    inline CheckoutLicenseRequest& WithKeyFingerprint(const char* value) { SetKeyFingerprint(value); return *this;}


    /**
     * <p>License entitlements.</p>
     */
    inline const Aws::Vector<EntitlementData>& GetEntitlements() const{ return m_entitlements; }

    /**
     * <p>License entitlements.</p>
     */
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }

    /**
     * <p>License entitlements.</p>
     */
    inline void SetEntitlements(const Aws::Vector<EntitlementData>& value) { m_entitlementsHasBeenSet = true; m_entitlements = value; }

    /**
     * <p>License entitlements.</p>
     */
    inline void SetEntitlements(Aws::Vector<EntitlementData>&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::move(value); }

    /**
     * <p>License entitlements.</p>
     */
    inline CheckoutLicenseRequest& WithEntitlements(const Aws::Vector<EntitlementData>& value) { SetEntitlements(value); return *this;}

    /**
     * <p>License entitlements.</p>
     */
    inline CheckoutLicenseRequest& WithEntitlements(Aws::Vector<EntitlementData>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * <p>License entitlements.</p>
     */
    inline CheckoutLicenseRequest& AddEntitlements(const EntitlementData& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }

    /**
     * <p>License entitlements.</p>
     */
    inline CheckoutLicenseRequest& AddEntitlements(EntitlementData&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CheckoutLicenseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CheckoutLicenseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CheckoutLicenseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>License beneficiary.</p>
     */
    inline const Aws::String& GetBeneficiary() const{ return m_beneficiary; }

    /**
     * <p>License beneficiary.</p>
     */
    inline bool BeneficiaryHasBeenSet() const { return m_beneficiaryHasBeenSet; }

    /**
     * <p>License beneficiary.</p>
     */
    inline void SetBeneficiary(const Aws::String& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = value; }

    /**
     * <p>License beneficiary.</p>
     */
    inline void SetBeneficiary(Aws::String&& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = std::move(value); }

    /**
     * <p>License beneficiary.</p>
     */
    inline void SetBeneficiary(const char* value) { m_beneficiaryHasBeenSet = true; m_beneficiary.assign(value); }

    /**
     * <p>License beneficiary.</p>
     */
    inline CheckoutLicenseRequest& WithBeneficiary(const Aws::String& value) { SetBeneficiary(value); return *this;}

    /**
     * <p>License beneficiary.</p>
     */
    inline CheckoutLicenseRequest& WithBeneficiary(Aws::String&& value) { SetBeneficiary(std::move(value)); return *this;}

    /**
     * <p>License beneficiary.</p>
     */
    inline CheckoutLicenseRequest& WithBeneficiary(const char* value) { SetBeneficiary(value); return *this;}


    /**
     * <p>Node ID.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>Node ID.</p>
     */
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }

    /**
     * <p>Node ID.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }

    /**
     * <p>Node ID.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }

    /**
     * <p>Node ID.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }

    /**
     * <p>Node ID.</p>
     */
    inline CheckoutLicenseRequest& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>Node ID.</p>
     */
    inline CheckoutLicenseRequest& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>Node ID.</p>
     */
    inline CheckoutLicenseRequest& WithNodeId(const char* value) { SetNodeId(value); return *this;}

  private:

    Aws::String m_productSKU;
    bool m_productSKUHasBeenSet = false;

    CheckoutType m_checkoutType;
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
