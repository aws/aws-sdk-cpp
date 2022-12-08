/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ClusterNode
  {
  public:
    AWS_REDSHIFT_API ClusterNode();
    AWS_REDSHIFT_API ClusterNode(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterNode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_nodeRoleHasBeenSet = false;

    Aws::String m_privateIPAddress;
    bool m_privateIPAddressHasBeenSet = false;

    Aws::String m_publicIPAddress;
    bool m_publicIPAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
