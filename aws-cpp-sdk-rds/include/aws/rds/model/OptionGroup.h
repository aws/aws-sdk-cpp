/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
  class OptionGroup
  {
  public:
    AWS_RDS_API OptionGroup();
    AWS_RDS_API OptionGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * to both VPC and non-VPC instances.</p>
     */
    inline bool GetAllowsVpcAndNonVpcInstanceMemberships() const{ return m_allowsVpcAndNonVpcInstanceMemberships; }

    /**
     * <p>Indicates whether this option group can be applied to both VPC and non-VPC
     * instances. The value <code>true</code> indicates the option group can be applied
     * to both VPC and non-VPC instances.</p>
     */
    inline bool AllowsVpcAndNonVpcInstanceMembershipsHasBeenSet() const { return m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet; }

    /**
     * <p>Indicates whether this option group can be applied to both VPC and non-VPC
     * instances. The value <code>true</code> indicates the option group can be applied
     * to both VPC and non-VPC instances.</p>
     */
    inline void SetAllowsVpcAndNonVpcInstanceMemberships(bool value) { m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet = true; m_allowsVpcAndNonVpcInstanceMemberships = value; }

    /**
     * <p>Indicates whether this option group can be applied to both VPC and non-VPC
     * instances. The value <code>true</code> indicates the option group can be applied
     * to both VPC and non-VPC instances.</p>
     */
    inline OptionGroup& WithAllowsVpcAndNonVpcInstanceMemberships(bool value) { SetAllowsVpcAndNonVpcInstanceMemberships(value); return *this;}


    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field.</p>
     */
    inline OptionGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field.</p>
     */
    inline OptionGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is <code>false</code>, this
     * field is blank. If <b>AllowsVpcAndNonVpcInstanceMemberships</b> is
     * <code>true</code> and this field is blank, then this option group can be applied
     * to both VPC and non-VPC instances. If this field contains a value, then this
     * option group can only be applied to instances that are in the VPC indicated by
     * this field.</p>
     */
    inline OptionGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the option group.</p>
     */
    inline const Aws::String& GetOptionGroupArn() const{ return m_optionGroupArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the option group.</p>
     */
    inline bool OptionGroupArnHasBeenSet() const { return m_optionGroupArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the option group.</p>
     */
    inline void SetOptionGroupArn(const Aws::String& value) { m_optionGroupArnHasBeenSet = true; m_optionGroupArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the option group.</p>
     */
    inline void SetOptionGroupArn(Aws::String&& value) { m_optionGroupArnHasBeenSet = true; m_optionGroupArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the option group.</p>
     */
    inline void SetOptionGroupArn(const char* value) { m_optionGroupArnHasBeenSet = true; m_optionGroupArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the option group.</p>
     */
    inline OptionGroup& WithOptionGroupArn(const Aws::String& value) { SetOptionGroupArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the option group.</p>
     */
    inline OptionGroup& WithOptionGroupArn(Aws::String&& value) { SetOptionGroupArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the option group.</p>
     */
    inline OptionGroup& WithOptionGroupArn(const char* value) { SetOptionGroupArn(value); return *this;}


    /**
     * <p>Specifies the name of the option group from which this option group is
     * copied.</p>
     */
    inline const Aws::String& GetSourceOptionGroup() const{ return m_sourceOptionGroup; }

    /**
     * <p>Specifies the name of the option group from which this option group is
     * copied.</p>
     */
    inline bool SourceOptionGroupHasBeenSet() const { return m_sourceOptionGroupHasBeenSet; }

    /**
     * <p>Specifies the name of the option group from which this option group is
     * copied.</p>
     */
    inline void SetSourceOptionGroup(const Aws::String& value) { m_sourceOptionGroupHasBeenSet = true; m_sourceOptionGroup = value; }

    /**
     * <p>Specifies the name of the option group from which this option group is
     * copied.</p>
     */
    inline void SetSourceOptionGroup(Aws::String&& value) { m_sourceOptionGroupHasBeenSet = true; m_sourceOptionGroup = std::move(value); }

    /**
     * <p>Specifies the name of the option group from which this option group is
     * copied.</p>
     */
    inline void SetSourceOptionGroup(const char* value) { m_sourceOptionGroupHasBeenSet = true; m_sourceOptionGroup.assign(value); }

    /**
     * <p>Specifies the name of the option group from which this option group is
     * copied.</p>
     */
    inline OptionGroup& WithSourceOptionGroup(const Aws::String& value) { SetSourceOptionGroup(value); return *this;}

    /**
     * <p>Specifies the name of the option group from which this option group is
     * copied.</p>
     */
    inline OptionGroup& WithSourceOptionGroup(Aws::String&& value) { SetSourceOptionGroup(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the option group from which this option group is
     * copied.</p>
     */
    inline OptionGroup& WithSourceOptionGroup(const char* value) { SetSourceOptionGroup(value); return *this;}


    /**
     * <p>Specifies the Amazon Web Services account ID for the option group from which
     * this option group is copied.</p>
     */
    inline const Aws::String& GetSourceAccountId() const{ return m_sourceAccountId; }

    /**
     * <p>Specifies the Amazon Web Services account ID for the option group from which
     * this option group is copied.</p>
     */
    inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }

    /**
     * <p>Specifies the Amazon Web Services account ID for the option group from which
     * this option group is copied.</p>
     */
    inline void SetSourceAccountId(const Aws::String& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = value; }

    /**
     * <p>Specifies the Amazon Web Services account ID for the option group from which
     * this option group is copied.</p>
     */
    inline void SetSourceAccountId(Aws::String&& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = std::move(value); }

    /**
     * <p>Specifies the Amazon Web Services account ID for the option group from which
     * this option group is copied.</p>
     */
    inline void SetSourceAccountId(const char* value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId.assign(value); }

    /**
     * <p>Specifies the Amazon Web Services account ID for the option group from which
     * this option group is copied.</p>
     */
    inline OptionGroup& WithSourceAccountId(const Aws::String& value) { SetSourceAccountId(value); return *this;}

    /**
     * <p>Specifies the Amazon Web Services account ID for the option group from which
     * this option group is copied.</p>
     */
    inline OptionGroup& WithSourceAccountId(Aws::String&& value) { SetSourceAccountId(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Web Services account ID for the option group from which
     * this option group is copied.</p>
     */
    inline OptionGroup& WithSourceAccountId(const char* value) { SetSourceAccountId(value); return *this;}


    /**
     * <p>Indicates when the option group was copied.</p>
     */
    inline const Aws::Utils::DateTime& GetCopyTimestamp() const{ return m_copyTimestamp; }

    /**
     * <p>Indicates when the option group was copied.</p>
     */
    inline bool CopyTimestampHasBeenSet() const { return m_copyTimestampHasBeenSet; }

    /**
     * <p>Indicates when the option group was copied.</p>
     */
    inline void SetCopyTimestamp(const Aws::Utils::DateTime& value) { m_copyTimestampHasBeenSet = true; m_copyTimestamp = value; }

    /**
     * <p>Indicates when the option group was copied.</p>
     */
    inline void SetCopyTimestamp(Aws::Utils::DateTime&& value) { m_copyTimestampHasBeenSet = true; m_copyTimestamp = std::move(value); }

    /**
     * <p>Indicates when the option group was copied.</p>
     */
    inline OptionGroup& WithCopyTimestamp(const Aws::Utils::DateTime& value) { SetCopyTimestamp(value); return *this;}

    /**
     * <p>Indicates when the option group was copied.</p>
     */
    inline OptionGroup& WithCopyTimestamp(Aws::Utils::DateTime&& value) { SetCopyTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_optionGroupDescription;
    bool m_optionGroupDescriptionHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet = false;

    Aws::Vector<Option> m_options;
    bool m_optionsHasBeenSet = false;

    bool m_allowsVpcAndNonVpcInstanceMemberships;
    bool m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_optionGroupArn;
    bool m_optionGroupArnHasBeenSet = false;

    Aws::String m_sourceOptionGroup;
    bool m_sourceOptionGroupHasBeenSet = false;

    Aws::String m_sourceAccountId;
    bool m_sourceAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_copyTimestamp;
    bool m_copyTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
