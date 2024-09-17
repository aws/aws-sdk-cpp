/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Detailed information about a subnet group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBSubnetGroup">AWS
   * API Reference</a></p>
   */
  class DBSubnetGroup
  {
  public:
    AWS_DOCDB_API DBSubnetGroup();
    AWS_DOCDB_API DBSubnetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API DBSubnetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }
    inline DBSubnetGroup& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}
    inline DBSubnetGroup& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}
    inline DBSubnetGroup& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the description of the subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupDescription() const{ return m_dBSubnetGroupDescription; }
    inline bool DBSubnetGroupDescriptionHasBeenSet() const { return m_dBSubnetGroupDescriptionHasBeenSet; }
    inline void SetDBSubnetGroupDescription(const Aws::String& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = value; }
    inline void SetDBSubnetGroupDescription(Aws::String&& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = std::move(value); }
    inline void SetDBSubnetGroupDescription(const char* value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription.assign(value); }
    inline DBSubnetGroup& WithDBSubnetGroupDescription(const Aws::String& value) { SetDBSubnetGroupDescription(value); return *this;}
    inline DBSubnetGroup& WithDBSubnetGroupDescription(Aws::String&& value) { SetDBSubnetGroupDescription(std::move(value)); return *this;}
    inline DBSubnetGroup& WithDBSubnetGroupDescription(const char* value) { SetDBSubnetGroupDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the virtual private cloud (VPC) ID of the subnet group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline DBSubnetGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline DBSubnetGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline DBSubnetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the subnet group.</p>
     */
    inline const Aws::String& GetSubnetGroupStatus() const{ return m_subnetGroupStatus; }
    inline bool SubnetGroupStatusHasBeenSet() const { return m_subnetGroupStatusHasBeenSet; }
    inline void SetSubnetGroupStatus(const Aws::String& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = value; }
    inline void SetSubnetGroupStatus(Aws::String&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = std::move(value); }
    inline void SetSubnetGroupStatus(const char* value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus.assign(value); }
    inline DBSubnetGroup& WithSubnetGroupStatus(const Aws::String& value) { SetSubnetGroupStatus(value); return *this;}
    inline DBSubnetGroup& WithSubnetGroupStatus(Aws::String&& value) { SetSubnetGroupStatus(std::move(value)); return *this;}
    inline DBSubnetGroup& WithSubnetGroupStatus(const char* value) { SetSubnetGroupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about one or more subnets within a subnet group.</p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const{ return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    inline void SetSubnets(const Aws::Vector<Subnet>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Subnet>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }
    inline DBSubnetGroup& WithSubnets(const Aws::Vector<Subnet>& value) { SetSubnets(value); return *this;}
    inline DBSubnetGroup& WithSubnets(Aws::Vector<Subnet>&& value) { SetSubnets(std::move(value)); return *this;}
    inline DBSubnetGroup& AddSubnets(const Subnet& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    inline DBSubnetGroup& AddSubnets(Subnet&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupArn() const{ return m_dBSubnetGroupArn; }
    inline bool DBSubnetGroupArnHasBeenSet() const { return m_dBSubnetGroupArnHasBeenSet; }
    inline void SetDBSubnetGroupArn(const Aws::String& value) { m_dBSubnetGroupArnHasBeenSet = true; m_dBSubnetGroupArn = value; }
    inline void SetDBSubnetGroupArn(Aws::String&& value) { m_dBSubnetGroupArnHasBeenSet = true; m_dBSubnetGroupArn = std::move(value); }
    inline void SetDBSubnetGroupArn(const char* value) { m_dBSubnetGroupArnHasBeenSet = true; m_dBSubnetGroupArn.assign(value); }
    inline DBSubnetGroup& WithDBSubnetGroupArn(const Aws::String& value) { SetDBSubnetGroupArn(value); return *this;}
    inline DBSubnetGroup& WithDBSubnetGroupArn(Aws::String&& value) { SetDBSubnetGroupArn(std::move(value)); return *this;}
    inline DBSubnetGroup& WithDBSubnetGroupArn(const char* value) { SetDBSubnetGroupArn(value); return *this;}
    ///@}
  private:

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_dBSubnetGroupDescription;
    bool m_dBSubnetGroupDescriptionHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetGroupStatus;
    bool m_subnetGroupStatusHasBeenSet = false;

    Aws::Vector<Subnet> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::String m_dBSubnetGroupArn;
    bool m_dBSubnetGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
