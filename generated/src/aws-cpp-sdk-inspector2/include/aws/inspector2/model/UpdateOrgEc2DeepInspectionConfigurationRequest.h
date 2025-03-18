/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class UpdateOrgEc2DeepInspectionConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API UpdateOrgEc2DeepInspectionConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrgEc2DeepInspectionConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrgPackagePaths() const { return m_orgPackagePaths; }
    inline bool OrgPackagePathsHasBeenSet() const { return m_orgPackagePathsHasBeenSet; }
    template<typename OrgPackagePathsT = Aws::Vector<Aws::String>>
    void SetOrgPackagePaths(OrgPackagePathsT&& value) { m_orgPackagePathsHasBeenSet = true; m_orgPackagePaths = std::forward<OrgPackagePathsT>(value); }
    template<typename OrgPackagePathsT = Aws::Vector<Aws::String>>
    UpdateOrgEc2DeepInspectionConfigurationRequest& WithOrgPackagePaths(OrgPackagePathsT&& value) { SetOrgPackagePaths(std::forward<OrgPackagePathsT>(value)); return *this;}
    template<typename OrgPackagePathsT = Aws::String>
    UpdateOrgEc2DeepInspectionConfigurationRequest& AddOrgPackagePaths(OrgPackagePathsT&& value) { m_orgPackagePathsHasBeenSet = true; m_orgPackagePaths.emplace_back(std::forward<OrgPackagePathsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_orgPackagePaths;
    bool m_orgPackagePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
