/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/BlueprintType.h>
#include <aws/lightsail/model/InstancePlatform.h>
#include <aws/lightsail/model/AppCategory.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a blueprint (a virtual private server image).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Blueprint">AWS
   * API Reference</a></p>
   */
  class Blueprint
  {
  public:
    AWS_LIGHTSAIL_API Blueprint();
    AWS_LIGHTSAIL_API Blueprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Blueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the virtual private server image (<code>app_wordpress_x_x</code>
     * or <code>app_lamp_x_x</code>).</p>
     */
    inline const Aws::String& GetBlueprintId() const{ return m_blueprintId; }
    inline bool BlueprintIdHasBeenSet() const { return m_blueprintIdHasBeenSet; }
    inline void SetBlueprintId(const Aws::String& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }
    inline void SetBlueprintId(Aws::String&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = std::move(value); }
    inline void SetBlueprintId(const char* value) { m_blueprintIdHasBeenSet = true; m_blueprintId.assign(value); }
    inline Blueprint& WithBlueprintId(const Aws::String& value) { SetBlueprintId(value); return *this;}
    inline Blueprint& WithBlueprintId(Aws::String&& value) { SetBlueprintId(std::move(value)); return *this;}
    inline Blueprint& WithBlueprintId(const char* value) { SetBlueprintId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the blueprint (<code>Amazon Linux</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Blueprint& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Blueprint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Blueprint& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group name of the blueprint (<code>amazon-linux</code>).</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline Blueprint& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline Blueprint& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline Blueprint& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the blueprint (<code>os</code> or <code>app</code>).</p>
     */
    inline const BlueprintType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const BlueprintType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(BlueprintType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Blueprint& WithType(const BlueprintType& value) { SetType(value); return *this;}
    inline Blueprint& WithType(BlueprintType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the blueprint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Blueprint& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Blueprint& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Blueprint& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the blueprint is active. Inactive
     * blueprints are listed to support customers with existing instances but are not
     * necessarily available for launch of new instances. Blueprints are marked
     * inactive when they become outdated due to operating system updates or new
     * application releases.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline Blueprint& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum bundle power required to run this blueprint. For example, you
     * need a bundle with a power value of 500 or more to create an instance that uses
     * a blueprint with a minimum power value of 500. <code>0</code> indicates that the
     * blueprint runs on all instance sizes. </p>
     */
    inline int GetMinPower() const{ return m_minPower; }
    inline bool MinPowerHasBeenSet() const { return m_minPowerHasBeenSet; }
    inline void SetMinPower(int value) { m_minPowerHasBeenSet = true; m_minPower = value; }
    inline Blueprint& WithMinPower(int value) { SetMinPower(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the operating system, application, or stack (
     * <code>2016.03.0</code>).</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline Blueprint& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline Blueprint& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline Blueprint& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version code.</p>
     */
    inline const Aws::String& GetVersionCode() const{ return m_versionCode; }
    inline bool VersionCodeHasBeenSet() const { return m_versionCodeHasBeenSet; }
    inline void SetVersionCode(const Aws::String& value) { m_versionCodeHasBeenSet = true; m_versionCode = value; }
    inline void SetVersionCode(Aws::String&& value) { m_versionCodeHasBeenSet = true; m_versionCode = std::move(value); }
    inline void SetVersionCode(const char* value) { m_versionCodeHasBeenSet = true; m_versionCode.assign(value); }
    inline Blueprint& WithVersionCode(const Aws::String& value) { SetVersionCode(value); return *this;}
    inline Blueprint& WithVersionCode(Aws::String&& value) { SetVersionCode(std::move(value)); return *this;}
    inline Blueprint& WithVersionCode(const char* value) { SetVersionCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline const Aws::String& GetProductUrl() const{ return m_productUrl; }
    inline bool ProductUrlHasBeenSet() const { return m_productUrlHasBeenSet; }
    inline void SetProductUrl(const Aws::String& value) { m_productUrlHasBeenSet = true; m_productUrl = value; }
    inline void SetProductUrl(Aws::String&& value) { m_productUrlHasBeenSet = true; m_productUrl = std::move(value); }
    inline void SetProductUrl(const char* value) { m_productUrlHasBeenSet = true; m_productUrl.assign(value); }
    inline Blueprint& WithProductUrl(const Aws::String& value) { SetProductUrl(value); return *this;}
    inline Blueprint& WithProductUrl(Aws::String&& value) { SetProductUrl(std::move(value)); return *this;}
    inline Blueprint& WithProductUrl(const char* value) { SetProductUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline const Aws::String& GetLicenseUrl() const{ return m_licenseUrl; }
    inline bool LicenseUrlHasBeenSet() const { return m_licenseUrlHasBeenSet; }
    inline void SetLicenseUrl(const Aws::String& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = value; }
    inline void SetLicenseUrl(Aws::String&& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = std::move(value); }
    inline void SetLicenseUrl(const char* value) { m_licenseUrlHasBeenSet = true; m_licenseUrl.assign(value); }
    inline Blueprint& WithLicenseUrl(const Aws::String& value) { SetLicenseUrl(value); return *this;}
    inline Blueprint& WithLicenseUrl(Aws::String&& value) { SetLicenseUrl(std::move(value)); return *this;}
    inline Blueprint& WithLicenseUrl(const char* value) { SetLicenseUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform (either Linux/Unix-based or Windows
     * Server-based) of the blueprint.</p>
     */
    inline const InstancePlatform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const InstancePlatform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(InstancePlatform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline Blueprint& WithPlatform(const InstancePlatform& value) { SetPlatform(value); return *this;}
    inline Blueprint& WithPlatform(InstancePlatform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Virtual computer blueprints that are supported by Lightsail for Research.</p>
     *  <p>This parameter only applies to Lightsail for Research
     * resources.</p> 
     */
    inline const AppCategory& GetAppCategory() const{ return m_appCategory; }
    inline bool AppCategoryHasBeenSet() const { return m_appCategoryHasBeenSet; }
    inline void SetAppCategory(const AppCategory& value) { m_appCategoryHasBeenSet = true; m_appCategory = value; }
    inline void SetAppCategory(AppCategory&& value) { m_appCategoryHasBeenSet = true; m_appCategory = std::move(value); }
    inline Blueprint& WithAppCategory(const AppCategory& value) { SetAppCategory(value); return *this;}
    inline Blueprint& WithAppCategory(AppCategory&& value) { SetAppCategory(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintId;
    bool m_blueprintIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    BlueprintType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isActive;
    bool m_isActiveHasBeenSet = false;

    int m_minPower;
    bool m_minPowerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_versionCode;
    bool m_versionCodeHasBeenSet = false;

    Aws::String m_productUrl;
    bool m_productUrlHasBeenSet = false;

    Aws::String m_licenseUrl;
    bool m_licenseUrlHasBeenSet = false;

    InstancePlatform m_platform;
    bool m_platformHasBeenSet = false;

    AppCategory m_appCategory;
    bool m_appCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
