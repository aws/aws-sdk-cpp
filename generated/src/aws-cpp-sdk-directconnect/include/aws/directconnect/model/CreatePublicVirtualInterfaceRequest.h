/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/NewPublicVirtualInterface.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class CreatePublicVirtualInterfaceRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API CreatePublicVirtualInterfaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePublicVirtualInterface"; }

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
    inline CreatePublicVirtualInterfaceRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline CreatePublicVirtualInterfaceRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline CreatePublicVirtualInterfaceRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>Information about the public virtual interface.</p>
     */
    inline const NewPublicVirtualInterface& GetNewPublicVirtualInterface() const{ return m_newPublicVirtualInterface; }

    /**
     * <p>Information about the public virtual interface.</p>
     */
    inline bool NewPublicVirtualInterfaceHasBeenSet() const { return m_newPublicVirtualInterfaceHasBeenSet; }

    /**
     * <p>Information about the public virtual interface.</p>
     */
    inline void SetNewPublicVirtualInterface(const NewPublicVirtualInterface& value) { m_newPublicVirtualInterfaceHasBeenSet = true; m_newPublicVirtualInterface = value; }

    /**
     * <p>Information about the public virtual interface.</p>
     */
    inline void SetNewPublicVirtualInterface(NewPublicVirtualInterface&& value) { m_newPublicVirtualInterfaceHasBeenSet = true; m_newPublicVirtualInterface = std::move(value); }

    /**
     * <p>Information about the public virtual interface.</p>
     */
    inline CreatePublicVirtualInterfaceRequest& WithNewPublicVirtualInterface(const NewPublicVirtualInterface& value) { SetNewPublicVirtualInterface(value); return *this;}

    /**
     * <p>Information about the public virtual interface.</p>
     */
    inline CreatePublicVirtualInterfaceRequest& WithNewPublicVirtualInterface(NewPublicVirtualInterface&& value) { SetNewPublicVirtualInterface(std::move(value)); return *this;}

  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    NewPublicVirtualInterface m_newPublicVirtualInterface;
    bool m_newPublicVirtualInterfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
