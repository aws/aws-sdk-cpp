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
#include <aws/rds/model/EC2SecurityGroup.h>
#include <aws/rds/model/IPRange.h>

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
   * <p>Contains the result of a successful invocation of the following actions:</p>
   * <ul> <li> <p> <a>DescribeDBSecurityGroups</a> </p> </li> <li> <p>
   * <a>AuthorizeDBSecurityGroupIngress</a> </p> </li> <li> <p>
   * <a>CreateDBSecurityGroup</a> </p> </li> <li> <p>
   * <a>RevokeDBSecurityGroupIngress</a> </p> </li> </ul> <p>This data type is used
   * as a response element in the <a>DescribeDBSecurityGroups</a> action.</p>
   */
  class AWS_RDS_API DBSecurityGroup
  {
  public:
    DBSecurityGroup();
    DBSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Provides the AWS ID of the owner of a specific DB security group.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>Provides the AWS ID of the owner of a specific DB security group.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>Provides the AWS ID of the owner of a specific DB security group.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>Provides the AWS ID of the owner of a specific DB security group.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>Provides the AWS ID of the owner of a specific DB security group.</p>
     */
    inline DBSecurityGroup& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>Provides the AWS ID of the owner of a specific DB security group.</p>
     */
    inline DBSecurityGroup& WithOwnerId(Aws::String&& value) { SetOwnerId(value); return *this;}

    /**
     * <p>Provides the AWS ID of the owner of a specific DB security group.</p>
     */
    inline DBSecurityGroup& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline const Aws::String& GetDBSecurityGroupName() const{ return m_dBSecurityGroupName; }

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline void SetDBSecurityGroupName(const Aws::String& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = value; }

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline void SetDBSecurityGroupName(Aws::String&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = value; }

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline void SetDBSecurityGroupName(const char* value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName.assign(value); }

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline DBSecurityGroup& WithDBSecurityGroupName(const Aws::String& value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline DBSecurityGroup& WithDBSecurityGroupName(Aws::String&& value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p>Specifies the name of the DB security group.</p>
     */
    inline DBSecurityGroup& WithDBSecurityGroupName(const char* value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline const Aws::String& GetDBSecurityGroupDescription() const{ return m_dBSecurityGroupDescription; }

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline void SetDBSecurityGroupDescription(const Aws::String& value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription = value; }

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline void SetDBSecurityGroupDescription(Aws::String&& value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription = value; }

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline void SetDBSecurityGroupDescription(const char* value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription.assign(value); }

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline DBSecurityGroup& WithDBSecurityGroupDescription(const Aws::String& value) { SetDBSecurityGroupDescription(value); return *this;}

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline DBSecurityGroup& WithDBSecurityGroupDescription(Aws::String&& value) { SetDBSecurityGroupDescription(value); return *this;}

    /**
     * <p>Provides the description of the DB security group.</p>
     */
    inline DBSecurityGroup& WithDBSecurityGroupDescription(const char* value) { SetDBSecurityGroupDescription(value); return *this;}

    /**
     * <p>Provides the VpcId of the DB security group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Provides the VpcId of the DB security group.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the VpcId of the DB security group.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the VpcId of the DB security group.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Provides the VpcId of the DB security group.</p>
     */
    inline DBSecurityGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the VpcId of the DB security group.</p>
     */
    inline DBSecurityGroup& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the VpcId of the DB security group.</p>
     */
    inline DBSecurityGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p> Contains a list of <a>EC2SecurityGroup</a> elements. </p>
     */
    inline const Aws::Vector<EC2SecurityGroup>& GetEC2SecurityGroups() const{ return m_eC2SecurityGroups; }

    /**
     * <p> Contains a list of <a>EC2SecurityGroup</a> elements. </p>
     */
    inline void SetEC2SecurityGroups(const Aws::Vector<EC2SecurityGroup>& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = value; }

    /**
     * <p> Contains a list of <a>EC2SecurityGroup</a> elements. </p>
     */
    inline void SetEC2SecurityGroups(Aws::Vector<EC2SecurityGroup>&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = value; }

    /**
     * <p> Contains a list of <a>EC2SecurityGroup</a> elements. </p>
     */
    inline DBSecurityGroup& WithEC2SecurityGroups(const Aws::Vector<EC2SecurityGroup>& value) { SetEC2SecurityGroups(value); return *this;}

    /**
     * <p> Contains a list of <a>EC2SecurityGroup</a> elements. </p>
     */
    inline DBSecurityGroup& WithEC2SecurityGroups(Aws::Vector<EC2SecurityGroup>&& value) { SetEC2SecurityGroups(value); return *this;}

    /**
     * <p> Contains a list of <a>EC2SecurityGroup</a> elements. </p>
     */
    inline DBSecurityGroup& AddEC2SecurityGroups(const EC2SecurityGroup& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.push_back(value); return *this; }

    /**
     * <p> Contains a list of <a>EC2SecurityGroup</a> elements. </p>
     */
    inline DBSecurityGroup& AddEC2SecurityGroups(EC2SecurityGroup&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.push_back(value); return *this; }

    /**
     * <p> Contains a list of <a>IPRange</a> elements. </p>
     */
    inline const Aws::Vector<IPRange>& GetIPRanges() const{ return m_iPRanges; }

    /**
     * <p> Contains a list of <a>IPRange</a> elements. </p>
     */
    inline void SetIPRanges(const Aws::Vector<IPRange>& value) { m_iPRangesHasBeenSet = true; m_iPRanges = value; }

    /**
     * <p> Contains a list of <a>IPRange</a> elements. </p>
     */
    inline void SetIPRanges(Aws::Vector<IPRange>&& value) { m_iPRangesHasBeenSet = true; m_iPRanges = value; }

    /**
     * <p> Contains a list of <a>IPRange</a> elements. </p>
     */
    inline DBSecurityGroup& WithIPRanges(const Aws::Vector<IPRange>& value) { SetIPRanges(value); return *this;}

    /**
     * <p> Contains a list of <a>IPRange</a> elements. </p>
     */
    inline DBSecurityGroup& WithIPRanges(Aws::Vector<IPRange>&& value) { SetIPRanges(value); return *this;}

    /**
     * <p> Contains a list of <a>IPRange</a> elements. </p>
     */
    inline DBSecurityGroup& AddIPRanges(const IPRange& value) { m_iPRangesHasBeenSet = true; m_iPRanges.push_back(value); return *this; }

    /**
     * <p> Contains a list of <a>IPRange</a> elements. </p>
     */
    inline DBSecurityGroup& AddIPRanges(IPRange&& value) { m_iPRangesHasBeenSet = true; m_iPRanges.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB security group.</p>
     */
    inline const Aws::String& GetDBSecurityGroupArn() const{ return m_dBSecurityGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB security group.</p>
     */
    inline void SetDBSecurityGroupArn(const Aws::String& value) { m_dBSecurityGroupArnHasBeenSet = true; m_dBSecurityGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB security group.</p>
     */
    inline void SetDBSecurityGroupArn(Aws::String&& value) { m_dBSecurityGroupArnHasBeenSet = true; m_dBSecurityGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB security group.</p>
     */
    inline void SetDBSecurityGroupArn(const char* value) { m_dBSecurityGroupArnHasBeenSet = true; m_dBSecurityGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB security group.</p>
     */
    inline DBSecurityGroup& WithDBSecurityGroupArn(const Aws::String& value) { SetDBSecurityGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB security group.</p>
     */
    inline DBSecurityGroup& WithDBSecurityGroupArn(Aws::String&& value) { SetDBSecurityGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB security group.</p>
     */
    inline DBSecurityGroup& WithDBSecurityGroupArn(const char* value) { SetDBSecurityGroupArn(value); return *this;}

  private:
    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;
    Aws::String m_dBSecurityGroupName;
    bool m_dBSecurityGroupNameHasBeenSet;
    Aws::String m_dBSecurityGroupDescription;
    bool m_dBSecurityGroupDescriptionHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::Vector<EC2SecurityGroup> m_eC2SecurityGroups;
    bool m_eC2SecurityGroupsHasBeenSet;
    Aws::Vector<IPRange> m_iPRanges;
    bool m_iPRangesHasBeenSet;
    Aws::String m_dBSecurityGroupArn;
    bool m_dBSecurityGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
