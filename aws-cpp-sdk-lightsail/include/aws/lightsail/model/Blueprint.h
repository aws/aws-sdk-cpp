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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/BlueprintType.h>
#include <aws/lightsail/model/InstancePlatform.h>
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
  class AWS_LIGHTSAIL_API Blueprint
  {
  public:
    Blueprint();
    Blueprint(Aws::Utils::Json::JsonView jsonValue);
    Blueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for the virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>).</p>
     */
    inline const Aws::String& GetBlueprintId() const{ return m_blueprintId; }

    /**
     * <p>The ID for the virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>).</p>
     */
    inline bool BlueprintIdHasBeenSet() const { return m_blueprintIdHasBeenSet; }

    /**
     * <p>The ID for the virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>).</p>
     */
    inline void SetBlueprintId(const Aws::String& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }

    /**
     * <p>The ID for the virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>).</p>
     */
    inline void SetBlueprintId(Aws::String&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = std::move(value); }

    /**
     * <p>The ID for the virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>).</p>
     */
    inline void SetBlueprintId(const char* value) { m_blueprintIdHasBeenSet = true; m_blueprintId.assign(value); }

    /**
     * <p>The ID for the virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>).</p>
     */
    inline Blueprint& WithBlueprintId(const Aws::String& value) { SetBlueprintId(value); return *this;}

    /**
     * <p>The ID for the virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>).</p>
     */
    inline Blueprint& WithBlueprintId(Aws::String&& value) { SetBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The ID for the virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>).</p>
     */
    inline Blueprint& WithBlueprintId(const char* value) { SetBlueprintId(value); return *this;}


    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline Blueprint& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline Blueprint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline Blueprint& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The group name of the blueprint (e.g., <code>amazon-linux</code>).</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The group name of the blueprint (e.g., <code>amazon-linux</code>).</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The group name of the blueprint (e.g., <code>amazon-linux</code>).</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The group name of the blueprint (e.g., <code>amazon-linux</code>).</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The group name of the blueprint (e.g., <code>amazon-linux</code>).</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The group name of the blueprint (e.g., <code>amazon-linux</code>).</p>
     */
    inline Blueprint& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The group name of the blueprint (e.g., <code>amazon-linux</code>).</p>
     */
    inline Blueprint& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The group name of the blueprint (e.g., <code>amazon-linux</code>).</p>
     */
    inline Blueprint& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>The type of the blueprint (e.g., <code>os</code> or <code>app</code>).</p>
     */
    inline const BlueprintType& GetType() const{ return m_type; }

    /**
     * <p>The type of the blueprint (e.g., <code>os</code> or <code>app</code>).</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the blueprint (e.g., <code>os</code> or <code>app</code>).</p>
     */
    inline void SetType(const BlueprintType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the blueprint (e.g., <code>os</code> or <code>app</code>).</p>
     */
    inline void SetType(BlueprintType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the blueprint (e.g., <code>os</code> or <code>app</code>).</p>
     */
    inline Blueprint& WithType(const BlueprintType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the blueprint (e.g., <code>os</code> or <code>app</code>).</p>
     */
    inline Blueprint& WithType(BlueprintType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The description of the blueprint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline Blueprint& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the blueprint.</p>
     */
    inline Blueprint& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the blueprint.</p>
     */
    inline Blueprint& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the blueprint is active. Inactive
     * blueprints are listed to support customers with existing instances but are not
     * necessarily available for launch of new instances. Blueprints are marked
     * inactive when they become outdated due to operating system updates or new
     * application releases.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }

    /**
     * <p>A Boolean value indicating whether the blueprint is active. Inactive
     * blueprints are listed to support customers with existing instances but are not
     * necessarily available for launch of new instances. Blueprints are marked
     * inactive when they become outdated due to operating system updates or new
     * application releases.</p>
     */
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the blueprint is active. Inactive
     * blueprints are listed to support customers with existing instances but are not
     * necessarily available for launch of new instances. Blueprints are marked
     * inactive when they become outdated due to operating system updates or new
     * application releases.</p>
     */
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }

    /**
     * <p>A Boolean value indicating whether the blueprint is active. Inactive
     * blueprints are listed to support customers with existing instances but are not
     * necessarily available for launch of new instances. Blueprints are marked
     * inactive when they become outdated due to operating system updates or new
     * application releases.</p>
     */
    inline Blueprint& WithIsActive(bool value) { SetIsActive(value); return *this;}


    /**
     * <p>The minimum bundle power required to run this blueprint. For example, you
     * need a bundle with a power value of 500 or more to create an instance that uses
     * a blueprint with a minimum power value of 500. <code>0</code> indicates that the
     * blueprint runs on all instance sizes. </p>
     */
    inline int GetMinPower() const{ return m_minPower; }

    /**
     * <p>The minimum bundle power required to run this blueprint. For example, you
     * need a bundle with a power value of 500 or more to create an instance that uses
     * a blueprint with a minimum power value of 500. <code>0</code> indicates that the
     * blueprint runs on all instance sizes. </p>
     */
    inline bool MinPowerHasBeenSet() const { return m_minPowerHasBeenSet; }

    /**
     * <p>The minimum bundle power required to run this blueprint. For example, you
     * need a bundle with a power value of 500 or more to create an instance that uses
     * a blueprint with a minimum power value of 500. <code>0</code> indicates that the
     * blueprint runs on all instance sizes. </p>
     */
    inline void SetMinPower(int value) { m_minPowerHasBeenSet = true; m_minPower = value; }

    /**
     * <p>The minimum bundle power required to run this blueprint. For example, you
     * need a bundle with a power value of 500 or more to create an instance that uses
     * a blueprint with a minimum power value of 500. <code>0</code> indicates that the
     * blueprint runs on all instance sizes. </p>
     */
    inline Blueprint& WithMinPower(int value) { SetMinPower(value); return *this;}


    /**
     * <p>The version number of the operating system, application, or stack (e.g.,
     * <code>2016.03.0</code>).</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the operating system, application, or stack (e.g.,
     * <code>2016.03.0</code>).</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the operating system, application, or stack (e.g.,
     * <code>2016.03.0</code>).</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the operating system, application, or stack (e.g.,
     * <code>2016.03.0</code>).</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version number of the operating system, application, or stack (e.g.,
     * <code>2016.03.0</code>).</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version number of the operating system, application, or stack (e.g.,
     * <code>2016.03.0</code>).</p>
     */
    inline Blueprint& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version number of the operating system, application, or stack (e.g.,
     * <code>2016.03.0</code>).</p>
     */
    inline Blueprint& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the operating system, application, or stack (e.g.,
     * <code>2016.03.0</code>).</p>
     */
    inline Blueprint& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The version code.</p>
     */
    inline const Aws::String& GetVersionCode() const{ return m_versionCode; }

    /**
     * <p>The version code.</p>
     */
    inline bool VersionCodeHasBeenSet() const { return m_versionCodeHasBeenSet; }

    /**
     * <p>The version code.</p>
     */
    inline void SetVersionCode(const Aws::String& value) { m_versionCodeHasBeenSet = true; m_versionCode = value; }

    /**
     * <p>The version code.</p>
     */
    inline void SetVersionCode(Aws::String&& value) { m_versionCodeHasBeenSet = true; m_versionCode = std::move(value); }

    /**
     * <p>The version code.</p>
     */
    inline void SetVersionCode(const char* value) { m_versionCodeHasBeenSet = true; m_versionCode.assign(value); }

    /**
     * <p>The version code.</p>
     */
    inline Blueprint& WithVersionCode(const Aws::String& value) { SetVersionCode(value); return *this;}

    /**
     * <p>The version code.</p>
     */
    inline Blueprint& WithVersionCode(Aws::String&& value) { SetVersionCode(std::move(value)); return *this;}

    /**
     * <p>The version code.</p>
     */
    inline Blueprint& WithVersionCode(const char* value) { SetVersionCode(value); return *this;}


    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline const Aws::String& GetProductUrl() const{ return m_productUrl; }

    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline bool ProductUrlHasBeenSet() const { return m_productUrlHasBeenSet; }

    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline void SetProductUrl(const Aws::String& value) { m_productUrlHasBeenSet = true; m_productUrl = value; }

    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline void SetProductUrl(Aws::String&& value) { m_productUrlHasBeenSet = true; m_productUrl = std::move(value); }

    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline void SetProductUrl(const char* value) { m_productUrlHasBeenSet = true; m_productUrl.assign(value); }

    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline Blueprint& WithProductUrl(const Aws::String& value) { SetProductUrl(value); return *this;}

    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline Blueprint& WithProductUrl(Aws::String&& value) { SetProductUrl(std::move(value)); return *this;}

    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline Blueprint& WithProductUrl(const char* value) { SetProductUrl(value); return *this;}


    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline const Aws::String& GetLicenseUrl() const{ return m_licenseUrl; }

    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline bool LicenseUrlHasBeenSet() const { return m_licenseUrlHasBeenSet; }

    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline void SetLicenseUrl(const Aws::String& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = value; }

    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline void SetLicenseUrl(Aws::String&& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = std::move(value); }

    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline void SetLicenseUrl(const char* value) { m_licenseUrlHasBeenSet = true; m_licenseUrl.assign(value); }

    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline Blueprint& WithLicenseUrl(const Aws::String& value) { SetLicenseUrl(value); return *this;}

    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline Blueprint& WithLicenseUrl(Aws::String&& value) { SetLicenseUrl(std::move(value)); return *this;}

    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline Blueprint& WithLicenseUrl(const char* value) { SetLicenseUrl(value); return *this;}


    /**
     * <p>The operating system platform (either Linux/Unix-based or Windows
     * Server-based) of the blueprint.</p>
     */
    inline const InstancePlatform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The operating system platform (either Linux/Unix-based or Windows
     * Server-based) of the blueprint.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The operating system platform (either Linux/Unix-based or Windows
     * Server-based) of the blueprint.</p>
     */
    inline void SetPlatform(const InstancePlatform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The operating system platform (either Linux/Unix-based or Windows
     * Server-based) of the blueprint.</p>
     */
    inline void SetPlatform(InstancePlatform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The operating system platform (either Linux/Unix-based or Windows
     * Server-based) of the blueprint.</p>
     */
    inline Blueprint& WithPlatform(const InstancePlatform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The operating system platform (either Linux/Unix-based or Windows
     * Server-based) of the blueprint.</p>
     */
    inline Blueprint& WithPlatform(InstancePlatform&& value) { SetPlatform(std::move(value)); return *this;}

  private:

    Aws::String m_blueprintId;
    bool m_blueprintIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_group;
    bool m_groupHasBeenSet;

    BlueprintType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_isActive;
    bool m_isActiveHasBeenSet;

    int m_minPower;
    bool m_minPowerHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_versionCode;
    bool m_versionCodeHasBeenSet;

    Aws::String m_productUrl;
    bool m_productUrlHasBeenSet;

    Aws::String m_licenseUrl;
    bool m_licenseUrlHasBeenSet;

    InstancePlatform m_platform;
    bool m_platformHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
