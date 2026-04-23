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
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/Subnet.h>
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
namespace DocDB
{
namespace Model
{

  /**
   * <p>Detailed information about a DB subnet group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBSubnetGroup">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DBSubnetGroup
  {
  public:
    DBSubnetGroup();
    DBSubnetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBSubnetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The name of the DB subnet group.</p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name of the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The name of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>Provides the description of the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupDescription() const{ return m_dBSubnetGroupDescription; }

    /**
     * <p>Provides the description of the DB subnet group.</p>
     */
    inline bool DBSubnetGroupDescriptionHasBeenSet() const { return m_dBSubnetGroupDescriptionHasBeenSet; }

    /**
     * <p>Provides the description of the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(const Aws::String& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = value; }

    /**
     * <p>Provides the description of the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(Aws::String&& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = std::move(value); }

    /**
     * <p>Provides the description of the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupDescription(const char* value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription.assign(value); }

    /**
     * <p>Provides the description of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithDBSubnetGroupDescription(const Aws::String& value) { SetDBSubnetGroupDescription(value); return *this;}

    /**
     * <p>Provides the description of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithDBSubnetGroupDescription(Aws::String&& value) { SetDBSubnetGroupDescription(std::move(value)); return *this;}

    /**
     * <p>Provides the description of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithDBSubnetGroupDescription(const char* value) { SetDBSubnetGroupDescription(value); return *this;}


    /**
     * <p>Provides the virtual private cloud (VPC) ID of the DB subnet group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Provides the virtual private cloud (VPC) ID of the DB subnet group.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>Provides the virtual private cloud (VPC) ID of the DB subnet group.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the virtual private cloud (VPC) ID of the DB subnet group.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>Provides the virtual private cloud (VPC) ID of the DB subnet group.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Provides the virtual private cloud (VPC) ID of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the virtual private cloud (VPC) ID of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>Provides the virtual private cloud (VPC) ID of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Provides the status of the DB subnet group.</p>
     */
    inline const Aws::String& GetSubnetGroupStatus() const{ return m_subnetGroupStatus; }

    /**
     * <p>Provides the status of the DB subnet group.</p>
     */
    inline bool SubnetGroupStatusHasBeenSet() const { return m_subnetGroupStatusHasBeenSet; }

    /**
     * <p>Provides the status of the DB subnet group.</p>
     */
    inline void SetSubnetGroupStatus(const Aws::String& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = value; }

    /**
     * <p>Provides the status of the DB subnet group.</p>
     */
    inline void SetSubnetGroupStatus(Aws::String&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = std::move(value); }

    /**
     * <p>Provides the status of the DB subnet group.</p>
     */
    inline void SetSubnetGroupStatus(const char* value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus.assign(value); }

    /**
     * <p>Provides the status of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithSubnetGroupStatus(const Aws::String& value) { SetSubnetGroupStatus(value); return *this;}

    /**
     * <p>Provides the status of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithSubnetGroupStatus(Aws::String&& value) { SetSubnetGroupStatus(std::move(value)); return *this;}

    /**
     * <p>Provides the status of the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithSubnetGroupStatus(const char* value) { SetSubnetGroupStatus(value); return *this;}


    /**
     * <p>Detailed information about one or more subnets within a DB subnet group.</p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>Detailed information about one or more subnets within a DB subnet group.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>Detailed information about one or more subnets within a DB subnet group.</p>
     */
    inline void SetSubnets(const Aws::Vector<Subnet>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>Detailed information about one or more subnets within a DB subnet group.</p>
     */
    inline void SetSubnets(Aws::Vector<Subnet>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>Detailed information about one or more subnets within a DB subnet group.</p>
     */
    inline DBSubnetGroup& WithSubnets(const Aws::Vector<Subnet>& value) { SetSubnets(value); return *this;}

    /**
     * <p>Detailed information about one or more subnets within a DB subnet group.</p>
     */
    inline DBSubnetGroup& WithSubnets(Aws::Vector<Subnet>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>Detailed information about one or more subnets within a DB subnet group.</p>
     */
    inline DBSubnetGroup& AddSubnets(const Subnet& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>Detailed information about one or more subnets within a DB subnet group.</p>
     */
    inline DBSubnetGroup& AddSubnets(Subnet&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Identifier (ARN) for the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupArn() const{ return m_dBSubnetGroupArn; }

    /**
     * <p>The Amazon Resource Identifier (ARN) for the DB subnet group.</p>
     */
    inline bool DBSubnetGroupArnHasBeenSet() const { return m_dBSubnetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Identifier (ARN) for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupArn(const Aws::String& value) { m_dBSubnetGroupArnHasBeenSet = true; m_dBSubnetGroupArn = value; }

    /**
     * <p>The Amazon Resource Identifier (ARN) for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupArn(Aws::String&& value) { m_dBSubnetGroupArnHasBeenSet = true; m_dBSubnetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Identifier (ARN) for the DB subnet group.</p>
     */
    inline void SetDBSubnetGroupArn(const char* value) { m_dBSubnetGroupArnHasBeenSet = true; m_dBSubnetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Identifier (ARN) for the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithDBSubnetGroupArn(const Aws::String& value) { SetDBSubnetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Identifier (ARN) for the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithDBSubnetGroupArn(Aws::String&& value) { SetDBSubnetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Identifier (ARN) for the DB subnet group.</p>
     */
    inline DBSubnetGroup& WithDBSubnetGroupArn(const char* value) { SetDBSubnetGroupArn(value); return *this;}

  private:

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;

    Aws::String m_dBSubnetGroupDescription;
    bool m_dBSubnetGroupDescriptionHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_subnetGroupStatus;
    bool m_subnetGroupStatusHasBeenSet;

    Aws::Vector<Subnet> m_subnets;
    bool m_subnetsHasBeenSet;

    Aws::String m_dBSubnetGroupArn;
    bool m_dBSubnetGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
