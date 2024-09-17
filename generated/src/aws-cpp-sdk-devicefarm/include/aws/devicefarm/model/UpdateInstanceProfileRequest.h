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
  class UpdateInstanceProfileRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API UpdateInstanceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstanceProfile"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateInstanceProfileRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateInstanceProfileRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateInstanceProfileRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name for your instance profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateInstanceProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateInstanceProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateInstanceProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description for your instance profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateInstanceProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateInstanceProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateInstanceProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated choice for whether you want to specify package cleanup. The
     * default value is <code>false</code> for private devices.</p>
     */
    inline bool GetPackageCleanup() const{ return m_packageCleanup; }
    inline bool PackageCleanupHasBeenSet() const { return m_packageCleanupHasBeenSet; }
    inline void SetPackageCleanup(bool value) { m_packageCleanupHasBeenSet = true; m_packageCleanup = value; }
    inline UpdateInstanceProfileRequest& WithPackageCleanup(bool value) { SetPackageCleanup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specifies the list of app packages that should not
     * be cleaned up from the device after a test run is over.</p> <p>The list of
     * packages is only considered if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeAppPackagesFromCleanup() const{ return m_excludeAppPackagesFromCleanup; }
    inline bool ExcludeAppPackagesFromCleanupHasBeenSet() const { return m_excludeAppPackagesFromCleanupHasBeenSet; }
    inline void SetExcludeAppPackagesFromCleanup(const Aws::Vector<Aws::String>& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup = value; }
    inline void SetExcludeAppPackagesFromCleanup(Aws::Vector<Aws::String>&& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup = std::move(value); }
    inline UpdateInstanceProfileRequest& WithExcludeAppPackagesFromCleanup(const Aws::Vector<Aws::String>& value) { SetExcludeAppPackagesFromCleanup(value); return *this;}
    inline UpdateInstanceProfileRequest& WithExcludeAppPackagesFromCleanup(Aws::Vector<Aws::String>&& value) { SetExcludeAppPackagesFromCleanup(std::move(value)); return *this;}
    inline UpdateInstanceProfileRequest& AddExcludeAppPackagesFromCleanup(const Aws::String& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup.push_back(value); return *this; }
    inline UpdateInstanceProfileRequest& AddExcludeAppPackagesFromCleanup(Aws::String&& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup.push_back(std::move(value)); return *this; }
    inline UpdateInstanceProfileRequest& AddExcludeAppPackagesFromCleanup(const char* value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated choice for whether you want to reboot the device after use. The
     * default value is <code>true</code>.</p>
     */
    inline bool GetRebootAfterUse() const{ return m_rebootAfterUse; }
    inline bool RebootAfterUseHasBeenSet() const { return m_rebootAfterUseHasBeenSet; }
    inline void SetRebootAfterUse(bool value) { m_rebootAfterUseHasBeenSet = true; m_rebootAfterUse = value; }
    inline UpdateInstanceProfileRequest& WithRebootAfterUse(bool value) { SetRebootAfterUse(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_packageCleanup;
    bool m_packageCleanupHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeAppPackagesFromCleanup;
    bool m_excludeAppPackagesFromCleanupHasBeenSet = false;

    bool m_rebootAfterUse;
    bool m_rebootAfterUseHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
