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
  class UpdateEc2DeepInspectionConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API UpdateEc2DeepInspectionConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEc2DeepInspectionConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specify <code>TRUE</code> to activate Amazon Inspector deep inspection in
     * your account, or <code>FALSE</code> to deactivate. Member accounts in an
     * organization cannot deactivate deep inspection, instead the delegated
     * administrator for the organization can deactivate a member account using <a
     * href="https://docs.aws.amazon.com/inspector/v2/APIReference/API_BatchUpdateMemberEc2DeepInspectionStatus.html">BatchUpdateMemberEc2DeepInspectionStatus</a>.</p>
     */
    inline bool GetActivateDeepInspection() const { return m_activateDeepInspection; }
    inline bool ActivateDeepInspectionHasBeenSet() const { return m_activateDeepInspectionHasBeenSet; }
    inline void SetActivateDeepInspection(bool value) { m_activateDeepInspectionHasBeenSet = true; m_activateDeepInspection = value; }
    inline UpdateEc2DeepInspectionConfigurationRequest& WithActivateDeepInspection(bool value) { SetActivateDeepInspection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Inspector deep inspection custom paths you are adding for your
     * account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackagePaths() const { return m_packagePaths; }
    inline bool PackagePathsHasBeenSet() const { return m_packagePathsHasBeenSet; }
    template<typename PackagePathsT = Aws::Vector<Aws::String>>
    void SetPackagePaths(PackagePathsT&& value) { m_packagePathsHasBeenSet = true; m_packagePaths = std::forward<PackagePathsT>(value); }
    template<typename PackagePathsT = Aws::Vector<Aws::String>>
    UpdateEc2DeepInspectionConfigurationRequest& WithPackagePaths(PackagePathsT&& value) { SetPackagePaths(std::forward<PackagePathsT>(value)); return *this;}
    template<typename PackagePathsT = Aws::String>
    UpdateEc2DeepInspectionConfigurationRequest& AddPackagePaths(PackagePathsT&& value) { m_packagePathsHasBeenSet = true; m_packagePaths.emplace_back(std::forward<PackagePathsT>(value)); return *this; }
    ///@}
  private:

    bool m_activateDeepInspection{false};
    bool m_activateDeepInspectionHasBeenSet = false;

    Aws::Vector<Aws::String> m_packagePaths;
    bool m_packagePathsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
