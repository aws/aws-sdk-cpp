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
#include <aws/rds/model/Option.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionGroup">AWS API
   * Reference</a></p>
   */
  class AWS_RDS_API OptionGroup
  {
  public:
    OptionGroup();
    OptionGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    OptionGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies the name of the option group.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>Specifies the name of the option group.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>Specifies the name of the option group.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>Specifies the name of the option group.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>Specifies the name of the option group.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>Specifies the name of the option group.</p>
     */
    inline OptionGroup& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>Specifies the name of the option group.</p>
     */
    inline OptionGroup& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the option group.</p>
     */
    inline OptionGroup& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>Provides a description of the option group.</p>
     */
    inline const Aws::String& GetOptionGroupDescription() const{ return m_optionGroupDescription; }

    /**
     * <p>Provides a description of the option group.</p>
     */
    inline bool OptionGroupDescriptionHasBeenSet() const { return m_optionGroupDescriptionHasBeenSet; }

    /**
     * <p>Provides a description of the option group.</p>
     */
    inline void SetOptionGroupDescription(const Aws::String& value) { m_optionGroupDescriptionHasBeenSet = true; m_optionGroupDescription = value; }

    /**
     * <p>Provides a description of the option group.</p>
     */
    inline void SetOptionGroupDescription(Aws::String&& value) { m_optionGroupDescriptionHasBeenSet = true; m_optionGroupDescription = std::move(value); }

    /**
     * <p>Provides a description of the option group.</p>
     */
    inline void SetOptionGroupDescription(const char* value) { m_optionGroupDescriptionHasBeenSet = true; m_optionGroupDescription.assign(value); }

    /**
     * <p>Provides a description of the option group.</p>
     */
    inline OptionGroup& WithOptionGroupDescription(const Aws::String& value) { SetOptionGroupDescription(value); return *this;}

    /**
     * <p>Provides a description of the option group.</p>
     */
    inline OptionGroup& WithOptionGroupDescription(Aws::String&& value) { SetOptionGroupDescription(std::move(value)); return *this;}

    /**
     * <p>Provides a description of the option group.</p>
     */
    inline OptionGroup& WithOptionGroupDescription(const char* value) { SetOptionGroupDescription(value); return *this;}


    /**
     * <p>Indicates the name of the engine that this option group can be applied
     * to.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>Indicates the name of the engine that this option group can be applied
     * to.</p>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>Indicates the name of the engine that this option group can be applied
     * to.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>Indicates the name of the engine that this option group can be applied
     * to.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>Indicates the name of the engine that this option group can be applied
     * to.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>Indicates the name of the engine that this option group can be applied
     * to.</p>
     */
    inline OptionGroup& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>Indicates the name of the engine that this option group can be applied
     * to.</p>
     */
    inline OptionGroup& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>Indicates the name of the engine that this option group can be applied
     * to.</p>
     */
    inline OptionGroup& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>Indicates the major engine version associated with this option group.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }

    /**
     * <p>Indicates the major engine version associated with this option group.</p>
     */
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }

    /**
     * <p>Indicates the major engine version associated with this option group.</p>
     */
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }

    /**
     * <p>Indicates the major engine version associated with this option group.</p>
     */
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::move(value); }

    /**
     * <p>Indicates the major engine version associated with this option group.</p>
     */
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }

    /**
     * <p>Indicates the major engine version associated with this option group.</p>
     */
    inline OptionGroup& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}

    /**
     * <p>Indicates the major engine version associated with this option group.</p>
     */
    inline OptionGroup& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Indicates the major engine version associated with this option group.</p>
     */
    inline OptionGroup& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}


    /**
     * <p>Indicates what options are available in the option group.</p>
     */
    inline const Aws::Vector<Option>& GetOptions() const{ return m_options; }

    /**
     * <p>Indicates what options are available in the option group.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Indicates what options are available in the option group.</p>
     */
    inline void SetOptions(const Aws::Vector<Option>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Indicates what options are available in the option group.</p>
     */
    inline void SetOptions(Aws::Vector<Option>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Indicates what options are available in the option group.</p>
     */
    inline OptionGroup& WithOptions(const Aws::Vector<Option>& value) { SetOptions(value); return *this;}

    /**
     * <p>Indicates what options are available in the option group.</p>
     */
    inline OptionGroup& WithOptions(Aws::Vector<Option>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>Indicates what options are available in the option group.</p>
     */
    inline OptionGroup& AddOptions(const Option& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>Indicates what options are available in the option group.</p>
     */
    inline OptionGroup& AddOptions(Option&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether this option group can be applied to both VPC and non-VPC
     * instances. The value <code>true</code> indicates the option group can be applied
     * to both VPC and non-VPC instances. </p>
     */
    inline bool GetAllowsVpcAndNonVpcInstanceMemberships() const{ return m_allowsVpcAndNonVpcInstanceMemberships; }

    /**
     * <p>Indicates whether this option group can be applied to both VPC and non-VPC
     * instances. The value <code>true</code> indicates the option group can be applied
     * to both VPC and non-VPC instances. </p>
     */
    inline bool AllowsVpcAndNonVpcInstanceMembershipsHasBeenSet() const { return m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet; }

    /**
     * <p>Indicates whether this option group can be applied to both VPC and non-VPC
     * instances. The value <code>true</code> indicates the option group can be applied
     * to both VPC and non-VPC instances. </p>
     */
    inline void SetAllowsVpcAndNonVpcInstanceMemberships(bool value) { m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet = true; m_allowsVpcAndNonVpcInstanceMemberships = value; }

    /**
     * <p>Indicates whether this option group can be applied to both VPC and non-VPC
     * instances. The value <code>true</code> indicates the option group can be applied
     * to both VPC and non-VPC instances. </p>
     */
    inline OptionGroup& WithAllowsVpcAndNonVpcInstanceMemberships(bool value) { SetAllowsVpcAndNonVpcInstanceMemberships(value); return *this;}


    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field. </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field. </p>
     */
    inline OptionGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field. </p>
     */
    inline OptionGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field. </p>
     */
    inline OptionGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the option group.</p>
     */
    inline const Aws::String& GetOptionGroupArn() const{ return m_optionGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the option group.</p>
     */
    inline bool OptionGroupArnHasBeenSet() const { return m_optionGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the option group.</p>
     */
    inline void SetOptionGroupArn(const Aws::String& value) { m_optionGroupArnHasBeenSet = true; m_optionGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the option group.</p>
     */
    inline void SetOptionGroupArn(Aws::String&& value) { m_optionGroupArnHasBeenSet = true; m_optionGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the option group.</p>
     */
    inline void SetOptionGroupArn(const char* value) { m_optionGroupArnHasBeenSet = true; m_optionGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the option group.</p>
     */
    inline OptionGroup& WithOptionGroupArn(const Aws::String& value) { SetOptionGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the option group.</p>
     */
    inline OptionGroup& WithOptionGroupArn(Aws::String&& value) { SetOptionGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the option group.</p>
     */
    inline OptionGroup& WithOptionGroupArn(const char* value) { SetOptionGroupArn(value); return *this;}

  private:

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    Aws::String m_optionGroupDescription;
    bool m_optionGroupDescriptionHasBeenSet;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet;

    Aws::Vector<Option> m_options;
    bool m_optionsHasBeenSet;

    bool m_allowsVpcAndNonVpcInstanceMemberships;
    bool m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_optionGroupArn;
    bool m_optionGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
