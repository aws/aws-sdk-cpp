/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/GrantStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/AllowedOperation.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Describes a grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/Grant">AWS
   * API Reference</a></p>
   */
  class Grant
  {
  public:
    AWS_LICENSEMANAGER_API Grant();
    AWS_LICENSEMANAGER_API Grant(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Grant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline const Aws::String& GetGrantArn() const{ return m_grantArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline bool GrantArnHasBeenSet() const { return m_grantArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline void SetGrantArn(const Aws::String& value) { m_grantArnHasBeenSet = true; m_grantArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline void SetGrantArn(Aws::String&& value) { m_grantArnHasBeenSet = true; m_grantArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline void SetGrantArn(const char* value) { m_grantArnHasBeenSet = true; m_grantArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline Grant& WithGrantArn(const Aws::String& value) { SetGrantArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline Grant& WithGrantArn(Aws::String&& value) { SetGrantArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline Grant& WithGrantArn(const char* value) { SetGrantArn(value); return *this;}


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
    inline Grant& WithGrantName(const Aws::String& value) { SetGrantName(value); return *this;}

    /**
     * <p>Grant name.</p>
     */
    inline Grant& WithGrantName(Aws::String&& value) { SetGrantName(std::move(value)); return *this;}

    /**
     * <p>Grant name.</p>
     */
    inline Grant& WithGrantName(const char* value) { SetGrantName(value); return *this;}


    /**
     * <p>Parent ARN.</p>
     */
    inline const Aws::String& GetParentArn() const{ return m_parentArn; }

    /**
     * <p>Parent ARN.</p>
     */
    inline bool ParentArnHasBeenSet() const { return m_parentArnHasBeenSet; }

    /**
     * <p>Parent ARN.</p>
     */
    inline void SetParentArn(const Aws::String& value) { m_parentArnHasBeenSet = true; m_parentArn = value; }

    /**
     * <p>Parent ARN.</p>
     */
    inline void SetParentArn(Aws::String&& value) { m_parentArnHasBeenSet = true; m_parentArn = std::move(value); }

    /**
     * <p>Parent ARN.</p>
     */
    inline void SetParentArn(const char* value) { m_parentArnHasBeenSet = true; m_parentArn.assign(value); }

    /**
     * <p>Parent ARN.</p>
     */
    inline Grant& WithParentArn(const Aws::String& value) { SetParentArn(value); return *this;}

    /**
     * <p>Parent ARN.</p>
     */
    inline Grant& WithParentArn(Aws::String&& value) { SetParentArn(std::move(value)); return *this;}

    /**
     * <p>Parent ARN.</p>
     */
    inline Grant& WithParentArn(const char* value) { SetParentArn(value); return *this;}


    /**
     * <p>License ARN.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>License ARN.</p>
     */
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }

    /**
     * <p>License ARN.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArnHasBeenSet = true; m_licenseArn = value; }

    /**
     * <p>License ARN.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::move(value); }

    /**
     * <p>License ARN.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArnHasBeenSet = true; m_licenseArn.assign(value); }

    /**
     * <p>License ARN.</p>
     */
    inline Grant& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>License ARN.</p>
     */
    inline Grant& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>License ARN.</p>
     */
    inline Grant& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


    /**
     * <p>The grantee principal ARN.</p>
     */
    inline const Aws::String& GetGranteePrincipalArn() const{ return m_granteePrincipalArn; }

    /**
     * <p>The grantee principal ARN.</p>
     */
    inline bool GranteePrincipalArnHasBeenSet() const { return m_granteePrincipalArnHasBeenSet; }

    /**
     * <p>The grantee principal ARN.</p>
     */
    inline void SetGranteePrincipalArn(const Aws::String& value) { m_granteePrincipalArnHasBeenSet = true; m_granteePrincipalArn = value; }

    /**
     * <p>The grantee principal ARN.</p>
     */
    inline void SetGranteePrincipalArn(Aws::String&& value) { m_granteePrincipalArnHasBeenSet = true; m_granteePrincipalArn = std::move(value); }

    /**
     * <p>The grantee principal ARN.</p>
     */
    inline void SetGranteePrincipalArn(const char* value) { m_granteePrincipalArnHasBeenSet = true; m_granteePrincipalArn.assign(value); }

    /**
     * <p>The grantee principal ARN.</p>
     */
    inline Grant& WithGranteePrincipalArn(const Aws::String& value) { SetGranteePrincipalArn(value); return *this;}

    /**
     * <p>The grantee principal ARN.</p>
     */
    inline Grant& WithGranteePrincipalArn(Aws::String&& value) { SetGranteePrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The grantee principal ARN.</p>
     */
    inline Grant& WithGranteePrincipalArn(const char* value) { SetGranteePrincipalArn(value); return *this;}


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
    inline Grant& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>Home Region of the grant.</p>
     */
    inline Grant& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>Home Region of the grant.</p>
     */
    inline Grant& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>Grant status.</p>
     */
    inline const GrantStatus& GetGrantStatus() const{ return m_grantStatus; }

    /**
     * <p>Grant status.</p>
     */
    inline bool GrantStatusHasBeenSet() const { return m_grantStatusHasBeenSet; }

    /**
     * <p>Grant status.</p>
     */
    inline void SetGrantStatus(const GrantStatus& value) { m_grantStatusHasBeenSet = true; m_grantStatus = value; }

    /**
     * <p>Grant status.</p>
     */
    inline void SetGrantStatus(GrantStatus&& value) { m_grantStatusHasBeenSet = true; m_grantStatus = std::move(value); }

    /**
     * <p>Grant status.</p>
     */
    inline Grant& WithGrantStatus(const GrantStatus& value) { SetGrantStatus(value); return *this;}

    /**
     * <p>Grant status.</p>
     */
    inline Grant& WithGrantStatus(GrantStatus&& value) { SetGrantStatus(std::move(value)); return *this;}


    /**
     * <p>Grant status reason.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>Grant status reason.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>Grant status reason.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>Grant status reason.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>Grant status reason.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>Grant status reason.</p>
     */
    inline Grant& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>Grant status reason.</p>
     */
    inline Grant& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>Grant status reason.</p>
     */
    inline Grant& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Grant version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Grant version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Grant version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Grant version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Grant version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Grant version.</p>
     */
    inline Grant& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Grant version.</p>
     */
    inline Grant& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Grant version.</p>
     */
    inline Grant& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Granted operations.</p>
     */
    inline const Aws::Vector<AllowedOperation>& GetGrantedOperations() const{ return m_grantedOperations; }

    /**
     * <p>Granted operations.</p>
     */
    inline bool GrantedOperationsHasBeenSet() const { return m_grantedOperationsHasBeenSet; }

    /**
     * <p>Granted operations.</p>
     */
    inline void SetGrantedOperations(const Aws::Vector<AllowedOperation>& value) { m_grantedOperationsHasBeenSet = true; m_grantedOperations = value; }

    /**
     * <p>Granted operations.</p>
     */
    inline void SetGrantedOperations(Aws::Vector<AllowedOperation>&& value) { m_grantedOperationsHasBeenSet = true; m_grantedOperations = std::move(value); }

    /**
     * <p>Granted operations.</p>
     */
    inline Grant& WithGrantedOperations(const Aws::Vector<AllowedOperation>& value) { SetGrantedOperations(value); return *this;}

    /**
     * <p>Granted operations.</p>
     */
    inline Grant& WithGrantedOperations(Aws::Vector<AllowedOperation>&& value) { SetGrantedOperations(std::move(value)); return *this;}

    /**
     * <p>Granted operations.</p>
     */
    inline Grant& AddGrantedOperations(const AllowedOperation& value) { m_grantedOperationsHasBeenSet = true; m_grantedOperations.push_back(value); return *this; }

    /**
     * <p>Granted operations.</p>
     */
    inline Grant& AddGrantedOperations(AllowedOperation&& value) { m_grantedOperationsHasBeenSet = true; m_grantedOperations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_grantArn;
    bool m_grantArnHasBeenSet = false;

    Aws::String m_grantName;
    bool m_grantNameHasBeenSet = false;

    Aws::String m_parentArn;
    bool m_parentArnHasBeenSet = false;

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::String m_granteePrincipalArn;
    bool m_granteePrincipalArnHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    GrantStatus m_grantStatus;
    bool m_grantStatusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<AllowedOperation> m_grantedOperations;
    bool m_grantedOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
