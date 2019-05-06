/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DEVICEFARM_API UpdateInstanceProfileRequest : public DeviceFarmRequest
  {
  public:
    UpdateInstanceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstanceProfile"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile.</p>
     */
    inline UpdateInstanceProfileRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile.</p>
     */
    inline UpdateInstanceProfileRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance profile.</p>
     */
    inline UpdateInstanceProfileRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The updated name for your instance profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The updated name for your instance profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The updated name for your instance profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The updated name for your instance profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The updated name for your instance profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The updated name for your instance profile.</p>
     */
    inline UpdateInstanceProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The updated name for your instance profile.</p>
     */
    inline UpdateInstanceProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The updated name for your instance profile.</p>
     */
    inline UpdateInstanceProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated description for your instance profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description for your instance profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description for your instance profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description for your instance profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description for your instance profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description for your instance profile.</p>
     */
    inline UpdateInstanceProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description for your instance profile.</p>
     */
    inline UpdateInstanceProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description for your instance profile.</p>
     */
    inline UpdateInstanceProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The updated choice for whether you want to specify package cleanup. The
     * default value is <code>false</code> for private devices.</p>
     */
    inline bool GetPackageCleanup() const{ return m_packageCleanup; }

    /**
     * <p>The updated choice for whether you want to specify package cleanup. The
     * default value is <code>false</code> for private devices.</p>
     */
    inline bool PackageCleanupHasBeenSet() const { return m_packageCleanupHasBeenSet; }

    /**
     * <p>The updated choice for whether you want to specify package cleanup. The
     * default value is <code>false</code> for private devices.</p>
     */
    inline void SetPackageCleanup(bool value) { m_packageCleanupHasBeenSet = true; m_packageCleanup = value; }

    /**
     * <p>The updated choice for whether you want to specify package cleanup. The
     * default value is <code>false</code> for private devices.</p>
     */
    inline UpdateInstanceProfileRequest& WithPackageCleanup(bool value) { SetPackageCleanup(value); return *this;}


    /**
     * <p>An array of strings specifying the list of app packages that should not be
     * cleaned up from the device after a test run is over.</p> <p>The list of packages
     * is only considered if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeAppPackagesFromCleanup() const{ return m_excludeAppPackagesFromCleanup; }

    /**
     * <p>An array of strings specifying the list of app packages that should not be
     * cleaned up from the device after a test run is over.</p> <p>The list of packages
     * is only considered if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline bool ExcludeAppPackagesFromCleanupHasBeenSet() const { return m_excludeAppPackagesFromCleanupHasBeenSet; }

    /**
     * <p>An array of strings specifying the list of app packages that should not be
     * cleaned up from the device after a test run is over.</p> <p>The list of packages
     * is only considered if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline void SetExcludeAppPackagesFromCleanup(const Aws::Vector<Aws::String>& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup = value; }

    /**
     * <p>An array of strings specifying the list of app packages that should not be
     * cleaned up from the device after a test run is over.</p> <p>The list of packages
     * is only considered if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline void SetExcludeAppPackagesFromCleanup(Aws::Vector<Aws::String>&& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup = std::move(value); }

    /**
     * <p>An array of strings specifying the list of app packages that should not be
     * cleaned up from the device after a test run is over.</p> <p>The list of packages
     * is only considered if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline UpdateInstanceProfileRequest& WithExcludeAppPackagesFromCleanup(const Aws::Vector<Aws::String>& value) { SetExcludeAppPackagesFromCleanup(value); return *this;}

    /**
     * <p>An array of strings specifying the list of app packages that should not be
     * cleaned up from the device after a test run is over.</p> <p>The list of packages
     * is only considered if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline UpdateInstanceProfileRequest& WithExcludeAppPackagesFromCleanup(Aws::Vector<Aws::String>&& value) { SetExcludeAppPackagesFromCleanup(std::move(value)); return *this;}

    /**
     * <p>An array of strings specifying the list of app packages that should not be
     * cleaned up from the device after a test run is over.</p> <p>The list of packages
     * is only considered if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline UpdateInstanceProfileRequest& AddExcludeAppPackagesFromCleanup(const Aws::String& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup.push_back(value); return *this; }

    /**
     * <p>An array of strings specifying the list of app packages that should not be
     * cleaned up from the device after a test run is over.</p> <p>The list of packages
     * is only considered if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline UpdateInstanceProfileRequest& AddExcludeAppPackagesFromCleanup(Aws::String&& value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings specifying the list of app packages that should not be
     * cleaned up from the device after a test run is over.</p> <p>The list of packages
     * is only considered if you set <code>packageCleanup</code> to
     * <code>true</code>.</p>
     */
    inline UpdateInstanceProfileRequest& AddExcludeAppPackagesFromCleanup(const char* value) { m_excludeAppPackagesFromCleanupHasBeenSet = true; m_excludeAppPackagesFromCleanup.push_back(value); return *this; }


    /**
     * <p>The updated choice for whether you want to reboot the device after use. The
     * default value is <code>true</code>.</p>
     */
    inline bool GetRebootAfterUse() const{ return m_rebootAfterUse; }

    /**
     * <p>The updated choice for whether you want to reboot the device after use. The
     * default value is <code>true</code>.</p>
     */
    inline bool RebootAfterUseHasBeenSet() const { return m_rebootAfterUseHasBeenSet; }

    /**
     * <p>The updated choice for whether you want to reboot the device after use. The
     * default value is <code>true</code>.</p>
     */
    inline void SetRebootAfterUse(bool value) { m_rebootAfterUseHasBeenSet = true; m_rebootAfterUse = value; }

    /**
     * <p>The updated choice for whether you want to reboot the device after use. The
     * default value is <code>true</code>.</p>
     */
    inline UpdateInstanceProfileRequest& WithRebootAfterUse(bool value) { SetRebootAfterUse(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_packageCleanup;
    bool m_packageCleanupHasBeenSet;

    Aws::Vector<Aws::String> m_excludeAppPackagesFromCleanup;
    bool m_excludeAppPackagesFromCleanupHasBeenSet;

    bool m_rebootAfterUse;
    bool m_rebootAfterUseHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
