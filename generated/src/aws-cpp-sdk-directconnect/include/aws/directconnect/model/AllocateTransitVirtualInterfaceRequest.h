/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/NewTransitVirtualInterfaceAllocation.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class AllocateTransitVirtualInterfaceRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API AllocateTransitVirtualInterfaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocateTransitVirtualInterface"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the connection on which the transit virtual interface is
     * provisioned.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    AllocateTransitVirtualInterfaceRequest& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the transit virtual
     * interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    AllocateTransitVirtualInterfaceRequest& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline const NewTransitVirtualInterfaceAllocation& GetNewTransitVirtualInterfaceAllocation() const { return m_newTransitVirtualInterfaceAllocation; }
    inline bool NewTransitVirtualInterfaceAllocationHasBeenSet() const { return m_newTransitVirtualInterfaceAllocationHasBeenSet; }
    template<typename NewTransitVirtualInterfaceAllocationT = NewTransitVirtualInterfaceAllocation>
    void SetNewTransitVirtualInterfaceAllocation(NewTransitVirtualInterfaceAllocationT&& value) { m_newTransitVirtualInterfaceAllocationHasBeenSet = true; m_newTransitVirtualInterfaceAllocation = std::forward<NewTransitVirtualInterfaceAllocationT>(value); }
    template<typename NewTransitVirtualInterfaceAllocationT = NewTransitVirtualInterfaceAllocation>
    AllocateTransitVirtualInterfaceRequest& WithNewTransitVirtualInterfaceAllocation(NewTransitVirtualInterfaceAllocationT&& value) { SetNewTransitVirtualInterfaceAllocation(std::forward<NewTransitVirtualInterfaceAllocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    NewTransitVirtualInterfaceAllocation m_newTransitVirtualInterfaceAllocation;
    bool m_newTransitVirtualInterfaceAllocationHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
