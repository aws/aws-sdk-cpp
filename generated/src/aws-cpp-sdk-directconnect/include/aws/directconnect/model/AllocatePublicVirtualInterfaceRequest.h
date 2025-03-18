/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/NewPublicVirtualInterfaceAllocation.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class AllocatePublicVirtualInterfaceRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API AllocatePublicVirtualInterfaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocatePublicVirtualInterface"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the connection on which the public virtual interface is
     * provisioned.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    AllocatePublicVirtualInterfaceRequest& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the public virtual
     * interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    AllocatePublicVirtualInterfaceRequest& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the public virtual interface.</p>
     */
    inline const NewPublicVirtualInterfaceAllocation& GetNewPublicVirtualInterfaceAllocation() const { return m_newPublicVirtualInterfaceAllocation; }
    inline bool NewPublicVirtualInterfaceAllocationHasBeenSet() const { return m_newPublicVirtualInterfaceAllocationHasBeenSet; }
    template<typename NewPublicVirtualInterfaceAllocationT = NewPublicVirtualInterfaceAllocation>
    void SetNewPublicVirtualInterfaceAllocation(NewPublicVirtualInterfaceAllocationT&& value) { m_newPublicVirtualInterfaceAllocationHasBeenSet = true; m_newPublicVirtualInterfaceAllocation = std::forward<NewPublicVirtualInterfaceAllocationT>(value); }
    template<typename NewPublicVirtualInterfaceAllocationT = NewPublicVirtualInterfaceAllocation>
    AllocatePublicVirtualInterfaceRequest& WithNewPublicVirtualInterfaceAllocation(NewPublicVirtualInterfaceAllocationT&& value) { SetNewPublicVirtualInterfaceAllocation(std::forward<NewPublicVirtualInterfaceAllocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    NewPublicVirtualInterfaceAllocation m_newPublicVirtualInterfaceAllocation;
    bool m_newPublicVirtualInterfaceAllocationHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
