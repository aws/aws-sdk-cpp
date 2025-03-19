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
    AWS_DIRECTCONNECT_API CreatePublicVirtualInterfaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePublicVirtualInterface"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    CreatePublicVirtualInterfaceRequest& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the public virtual interface.</p>
     */
    inline const NewPublicVirtualInterface& GetNewPublicVirtualInterface() const { return m_newPublicVirtualInterface; }
    inline bool NewPublicVirtualInterfaceHasBeenSet() const { return m_newPublicVirtualInterfaceHasBeenSet; }
    template<typename NewPublicVirtualInterfaceT = NewPublicVirtualInterface>
    void SetNewPublicVirtualInterface(NewPublicVirtualInterfaceT&& value) { m_newPublicVirtualInterfaceHasBeenSet = true; m_newPublicVirtualInterface = std::forward<NewPublicVirtualInterfaceT>(value); }
    template<typename NewPublicVirtualInterfaceT = NewPublicVirtualInterface>
    CreatePublicVirtualInterfaceRequest& WithNewPublicVirtualInterface(NewPublicVirtualInterfaceT&& value) { SetNewPublicVirtualInterface(std::forward<NewPublicVirtualInterfaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    NewPublicVirtualInterface m_newPublicVirtualInterface;
    bool m_newPublicVirtualInterfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
