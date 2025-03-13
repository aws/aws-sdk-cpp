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
    AWS_LICENSEMANAGER_API Grant() = default;
    AWS_LICENSEMANAGER_API Grant(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Grant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline const Aws::String& GetGrantArn() const { return m_grantArn; }
    inline bool GrantArnHasBeenSet() const { return m_grantArnHasBeenSet; }
    template<typename GrantArnT = Aws::String>
    void SetGrantArn(GrantArnT&& value) { m_grantArnHasBeenSet = true; m_grantArn = std::forward<GrantArnT>(value); }
    template<typename GrantArnT = Aws::String>
    Grant& WithGrantArn(GrantArnT&& value) { SetGrantArn(std::forward<GrantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant name.</p>
     */
    inline const Aws::String& GetGrantName() const { return m_grantName; }
    inline bool GrantNameHasBeenSet() const { return m_grantNameHasBeenSet; }
    template<typename GrantNameT = Aws::String>
    void SetGrantName(GrantNameT&& value) { m_grantNameHasBeenSet = true; m_grantName = std::forward<GrantNameT>(value); }
    template<typename GrantNameT = Aws::String>
    Grant& WithGrantName(GrantNameT&& value) { SetGrantName(std::forward<GrantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parent ARN.</p>
     */
    inline const Aws::String& GetParentArn() const { return m_parentArn; }
    inline bool ParentArnHasBeenSet() const { return m_parentArnHasBeenSet; }
    template<typename ParentArnT = Aws::String>
    void SetParentArn(ParentArnT&& value) { m_parentArnHasBeenSet = true; m_parentArn = std::forward<ParentArnT>(value); }
    template<typename ParentArnT = Aws::String>
    Grant& WithParentArn(ParentArnT&& value) { SetParentArn(std::forward<ParentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License ARN.</p>
     */
    inline const Aws::String& GetLicenseArn() const { return m_licenseArn; }
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }
    template<typename LicenseArnT = Aws::String>
    void SetLicenseArn(LicenseArnT&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::forward<LicenseArnT>(value); }
    template<typename LicenseArnT = Aws::String>
    Grant& WithLicenseArn(LicenseArnT&& value) { SetLicenseArn(std::forward<LicenseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grantee principal ARN.</p>
     */
    inline const Aws::String& GetGranteePrincipalArn() const { return m_granteePrincipalArn; }
    inline bool GranteePrincipalArnHasBeenSet() const { return m_granteePrincipalArnHasBeenSet; }
    template<typename GranteePrincipalArnT = Aws::String>
    void SetGranteePrincipalArn(GranteePrincipalArnT&& value) { m_granteePrincipalArnHasBeenSet = true; m_granteePrincipalArn = std::forward<GranteePrincipalArnT>(value); }
    template<typename GranteePrincipalArnT = Aws::String>
    Grant& WithGranteePrincipalArn(GranteePrincipalArnT&& value) { SetGranteePrincipalArn(std::forward<GranteePrincipalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Home Region of the grant.</p>
     */
    inline const Aws::String& GetHomeRegion() const { return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    template<typename HomeRegionT = Aws::String>
    void SetHomeRegion(HomeRegionT&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::forward<HomeRegionT>(value); }
    template<typename HomeRegionT = Aws::String>
    Grant& WithHomeRegion(HomeRegionT&& value) { SetHomeRegion(std::forward<HomeRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant status.</p>
     */
    inline GrantStatus GetGrantStatus() const { return m_grantStatus; }
    inline bool GrantStatusHasBeenSet() const { return m_grantStatusHasBeenSet; }
    inline void SetGrantStatus(GrantStatus value) { m_grantStatusHasBeenSet = true; m_grantStatus = value; }
    inline Grant& WithGrantStatus(GrantStatus value) { SetGrantStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant status reason.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    Grant& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Grant& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Granted operations.</p>
     */
    inline const Aws::Vector<AllowedOperation>& GetGrantedOperations() const { return m_grantedOperations; }
    inline bool GrantedOperationsHasBeenSet() const { return m_grantedOperationsHasBeenSet; }
    template<typename GrantedOperationsT = Aws::Vector<AllowedOperation>>
    void SetGrantedOperations(GrantedOperationsT&& value) { m_grantedOperationsHasBeenSet = true; m_grantedOperations = std::forward<GrantedOperationsT>(value); }
    template<typename GrantedOperationsT = Aws::Vector<AllowedOperation>>
    Grant& WithGrantedOperations(GrantedOperationsT&& value) { SetGrantedOperations(std::forward<GrantedOperationsT>(value)); return *this;}
    inline Grant& AddGrantedOperations(AllowedOperation value) { m_grantedOperationsHasBeenSet = true; m_grantedOperations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The options specified for the grant.</p>
     */
    inline const Options& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Options>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Options>
    Grant& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
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

    GrantStatus m_grantStatus{GrantStatus::NOT_SET};
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
