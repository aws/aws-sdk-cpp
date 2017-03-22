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
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/EngineAttribute.h>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKSCM_API DisassociateNodeRequest : public OpsWorksCMRequest
  {
  public:
    DisassociateNodeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline DisassociateNodeRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline DisassociateNodeRequest& WithServerName(Aws::String&& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline DisassociateNodeRequest& WithServerName(const char* value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the Chef client node. </p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }

    /**
     * <p>The name of the Chef client node. </p>
     */
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }

    /**
     * <p>The name of the Chef client node. </p>
     */
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }

    /**
     * <p>The name of the Chef client node. </p>
     */
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }

    /**
     * <p>The name of the Chef client node. </p>
     */
    inline DisassociateNodeRequest& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}

    /**
     * <p>The name of the Chef client node. </p>
     */
    inline DisassociateNodeRequest& WithNodeName(Aws::String&& value) { SetNodeName(value); return *this;}

    /**
     * <p>The name of the Chef client node. </p>
     */
    inline DisassociateNodeRequest& WithNodeName(const char* value) { SetNodeName(value); return *this;}

    /**
     * <p>Engine attributes used for disassociating the node. </p> <p class="title">
     * <b>Attributes accepted in a DisassociateNode request:</b> </p> <ul> <li> <p>
     * <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node was
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const{ return m_engineAttributes; }

    /**
     * <p>Engine attributes used for disassociating the node. </p> <p class="title">
     * <b>Attributes accepted in a DisassociateNode request:</b> </p> <ul> <li> <p>
     * <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node was
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> </ul>
     */
    inline void SetEngineAttributes(const Aws::Vector<EngineAttribute>& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = value; }

    /**
     * <p>Engine attributes used for disassociating the node. </p> <p class="title">
     * <b>Attributes accepted in a DisassociateNode request:</b> </p> <ul> <li> <p>
     * <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node was
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> </ul>
     */
    inline void SetEngineAttributes(Aws::Vector<EngineAttribute>&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = value; }

    /**
     * <p>Engine attributes used for disassociating the node. </p> <p class="title">
     * <b>Attributes accepted in a DisassociateNode request:</b> </p> <ul> <li> <p>
     * <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node was
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> </ul>
     */
    inline DisassociateNodeRequest& WithEngineAttributes(const Aws::Vector<EngineAttribute>& value) { SetEngineAttributes(value); return *this;}

    /**
     * <p>Engine attributes used for disassociating the node. </p> <p class="title">
     * <b>Attributes accepted in a DisassociateNode request:</b> </p> <ul> <li> <p>
     * <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node was
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> </ul>
     */
    inline DisassociateNodeRequest& WithEngineAttributes(Aws::Vector<EngineAttribute>&& value) { SetEngineAttributes(value); return *this;}

    /**
     * <p>Engine attributes used for disassociating the node. </p> <p class="title">
     * <b>Attributes accepted in a DisassociateNode request:</b> </p> <ul> <li> <p>
     * <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node was
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> </ul>
     */
    inline DisassociateNodeRequest& AddEngineAttributes(const EngineAttribute& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(value); return *this; }

    /**
     * <p>Engine attributes used for disassociating the node. </p> <p class="title">
     * <b>Attributes accepted in a DisassociateNode request:</b> </p> <ul> <li> <p>
     * <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node was
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> </ul>
     */
    inline DisassociateNodeRequest& AddEngineAttributes(EngineAttribute&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(value); return *this; }

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
