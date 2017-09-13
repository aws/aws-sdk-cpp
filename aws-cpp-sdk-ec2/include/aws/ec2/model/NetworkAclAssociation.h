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
  class AWS_EC2_API NetworkAclAssociation
  {
  public:
    NetworkAclAssociation();
    NetworkAclAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkAclAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the association between a network ACL and a subnet.</p>
     */
    inline const Aws::String& GetNetworkAclAssociationId() const{ return m_networkAclAssociationId; }

    /**
     * <p>The ID of the association between a network ACL and a subnet.</p>
     */
    inline void SetNetworkAclAssociationId(const Aws::String& value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId = value; }

    /**
     * <p>The ID of the association between a network ACL and a subnet.</p>
     */
    inline void SetNetworkAclAssociationId(Aws::String&& value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId = std::move(value); }

    /**
     * <p>The ID of the association between a network ACL and a subnet.</p>
     */
    inline void SetNetworkAclAssociationId(const char* value) { m_networkAclAssociationIdHasBeenSet = true; m_networkAclAssociationId.assign(value); }

    /**
     * <p>The ID of the association between a network ACL and a subnet.</p>
     */
    inline NetworkAclAssociation& WithNetworkAclAssociationId(const Aws::String& value) { SetNetworkAclAssociationId(value); return *this;}

    /**
     * <p>The ID of the association between a network ACL and a subnet.</p>
     */
    inline NetworkAclAssociation& WithNetworkAclAssociationId(Aws::String&& value) { SetNetworkAclAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association between a network ACL and a subnet.</p>
     */
    inline NetworkAclAssociation& WithNetworkAclAssociationId(const char* value) { SetNetworkAclAssociationId(value); return *this;}


    /**
     * <p>The ID of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const{ return m_networkAclId; }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(const Aws::String& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(Aws::String&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::move(value); }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(const char* value) { m_networkAclIdHasBeenSet = true; m_networkAclId.assign(value); }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline NetworkAclAssociation& WithNetworkAclId(const Aws::String& value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline NetworkAclAssociation& WithNetworkAclId(Aws::String&& value) { SetNetworkAclId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline NetworkAclAssociation& WithNetworkAclId(const char* value) { SetNetworkAclId(value); return *this;}


    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline NetworkAclAssociation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline NetworkAclAssociation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline NetworkAclAssociation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

  private:

    Aws::String m_networkAclAssociationId;
    bool m_networkAclAssociationIdHasBeenSet;

    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
