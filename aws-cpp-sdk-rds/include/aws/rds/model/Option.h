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
#include <aws/rds/model/OptionSetting.h>
#include <aws/rds/model/DBSecurityGroupMembership.h>
#include <aws/rds/model/VpcSecurityGroupMembership.h>
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
   * <p>Option details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Option">AWS API
   * Reference</a></p>
   */
  class AWS_RDS_API Option
  {
  public:
    Option();
    Option(const Aws::Utils::Xml::XmlNode& xmlNode);
    Option& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the option.</p>
     */
    inline const Aws::String& GetOptionName() const{ return m_optionName; }

    /**
     * <p>The name of the option.</p>
     */
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }

    /**
     * <p>The name of the option.</p>
     */
    inline void SetOptionName(const Aws::String& value) { m_optionNameHasBeenSet = true; m_optionName = value; }

    /**
     * <p>The name of the option.</p>
     */
    inline void SetOptionName(Aws::String&& value) { m_optionNameHasBeenSet = true; m_optionName = std::move(value); }

    /**
     * <p>The name of the option.</p>
     */
    inline void SetOptionName(const char* value) { m_optionNameHasBeenSet = true; m_optionName.assign(value); }

    /**
     * <p>The name of the option.</p>
     */
    inline Option& WithOptionName(const Aws::String& value) { SetOptionName(value); return *this;}

    /**
     * <p>The name of the option.</p>
     */
    inline Option& WithOptionName(Aws::String&& value) { SetOptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the option.</p>
     */
    inline Option& WithOptionName(const char* value) { SetOptionName(value); return *this;}


    /**
     * <p>The description of the option.</p>
     */
    inline const Aws::String& GetOptionDescription() const{ return m_optionDescription; }

    /**
     * <p>The description of the option.</p>
     */
    inline bool OptionDescriptionHasBeenSet() const { return m_optionDescriptionHasBeenSet; }

    /**
     * <p>The description of the option.</p>
     */
    inline void SetOptionDescription(const Aws::String& value) { m_optionDescriptionHasBeenSet = true; m_optionDescription = value; }

    /**
     * <p>The description of the option.</p>
     */
    inline void SetOptionDescription(Aws::String&& value) { m_optionDescriptionHasBeenSet = true; m_optionDescription = std::move(value); }

    /**
     * <p>The description of the option.</p>
     */
    inline void SetOptionDescription(const char* value) { m_optionDescriptionHasBeenSet = true; m_optionDescription.assign(value); }

    /**
     * <p>The description of the option.</p>
     */
    inline Option& WithOptionDescription(const Aws::String& value) { SetOptionDescription(value); return *this;}

    /**
     * <p>The description of the option.</p>
     */
    inline Option& WithOptionDescription(Aws::String&& value) { SetOptionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the option.</p>
     */
    inline Option& WithOptionDescription(const char* value) { SetOptionDescription(value); return *this;}


    /**
     * <p>Indicate if this option is persistent.</p>
     */
    inline bool GetPersistent() const{ return m_persistent; }

    /**
     * <p>Indicate if this option is persistent.</p>
     */
    inline bool PersistentHasBeenSet() const { return m_persistentHasBeenSet; }

    /**
     * <p>Indicate if this option is persistent.</p>
     */
    inline void SetPersistent(bool value) { m_persistentHasBeenSet = true; m_persistent = value; }

    /**
     * <p>Indicate if this option is persistent.</p>
     */
    inline Option& WithPersistent(bool value) { SetPersistent(value); return *this;}


    /**
     * <p>Indicate if this option is permanent.</p>
     */
    inline bool GetPermanent() const{ return m_permanent; }

    /**
     * <p>Indicate if this option is permanent.</p>
     */
    inline bool PermanentHasBeenSet() const { return m_permanentHasBeenSet; }

    /**
     * <p>Indicate if this option is permanent.</p>
     */
    inline void SetPermanent(bool value) { m_permanentHasBeenSet = true; m_permanent = value; }

    /**
     * <p>Indicate if this option is permanent.</p>
     */
    inline Option& WithPermanent(bool value) { SetPermanent(value); return *this;}


    /**
     * <p>If required, the port configured for this option to use.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>If required, the port configured for this option to use.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>If required, the port configured for this option to use.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>If required, the port configured for this option to use.</p>
     */
    inline Option& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The version of the option.</p>
     */
    inline const Aws::String& GetOptionVersion() const{ return m_optionVersion; }

    /**
     * <p>The version of the option.</p>
     */
    inline bool OptionVersionHasBeenSet() const { return m_optionVersionHasBeenSet; }

    /**
     * <p>The version of the option.</p>
     */
    inline void SetOptionVersion(const Aws::String& value) { m_optionVersionHasBeenSet = true; m_optionVersion = value; }

    /**
     * <p>The version of the option.</p>
     */
    inline void SetOptionVersion(Aws::String&& value) { m_optionVersionHasBeenSet = true; m_optionVersion = std::move(value); }

    /**
     * <p>The version of the option.</p>
     */
    inline void SetOptionVersion(const char* value) { m_optionVersionHasBeenSet = true; m_optionVersion.assign(value); }

    /**
     * <p>The version of the option.</p>
     */
    inline Option& WithOptionVersion(const Aws::String& value) { SetOptionVersion(value); return *this;}

    /**
     * <p>The version of the option.</p>
     */
    inline Option& WithOptionVersion(Aws::String&& value) { SetOptionVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the option.</p>
     */
    inline Option& WithOptionVersion(const char* value) { SetOptionVersion(value); return *this;}


    /**
     * <p>The option settings for this option.</p>
     */
    inline const Aws::Vector<OptionSetting>& GetOptionSettings() const{ return m_optionSettings; }

    /**
     * <p>The option settings for this option.</p>
     */
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }

    /**
     * <p>The option settings for this option.</p>
     */
    inline void SetOptionSettings(const Aws::Vector<OptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>The option settings for this option.</p>
     */
    inline void SetOptionSettings(Aws::Vector<OptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }

    /**
     * <p>The option settings for this option.</p>
     */
    inline Option& WithOptionSettings(const Aws::Vector<OptionSetting>& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>The option settings for this option.</p>
     */
    inline Option& WithOptionSettings(Aws::Vector<OptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}

    /**
     * <p>The option settings for this option.</p>
     */
    inline Option& AddOptionSettings(const OptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

    /**
     * <p>The option settings for this option.</p>
     */
    inline Option& AddOptionSettings(OptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>If the option requires access to a port, then this DB security group allows
     * access to the port.</p>
     */
    inline const Aws::Vector<DBSecurityGroupMembership>& GetDBSecurityGroupMemberships() const{ return m_dBSecurityGroupMemberships; }

    /**
     * <p>If the option requires access to a port, then this DB security group allows
     * access to the port.</p>
     */
    inline bool DBSecurityGroupMembershipsHasBeenSet() const { return m_dBSecurityGroupMembershipsHasBeenSet; }

    /**
     * <p>If the option requires access to a port, then this DB security group allows
     * access to the port.</p>
     */
    inline void SetDBSecurityGroupMemberships(const Aws::Vector<DBSecurityGroupMembership>& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships = value; }

    /**
     * <p>If the option requires access to a port, then this DB security group allows
     * access to the port.</p>
     */
    inline void SetDBSecurityGroupMemberships(Aws::Vector<DBSecurityGroupMembership>&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships = std::move(value); }

    /**
     * <p>If the option requires access to a port, then this DB security group allows
     * access to the port.</p>
     */
    inline Option& WithDBSecurityGroupMemberships(const Aws::Vector<DBSecurityGroupMembership>& value) { SetDBSecurityGroupMemberships(value); return *this;}

    /**
     * <p>If the option requires access to a port, then this DB security group allows
     * access to the port.</p>
     */
    inline Option& WithDBSecurityGroupMemberships(Aws::Vector<DBSecurityGroupMembership>&& value) { SetDBSecurityGroupMemberships(std::move(value)); return *this;}

    /**
     * <p>If the option requires access to a port, then this DB security group allows
     * access to the port.</p>
     */
    inline Option& AddDBSecurityGroupMemberships(const DBSecurityGroupMembership& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.push_back(value); return *this; }

    /**
     * <p>If the option requires access to a port, then this DB security group allows
     * access to the port.</p>
     */
    inline Option& AddDBSecurityGroupMemberships(DBSecurityGroupMembership&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.push_back(std::move(value)); return *this; }


    /**
     * <p>If the option requires access to a port, then this VPC security group allows
     * access to the port.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroupMemberships() const{ return m_vpcSecurityGroupMemberships; }

    /**
     * <p>If the option requires access to a port, then this VPC security group allows
     * access to the port.</p>
     */
    inline bool VpcSecurityGroupMembershipsHasBeenSet() const { return m_vpcSecurityGroupMembershipsHasBeenSet; }

    /**
     * <p>If the option requires access to a port, then this VPC security group allows
     * access to the port.</p>
     */
    inline void SetVpcSecurityGroupMemberships(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships = value; }

    /**
     * <p>If the option requires access to a port, then this VPC security group allows
     * access to the port.</p>
     */
    inline void SetVpcSecurityGroupMemberships(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships = std::move(value); }

    /**
     * <p>If the option requires access to a port, then this VPC security group allows
     * access to the port.</p>
     */
    inline Option& WithVpcSecurityGroupMemberships(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroupMemberships(value); return *this;}

    /**
     * <p>If the option requires access to a port, then this VPC security group allows
     * access to the port.</p>
     */
    inline Option& WithVpcSecurityGroupMemberships(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroupMemberships(std::move(value)); return *this;}

    /**
     * <p>If the option requires access to a port, then this VPC security group allows
     * access to the port.</p>
     */
    inline Option& AddVpcSecurityGroupMemberships(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.push_back(value); return *this; }

    /**
     * <p>If the option requires access to a port, then this VPC security group allows
     * access to the port.</p>
     */
    inline Option& AddVpcSecurityGroupMemberships(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet;

    Aws::String m_optionDescription;
    bool m_optionDescriptionHasBeenSet;

    bool m_persistent;
    bool m_persistentHasBeenSet;

    bool m_permanent;
    bool m_permanentHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_optionVersion;
    bool m_optionVersionHasBeenSet;

    Aws::Vector<OptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet;

    Aws::Vector<DBSecurityGroupMembership> m_dBSecurityGroupMemberships;
    bool m_dBSecurityGroupMembershipsHasBeenSet;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroupMemberships;
    bool m_vpcSecurityGroupMembershipsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
