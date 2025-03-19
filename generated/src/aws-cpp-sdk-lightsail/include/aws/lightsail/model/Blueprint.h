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
    AWS_LIGHTSAIL_API Blueprint() = default;
    AWS_LIGHTSAIL_API Blueprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Blueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the virtual private server image (<code>app_wordpress_x_x</code>
     * or <code>app_lamp_x_x</code>).</p>
     */
    inline const Aws::String& GetBlueprintId() const { return m_blueprintId; }
    inline bool BlueprintIdHasBeenSet() const { return m_blueprintIdHasBeenSet; }
    template<typename BlueprintIdT = Aws::String>
    void SetBlueprintId(BlueprintIdT&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = std::forward<BlueprintIdT>(value); }
    template<typename BlueprintIdT = Aws::String>
    Blueprint& WithBlueprintId(BlueprintIdT&& value) { SetBlueprintId(std::forward<BlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the blueprint (<code>Amazon Linux</code>).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Blueprint& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group name of the blueprint (<code>amazon-linux</code>).</p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    Blueprint& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the blueprint (<code>os</code> or <code>app</code>).</p>
     */
    inline BlueprintType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(BlueprintType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Blueprint& WithType(BlueprintType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the blueprint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Blueprint& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the blueprint is active. Inactive
     * blueprints are listed to support customers with existing instances but are not
     * necessarily available for launch of new instances. Blueprints are marked
     * inactive when they become outdated due to operating system updates or new
     * application releases.</p>
     */
    inline bool GetIsActive() const { return m_isActive; }
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
    inline int GetMinPower() const { return m_minPower; }
    inline bool MinPowerHasBeenSet() const { return m_minPowerHasBeenSet; }
    inline void SetMinPower(int value) { m_minPowerHasBeenSet = true; m_minPower = value; }
    inline Blueprint& WithMinPower(int value) { SetMinPower(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the operating system, application, or stack (
     * <code>2016.03.0</code>).</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Blueprint& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version code.</p>
     */
    inline const Aws::String& GetVersionCode() const { return m_versionCode; }
    inline bool VersionCodeHasBeenSet() const { return m_versionCodeHasBeenSet; }
    template<typename VersionCodeT = Aws::String>
    void SetVersionCode(VersionCodeT&& value) { m_versionCodeHasBeenSet = true; m_versionCode = std::forward<VersionCodeT>(value); }
    template<typename VersionCodeT = Aws::String>
    Blueprint& WithVersionCode(VersionCodeT&& value) { SetVersionCode(std::forward<VersionCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product URL to learn more about the image or blueprint.</p>
     */
    inline const Aws::String& GetProductUrl() const { return m_productUrl; }
    inline bool ProductUrlHasBeenSet() const { return m_productUrlHasBeenSet; }
    template<typename ProductUrlT = Aws::String>
    void SetProductUrl(ProductUrlT&& value) { m_productUrlHasBeenSet = true; m_productUrl = std::forward<ProductUrlT>(value); }
    template<typename ProductUrlT = Aws::String>
    Blueprint& WithProductUrl(ProductUrlT&& value) { SetProductUrl(std::forward<ProductUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end-user license agreement URL for the image or blueprint.</p>
     */
    inline const Aws::String& GetLicenseUrl() const { return m_licenseUrl; }
    inline bool LicenseUrlHasBeenSet() const { return m_licenseUrlHasBeenSet; }
    template<typename LicenseUrlT = Aws::String>
    void SetLicenseUrl(LicenseUrlT&& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = std::forward<LicenseUrlT>(value); }
    template<typename LicenseUrlT = Aws::String>
    Blueprint& WithLicenseUrl(LicenseUrlT&& value) { SetLicenseUrl(std::forward<LicenseUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform (either Linux/Unix-based or Windows
     * Server-based) of the blueprint.</p>
     */
    inline InstancePlatform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(InstancePlatform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline Blueprint& WithPlatform(InstancePlatform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Virtual computer blueprints that are supported by Lightsail for Research.</p>
     *  <p>This parameter only applies to Lightsail for Research
     * resources.</p> 
     */
    inline AppCategory GetAppCategory() const { return m_appCategory; }
    inline bool AppCategoryHasBeenSet() const { return m_appCategoryHasBeenSet; }
    inline void SetAppCategory(AppCategory value) { m_appCategoryHasBeenSet = true; m_appCategory = value; }
    inline Blueprint& WithAppCategory(AppCategory value) { SetAppCategory(value); return *this;}
    ///@}
  private:

    Aws::String m_blueprintId;
    bool m_blueprintIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    BlueprintType m_type{BlueprintType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isActive{false};
    bool m_isActiveHasBeenSet = false;

    int m_minPower{0};
    bool m_minPowerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_versionCode;
    bool m_versionCodeHasBeenSet = false;

    Aws::String m_productUrl;
    bool m_productUrlHasBeenSet = false;

    Aws::String m_licenseUrl;
    bool m_licenseUrlHasBeenSet = false;

    InstancePlatform m_platform{InstancePlatform::NOT_SET};
    bool m_platformHasBeenSet = false;

    AppCategory m_appCategory{AppCategory::NOT_SET};
    bool m_appCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
