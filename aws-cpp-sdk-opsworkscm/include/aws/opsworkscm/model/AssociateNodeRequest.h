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
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKSCM_API AssociateNodeRequest : public OpsWorksCMRequest
  {
  public:
    AssociateNodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateNode"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the server with which to associate the node. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server with which to associate the node. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the server with which to associate the node. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server with which to associate the node. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the server with which to associate the node. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server with which to associate the node. </p>
     */
    inline AssociateNodeRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server with which to associate the node. </p>
     */
    inline AssociateNodeRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server with which to associate the node. </p>
     */
    inline AssociateNodeRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>The name of the node. </p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }

    /**
     * <p>The name of the node. </p>
     */
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }

    /**
     * <p>The name of the node. </p>
     */
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }

    /**
     * <p>The name of the node. </p>
     */
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }

    /**
     * <p>The name of the node. </p>
     */
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }

    /**
     * <p>The name of the node. </p>
     */
    inline AssociateNodeRequest& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}

    /**
     * <p>The name of the node. </p>
     */
    inline AssociateNodeRequest& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}

    /**
     * <p>The name of the node. </p>
     */
    inline AssociateNodeRequest& WithNodeName(const char* value) { SetNodeName(value); return *this;}


    /**
     * <p>Engine attributes used for associating the node. </p> <p class="title">
     * <b>Attributes accepted in a AssociateNode request for Chef</b> </p> <ul> <li>
     * <p> <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node is
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> <li> <p> <code>CHEF_NODE_PUBLIC_KEY</code>: A PEM-formatted
     * public key. This key is required for the <code>chef-client</code> agent to
     * access the Chef API. </p> </li> </ul> <p class="title"> <b>Attributes accepted
     * in a AssociateNode request for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_NODE_CSR</code>: A PEM-formatted certificate-signing request (CSR)
     * that is created by the node. </p> </li> </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const{ return m_engineAttributes; }

    /**
     * <p>Engine attributes used for associating the node. </p> <p class="title">
     * <b>Attributes accepted in a AssociateNode request for Chef</b> </p> <ul> <li>
     * <p> <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node is
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> <li> <p> <code>CHEF_NODE_PUBLIC_KEY</code>: A PEM-formatted
     * public key. This key is required for the <code>chef-client</code> agent to
     * access the Chef API. </p> </li> </ul> <p class="title"> <b>Attributes accepted
     * in a AssociateNode request for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_NODE_CSR</code>: A PEM-formatted certificate-signing request (CSR)
     * that is created by the node. </p> </li> </ul>
     */
    inline bool EngineAttributesHasBeenSet() const { return m_engineAttributesHasBeenSet; }

    /**
     * <p>Engine attributes used for associating the node. </p> <p class="title">
     * <b>Attributes accepted in a AssociateNode request for Chef</b> </p> <ul> <li>
     * <p> <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node is
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> <li> <p> <code>CHEF_NODE_PUBLIC_KEY</code>: A PEM-formatted
     * public key. This key is required for the <code>chef-client</code> agent to
     * access the Chef API. </p> </li> </ul> <p class="title"> <b>Attributes accepted
     * in a AssociateNode request for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_NODE_CSR</code>: A PEM-formatted certificate-signing request (CSR)
     * that is created by the node. </p> </li> </ul>
     */
    inline void SetEngineAttributes(const Aws::Vector<EngineAttribute>& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = value; }

    /**
     * <p>Engine attributes used for associating the node. </p> <p class="title">
     * <b>Attributes accepted in a AssociateNode request for Chef</b> </p> <ul> <li>
     * <p> <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node is
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> <li> <p> <code>CHEF_NODE_PUBLIC_KEY</code>: A PEM-formatted
     * public key. This key is required for the <code>chef-client</code> agent to
     * access the Chef API. </p> </li> </ul> <p class="title"> <b>Attributes accepted
     * in a AssociateNode request for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_NODE_CSR</code>: A PEM-formatted certificate-signing request (CSR)
     * that is created by the node. </p> </li> </ul>
     */
    inline void SetEngineAttributes(Aws::Vector<EngineAttribute>&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = std::move(value); }

    /**
     * <p>Engine attributes used for associating the node. </p> <p class="title">
     * <b>Attributes accepted in a AssociateNode request for Chef</b> </p> <ul> <li>
     * <p> <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node is
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> <li> <p> <code>CHEF_NODE_PUBLIC_KEY</code>: A PEM-formatted
     * public key. This key is required for the <code>chef-client</code> agent to
     * access the Chef API. </p> </li> </ul> <p class="title"> <b>Attributes accepted
     * in a AssociateNode request for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_NODE_CSR</code>: A PEM-formatted certificate-signing request (CSR)
     * that is created by the node. </p> </li> </ul>
     */
    inline AssociateNodeRequest& WithEngineAttributes(const Aws::Vector<EngineAttribute>& value) { SetEngineAttributes(value); return *this;}

    /**
     * <p>Engine attributes used for associating the node. </p> <p class="title">
     * <b>Attributes accepted in a AssociateNode request for Chef</b> </p> <ul> <li>
     * <p> <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node is
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> <li> <p> <code>CHEF_NODE_PUBLIC_KEY</code>: A PEM-formatted
     * public key. This key is required for the <code>chef-client</code> agent to
     * access the Chef API. </p> </li> </ul> <p class="title"> <b>Attributes accepted
     * in a AssociateNode request for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_NODE_CSR</code>: A PEM-formatted certificate-signing request (CSR)
     * that is created by the node. </p> </li> </ul>
     */
    inline AssociateNodeRequest& WithEngineAttributes(Aws::Vector<EngineAttribute>&& value) { SetEngineAttributes(std::move(value)); return *this;}

    /**
     * <p>Engine attributes used for associating the node. </p> <p class="title">
     * <b>Attributes accepted in a AssociateNode request for Chef</b> </p> <ul> <li>
     * <p> <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node is
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> <li> <p> <code>CHEF_NODE_PUBLIC_KEY</code>: A PEM-formatted
     * public key. This key is required for the <code>chef-client</code> agent to
     * access the Chef API. </p> </li> </ul> <p class="title"> <b>Attributes accepted
     * in a AssociateNode request for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_NODE_CSR</code>: A PEM-formatted certificate-signing request (CSR)
     * that is created by the node. </p> </li> </ul>
     */
    inline AssociateNodeRequest& AddEngineAttributes(const EngineAttribute& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(value); return *this; }

    /**
     * <p>Engine attributes used for associating the node. </p> <p class="title">
     * <b>Attributes accepted in a AssociateNode request for Chef</b> </p> <ul> <li>
     * <p> <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node is
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> <li> <p> <code>CHEF_NODE_PUBLIC_KEY</code>: A PEM-formatted
     * public key. This key is required for the <code>chef-client</code> agent to
     * access the Chef API. </p> </li> </ul> <p class="title"> <b>Attributes accepted
     * in a AssociateNode request for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_NODE_CSR</code>: A PEM-formatted certificate-signing request (CSR)
     * that is created by the node. </p> </li> </ul>
     */
    inline AssociateNodeRequest& AddEngineAttributes(EngineAttribute&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet;

    Aws::Vector<EngineAttribute> m_engineAttributes;
    bool m_engineAttributesHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
