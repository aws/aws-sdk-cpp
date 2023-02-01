/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class AssociateHostedConnectionRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API AssociateHostedConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateHostedConnection"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the hosted connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the hosted connection.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the hosted connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the hosted connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the hosted connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the hosted connection.</p>
     */
    inline AssociateHostedConnectionRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the hosted connection.</p>
     */
    inline AssociateHostedConnectionRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hosted connection.</p>
     */
    inline AssociateHostedConnectionRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The ID of the interconnect or the LAG.</p>
     */
    inline const Aws::String& GetParentConnectionId() const{ return m_parentConnectionId; }

    /**
     * <p>The ID of the interconnect or the LAG.</p>
     */
    inline bool ParentConnectionIdHasBeenSet() const { return m_parentConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the interconnect or the LAG.</p>
     */
    inline void SetParentConnectionId(const Aws::String& value) { m_parentConnectionIdHasBeenSet = true; m_parentConnectionId = value; }

    /**
     * <p>The ID of the interconnect or the LAG.</p>
     */
    inline void SetParentConnectionId(Aws::String&& value) { m_parentConnectionIdHasBeenSet = true; m_parentConnectionId = std::move(value); }

    /**
     * <p>The ID of the interconnect or the LAG.</p>
     */
    inline void SetParentConnectionId(const char* value) { m_parentConnectionIdHasBeenSet = true; m_parentConnectionId.assign(value); }

    /**
     * <p>The ID of the interconnect or the LAG.</p>
     */
    inline AssociateHostedConnectionRequest& WithParentConnectionId(const Aws::String& value) { SetParentConnectionId(value); return *this;}

    /**
     * <p>The ID of the interconnect or the LAG.</p>
     */
    inline AssociateHostedConnectionRequest& WithParentConnectionId(Aws::String&& value) { SetParentConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the interconnect or the LAG.</p>
     */
    inline AssociateHostedConnectionRequest& WithParentConnectionId(const char* value) { SetParentConnectionId(value); return *this;}

  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_parentConnectionId;
    bool m_parentConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
