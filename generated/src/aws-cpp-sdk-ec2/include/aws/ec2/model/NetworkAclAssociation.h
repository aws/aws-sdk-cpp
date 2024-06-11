﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an association between a network ACL and a subnet.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkAclAssociation">AWS
   * API Reference</a></p>
   */
  class NetworkAclAssociation
  {
  public:
    AWS_EC2_API NetworkAclAssociation();
    AWS_EC2_API NetworkAclAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkAclAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the association between a network ACL and a subnet.</p>
     */
    inline const Aws::String& GetNetworkAclAssociationId() const{ return m_networkAclAssociationId; }
    inline bool NetworkAclAssociationIdHasBeenSet() const { return m_networkAclAssociationIdHasBeenSet; }
    inline void SetNetworkAclAssociationId(const Aws::String& value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId = value; }
    inline void SetNetworkAclAssociationId(Aws::String&& value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId = std::move(value); }
    inline void SetNetworkAclAssociationId(const char* value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId.assign(value); }
    inline NetworkAclAssociation& WithNetworkAclAssociationId(const Aws::String& value) { SetNetworkAclAssociationId(value); return *this;}
    inline NetworkAclAssociation& WithNetworkAclAssociationId(Aws::String&& value) { SetNetworkAclAssociationId(std::move(value)); return *this;}
    inline NetworkAclAssociation& WithNetworkAclAssociationId(const char* value) { SetNetworkAclAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const{ return m_networkAclId; }
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }
    inline void SetNetworkAclId(const Aws::String& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }
    inline void SetNetworkAclId(Aws::String&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::move(value); }
    inline void SetNetworkAclId(const char* value) { m_networkAclIdHasBeenSet = true; m_networkAclId.assign(value); }
    inline NetworkAclAssociation& WithNetworkAclId(const Aws::String& value) { SetNetworkAclId(value); return *this;}
    inline NetworkAclAssociation& WithNetworkAclId(Aws::String&& value) { SetNetworkAclId(std::move(value)); return *this;}
    inline NetworkAclAssociation& WithNetworkAclId(const char* value) { SetNetworkAclId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline NetworkAclAssociation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline NetworkAclAssociation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline NetworkAclAssociation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}
  private:

    Aws::String m_networkAclAssociationId;
    bool m_networkAclAssociationIdHasBeenSet = false;

    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
