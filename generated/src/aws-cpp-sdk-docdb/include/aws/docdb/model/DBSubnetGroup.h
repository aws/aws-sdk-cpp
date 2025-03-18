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
    AWS_DOCDB_API DBSubnetGroup() = default;
    AWS_DOCDB_API DBSubnetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API DBSubnetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const { return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    template<typename DBSubnetGroupNameT = Aws::String>
    void SetDBSubnetGroupName(DBSubnetGroupNameT&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::forward<DBSubnetGroupNameT>(value); }
    template<typename DBSubnetGroupNameT = Aws::String>
    DBSubnetGroup& WithDBSubnetGroupName(DBSubnetGroupNameT&& value) { SetDBSubnetGroupName(std::forward<DBSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the description of the subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupDescription() const { return m_dBSubnetGroupDescription; }
    inline bool DBSubnetGroupDescriptionHasBeenSet() const { return m_dBSubnetGroupDescriptionHasBeenSet; }
    template<typename DBSubnetGroupDescriptionT = Aws::String>
    void SetDBSubnetGroupDescription(DBSubnetGroupDescriptionT&& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = std::forward<DBSubnetGroupDescriptionT>(value); }
    template<typename DBSubnetGroupDescriptionT = Aws::String>
    DBSubnetGroup& WithDBSubnetGroupDescription(DBSubnetGroupDescriptionT&& value) { SetDBSubnetGroupDescription(std::forward<DBSubnetGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the virtual private cloud (VPC) ID of the subnet group.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DBSubnetGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the subnet group.</p>
     */
    inline const Aws::String& GetSubnetGroupStatus() const { return m_subnetGroupStatus; }
    inline bool SubnetGroupStatusHasBeenSet() const { return m_subnetGroupStatusHasBeenSet; }
    template<typename SubnetGroupStatusT = Aws::String>
    void SetSubnetGroupStatus(SubnetGroupStatusT&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = std::forward<SubnetGroupStatusT>(value); }
    template<typename SubnetGroupStatusT = Aws::String>
    DBSubnetGroup& WithSubnetGroupStatus(SubnetGroupStatusT&& value) { SetSubnetGroupStatus(std::forward<SubnetGroupStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about one or more subnets within a subnet group.</p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Subnet>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Subnet>>
    DBSubnetGroup& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Subnet>
    DBSubnetGroup& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB subnet group.</p>
     */
    inline const Aws::String& GetDBSubnetGroupArn() const { return m_dBSubnetGroupArn; }
    inline bool DBSubnetGroupArnHasBeenSet() const { return m_dBSubnetGroupArnHasBeenSet; }
    template<typename DBSubnetGroupArnT = Aws::String>
    void SetDBSubnetGroupArn(DBSubnetGroupArnT&& value) { m_dBSubnetGroupArnHasBeenSet = true; m_dBSubnetGroupArn = std::forward<DBSubnetGroupArnT>(value); }
    template<typename DBSubnetGroupArnT = Aws::String>
    DBSubnetGroup& WithDBSubnetGroupArn(DBSubnetGroupArnT&& value) { SetDBSubnetGroupArn(std::forward<DBSubnetGroupArnT>(value)); return *this;}
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
