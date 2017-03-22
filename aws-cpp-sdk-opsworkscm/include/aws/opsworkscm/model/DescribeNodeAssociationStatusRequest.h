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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetNodeAssociationStatusToken() const{ return m_nodeAssociationStatusToken; }

    
    inline void SetNodeAssociationStatusToken(const Aws::String& value) { m_nodeAssociationStatusTokenHasBeenSet = true; m_nodeAssociationStatusToken = value; }

    
    inline void SetNodeAssociationStatusToken(Aws::String&& value) { m_nodeAssociationStatusTokenHasBeenSet = true; m_nodeAssociationStatusToken = value; }

    
    inline void SetNodeAssociationStatusToken(const char* value) { m_nodeAssociationStatusTokenHasBeenSet = true; m_nodeAssociationStatusToken.assign(value); }

    
    inline DescribeNodeAssociationStatusRequest& WithNodeAssociationStatusToken(const Aws::String& value) { SetNodeAssociationStatusToken(value); return *this;}

    
    inline DescribeNodeAssociationStatusRequest& WithNodeAssociationStatusToken(Aws::String&& value) { SetNodeAssociationStatusToken(value); return *this;}

    
    inline DescribeNodeAssociationStatusRequest& WithNodeAssociationStatusToken(const char* value) { SetNodeAssociationStatusToken(value); return *this;}

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
    inline DescribeNodeAssociationStatusRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server from which to disassociate the node. </p>
     */
    inline DescribeNodeAssociationStatusRequest& WithServerName(Aws::String&& value) { SetServerName(value); return *this;}

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
