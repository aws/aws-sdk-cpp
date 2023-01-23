/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/EntitlementData.h>
#include <aws/license-manager/model/Metadata.h>
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
  class CheckoutBorrowLicenseResult
  {
  public:
    AWS_LICENSEMANAGER_API CheckoutBorrowLicenseResult();
    AWS_LICENSEMANAGER_API CheckoutBorrowLicenseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CheckoutBorrowLicenseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline CheckoutBorrowLicenseResult& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline CheckoutBorrowLicenseResult& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline CheckoutBorrowLicenseResult& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


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
    inline CheckoutBorrowLicenseResult& WithLicenseConsumptionToken(const Aws::String& value) { SetLicenseConsumptionToken(value); return *this;}

    /**
     * <p>License consumption token.</p>
     */
    inline CheckoutBorrowLicenseResult& WithLicenseConsumptionToken(Aws::String&& value) { SetLicenseConsumptionToken(std::move(value)); return *this;}

    /**
     * <p>License consumption token.</p>
     */
    inline CheckoutBorrowLicenseResult& WithLicenseConsumptionToken(const char* value) { SetLicenseConsumptionToken(value); return *this;}


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
    inline CheckoutBorrowLicenseResult& WithEntitlementsAllowed(const Aws::Vector<EntitlementData>& value) { SetEntitlementsAllowed(value); return *this;}

    /**
     * <p>Allowed license entitlements.</p>
     */
    inline CheckoutBorrowLicenseResult& WithEntitlementsAllowed(Aws::Vector<EntitlementData>&& value) { SetEntitlementsAllowed(std::move(value)); return *this;}

    /**
     * <p>Allowed license entitlements.</p>
     */
    inline CheckoutBorrowLicenseResult& AddEntitlementsAllowed(const EntitlementData& value) { m_entitlementsAllowed.push_back(value); return *this; }

    /**
     * <p>Allowed license entitlements.</p>
     */
    inline CheckoutBorrowLicenseResult& AddEntitlementsAllowed(EntitlementData&& value) { m_entitlementsAllowed.push_back(std::move(value)); return *this; }


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
    inline CheckoutBorrowLicenseResult& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>Node ID.</p>
     */
    inline CheckoutBorrowLicenseResult& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>Node ID.</p>
     */
    inline CheckoutBorrowLicenseResult& WithNodeId(const char* value) { SetNodeId(value); return *this;}


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
    inline CheckoutBorrowLicenseResult& WithSignedToken(const Aws::String& value) { SetSignedToken(value); return *this;}

    /**
     * <p>Signed token.</p>
     */
    inline CheckoutBorrowLicenseResult& WithSignedToken(Aws::String&& value) { SetSignedToken(std::move(value)); return *this;}

    /**
     * <p>Signed token.</p>
     */
    inline CheckoutBorrowLicenseResult& WithSignedToken(const char* value) { SetSignedToken(value); return *this;}


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
    inline CheckoutBorrowLicenseResult& WithIssuedAt(const Aws::String& value) { SetIssuedAt(value); return *this;}

    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline CheckoutBorrowLicenseResult& WithIssuedAt(Aws::String&& value) { SetIssuedAt(std::move(value)); return *this;}

    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline CheckoutBorrowLicenseResult& WithIssuedAt(const char* value) { SetIssuedAt(value); return *this;}


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
    inline CheckoutBorrowLicenseResult& WithExpiration(const Aws::String& value) { SetExpiration(value); return *this;}

    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline CheckoutBorrowLicenseResult& WithExpiration(Aws::String&& value) { SetExpiration(std::move(value)); return *this;}

    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline CheckoutBorrowLicenseResult& WithExpiration(const char* value) { SetExpiration(value); return *this;}


    /**
     * <p>Information about constraints.</p>
     */
    inline const Aws::Vector<Metadata>& GetCheckoutMetadata() const{ return m_checkoutMetadata; }

    /**
     * <p>Information about constraints.</p>
     */
    inline void SetCheckoutMetadata(const Aws::Vector<Metadata>& value) { m_checkoutMetadata = value; }

    /**
     * <p>Information about constraints.</p>
     */
    inline void SetCheckoutMetadata(Aws::Vector<Metadata>&& value) { m_checkoutMetadata = std::move(value); }

    /**
     * <p>Information about constraints.</p>
     */
    inline CheckoutBorrowLicenseResult& WithCheckoutMetadata(const Aws::Vector<Metadata>& value) { SetCheckoutMetadata(value); return *this;}

    /**
     * <p>Information about constraints.</p>
     */
    inline CheckoutBorrowLicenseResult& WithCheckoutMetadata(Aws::Vector<Metadata>&& value) { SetCheckoutMetadata(std::move(value)); return *this;}

    /**
     * <p>Information about constraints.</p>
     */
    inline CheckoutBorrowLicenseResult& AddCheckoutMetadata(const Metadata& value) { m_checkoutMetadata.push_back(value); return *this; }

    /**
     * <p>Information about constraints.</p>
     */
    inline CheckoutBorrowLicenseResult& AddCheckoutMetadata(Metadata&& value) { m_checkoutMetadata.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_licenseArn;

    Aws::String m_licenseConsumptionToken;

    Aws::Vector<EntitlementData> m_entitlementsAllowed;

    Aws::String m_nodeId;

    Aws::String m_signedToken;

    Aws::String m_issuedAt;

    Aws::String m_expiration;

    Aws::Vector<Metadata> m_checkoutMetadata;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
