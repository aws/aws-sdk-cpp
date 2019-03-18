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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/OptionGroupOptionSetting.h>
#include <aws/rds/model/OptionVersion.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Available option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionGroupOption">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API OptionGroupOption
  {
  public:
    OptionGroupOption();
    OptionGroupOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    OptionGroupOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the option.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the option.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the option.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the option.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the option.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the option.</p>
     */
    inline OptionGroupOption& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the option.</p>
     */
    inline OptionGroupOption& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the option.</p>
     */
    inline OptionGroupOption& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the option.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the option.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the option.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the option.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the option.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the option.</p>
     */
    inline OptionGroupOption& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the option.</p>
     */
    inline OptionGroupOption& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the option.</p>
     */
    inline OptionGroupOption& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the engine that this option can be applied to.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The name of the engine that this option can be applied to.</p>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>The name of the engine that this option can be applied to.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The name of the engine that this option can be applied to.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>The name of the engine that this option can be applied to.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The name of the engine that this option can be applied to.</p>
     */
    inline OptionGroupOption& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The name of the engine that this option can be applied to.</p>
     */
    inline OptionGroupOption& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>The name of the engine that this option can be applied to.</p>
     */
    inline OptionGroupOption& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>Indicates the major engine version that the option is available for.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }

    /**
     * <p>Indicates the major engine version that the option is available for.</p>
     */
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }

    /**
     * <p>Indicates the major engine version that the option is available for.</p>
     */
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }

    /**
     * <p>Indicates the major engine version that the option is available for.</p>
     */
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::move(value); }

    /**
     * <p>Indicates the major engine version that the option is available for.</p>
     */
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }

    /**
     * <p>Indicates the major engine version that the option is available for.</p>
     */
    inline OptionGroupOption& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}

    /**
     * <p>Indicates the major engine version that the option is available for.</p>
     */
    inline OptionGroupOption& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Indicates the major engine version that the option is available for.</p>
     */
    inline OptionGroupOption& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}


    /**
     * <p>The minimum required engine version for the option to be applied.</p>
     */
    inline const Aws::String& GetMinimumRequiredMinorEngineVersion() const{ return m_minimumRequiredMinorEngineVersion; }

    /**
     * <p>The minimum required engine version for the option to be applied.</p>
     */
    inline bool MinimumRequiredMinorEngineVersionHasBeenSet() const { return m_minimumRequiredMinorEngineVersionHasBeenSet; }

    /**
     * <p>The minimum required engine version for the option to be applied.</p>
     */
    inline void SetMinimumRequiredMinorEngineVersion(const Aws::String& value) { m_minimumRequiredMinorEngineVersionHasBeenSet = true; m_minimumRequiredMinorEngineVersion = value; }

    /**
     * <p>The minimum required engine version for the option to be applied.</p>
     */
    inline void SetMinimumRequiredMinorEngineVersion(Aws::String&& value) { m_minimumRequiredMinorEngineVersionHasBeenSet = true; m_minimumRequiredMinorEngineVersion = std::move(value); }

    /**
     * <p>The minimum required engine version for the option to be applied.</p>
     */
    inline void SetMinimumRequiredMinorEngineVersion(const char* value) { m_minimumRequiredMinorEngineVersionHasBeenSet = true; m_minimumRequiredMinorEngineVersion.assign(value); }

    /**
     * <p>The minimum required engine version for the option to be applied.</p>
     */
    inline OptionGroupOption& WithMinimumRequiredMinorEngineVersion(const Aws::String& value) { SetMinimumRequiredMinorEngineVersion(value); return *this;}

    /**
     * <p>The minimum required engine version for the option to be applied.</p>
     */
    inline OptionGroupOption& WithMinimumRequiredMinorEngineVersion(Aws::String&& value) { SetMinimumRequiredMinorEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The minimum required engine version for the option to be applied.</p>
     */
    inline OptionGroupOption& WithMinimumRequiredMinorEngineVersion(const char* value) { SetMinimumRequiredMinorEngineVersion(value); return *this;}


    /**
     * <p>Specifies whether the option requires a port.</p>
     */
    inline bool GetPortRequired() const{ return m_portRequired; }

    /**
     * <p>Specifies whether the option requires a port.</p>
     */
    inline bool PortRequiredHasBeenSet() const { return m_portRequiredHasBeenSet; }

    /**
     * <p>Specifies whether the option requires a port.</p>
     */
    inline void SetPortRequired(bool value) { m_portRequiredHasBeenSet = true; m_portRequired = value; }

    /**
     * <p>Specifies whether the option requires a port.</p>
     */
    inline OptionGroupOption& WithPortRequired(bool value) { SetPortRequired(value); return *this;}


    /**
     * <p>If the option requires a port, specifies the default port for the option.</p>
     */
    inline int GetDefaultPort() const{ return m_defaultPort; }

    /**
     * <p>If the option requires a port, specifies the default port for the option.</p>
     */
    inline bool DefaultPortHasBeenSet() const { return m_defaultPortHasBeenSet; }

    /**
     * <p>If the option requires a port, specifies the default port for the option.</p>
     */
    inline void SetDefaultPort(int value) { m_defaultPortHasBeenSet = true; m_defaultPort = value; }

    /**
     * <p>If the option requires a port, specifies the default port for the option.</p>
     */
    inline OptionGroupOption& WithDefaultPort(int value) { SetDefaultPort(value); return *this;}


    /**
     * <p>The options that are prerequisites for this option.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptionsDependedOn() const{ return m_optionsDependedOn; }

    /**
     * <p>The options that are prerequisites for this option.</p>
     */
    inline bool OptionsDependedOnHasBeenSet() const { return m_optionsDependedOnHasBeenSet; }

    /**
     * <p>The options that are prerequisites for this option.</p>
     */
    inline void SetOptionsDependedOn(const Aws::Vector<Aws::String>& value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn = value; }

    /**
     * <p>The options that are prerequisites for this option.</p>
     */
    inline void SetOptionsDependedOn(Aws::Vector<Aws::String>&& value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn = std::move(value); }

    /**
     * <p>The options that are prerequisites for this option.</p>
     */
    inline OptionGroupOption& WithOptionsDependedOn(const Aws::Vector<Aws::String>& value) { SetOptionsDependedOn(value); return *this;}

    /**
     * <p>The options that are prerequisites for this option.</p>
     */
    inline OptionGroupOption& WithOptionsDependedOn(Aws::Vector<Aws::String>&& value) { SetOptionsDependedOn(std::move(value)); return *this;}

    /**
     * <p>The options that are prerequisites for this option.</p>
     */
    inline OptionGroupOption& AddOptionsDependedOn(const Aws::String& value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn.push_back(value); return *this; }

    /**
     * <p>The options that are prerequisites for this option.</p>
     */
    inline OptionGroupOption& AddOptionsDependedOn(Aws::String&& value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn.push_back(std::move(value)); return *this; }

    /**
     * <p>The options that are prerequisites for this option.</p>
     */
    inline OptionGroupOption& AddOptionsDependedOn(const char* value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn.push_back(value); return *this; }


    /**
     * <p>The options that conflict with this option.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptionsConflictsWith() const{ return m_optionsConflictsWith; }

    /**
     * <p>The options that conflict with this option.</p>
     */
    inline bool OptionsConflictsWithHasBeenSet() const { return m_optionsConflictsWithHasBeenSet; }

    /**
     * <p>The options that conflict with this option.</p>
     */
    inline void SetOptionsConflictsWith(const Aws::Vector<Aws::String>& value) { m_optionsConflictsWithHasBeenSet = true; m_optionsConflictsWith = value; }

    /**
     * <p>The options that conflict with this option.</p>
     */
    inline void SetOptionsConflictsWith(Aws::Vector<Aws::String>&& value) { m_optionsConflictsWithHasBeenSet = true; m_optionsConflictsWith = std::move(value); }

    /**
     * <p>The options that conflict with this option.</p>
     */
    inline OptionGroupOption& WithOptionsConflictsWith(const Aws::Vector<Aws::String>& value) { SetOptionsConflictsWith(value); return *this;}

    /**
     * <p>The options that conflict with this option.</p>
     */
    inline OptionGroupOption& WithOptionsConflictsWith(Aws::Vector<Aws::String>&& value) { SetOptionsConflictsWith(std::move(value)); return *this;}

    /**
     * <p>The options that conflict with this option.</p>
     */
    inline OptionGroupOption& AddOptionsConflictsWith(const Aws::String& value) { m_optionsConflictsWithHasBeenSet = true; m_optionsConflictsWith.push_back(value); return *this; }

    /**
     * <p>The options that conflict with this option.</p>
     */
    inline OptionGroupOption& AddOptionsConflictsWith(Aws::String&& value) { m_optionsConflictsWithHasBeenSet = true; m_optionsConflictsWith.push_back(std::move(value)); return *this; }

    /**
     * <p>The options that conflict with this option.</p>
     */
    inline OptionGroupOption& AddOptionsConflictsWith(const char* value) { m_optionsConflictsWithHasBeenSet = true; m_optionsConflictsWith.push_back(value); return *this; }


    /**
     * <p>Persistent options can't be removed from an option group while DB instances
     * are associated with the option group. If you disassociate all DB instances from
     * the option group, your can remove the persistent option from the option
     * group.</p>
     */
    inline bool GetPersistent() const{ return m_persistent; }

    /**
     * <p>Persistent options can't be removed from an option group while DB instances
     * are associated with the option group. If you disassociate all DB instances from
     * the option group, your can remove the persistent option from the option
     * group.</p>
     */
    inline bool PersistentHasBeenSet() const { return m_persistentHasBeenSet; }

    /**
     * <p>Persistent options can't be removed from an option group while DB instances
     * are associated with the option group. If you disassociate all DB instances from
     * the option group, your can remove the persistent option from the option
     * group.</p>
     */
    inline void SetPersistent(bool value) { m_persistentHasBeenSet = true; m_persistent = value; }

    /**
     * <p>Persistent options can't be removed from an option group while DB instances
     * are associated with the option group. If you disassociate all DB instances from
     * the option group, your can remove the persistent option from the option
     * group.</p>
     */
    inline OptionGroupOption& WithPersistent(bool value) { SetPersistent(value); return *this;}


    /**
     * <p>Permanent options can never be removed from an option group. An option group
     * containing a permanent option can't be removed from a DB instance.</p>
     */
    inline bool GetPermanent() const{ return m_permanent; }

    /**
     * <p>Permanent options can never be removed from an option group. An option group
     * containing a permanent option can't be removed from a DB instance.</p>
     */
    inline bool PermanentHasBeenSet() const { return m_permanentHasBeenSet; }

    /**
     * <p>Permanent options can never be removed from an option group. An option group
     * containing a permanent option can't be removed from a DB instance.</p>
     */
    inline void SetPermanent(bool value) { m_permanentHasBeenSet = true; m_permanent = value; }

    /**
     * <p>Permanent options can never be removed from an option group. An option group
     * containing a permanent option can't be removed from a DB instance.</p>
     */
    inline OptionGroupOption& WithPermanent(bool value) { SetPermanent(value); return *this;}


    /**
     * <p>If true, you must enable the Auto Minor Version Upgrade setting for your DB
     * instance before you can use this option. You can enable Auto Minor Version
     * Upgrade when you first create your DB instance, or by modifying your DB instance
     * later. </p>
     */
    inline bool GetRequiresAutoMinorEngineVersionUpgrade() const{ return m_requiresAutoMinorEngineVersionUpgrade; }

    /**
     * <p>If true, you must enable the Auto Minor Version Upgrade setting for your DB
     * instance before you can use this option. You can enable Auto Minor Version
     * Upgrade when you first create your DB instance, or by modifying your DB instance
     * later. </p>
     */
    inline bool RequiresAutoMinorEngineVersionUpgradeHasBeenSet() const { return m_requiresAutoMinorEngineVersionUpgradeHasBeenSet; }

    /**
     * <p>If true, you must enable the Auto Minor Version Upgrade setting for your DB
     * instance before you can use this option. You can enable Auto Minor Version
     * Upgrade when you first create your DB instance, or by modifying your DB instance
     * later. </p>
     */
    inline void SetRequiresAutoMinorEngineVersionUpgrade(bool value) { m_requiresAutoMinorEngineVersionUpgradeHasBeenSet = true; m_requiresAutoMinorEngineVersionUpgrade = value; }

    /**
     * <p>If true, you must enable the Auto Minor Version Upgrade setting for your DB
     * instance before you can use this option. You can enable Auto Minor Version
     * Upgrade when you first create your DB instance, or by modifying your DB instance
     * later. </p>
     */
    inline OptionGroupOption& WithRequiresAutoMinorEngineVersionUpgrade(bool value) { SetRequiresAutoMinorEngineVersionUpgrade(value); return *this;}


    /**
     * <p>If true, you can only use this option with a DB instance that is in a VPC.
     * </p>
     */
    inline bool GetVpcOnly() const{ return m_vpcOnly; }

    /**
     * <p>If true, you can only use this option with a DB instance that is in a VPC.
     * </p>
     */
    inline bool VpcOnlyHasBeenSet() const { return m_vpcOnlyHasBeenSet; }

    /**
     * <p>If true, you can only use this option with a DB instance that is in a VPC.
     * </p>
     */
    inline void SetVpcOnly(bool value) { m_vpcOnlyHasBeenSet = true; m_vpcOnly = value; }

    /**
     * <p>If true, you can only use this option with a DB instance that is in a VPC.
     * </p>
     */
    inline OptionGroupOption& WithVpcOnly(bool value) { SetVpcOnly(value); return *this;}


    /**
     * <p>If true, you can change the option to an earlier version of the option. This
     * only applies to options that have different versions available. </p>
     */
    inline bool GetSupportsOptionVersionDowngrade() const{ return m_supportsOptionVersionDowngrade; }

    /**
     * <p>If true, you can change the option to an earlier version of the option. This
     * only applies to options that have different versions available. </p>
     */
    inline bool SupportsOptionVersionDowngradeHasBeenSet() const { return m_supportsOptionVersionDowngradeHasBeenSet; }

    /**
     * <p>If true, you can change the option to an earlier version of the option. This
     * only applies to options that have different versions available. </p>
     */
    inline void SetSupportsOptionVersionDowngrade(bool value) { m_supportsOptionVersionDowngradeHasBeenSet = true; m_supportsOptionVersionDowngrade = value; }

    /**
     * <p>If true, you can change the option to an earlier version of the option. This
     * only applies to options that have different versions available. </p>
     */
    inline OptionGroupOption& WithSupportsOptionVersionDowngrade(bool value) { SetSupportsOptionVersionDowngrade(value); return *this;}


    /**
     * <p>The option settings that are available (and the default value) for each
     * option in an option group.</p>
     */
    inline const Aws::Vector<OptionGroupOptionSetting>& GetOptionGroupOptionSettings() const{ return m_optionGroupOptionSettings; }

    /**
     * <p>The option settings that are available (and the default value) for each
     * option in an option group.</p>
     */
    inline bool OptionGroupOptionSettingsHasBeenSet() const { return m_optionGroupOptionSettingsHasBeenSet; }

    /**
     * <p>The option settings that are available (and the default value) for each
     * option in an option group.</p>
     */
    inline void SetOptionGroupOptionSettings(const Aws::Vector<OptionGroupOptionSetting>& value) { m_optionGroupOptionSettingsHasBeenSet = true; m_optionGroupOptionSettings = value; }

    /**
     * <p>The option settings that are available (and the default value) for each
     * option in an option group.</p>
     */
    inline void SetOptionGroupOptionSettings(Aws::Vector<OptionGroupOptionSetting>&& value) { m_optionGroupOptionSettingsHasBeenSet = true; m_optionGroupOptionSettings = std::move(value); }

    /**
     * <p>The option settings that are available (and the default value) for each
     * option in an option group.</p>
     */
    inline OptionGroupOption& WithOptionGroupOptionSettings(const Aws::Vector<OptionGroupOptionSetting>& value) { SetOptionGroupOptionSettings(value); return *this;}

    /**
     * <p>The option settings that are available (and the default value) for each
     * option in an option group.</p>
     */
    inline OptionGroupOption& WithOptionGroupOptionSettings(Aws::Vector<OptionGroupOptionSetting>&& value) { SetOptionGroupOptionSettings(std::move(value)); return *this;}

    /**
     * <p>The option settings that are available (and the default value) for each
     * option in an option group.</p>
     */
    inline OptionGroupOption& AddOptionGroupOptionSettings(const OptionGroupOptionSetting& value) { m_optionGroupOptionSettingsHasBeenSet = true; m_optionGroupOptionSettings.push_back(value); return *this; }

    /**
     * <p>The option settings that are available (and the default value) for each
     * option in an option group.</p>
     */
    inline OptionGroupOption& AddOptionGroupOptionSettings(OptionGroupOptionSetting&& value) { m_optionGroupOptionSettingsHasBeenSet = true; m_optionGroupOptionSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>The versions that are available for the option.</p>
     */
    inline const Aws::Vector<OptionVersion>& GetOptionGroupOptionVersions() const{ return m_optionGroupOptionVersions; }

    /**
     * <p>The versions that are available for the option.</p>
     */
    inline bool OptionGroupOptionVersionsHasBeenSet() const { return m_optionGroupOptionVersionsHasBeenSet; }

    /**
     * <p>The versions that are available for the option.</p>
     */
    inline void SetOptionGroupOptionVersions(const Aws::Vector<OptionVersion>& value) { m_optionGroupOptionVersionsHasBeenSet = true; m_optionGroupOptionVersions = value; }

    /**
     * <p>The versions that are available for the option.</p>
     */
    inline void SetOptionGroupOptionVersions(Aws::Vector<OptionVersion>&& value) { m_optionGroupOptionVersionsHasBeenSet = true; m_optionGroupOptionVersions = std::move(value); }

    /**
     * <p>The versions that are available for the option.</p>
     */
    inline OptionGroupOption& WithOptionGroupOptionVersions(const Aws::Vector<OptionVersion>& value) { SetOptionGroupOptionVersions(value); return *this;}

    /**
     * <p>The versions that are available for the option.</p>
     */
    inline OptionGroupOption& WithOptionGroupOptionVersions(Aws::Vector<OptionVersion>&& value) { SetOptionGroupOptionVersions(std::move(value)); return *this;}

    /**
     * <p>The versions that are available for the option.</p>
     */
    inline OptionGroupOption& AddOptionGroupOptionVersions(const OptionVersion& value) { m_optionGroupOptionVersionsHasBeenSet = true; m_optionGroupOptionVersions.push_back(value); return *this; }

    /**
     * <p>The versions that are available for the option.</p>
     */
    inline OptionGroupOption& AddOptionGroupOptionVersions(OptionVersion&& value) { m_optionGroupOptionVersionsHasBeenSet = true; m_optionGroupOptionVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet;

    Aws::String m_minimumRequiredMinorEngineVersion;
    bool m_minimumRequiredMinorEngineVersionHasBeenSet;

    bool m_portRequired;
    bool m_portRequiredHasBeenSet;

    int m_defaultPort;
    bool m_defaultPortHasBeenSet;

    Aws::Vector<Aws::String> m_optionsDependedOn;
    bool m_optionsDependedOnHasBeenSet;

    Aws::Vector<Aws::String> m_optionsConflictsWith;
    bool m_optionsConflictsWithHasBeenSet;

    bool m_persistent;
    bool m_persistentHasBeenSet;

    bool m_permanent;
    bool m_permanentHasBeenSet;

    bool m_requiresAutoMinorEngineVersionUpgrade;
    bool m_requiresAutoMinorEngineVersionUpgradeHasBeenSet;

    bool m_vpcOnly;
    bool m_vpcOnlyHasBeenSet;

    bool m_supportsOptionVersionDowngrade;
    bool m_supportsOptionVersionDowngradeHasBeenSet;

    Aws::Vector<OptionGroupOptionSetting> m_optionGroupOptionSettings;
    bool m_optionGroupOptionSettingsHasBeenSet;

    Aws::Vector<OptionVersion> m_optionGroupOptionVersions;
    bool m_optionGroupOptionVersionsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
