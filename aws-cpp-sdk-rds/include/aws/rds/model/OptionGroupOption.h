/*
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/OptionGroupOptionSetting.h>

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
   * <p> Available option. </p>
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
     * <p> The name of the option. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the option. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the option. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the option. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the option. </p>
     */
    inline OptionGroupOption& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the option. </p>
     */
    inline OptionGroupOption& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p> The name of the option. </p>
     */
    inline OptionGroupOption& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p> The description of the option. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the option. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the option. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the option. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the option. </p>
     */
    inline OptionGroupOption& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the option. </p>
     */
    inline OptionGroupOption& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the option. </p>
     */
    inline OptionGroupOption& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The name of the engine that this option can be applied to. </p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The name of the engine that this option can be applied to. </p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The name of the engine that this option can be applied to. </p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The name of the engine that this option can be applied to. </p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The name of the engine that this option can be applied to. </p>
     */
    inline OptionGroupOption& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The name of the engine that this option can be applied to. </p>
     */
    inline OptionGroupOption& WithEngineName(Aws::String&& value) { SetEngineName(value); return *this;}

    /**
     * <p>The name of the engine that this option can be applied to. </p>
     */
    inline OptionGroupOption& WithEngineName(const char* value) { SetEngineName(value); return *this;}

    /**
     * <p> Indicates the major engine version that the option is available for. </p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }

    /**
     * <p> Indicates the major engine version that the option is available for. </p>
     */
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }

    /**
     * <p> Indicates the major engine version that the option is available for. </p>
     */
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }

    /**
     * <p> Indicates the major engine version that the option is available for. </p>
     */
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }

    /**
     * <p> Indicates the major engine version that the option is available for. </p>
     */
    inline OptionGroupOption& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}

    /**
     * <p> Indicates the major engine version that the option is available for. </p>
     */
    inline OptionGroupOption& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(value); return *this;}

    /**
     * <p> Indicates the major engine version that the option is available for. </p>
     */
    inline OptionGroupOption& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}

    /**
     * <p> The minimum required engine version for the option to be applied. </p>
     */
    inline const Aws::String& GetMinimumRequiredMinorEngineVersion() const{ return m_minimumRequiredMinorEngineVersion; }

    /**
     * <p> The minimum required engine version for the option to be applied. </p>
     */
    inline void SetMinimumRequiredMinorEngineVersion(const Aws::String& value) { m_minimumRequiredMinorEngineVersionHasBeenSet = true; m_minimumRequiredMinorEngineVersion = value; }

    /**
     * <p> The minimum required engine version for the option to be applied. </p>
     */
    inline void SetMinimumRequiredMinorEngineVersion(Aws::String&& value) { m_minimumRequiredMinorEngineVersionHasBeenSet = true; m_minimumRequiredMinorEngineVersion = value; }

    /**
     * <p> The minimum required engine version for the option to be applied. </p>
     */
    inline void SetMinimumRequiredMinorEngineVersion(const char* value) { m_minimumRequiredMinorEngineVersionHasBeenSet = true; m_minimumRequiredMinorEngineVersion.assign(value); }

    /**
     * <p> The minimum required engine version for the option to be applied. </p>
     */
    inline OptionGroupOption& WithMinimumRequiredMinorEngineVersion(const Aws::String& value) { SetMinimumRequiredMinorEngineVersion(value); return *this;}

    /**
     * <p> The minimum required engine version for the option to be applied. </p>
     */
    inline OptionGroupOption& WithMinimumRequiredMinorEngineVersion(Aws::String&& value) { SetMinimumRequiredMinorEngineVersion(value); return *this;}

    /**
     * <p> The minimum required engine version for the option to be applied. </p>
     */
    inline OptionGroupOption& WithMinimumRequiredMinorEngineVersion(const char* value) { SetMinimumRequiredMinorEngineVersion(value); return *this;}

    /**
     * <p> Specifies whether the option requires a port. </p>
     */
    inline bool GetPortRequired() const{ return m_portRequired; }

    /**
     * <p> Specifies whether the option requires a port. </p>
     */
    inline void SetPortRequired(bool value) { m_portRequiredHasBeenSet = true; m_portRequired = value; }

    /**
     * <p> Specifies whether the option requires a port. </p>
     */
    inline OptionGroupOption& WithPortRequired(bool value) { SetPortRequired(value); return *this;}

    /**
     * <p> If the option requires a port, specifies the default port for the option.
     * </p>
     */
    inline long GetDefaultPort() const{ return m_defaultPort; }

    /**
     * <p> If the option requires a port, specifies the default port for the option.
     * </p>
     */
    inline void SetDefaultPort(long value) { m_defaultPortHasBeenSet = true; m_defaultPort = value; }

    /**
     * <p> If the option requires a port, specifies the default port for the option.
     * </p>
     */
    inline OptionGroupOption& WithDefaultPort(long value) { SetDefaultPort(value); return *this;}

    /**
     * <p> List of all options that are prerequisites for this option. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOptionsDependedOn() const{ return m_optionsDependedOn; }

    /**
     * <p> List of all options that are prerequisites for this option. </p>
     */
    inline void SetOptionsDependedOn(const Aws::Vector<Aws::String>& value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn = value; }

    /**
     * <p> List of all options that are prerequisites for this option. </p>
     */
    inline void SetOptionsDependedOn(Aws::Vector<Aws::String>&& value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn = value; }

    /**
     * <p> List of all options that are prerequisites for this option. </p>
     */
    inline OptionGroupOption& WithOptionsDependedOn(const Aws::Vector<Aws::String>& value) { SetOptionsDependedOn(value); return *this;}

    /**
     * <p> List of all options that are prerequisites for this option. </p>
     */
    inline OptionGroupOption& WithOptionsDependedOn(Aws::Vector<Aws::String>&& value) { SetOptionsDependedOn(value); return *this;}

    /**
     * <p> List of all options that are prerequisites for this option. </p>
     */
    inline OptionGroupOption& AddOptionsDependedOn(const Aws::String& value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn.push_back(value); return *this; }

    /**
     * <p> List of all options that are prerequisites for this option. </p>
     */
    inline OptionGroupOption& AddOptionsDependedOn(Aws::String&& value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn.push_back(value); return *this; }

    /**
     * <p> List of all options that are prerequisites for this option. </p>
     */
    inline OptionGroupOption& AddOptionsDependedOn(const char* value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn.push_back(value); return *this; }

    /**
     * <p> A persistent option cannot be removed from the option group once the option
     * group is used, but this option can be removed from the db instance while
     * modifying the related data and assigning another option group without this
     * option. </p>
     */
    inline bool GetPersistent() const{ return m_persistent; }

    /**
     * <p> A persistent option cannot be removed from the option group once the option
     * group is used, but this option can be removed from the db instance while
     * modifying the related data and assigning another option group without this
     * option. </p>
     */
    inline void SetPersistent(bool value) { m_persistentHasBeenSet = true; m_persistent = value; }

    /**
     * <p> A persistent option cannot be removed from the option group once the option
     * group is used, but this option can be removed from the db instance while
     * modifying the related data and assigning another option group without this
     * option. </p>
     */
    inline OptionGroupOption& WithPersistent(bool value) { SetPersistent(value); return *this;}

    /**
     * <p> A permanent option cannot be removed from the option group once the option
     * group is used, and it cannot be removed from the db instance after assigning an
     * option group with this permanent option. </p>
     */
    inline bool GetPermanent() const{ return m_permanent; }

    /**
     * <p> A permanent option cannot be removed from the option group once the option
     * group is used, and it cannot be removed from the db instance after assigning an
     * option group with this permanent option. </p>
     */
    inline void SetPermanent(bool value) { m_permanentHasBeenSet = true; m_permanent = value; }

    /**
     * <p> A permanent option cannot be removed from the option group once the option
     * group is used, and it cannot be removed from the db instance after assigning an
     * option group with this permanent option. </p>
     */
    inline OptionGroupOption& WithPermanent(bool value) { SetPermanent(value); return *this;}

    /**
     * <p> Specifies the option settings that are available (and the default value) for
     * each option in an option group. </p>
     */
    inline const Aws::Vector<OptionGroupOptionSetting>& GetOptionGroupOptionSettings() const{ return m_optionGroupOptionSettings; }

    /**
     * <p> Specifies the option settings that are available (and the default value) for
     * each option in an option group. </p>
     */
    inline void SetOptionGroupOptionSettings(const Aws::Vector<OptionGroupOptionSetting>& value) { m_optionGroupOptionSettingsHasBeenSet = true; m_optionGroupOptionSettings = value; }

    /**
     * <p> Specifies the option settings that are available (and the default value) for
     * each option in an option group. </p>
     */
    inline void SetOptionGroupOptionSettings(Aws::Vector<OptionGroupOptionSetting>&& value) { m_optionGroupOptionSettingsHasBeenSet = true; m_optionGroupOptionSettings = value; }

    /**
     * <p> Specifies the option settings that are available (and the default value) for
     * each option in an option group. </p>
     */
    inline OptionGroupOption& WithOptionGroupOptionSettings(const Aws::Vector<OptionGroupOptionSetting>& value) { SetOptionGroupOptionSettings(value); return *this;}

    /**
     * <p> Specifies the option settings that are available (and the default value) for
     * each option in an option group. </p>
     */
    inline OptionGroupOption& WithOptionGroupOptionSettings(Aws::Vector<OptionGroupOptionSetting>&& value) { SetOptionGroupOptionSettings(value); return *this;}

    /**
     * <p> Specifies the option settings that are available (and the default value) for
     * each option in an option group. </p>
     */
    inline OptionGroupOption& AddOptionGroupOptionSettings(const OptionGroupOptionSetting& value) { m_optionGroupOptionSettingsHasBeenSet = true; m_optionGroupOptionSettings.push_back(value); return *this; }

    /**
     * <p> Specifies the option settings that are available (and the default value) for
     * each option in an option group. </p>
     */
    inline OptionGroupOption& AddOptionGroupOptionSettings(OptionGroupOptionSetting&& value) { m_optionGroupOptionSettingsHasBeenSet = true; m_optionGroupOptionSettings.push_back(value); return *this; }

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
    long m_defaultPort;
    bool m_defaultPortHasBeenSet;
    Aws::Vector<Aws::String> m_optionsDependedOn;
    bool m_optionsDependedOnHasBeenSet;
    bool m_persistent;
    bool m_persistentHasBeenSet;
    bool m_permanent;
    bool m_permanentHasBeenSet;
    Aws::Vector<OptionGroupOptionSetting> m_optionGroupOptionSettings;
    bool m_optionGroupOptionSettingsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
