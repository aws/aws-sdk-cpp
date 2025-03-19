/**
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
    AWS_EC2_API NetworkAclAssociation() = default;
    AWS_EC2_API NetworkAclAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkAclAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the association between a network ACL and a subnet.</p>
     */
    inline const Aws::String& GetNetworkAclAssociationId() const { return m_networkAclAssociationId; }
    inline bool NetworkAclAssociationIdHasBeenSet() const { return m_networkAclAssociationIdHasBeenSet; }
    template<typename NetworkAclAssociationIdT = Aws::String>
    void SetNetworkAclAssociationId(NetworkAclAssociationIdT&& value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId = std::forward<NetworkAclAssociationIdT>(value); }
    template<typename NetworkAclAssociationIdT = Aws::String>
    NetworkAclAssociation& WithNetworkAclAssociationId(NetworkAclAssociationIdT&& value) { SetNetworkAclAssociationId(std::forward<NetworkAclAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const { return m_networkAclId; }
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }
    template<typename NetworkAclIdT = Aws::String>
    void SetNetworkAclId(NetworkAclIdT&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::forward<NetworkAclIdT>(value); }
    template<typename NetworkAclIdT = Aws::String>
    NetworkAclAssociation& WithNetworkAclId(NetworkAclIdT&& value) { SetNetworkAclId(std::forward<NetworkAclIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    NetworkAclAssociation& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
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
