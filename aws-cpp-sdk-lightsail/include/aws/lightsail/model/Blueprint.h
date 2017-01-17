﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
    Blueprint(const Aws::Utils::Json::JsonValue& jsonValue);
    Blueprint& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline void SetBlueprintId(const Aws::String& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }

    /**
     * <p>The ID for the virtual private server image (e.g.,
     * <code>app_wordpress_4_4</code> or <code>app_lamp_7_0</code>).</p>
     */
    inline void SetBlueprintId(Aws::String&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }

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
    inline Blueprint& WithBlueprintId(Aws::String&& value) { SetBlueprintId(value); return *this;}

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
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the blueprint (e.g., <code>Amazon Linux</code>).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

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
    inline Blueprint& WithName(Aws::String&& value) { SetName(value); return *this;}

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
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The group name of the blueprint (e.g., <code>amazon-linux</code>).</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = value; }

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
    inline Blueprint& WithGroup(Aws::String&& value) { SetGroup(value); return *this;}

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
    inline void SetType(const BlueprintType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the blueprint (e.g., <code>os</code> or <code>app</code>).</p>
     */
    inline void SetType(BlueprintType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the blueprint (e.g., <code>os</code> or <code>app</code>).</p>
     */
    inline Blueprint& WithType(const BlueprintType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the blueprint (e.g., <code>os</code> or <code>app</code>).</p>
     */
    inline Blueprint& WithType(BlueprintType&& value) { SetType(value); return *this;}

    /**
     * <p>The description of the blueprint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the blueprint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline Blueprint& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the blueprint.</p>
     */
    inline Blueprint& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>A Boolean value indicating whether the blueprint is active. When you update
     * your blueprints, you will inactivate old blueprints and keep the most recent
     * versions active.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }

    /**
     * <p>A Boolean value indicating whether the blueprint is active. When you update
     * your blueprints, you will inactivate old blueprints and keep the most recent
     * versions active.</p>
     */
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }

    /**
     * <p>A Boolean value indicating whether the blueprint is active. When you update
     * your blueprints, you will inactivate old blueprints and keep the most recent
     * versions active.</p>
     */
    inline Blueprint& WithIsActive(bool value) { SetIsActive(value); return *this;}

    /**
     * <p>The minimum machine size required to run this blueprint. <code>0</code>
     * indicates that the blueprint runs on all instances.</p>
     */
    inline int GetMinPower() const{ return m_minPower; }

    /**
     * <p>The minimum machine size required to run this blueprint. <code>0</code>
     * indicates that the blueprint runs on all instances.</p>
     */
    inline void SetMinPower(int value) { m_minPowerHasBeenSet = true; m_minPower = value; }

    /**
     * <p>The minimum machine size required to run this blueprint. <code>0</code>
     * indicates that the blueprint runs on all instances.</p>
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
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the operating system, application, or stack (e.g.,
     * <code>2016.03.0</code>).</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

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
    inline Blueprint& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

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
    inline void SetVersionCode(const Aws::String& value) { m_versionCodeHasBeenSet = true; m_versionCode = value; }

    /**
     * <p>The version code.</p>
     */
    inline void SetVersionCode(Aws::String&& value) { m_versionCodeHasBeenSet = true; m_versionCode = value; }

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
    inline Blueprint& WithVersionCode(Aws::String&& value) { SetVersionCode(value); return *this;}

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
    inline void SetProductUrl(const Aws::String& value) { m_productUrlHasBeenSet = true; m_productUrl = value; }

    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline void SetProductUrl(Aws::String&& value) { m_productUrlHasBeenSet = true; m_productUrl = value; }

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
    inline Blueprint& WithProductUrl(Aws::String&& value) { SetProductUrl(value); return *this;}

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
    inline void SetLicenseUrl(const Aws::String& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = value; }

    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline void SetLicenseUrl(Aws::String&& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = value; }

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
    inline Blueprint& WithLicenseUrl(Aws::String&& value) { SetLicenseUrl(value); return *this;}

    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline Blueprint& WithLicenseUrl(const char* value) { SetLicenseUrl(value); return *this;}

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
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
