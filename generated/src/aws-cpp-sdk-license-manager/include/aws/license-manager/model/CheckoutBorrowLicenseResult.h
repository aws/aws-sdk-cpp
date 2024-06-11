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


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArn = value; }
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArn = std::move(value); }
    inline void SetLicenseArn(const char* value) { m_licenseArn.assign(value); }
    inline CheckoutBorrowLicenseResult& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}
    inline CheckoutBorrowLicenseResult& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}
    inline CheckoutBorrowLicenseResult& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License consumption token.</p>
     */
    inline const Aws::String& GetLicenseConsumptionToken() const{ return m_licenseConsumptionToken; }
    inline void SetLicenseConsumptionToken(const Aws::String& value) { m_licenseConsumptionToken = value; }
    inline void SetLicenseConsumptionToken(Aws::String&& value) { m_licenseConsumptionToken = std::move(value); }
    inline void SetLicenseConsumptionToken(const char* value) { m_licenseConsumptionToken.assign(value); }
    inline CheckoutBorrowLicenseResult& WithLicenseConsumptionToken(const Aws::String& value) { SetLicenseConsumptionToken(value); return *this;}
    inline CheckoutBorrowLicenseResult& WithLicenseConsumptionToken(Aws::String&& value) { SetLicenseConsumptionToken(std::move(value)); return *this;}
    inline CheckoutBorrowLicenseResult& WithLicenseConsumptionToken(const char* value) { SetLicenseConsumptionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allowed license entitlements.</p>
     */
    inline const Aws::Vector<EntitlementData>& GetEntitlementsAllowed() const{ return m_entitlementsAllowed; }
    inline void SetEntitlementsAllowed(const Aws::Vector<EntitlementData>& value) { m_entitlementsAllowed = value; }
    inline void SetEntitlementsAllowed(Aws::Vector<EntitlementData>&& value) { m_entitlementsAllowed = std::move(value); }
    inline CheckoutBorrowLicenseResult& WithEntitlementsAllowed(const Aws::Vector<EntitlementData>& value) { SetEntitlementsAllowed(value); return *this;}
    inline CheckoutBorrowLicenseResult& WithEntitlementsAllowed(Aws::Vector<EntitlementData>&& value) { SetEntitlementsAllowed(std::move(value)); return *this;}
    inline CheckoutBorrowLicenseResult& AddEntitlementsAllowed(const EntitlementData& value) { m_entitlementsAllowed.push_back(value); return *this; }
    inline CheckoutBorrowLicenseResult& AddEntitlementsAllowed(EntitlementData&& value) { m_entitlementsAllowed.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Node ID.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }
    inline void SetNodeId(const Aws::String& value) { m_nodeId = value; }
    inline void SetNodeId(Aws::String&& value) { m_nodeId = std::move(value); }
    inline void SetNodeId(const char* value) { m_nodeId.assign(value); }
    inline CheckoutBorrowLicenseResult& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}
    inline CheckoutBorrowLicenseResult& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}
    inline CheckoutBorrowLicenseResult& WithNodeId(const char* value) { SetNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signed token.</p>
     */
    inline const Aws::String& GetSignedToken() const{ return m_signedToken; }
    inline void SetSignedToken(const Aws::String& value) { m_signedToken = value; }
    inline void SetSignedToken(Aws::String&& value) { m_signedToken = std::move(value); }
    inline void SetSignedToken(const char* value) { m_signedToken.assign(value); }
    inline CheckoutBorrowLicenseResult& WithSignedToken(const Aws::String& value) { SetSignedToken(value); return *this;}
    inline CheckoutBorrowLicenseResult& WithSignedToken(Aws::String&& value) { SetSignedToken(std::move(value)); return *this;}
    inline CheckoutBorrowLicenseResult& WithSignedToken(const char* value) { SetSignedToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which the license checkout is issued.</p>
     */
    inline const Aws::String& GetIssuedAt() const{ return m_issuedAt; }
    inline void SetIssuedAt(const Aws::String& value) { m_issuedAt = value; }
    inline void SetIssuedAt(Aws::String&& value) { m_issuedAt = std::move(value); }
    inline void SetIssuedAt(const char* value) { m_issuedAt.assign(value); }
    inline CheckoutBorrowLicenseResult& WithIssuedAt(const Aws::String& value) { SetIssuedAt(value); return *this;}
    inline CheckoutBorrowLicenseResult& WithIssuedAt(Aws::String&& value) { SetIssuedAt(std::move(value)); return *this;}
    inline CheckoutBorrowLicenseResult& WithIssuedAt(const char* value) { SetIssuedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which the license checkout expires.</p>
     */
    inline const Aws::String& GetExpiration() const{ return m_expiration; }
    inline void SetExpiration(const Aws::String& value) { m_expiration = value; }
    inline void SetExpiration(Aws::String&& value) { m_expiration = std::move(value); }
    inline void SetExpiration(const char* value) { m_expiration.assign(value); }
    inline CheckoutBorrowLicenseResult& WithExpiration(const Aws::String& value) { SetExpiration(value); return *this;}
    inline CheckoutBorrowLicenseResult& WithExpiration(Aws::String&& value) { SetExpiration(std::move(value)); return *this;}
    inline CheckoutBorrowLicenseResult& WithExpiration(const char* value) { SetExpiration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about constraints.</p>
     */
    inline const Aws::Vector<Metadata>& GetCheckoutMetadata() const{ return m_checkoutMetadata; }
    inline void SetCheckoutMetadata(const Aws::Vector<Metadata>& value) { m_checkoutMetadata = value; }
    inline void SetCheckoutMetadata(Aws::Vector<Metadata>&& value) { m_checkoutMetadata = std::move(value); }
    inline CheckoutBorrowLicenseResult& WithCheckoutMetadata(const Aws::Vector<Metadata>& value) { SetCheckoutMetadata(value); return *this;}
    inline CheckoutBorrowLicenseResult& WithCheckoutMetadata(Aws::Vector<Metadata>&& value) { SetCheckoutMetadata(std::move(value)); return *this;}
    inline CheckoutBorrowLicenseResult& AddCheckoutMetadata(const Metadata& value) { m_checkoutMetadata.push_back(value); return *this; }
    inline CheckoutBorrowLicenseResult& AddCheckoutMetadata(Metadata&& value) { m_checkoutMetadata.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CheckoutBorrowLicenseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CheckoutBorrowLicenseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CheckoutBorrowLicenseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseArn;

    Aws::String m_licenseConsumptionToken;

    Aws::Vector<EntitlementData> m_entitlementsAllowed;

    Aws::String m_nodeId;

    Aws::String m_signedToken;

    Aws::String m_issuedAt;

    Aws::String m_expiration;

    Aws::Vector<Metadata> m_checkoutMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
