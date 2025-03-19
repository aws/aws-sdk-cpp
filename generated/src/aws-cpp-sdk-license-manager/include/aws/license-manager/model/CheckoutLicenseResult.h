/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/CheckoutType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/EntitlementData.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LicenseManager
{
namespace Model
{
  class CheckoutLicenseResult
  {
  public:
    AWS_LICENSEMANAGER_API CheckoutLicenseResult() = default;
    AWS_LICENSEMANAGER_API CheckoutLicenseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CheckoutLicenseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Checkout type.</p>
     */
    inline CheckoutType GetCheckoutType() const { return m_checkoutType; }
    inline void SetCheckoutType(CheckoutType value) { m_checkoutTypeHasBeenSet = true; m_checkoutType = value; }
    inline CheckoutLicenseResult& WithCheckoutType(CheckoutType value) { SetCheckoutType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License consumption token.</p>
     */
    inline const Aws::String& GetLicenseConsumptionToken() const { return m_licenseConsumptionToken; }
    template<typename LicenseConsumptionTokenT = Aws::String>
    void SetLicenseConsumptionToken(LicenseConsumptionTokenT&& value) { m_licenseConsumptionTokenHasBeenSet = true; m_licenseConsumptionToken = std::forward<LicenseConsumptionTokenT>(value); }
    template<typename LicenseConsumptionTokenT = Aws::String>
    CheckoutLicenseResult& WithLicenseConsumptionToken(LicenseConsumptionTokenT&& value) { SetLicenseConsumptionToken(std::forward<LicenseConsumptionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allowed license entitlements.</p>
     */
    inline const Aws::Vector<EntitlementData>& GetEntitlementsAllowed() const { return m_entitlementsAllowed; }
    template<typename EntitlementsAllowedT = Aws::Vector<EntitlementData>>
    void SetEntitlementsAllowed(EntitlementsAllowedT&& value) { m_entitlementsAllowedHasBeenSet = true; m_entitlementsAllowed = std::forward<EntitlementsAllowedT>(value); }
    template<typename EntitlementsAllowedT = Aws::Vector<EntitlementData>>
    CheckoutLicenseResult& WithEntitlementsAllowed(EntitlementsAllowedT&& value) { SetEntitlementsAllowed(std::forward<EntitlementsAllowedT>(value)); return *this;}
    template<typename EntitlementsAllowedT = EntitlementData>
    CheckoutLicenseResult& AddEntitlementsAllowed(EntitlementsAllowedT&& value) { m_entitlementsAllowedHasBeenSet = true; m_entitlementsAllowed.emplace_back(std::forward<EntitlementsAllowedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Signed token.</p>
     */
    inline const Aws::String& GetSignedToken() const { return m_signedToken; }
    template<typename SignedTokenT = Aws::String>
    void SetSignedToken(SignedTokenT&& value) { m_signedTokenHasBeenSet = true; m_signedToken = std::forward<SignedTokenT>(value); }
    template<typename SignedTokenT = Aws::String>
    CheckoutLicenseResult& WithSignedToken(SignedTokenT&& value) { SetSignedToken(std::forward<SignedTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Node ID.</p>
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    CheckoutLicenseResult& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline const Aws::String& GetIssuedAt() const { return m_issuedAt; }
    template<typename IssuedAtT = Aws::String>
    void SetIssuedAt(IssuedAtT&& value) { m_issuedAtHasBeenSet = true; m_issuedAt = std::forward<IssuedAtT>(value); }
    template<typename IssuedAtT = Aws::String>
    CheckoutLicenseResult& WithIssuedAt(IssuedAtT&& value) { SetIssuedAt(std::forward<IssuedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline const Aws::String& GetExpiration() const { return m_expiration; }
    template<typename ExpirationT = Aws::String>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::String>
    CheckoutLicenseResult& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the checkout license.</p>
     */
    inline const Aws::String& GetLicenseArn() const { return m_licenseArn; }
    template<typename LicenseArnT = Aws::String>
    void SetLicenseArn(LicenseArnT&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::forward<LicenseArnT>(value); }
    template<typename LicenseArnT = Aws::String>
    CheckoutLicenseResult& WithLicenseArn(LicenseArnT&& value) { SetLicenseArn(std::forward<LicenseArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CheckoutLicenseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CheckoutType m_checkoutType{CheckoutType::NOT_SET};
    bool m_checkoutTypeHasBeenSet = false;

    Aws::String m_licenseConsumptionToken;
    bool m_licenseConsumptionTokenHasBeenSet = false;

    Aws::Vector<EntitlementData> m_entitlementsAllowed;
    bool m_entitlementsAllowedHasBeenSet = false;

    Aws::String m_signedToken;
    bool m_signedTokenHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::String m_issuedAt;
    bool m_issuedAtHasBeenSet = false;

    Aws::String m_expiration;
    bool m_expirationHasBeenSet = false;

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
