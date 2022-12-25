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
    AWS_DIRECTCONNECT_API AllocateTransitVirtualInterfaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocateTransitVirtualInterface"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the connection on which the transit virtual interface is
     * provisioned.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the connection on which the transit virtual interface is
     * provisioned.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the connection on which the transit virtual interface is
     * provisioned.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the connection on which the transit virtual interface is
     * provisioned.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the connection on which the transit virtual interface is
     * provisioned.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the connection on which the transit virtual interface is
     * provisioned.</p>
     */
    inline AllocateTransitVirtualInterfaceRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection on which the transit virtual interface is
     * provisioned.</p>
     */
    inline AllocateTransitVirtualInterfaceRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connection on which the transit virtual interface is
     * provisioned.</p>
     */
    inline AllocateTransitVirtualInterfaceRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the transit virtual
     * interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit virtual
     * interface.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit virtual
     * interface.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit virtual
     * interface.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit virtual
     * interface.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit virtual
     * interface.</p>
     */
    inline AllocateTransitVirtualInterfaceRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit virtual
     * interface.</p>
     */
    inline AllocateTransitVirtualInterfaceRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the transit virtual
     * interface.</p>
     */
    inline AllocateTransitVirtualInterfaceRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline const NewTransitVirtualInterfaceAllocation& GetNewTransitVirtualInterfaceAllocation() const{ return m_newTransitVirtualInterfaceAllocation; }

    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline bool NewTransitVirtualInterfaceAllocationHasBeenSet() const { return m_newTransitVirtualInterfaceAllocationHasBeenSet; }

    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline void SetNewTransitVirtualInterfaceAllocation(const NewTransitVirtualInterfaceAllocation& value) { m_newTransitVirtualInterfaceAllocationHasBeenSet = true; m_newTransitVirtualInterfaceAllocation = value; }

    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline void SetNewTransitVirtualInterfaceAllocation(NewTransitVirtualInterfaceAllocation&& value) { m_newTransitVirtualInterfaceAllocationHasBeenSet = true; m_newTransitVirtualInterfaceAllocation = std::move(value); }

    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline AllocateTransitVirtualInterfaceRequest& WithNewTransitVirtualInterfaceAllocation(const NewTransitVirtualInterfaceAllocation& value) { SetNewTransitVirtualInterfaceAllocation(value); return *this;}

    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline AllocateTransitVirtualInterfaceRequest& WithNewTransitVirtualInterfaceAllocation(NewTransitVirtualInterfaceAllocation&& value) { SetNewTransitVirtualInterfaceAllocation(std::move(value)); return *this;}

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
