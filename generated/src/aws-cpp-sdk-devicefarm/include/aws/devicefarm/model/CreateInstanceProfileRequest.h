/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class CreateInstanceProfileRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API CreateInstanceProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstanceProfile"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your instance profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateInstanceProfileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of your instance profile.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateInstanceProfileRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, Device Farm removes app packages after a test
     * run. The default value is <code>false</code> for private devices.</p>
     */
    inline bool GetPackageCleanup() const { return m_packageCleanup; }
    inline bool PackageCleanupHasBeenSet() const { return m_packageCleanupHasBeenSet; }
    inline void SetPackageCleanup(bool value) { m_packageCleanupHasBeenSet = true; m_packageCleanup = value; }
    inline CreateInstanceProfileRequest& WithPackageCleanup(bool value) { SetPackageCleanup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specifies the list of app packages that should not
     * be cleaned up from the device after a test run.</p> <p>The list of packages is
     * considered only if you set <code>packageCleanup</code> to <code>true</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeAppPackagesFromCleanup() const { return m_excludeAppPackagesFromCleanup; }
    inline bool ExcludeAppPackagesFromCleanupHasBeenSet() const { return m_excludeAppPackagesFromCleanupHasBeenSet; }
    template<typename ExcludeAppPackagesFromCleanupT = Aws::Vector<Aws::String>>
    void SetExcludeAppPackagesFromCleanup(ExcludeAppPackagesFromCleanupT&& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup = std::forward<ExcludeAppPackagesFromCleanupT>(value); }
    template<typename ExcludeAppPackagesFromCleanupT = Aws::Vector<Aws::String>>
    CreateInstanceProfileRequest& WithExcludeAppPackagesFromCleanup(ExcludeAppPackagesFromCleanupT&& value) { SetExcludeAppPackagesFromCleanup(std::forward<ExcludeAppPackagesFromCleanupT>(value)); return *this;}
    template<typename ExcludeAppPackagesFromCleanupT = Aws::String>
    CreateInstanceProfileRequest& AddExcludeAppPackagesFromCleanup(ExcludeAppPackagesFromCleanupT&& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup.emplace_back(std::forward<ExcludeAppPackagesFromCleanupT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, Device Farm reboots the instance after a test
     * run. The default value is <code>true</code>.</p>
     */
    inline bool GetRebootAfterUse() const { return m_rebootAfterUse; }
    inline bool RebootAfterUseHasBeenSet() const { return m_rebootAfterUseHasBeenSet; }
    inline void SetRebootAfterUse(bool value) { m_rebootAfterUseHasBeenSet = true; m_rebootAfterUse = value; }
    inline CreateInstanceProfileRequest& WithRebootAfterUse(bool value) { SetRebootAfterUse(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_packageCleanup{false};
    bool m_packageCleanupHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeAppPackagesFromCleanup;
    bool m_excludeAppPackagesFromCleanupHasBeenSet = false;

    bool m_rebootAfterUse{false};
    bool m_rebootAfterUseHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
