﻿/**
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
  class DisassociateConnectionFromLagRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API DisassociateConnectionFromLagRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateConnectionFromLag"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }
    inline DisassociateConnectionFromLagRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline DisassociateConnectionFromLagRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline DisassociateConnectionFromLagRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }
    inline bool LagIdHasBeenSet() const { return m_lagIdHasBeenSet; }
    inline void SetLagId(const Aws::String& value) { m_lagIdHasBeenSet = true; m_lagId = value; }
    inline void SetLagId(Aws::String&& value) { m_lagIdHasBeenSet = true; m_lagId = std::move(value); }
    inline void SetLagId(const char* value) { m_lagIdHasBeenSet = true; m_lagId.assign(value); }
    inline DisassociateConnectionFromLagRequest& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}
    inline DisassociateConnectionFromLagRequest& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}
    inline DisassociateConnectionFromLagRequest& WithLagId(const char* value) { SetLagId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_lagId;
    bool m_lagIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
