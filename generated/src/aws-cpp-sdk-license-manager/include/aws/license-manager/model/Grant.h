/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/GrantStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/Options.h>
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


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline const Aws::String& GetGrantArn() const{ return m_grantArn; }
    inline bool GrantArnHasBeenSet() const { return m_grantArnHasBeenSet; }
    inline void SetGrantArn(const Aws::String& value) { m_grantArnHasBeenSet = true; m_grantArn = value; }
    inline void SetGrantArn(Aws::String&& value) { m_grantArnHasBeenSet = true; m_grantArn = std::move(value); }
    inline void SetGrantArn(const char* value) { m_grantArnHasBeenSet = true; m_grantArn.assign(value); }
    inline Grant& WithGrantArn(const Aws::String& value) { SetGrantArn(value); return *this;}
    inline Grant& WithGrantArn(Aws::String&& value) { SetGrantArn(std::move(value)); return *this;}
    inline Grant& WithGrantArn(const char* value) { SetGrantArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant name.</p>
     */
    inline const Aws::String& GetGrantName() const{ return m_grantName; }
    inline bool GrantNameHasBeenSet() const { return m_grantNameHasBeenSet; }
    inline void SetGrantName(const Aws::String& value) { m_grantNameHasBeenSet = true; m_grantName = value; }
    inline void SetGrantName(Aws::String&& value) { m_grantNameHasBeenSet = true; m_grantName = std::move(value); }
    inline void SetGrantName(const char* value) { m_grantNameHasBeenSet = true; m_grantName.assign(value); }
    inline Grant& WithGrantName(const Aws::String& value) { SetGrantName(value); return *this;}
    inline Grant& WithGrantName(Aws::String&& value) { SetGrantName(std::move(value)); return *this;}
    inline Grant& WithGrantName(const char* value) { SetGrantName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parent ARN.</p>
     */
    inline const Aws::String& GetParentArn() const{ return m_parentArn; }
    inline bool ParentArnHasBeenSet() const { return m_parentArnHasBeenSet; }
    inline void SetParentArn(const Aws::String& value) { m_parentArnHasBeenSet = true; m_parentArn = value; }
    inline void SetParentArn(Aws::String&& value) { m_parentArnHasBeenSet = true; m_parentArn = std::move(value); }
    inline void SetParentArn(const char* value) { m_parentArnHasBeenSet = true; m_parentArn.assign(value); }
    inline Grant& WithParentArn(const Aws::String& value) { SetParentArn(value); return *this;}
    inline Grant& WithParentArn(Aws::String&& value) { SetParentArn(std::move(value)); return *this;}
    inline Grant& WithParentArn(const char* value) { SetParentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License ARN.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArnHasBeenSet = true; m_licenseArn = value; }
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::move(value); }
    inline void SetLicenseArn(const char* value) { m_licenseArnHasBeenSet = true; m_licenseArn.assign(value); }
    inline Grant& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}
    inline Grant& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}
    inline Grant& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grantee principal ARN.</p>
     */
    inline const Aws::String& GetGranteePrincipalArn() const{ return m_granteePrincipalArn; }
    inline bool GranteePrincipalArnHasBeenSet() const { return m_granteePrincipalArnHasBeenSet; }
    inline void SetGranteePrincipalArn(const Aws::String& value) { m_granteePrincipalArnHasBeenSet = true; m_granteePrincipalArn = value; }
    inline void SetGranteePrincipalArn(Aws::String&& value) { m_granteePrincipalArnHasBeenSet = true; m_granteePrincipalArn = std::move(value); }
    inline void SetGranteePrincipalArn(const char* value) { m_granteePrincipalArnHasBeenSet = true; m_granteePrincipalArn.assign(value); }
    inline Grant& WithGranteePrincipalArn(const Aws::String& value) { SetGranteePrincipalArn(value); return *this;}
    inline Grant& WithGranteePrincipalArn(Aws::String&& value) { SetGranteePrincipalArn(std::move(value)); return *this;}
    inline Grant& WithGranteePrincipalArn(const char* value) { SetGranteePrincipalArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Home Region of the grant.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }
    inline Grant& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}
    inline Grant& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}
    inline Grant& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant status.</p>
     */
    inline const GrantStatus& GetGrantStatus() const{ return m_grantStatus; }
    inline bool GrantStatusHasBeenSet() const { return m_grantStatusHasBeenSet; }
    inline void SetGrantStatus(const GrantStatus& value) { m_grantStatusHasBeenSet = true; m_grantStatus = value; }
    inline void SetGrantStatus(GrantStatus&& value) { m_grantStatusHasBeenSet = true; m_grantStatus = std::move(value); }
    inline Grant& WithGrantStatus(const GrantStatus& value) { SetGrantStatus(value); return *this;}
    inline Grant& WithGrantStatus(GrantStatus&& value) { SetGrantStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant status reason.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline Grant& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline Grant& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline Grant& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline Grant& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline Grant& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline Grant& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Granted operations.</p>
     */
    inline const Aws::Vector<AllowedOperation>& GetGrantedOperations() const{ return m_grantedOperations; }
    inline bool GrantedOperationsHasBeenSet() const { return m_grantedOperationsHasBeenSet; }
    inline void SetGrantedOperations(const Aws::Vector<AllowedOperation>& value) { m_grantedOperationsHasBeenSet = true; m_grantedOperations = value; }
    inline void SetGrantedOperations(Aws::Vector<AllowedOperation>&& value) { m_grantedOperationsHasBeenSet = true; m_grantedOperations = std::move(value); }
    inline Grant& WithGrantedOperations(const Aws::Vector<AllowedOperation>& value) { SetGrantedOperations(value); return *this;}
    inline Grant& WithGrantedOperations(Aws::Vector<AllowedOperation>&& value) { SetGrantedOperations(std::move(value)); return *this;}
    inline Grant& AddGrantedOperations(const AllowedOperation& value) { m_grantedOperationsHasBeenSet = true; m_grantedOperations.push_back(value); return *this; }
    inline Grant& AddGrantedOperations(AllowedOperation&& value) { m_grantedOperationsHasBeenSet = true; m_grantedOperations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The options specified for the grant.</p>
     */
    inline const Options& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Options& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Options&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline Grant& WithOptions(const Options& value) { SetOptions(value); return *this;}
    inline Grant& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}
    ///@}
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

    Options m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
