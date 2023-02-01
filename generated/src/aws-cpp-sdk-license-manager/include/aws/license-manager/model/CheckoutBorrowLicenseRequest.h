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
    AWS_LICENSEMANAGER_API CheckoutBorrowLicenseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckoutBorrowLicense"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the license. The license must use the borrow
     * consumption configuration.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license. The license must use the borrow
     * consumption configuration.</p>
     */
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the license. The license must use the borrow
     * consumption configuration.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArnHasBeenSet = true; m_licenseArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license. The license must use the borrow
     * consumption configuration.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license. The license must use the borrow
     * consumption configuration.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArnHasBeenSet = true; m_licenseArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license. The license must use the borrow
     * consumption configuration.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license. The license must use the borrow
     * consumption configuration.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license. The license must use the borrow
     * consumption configuration.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


    /**
     * <p>License entitlements. Partial checkouts are not supported.</p>
     */
    inline const Aws::Vector<EntitlementData>& GetEntitlements() const{ return m_entitlements; }

    /**
     * <p>License entitlements. Partial checkouts are not supported.</p>
     */
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }

    /**
     * <p>License entitlements. Partial checkouts are not supported.</p>
     */
    inline void SetEntitlements(const Aws::Vector<EntitlementData>& value) { m_entitlementsHasBeenSet = true; m_entitlements = value; }

    /**
     * <p>License entitlements. Partial checkouts are not supported.</p>
     */
    inline void SetEntitlements(Aws::Vector<EntitlementData>&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::move(value); }

    /**
     * <p>License entitlements. Partial checkouts are not supported.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithEntitlements(const Aws::Vector<EntitlementData>& value) { SetEntitlements(value); return *this;}

    /**
     * <p>License entitlements. Partial checkouts are not supported.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithEntitlements(Aws::Vector<EntitlementData>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * <p>License entitlements. Partial checkouts are not supported.</p>
     */
    inline CheckoutBorrowLicenseRequest& AddEntitlements(const EntitlementData& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }

    /**
     * <p>License entitlements. Partial checkouts are not supported.</p>
     */
    inline CheckoutBorrowLicenseRequest& AddEntitlements(EntitlementData&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }


    /**
     * <p>Digital signature method. The possible value is JSON Web Signature (JWS)
     * algorithm PS384. For more information, see <a
     * href="https://tools.ietf.org/html/rfc7518#section-3.5">RFC 7518 Digital
     * Signature with RSASSA-PSS</a>.</p>
     */
    inline const DigitalSignatureMethod& GetDigitalSignatureMethod() const{ return m_digitalSignatureMethod; }

    /**
     * <p>Digital signature method. The possible value is JSON Web Signature (JWS)
     * algorithm PS384. For more information, see <a
     * href="https://tools.ietf.org/html/rfc7518#section-3.5">RFC 7518 Digital
     * Signature with RSASSA-PSS</a>.</p>
     */
    inline bool DigitalSignatureMethodHasBeenSet() const { return m_digitalSignatureMethodHasBeenSet; }

    /**
     * <p>Digital signature method. The possible value is JSON Web Signature (JWS)
     * algorithm PS384. For more information, see <a
     * href="https://tools.ietf.org/html/rfc7518#section-3.5">RFC 7518 Digital
     * Signature with RSASSA-PSS</a>.</p>
     */
    inline void SetDigitalSignatureMethod(const DigitalSignatureMethod& value) { m_digitalSignatureMethodHasBeenSet = true; m_digitalSignatureMethod = value; }

    /**
     * <p>Digital signature method. The possible value is JSON Web Signature (JWS)
     * algorithm PS384. For more information, see <a
     * href="https://tools.ietf.org/html/rfc7518#section-3.5">RFC 7518 Digital
     * Signature with RSASSA-PSS</a>.</p>
     */
    inline void SetDigitalSignatureMethod(DigitalSignatureMethod&& value) { m_digitalSignatureMethodHasBeenSet = true; m_digitalSignatureMethod = std::move(value); }

    /**
     * <p>Digital signature method. The possible value is JSON Web Signature (JWS)
     * algorithm PS384. For more information, see <a
     * href="https://tools.ietf.org/html/rfc7518#section-3.5">RFC 7518 Digital
     * Signature with RSASSA-PSS</a>.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithDigitalSignatureMethod(const DigitalSignatureMethod& value) { SetDigitalSignatureMethod(value); return *this;}

    /**
     * <p>Digital signature method. The possible value is JSON Web Signature (JWS)
     * algorithm PS384. For more information, see <a
     * href="https://tools.ietf.org/html/rfc7518#section-3.5">RFC 7518 Digital
     * Signature with RSASSA-PSS</a>.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithDigitalSignatureMethod(DigitalSignatureMethod&& value) { SetDigitalSignatureMethod(std::move(value)); return *this;}


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
    inline CheckoutBorrowLicenseRequest& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>Node ID.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>Node ID.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithNodeId(const char* value) { SetNodeId(value); return *this;}


    /**
     * <p>Information about constraints.</p>
     */
    inline const Aws::Vector<Metadata>& GetCheckoutMetadata() const{ return m_checkoutMetadata; }

    /**
     * <p>Information about constraints.</p>
     */
    inline bool CheckoutMetadataHasBeenSet() const { return m_checkoutMetadataHasBeenSet; }

    /**
     * <p>Information about constraints.</p>
     */
    inline void SetCheckoutMetadata(const Aws::Vector<Metadata>& value) { m_checkoutMetadataHasBeenSet = true; m_checkoutMetadata = value; }

    /**
     * <p>Information about constraints.</p>
     */
    inline void SetCheckoutMetadata(Aws::Vector<Metadata>&& value) { m_checkoutMetadataHasBeenSet = true; m_checkoutMetadata = std::move(value); }

    /**
     * <p>Information about constraints.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithCheckoutMetadata(const Aws::Vector<Metadata>& value) { SetCheckoutMetadata(value); return *this;}

    /**
     * <p>Information about constraints.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithCheckoutMetadata(Aws::Vector<Metadata>&& value) { SetCheckoutMetadata(std::move(value)); return *this;}

    /**
     * <p>Information about constraints.</p>
     */
    inline CheckoutBorrowLicenseRequest& AddCheckoutMetadata(const Metadata& value) { m_checkoutMetadataHasBeenSet = true; m_checkoutMetadata.push_back(value); return *this; }

    /**
     * <p>Information about constraints.</p>
     */
    inline CheckoutBorrowLicenseRequest& AddCheckoutMetadata(Metadata&& value) { m_checkoutMetadataHasBeenSet = true; m_checkoutMetadata.push_back(std::move(value)); return *this; }


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
    inline CheckoutBorrowLicenseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CheckoutBorrowLicenseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::Vector<EntitlementData> m_entitlements;
    bool m_entitlementsHasBeenSet = false;

    DigitalSignatureMethod m_digitalSignatureMethod;
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
