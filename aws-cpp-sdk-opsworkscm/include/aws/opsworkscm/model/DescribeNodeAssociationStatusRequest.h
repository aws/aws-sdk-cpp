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
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKSCM_API DescribeNodeAssociationStatusRequest : public OpsWorksCMRequest
  {
  public:
    DescribeNodeAssociationStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNodeAssociationStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The token returned in either the AssociateNodeResponse or the
     * DisassociateNodeResponse. </p>
     */
    inline const Aws::String& GetNodeAssociationStatusToken() const{ return m_nodeAssociationStatusToken; }

    /**
     * <p>The token returned in either the AssociateNodeResponse or the
     * DisassociateNodeResponse. </p>
     */
    inline bool NodeAssociationStatusTokenHasBeenSet() const { return m_nodeAssociationStatusTokenHasBeenSet; }

    /**
     * <p>The token returned in either the AssociateNodeResponse or the
     * DisassociateNodeResponse. </p>
     */
    inline void SetNodeAssociationStatusToken(const Aws::String& value) { m_nodeAssociationStatusTokenHasBeenSet = true; m_nodeAssociationStatusToken = value; }

    /**
     * <p>The token returned in either the AssociateNodeResponse or the
     * DisassociateNodeResponse. </p>
     */
    inline void SetNodeAssociationStatusToken(Aws::String&& value) { m_nodeAssociationStatusTokenHasBeenSet = true; m_nodeAssociationStatusToken = std::move(value); }

    /**
     * <p>The token returned in either the AssociateNodeResponse or the
     * DisassociateNodeResponse. </p>
     */
    inline void SetNodeAssociationStatusToken(const char* value) { m_nodeAssociationStatusTokenHasBeenSet = true; m_nodeAssociationStatusToken.assign(value); }

    /**
     * <p>The token returned in either the AssociateNodeResponse or the
     * DisassociateNodeResponse. </p>
     */
    inline DescribeNodeAssociationStatusRequest& WithNodeAssociationStatusToken(const Aws::String& value) { SetNodeAssociationStatusToken(value); return *this;}

    /**
     * <p>The token returned in either the AssociateNodeResponse or the
     * DisassociateNodeResponse. </p>
     */
    inline DescribeNodeAssociationStatusRequest& WithNodeAssociationStatusToken(Aws::String&& value) { SetNodeAssociationStatusToken(std::move(value)); return *this;}

    /**
     * <p>The token returned in either the AssociateNodeResponse or the
     * DisassociateNodeResponse. </p>
     */
    inline DescribeNodeAssociationStatusRequest& WithNodeAssociationStatusToken(const char* value) { SetNodeAssociationStatusToken(value); return *this;}


    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline DescribeNodeAssociationStatusRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline DescribeNodeAssociationStatusRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline DescribeNodeAssociationStatusRequest& WithServerName(const char* value) { SetServerName(value); return *this;}

  private:

    Aws::String m_nodeAssociationStatusToken;
    bool m_nodeAssociationStatusTokenHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
