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
#include <aws/redshift/Redshift_EXPORTS.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>The identifier of a node in a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterNode">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ClusterNode
  {
  public:
    ClusterNode();
    ClusterNode(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClusterNode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Whether the node is a leader node or a compute node.</p>
     */
    inline const Aws::String& GetNodeRole() const{ return m_nodeRole; }

    /**
     * <p>Whether the node is a leader node or a compute node.</p>
     */
    inline bool NodeRoleHasBeenSet() const { return m_nodeRoleHasBeenSet; }

    /**
     * <p>Whether the node is a leader node or a compute node.</p>
     */
    inline void SetNodeRole(const Aws::String& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = value; }

    /**
     * <p>Whether the node is a leader node or a compute node.</p>
     */
    inline void SetNodeRole(Aws::String&& value) { m_nodeRoleHasBeenSet = true; m_nodeRole = std::move(value); }

    /**
     * <p>Whether the node is a leader node or a compute node.</p>
     */
    inline void SetNodeRole(const char* value) { m_nodeRoleHasBeenSet = true; m_nodeRole.assign(value); }

    /**
     * <p>Whether the node is a leader node or a compute node.</p>
     */
    inline ClusterNode& WithNodeRole(const Aws::String& value) { SetNodeRole(value); return *this;}

    /**
     * <p>Whether the node is a leader node or a compute node.</p>
     */
    inline ClusterNode& WithNodeRole(Aws::String&& value) { SetNodeRole(std::move(value)); return *this;}

    /**
     * <p>Whether the node is a leader node or a compute node.</p>
     */
    inline ClusterNode& WithNodeRole(const char* value) { SetNodeRole(value); return *this;}


    /**
     * <p>The private IP address of a node within a cluster.</p>
     */
    inline const Aws::String& GetPrivateIPAddress() const{ return m_privateIPAddress; }

    /**
     * <p>The private IP address of a node within a cluster.</p>
     */
    inline bool PrivateIPAddressHasBeenSet() const { return m_privateIPAddressHasBeenSet; }

    /**
     * <p>The private IP address of a node within a cluster.</p>
     */
    inline void SetPrivateIPAddress(const Aws::String& value) { m_privateIPAddressHasBeenSet = true; m_privateIPAddress = value; }

    /**
     * <p>The private IP address of a node within a cluster.</p>
     */
    inline void SetPrivateIPAddress(Aws::String&& value) { m_privateIPAddressHasBeenSet = true; m_privateIPAddress = std::move(value); }

    /**
     * <p>The private IP address of a node within a cluster.</p>
     */
    inline void SetPrivateIPAddress(const char* value) { m_privateIPAddressHasBeenSet = true; m_privateIPAddress.assign(value); }

    /**
     * <p>The private IP address of a node within a cluster.</p>
     */
    inline ClusterNode& WithPrivateIPAddress(const Aws::String& value) { SetPrivateIPAddress(value); return *this;}

    /**
     * <p>The private IP address of a node within a cluster.</p>
     */
    inline ClusterNode& WithPrivateIPAddress(Aws::String&& value) { SetPrivateIPAddress(std::move(value)); return *this;}

    /**
     * <p>The private IP address of a node within a cluster.</p>
     */
    inline ClusterNode& WithPrivateIPAddress(const char* value) { SetPrivateIPAddress(value); return *this;}


    /**
     * <p>The public IP address of a node within a cluster.</p>
     */
    inline const Aws::String& GetPublicIPAddress() const{ return m_publicIPAddress; }

    /**
     * <p>The public IP address of a node within a cluster.</p>
     */
    inline bool PublicIPAddressHasBeenSet() const { return m_publicIPAddressHasBeenSet; }

    /**
     * <p>The public IP address of a node within a cluster.</p>
     */
    inline void SetPublicIPAddress(const Aws::String& value) { m_publicIPAddressHasBeenSet = true; m_publicIPAddress = value; }

    /**
     * <p>The public IP address of a node within a cluster.</p>
     */
    inline void SetPublicIPAddress(Aws::String&& value) { m_publicIPAddressHasBeenSet = true; m_publicIPAddress = std::move(value); }

    /**
     * <p>The public IP address of a node within a cluster.</p>
     */
    inline void SetPublicIPAddress(const char* value) { m_publicIPAddressHasBeenSet = true; m_publicIPAddress.assign(value); }

    /**
     * <p>The public IP address of a node within a cluster.</p>
     */
    inline ClusterNode& WithPublicIPAddress(const Aws::String& value) { SetPublicIPAddress(value); return *this;}

    /**
     * <p>The public IP address of a node within a cluster.</p>
     */
    inline ClusterNode& WithPublicIPAddress(Aws::String&& value) { SetPublicIPAddress(std::move(value)); return *this;}

    /**
     * <p>The public IP address of a node within a cluster.</p>
     */
    inline ClusterNode& WithPublicIPAddress(const char* value) { SetPublicIPAddress(value); return *this;}

  private:

    Aws::String m_nodeRole;
    bool m_nodeRoleHasBeenSet;

    Aws::String m_privateIPAddress;
    bool m_privateIPAddressHasBeenSet;

    Aws::String m_publicIPAddress;
    bool m_publicIPAddressHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
