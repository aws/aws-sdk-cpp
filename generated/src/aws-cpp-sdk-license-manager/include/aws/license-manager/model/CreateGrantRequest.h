/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/AllowedOperation.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class CreateGrantRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CreateGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGrant"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateGrantRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateGrantRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateGrantRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Grant name.</p>
     */
    inline const Aws::String& GetGrantName() const{ return m_grantName; }

    /**
     * <p>Grant name.</p>
     */
    inline bool GrantNameHasBeenSet() const { return m_grantNameHasBeenSet; }

    /**
     * <p>Grant name.</p>
     */
    inline void SetGrantName(const Aws::String& value) { m_grantNameHasBeenSet = true; m_grantName = value; }

    /**
     * <p>Grant name.</p>
     */
    inline void SetGrantName(Aws::String&& value) { m_grantNameHasBeenSet = true; m_grantName = std::move(value); }

    /**
     * <p>Grant name.</p>
     */
    inline void SetGrantName(const char* value) { m_grantNameHasBeenSet = true; m_grantName.assign(value); }

    /**
     * <p>Grant name.</p>
     */
    inline CreateGrantRequest& WithGrantName(const Aws::String& value) { SetGrantName(value); return *this;}

    /**
     * <p>Grant name.</p>
     */
    inline CreateGrantRequest& WithGrantName(Aws::String&& value) { SetGrantName(std::move(value)); return *this;}

    /**
     * <p>Grant name.</p>
     */
    inline CreateGrantRequest& WithGrantName(const char* value) { SetGrantName(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArnHasBeenSet = true; m_licenseArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArnHasBeenSet = true; m_licenseArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline CreateGrantRequest& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline CreateGrantRequest& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline CreateGrantRequest& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


    /**
     * <p>The grant principals. This value should be specified as an Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>The grant principals. This value should be specified as an Amazon Resource
     * Name (ARN).</p>
     */
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }

    /**
     * <p>The grant principals. This value should be specified as an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }

    /**
     * <p>The grant principals. This value should be specified as an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }

    /**
     * <p>The grant principals. This value should be specified as an Amazon Resource
     * Name (ARN).</p>
     */
    inline CreateGrantRequest& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The grant principals. This value should be specified as an Amazon Resource
     * Name (ARN).</p>
     */
    inline CreateGrantRequest& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>The grant principals. This value should be specified as an Amazon Resource
     * Name (ARN).</p>
     */
    inline CreateGrantRequest& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>The grant principals. This value should be specified as an Amazon Resource
     * Name (ARN).</p>
     */
    inline CreateGrantRequest& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

    /**
     * <p>The grant principals. This value should be specified as an Amazon Resource
     * Name (ARN).</p>
     */
    inline CreateGrantRequest& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }


    /**
     * <p>Home Region of the grant.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>Home Region of the grant.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>Home Region of the grant.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>Home Region of the grant.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>Home Region of the grant.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>Home Region of the grant.</p>
     */
    inline CreateGrantRequest& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>Home Region of the grant.</p>
     */
    inline CreateGrantRequest& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>Home Region of the grant.</p>
     */
    inline CreateGrantRequest& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline const Aws::Vector<AllowedOperation>& GetAllowedOperations() const{ return m_allowedOperations; }

    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline bool AllowedOperationsHasBeenSet() const { return m_allowedOperationsHasBeenSet; }

    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline void SetAllowedOperations(const Aws::Vector<AllowedOperation>& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations = value; }

    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline void SetAllowedOperations(Aws::Vector<AllowedOperation>&& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations = std::move(value); }

    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline CreateGrantRequest& WithAllowedOperations(const Aws::Vector<AllowedOperation>& value) { SetAllowedOperations(value); return *this;}

    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline CreateGrantRequest& WithAllowedOperations(Aws::Vector<AllowedOperation>&& value) { SetAllowedOperations(std::move(value)); return *this;}

    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline CreateGrantRequest& AddAllowedOperations(const AllowedOperation& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations.push_back(value); return *this; }

    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline CreateGrantRequest& AddAllowedOperations(AllowedOperation&& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_grantName;
    bool m_grantNameHasBeenSet = false;

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    Aws::Vector<AllowedOperation> m_allowedOperations;
    bool m_allowedOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
