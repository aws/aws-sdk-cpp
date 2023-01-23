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
    AWS_LICENSEMANAGER_API CheckoutLicenseResult();
    AWS_LICENSEMANAGER_API CheckoutLicenseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CheckoutLicenseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Checkout type.</p>
     */
    inline const CheckoutType& GetCheckoutType() const{ return m_checkoutType; }

    /**
     * <p>Checkout type.</p>
     */
    inline void SetCheckoutType(const CheckoutType& value) { m_checkoutType = value; }

    /**
     * <p>Checkout type.</p>
     */
    inline void SetCheckoutType(CheckoutType&& value) { m_checkoutType = std::move(value); }

    /**
     * <p>Checkout type.</p>
     */
    inline CheckoutLicenseResult& WithCheckoutType(const CheckoutType& value) { SetCheckoutType(value); return *this;}

    /**
     * <p>Checkout type.</p>
     */
    inline CheckoutLicenseResult& WithCheckoutType(CheckoutType&& value) { SetCheckoutType(std::move(value)); return *this;}


    /**
     * <p>License consumption token.</p>
     */
    inline const Aws::String& GetLicenseConsumptionToken() const{ return m_licenseConsumptionToken; }

    /**
     * <p>License consumption token.</p>
     */
    inline void SetLicenseConsumptionToken(const Aws::String& value) { m_licenseConsumptionToken = value; }

    /**
     * <p>License consumption token.</p>
     */
    inline void SetLicenseConsumptionToken(Aws::String&& value) { m_licenseConsumptionToken = std::move(value); }

    /**
     * <p>License consumption token.</p>
     */
    inline void SetLicenseConsumptionToken(const char* value) { m_licenseConsumptionToken.assign(value); }

    /**
     * <p>License consumption token.</p>
     */
    inline CheckoutLicenseResult& WithLicenseConsumptionToken(const Aws::String& value) { SetLicenseConsumptionToken(value); return *this;}

    /**
     * <p>License consumption token.</p>
     */
    inline CheckoutLicenseResult& WithLicenseConsumptionToken(Aws::String&& value) { SetLicenseConsumptionToken(std::move(value)); return *this;}

    /**
     * <p>License consumption token.</p>
     */
    inline CheckoutLicenseResult& WithLicenseConsumptionToken(const char* value) { SetLicenseConsumptionToken(value); return *this;}


    /**
     * <p>Allowed license entitlements.</p>
     */
    inline const Aws::Vector<EntitlementData>& GetEntitlementsAllowed() const{ return m_entitlementsAllowed; }

    /**
     * <p>Allowed license entitlements.</p>
     */
    inline void SetEntitlementsAllowed(const Aws::Vector<EntitlementData>& value) { m_entitlementsAllowed = value; }

    /**
     * <p>Allowed license entitlements.</p>
     */
    inline void SetEntitlementsAllowed(Aws::Vector<EntitlementData>&& value) { m_entitlementsAllowed = std::move(value); }

    /**
     * <p>Allowed license entitlements.</p>
     */
    inline CheckoutLicenseResult& WithEntitlementsAllowed(const Aws::Vector<EntitlementData>& value) { SetEntitlementsAllowed(value); return *this;}

    /**
     * <p>Allowed license entitlements.</p>
     */
    inline CheckoutLicenseResult& WithEntitlementsAllowed(Aws::Vector<EntitlementData>&& value) { SetEntitlementsAllowed(std::move(value)); return *this;}

    /**
     * <p>Allowed license entitlements.</p>
     */
    inline CheckoutLicenseResult& AddEntitlementsAllowed(const EntitlementData& value) { m_entitlementsAllowed.push_back(value); return *this; }

    /**
     * <p>Allowed license entitlements.</p>
     */
    inline CheckoutLicenseResult& AddEntitlementsAllowed(EntitlementData&& value) { m_entitlementsAllowed.push_back(std::move(value)); return *this; }


    /**
     * <p>Signed token.</p>
     */
    inline const Aws::String& GetSignedToken() const{ return m_signedToken; }

    /**
     * <p>Signed token.</p>
     */
    inline void SetSignedToken(const Aws::String& value) { m_signedToken = value; }

    /**
     * <p>Signed token.</p>
     */
    inline void SetSignedToken(Aws::String&& value) { m_signedToken = std::move(value); }

    /**
     * <p>Signed token.</p>
     */
    inline void SetSignedToken(const char* value) { m_signedToken.assign(value); }

    /**
     * <p>Signed token.</p>
     */
    inline CheckoutLicenseResult& WithSignedToken(const Aws::String& value) { SetSignedToken(value); return *this;}

    /**
     * <p>Signed token.</p>
     */
    inline CheckoutLicenseResult& WithSignedToken(Aws::String&& value) { SetSignedToken(std::move(value)); return *this;}

    /**
     * <p>Signed token.</p>
     */
    inline CheckoutLicenseResult& WithSignedToken(const char* value) { SetSignedToken(value); return *this;}


    /**
     * <p>Node ID.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>Node ID.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeId = value; }

    /**
     * <p>Node ID.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeId = std::move(value); }

    /**
     * <p>Node ID.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeId.assign(value); }

    /**
     * <p>Node ID.</p>
     */
    inline CheckoutLicenseResult& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>Node ID.</p>
     */
    inline CheckoutLicenseResult& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>Node ID.</p>
     */
    inline CheckoutLicenseResult& WithNodeId(const char* value) { SetNodeId(value); return *this;}


    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline const Aws::String& GetIssuedAt() const{ return m_issuedAt; }

    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline void SetIssuedAt(const Aws::String& value) { m_issuedAt = value; }

    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline void SetIssuedAt(Aws::String&& value) { m_issuedAt = std::move(value); }

    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline void SetIssuedAt(const char* value) { m_issuedAt.assign(value); }

    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline CheckoutLicenseResult& WithIssuedAt(const Aws::String& value) { SetIssuedAt(value); return *this;}

    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline CheckoutLicenseResult& WithIssuedAt(Aws::String&& value) { SetIssuedAt(std::move(value)); return *this;}

    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline CheckoutLicenseResult& WithIssuedAt(const char* value) { SetIssuedAt(value); return *this;}


    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline const Aws::String& GetExpiration() const{ return m_expiration; }

    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline void SetExpiration(const Aws::String& value) { m_expiration = value; }

    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline void SetExpiration(Aws::String&& value) { m_expiration = std::move(value); }

    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline void SetExpiration(const char* value) { m_expiration.assign(value); }

    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline CheckoutLicenseResult& WithExpiration(const Aws::String& value) { SetExpiration(value); return *this;}

    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline CheckoutLicenseResult& WithExpiration(Aws::String&& value) { SetExpiration(std::move(value)); return *this;}

    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline CheckoutLicenseResult& WithExpiration(const char* value) { SetExpiration(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the checkout license.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the checkout license.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the checkout license.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the checkout license.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the checkout license.</p>
     */
    inline CheckoutLicenseResult& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the checkout license.</p>
     */
    inline CheckoutLicenseResult& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the checkout license.</p>
     */
    inline CheckoutLicenseResult& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}

  private:

    CheckoutType m_checkoutType;

    Aws::String m_licenseConsumptionToken;

    Aws::Vector<EntitlementData> m_entitlementsAllowed;

    Aws::String m_signedToken;

    Aws::String m_nodeId;

    Aws::String m_issuedAt;

    Aws::String m_expiration;

    Aws::String m_licenseArn;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
