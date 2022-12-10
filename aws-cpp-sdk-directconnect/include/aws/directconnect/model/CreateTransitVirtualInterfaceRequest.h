/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/NewTransitVirtualInterface.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class CreateTransitVirtualInterfaceRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API CreateTransitVirtualInterfaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitVirtualInterface"; }

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
    inline CreateTransitVirtualInterfaceRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline CreateTransitVirtualInterfaceRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline CreateTransitVirtualInterfaceRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline const NewTransitVirtualInterface& GetNewTransitVirtualInterface() const{ return m_newTransitVirtualInterface; }

    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline bool NewTransitVirtualInterfaceHasBeenSet() const { return m_newTransitVirtualInterfaceHasBeenSet; }

    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline void SetNewTransitVirtualInterface(const NewTransitVirtualInterface& value) { m_newTransitVirtualInterfaceHasBeenSet = true; m_newTransitVirtualInterface = value; }

    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline void SetNewTransitVirtualInterface(NewTransitVirtualInterface&& value) { m_newTransitVirtualInterfaceHasBeenSet = true; m_newTransitVirtualInterface = std::move(value); }

    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline CreateTransitVirtualInterfaceRequest& WithNewTransitVirtualInterface(const NewTransitVirtualInterface& value) { SetNewTransitVirtualInterface(value); return *this;}

    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline CreateTransitVirtualInterfaceRequest& WithNewTransitVirtualInterface(NewTransitVirtualInterface&& value) { SetNewTransitVirtualInterface(std::move(value)); return *this;}

  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    NewTransitVirtualInterface m_newTransitVirtualInterface;
    bool m_newTransitVirtualInterfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
