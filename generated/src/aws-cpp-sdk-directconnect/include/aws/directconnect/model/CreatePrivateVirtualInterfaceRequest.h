﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/NewPrivateVirtualInterface.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class CreatePrivateVirtualInterfaceRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API CreatePrivateVirtualInterfaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePrivateVirtualInterface"; }

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
    inline CreatePrivateVirtualInterfaceRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline CreatePrivateVirtualInterfaceRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline CreatePrivateVirtualInterfaceRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline const NewPrivateVirtualInterface& GetNewPrivateVirtualInterface() const{ return m_newPrivateVirtualInterface; }
    inline bool NewPrivateVirtualInterfaceHasBeenSet() const { return m_newPrivateVirtualInterfaceHasBeenSet; }
    inline void SetNewPrivateVirtualInterface(const NewPrivateVirtualInterface& value) { m_newPrivateVirtualInterfaceHasBeenSet = true; m_newPrivateVirtualInterface = value; }
    inline void SetNewPrivateVirtualInterface(NewPrivateVirtualInterface&& value) { m_newPrivateVirtualInterfaceHasBeenSet = true; m_newPrivateVirtualInterface = std::move(value); }
    inline CreatePrivateVirtualInterfaceRequest& WithNewPrivateVirtualInterface(const NewPrivateVirtualInterface& value) { SetNewPrivateVirtualInterface(value); return *this;}
    inline CreatePrivateVirtualInterfaceRequest& WithNewPrivateVirtualInterface(NewPrivateVirtualInterface&& value) { SetNewPrivateVirtualInterface(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    NewPrivateVirtualInterface m_newPrivateVirtualInterface;
    bool m_newPrivateVirtualInterfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
