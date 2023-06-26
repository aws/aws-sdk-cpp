/**
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


    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline CreatePrivateVirtualInterfaceRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline CreatePrivateVirtualInterfaceRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline CreatePrivateVirtualInterfaceRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline const NewPrivateVirtualInterface& GetNewPrivateVirtualInterface() const{ return m_newPrivateVirtualInterface; }

    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline bool NewPrivateVirtualInterfaceHasBeenSet() const { return m_newPrivateVirtualInterfaceHasBeenSet; }

    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline void SetNewPrivateVirtualInterface(const NewPrivateVirtualInterface& value) { m_newPrivateVirtualInterfaceHasBeenSet = true; m_newPrivateVirtualInterface = value; }

    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline void SetNewPrivateVirtualInterface(NewPrivateVirtualInterface&& value) { m_newPrivateVirtualInterfaceHasBeenSet = true; m_newPrivateVirtualInterface = std::move(value); }

    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline CreatePrivateVirtualInterfaceRequest& WithNewPrivateVirtualInterface(const NewPrivateVirtualInterface& value) { SetNewPrivateVirtualInterface(value); return *this;}

    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline CreatePrivateVirtualInterfaceRequest& WithNewPrivateVirtualInterface(NewPrivateVirtualInterface&& value) { SetNewPrivateVirtualInterface(std::move(value)); return *this;}

  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    NewPrivateVirtualInterface m_newPrivateVirtualInterface;
    bool m_newPrivateVirtualInterfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
