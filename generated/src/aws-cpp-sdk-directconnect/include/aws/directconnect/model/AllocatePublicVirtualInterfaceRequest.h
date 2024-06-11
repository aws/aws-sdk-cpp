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
    AWS_DIRECTCONNECT_API AllocatePublicVirtualInterfaceRequest();

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
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }
    inline AllocatePublicVirtualInterfaceRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline AllocatePublicVirtualInterfaceRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline AllocatePublicVirtualInterfaceRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the public virtual
     * interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }
    inline AllocatePublicVirtualInterfaceRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline AllocatePublicVirtualInterfaceRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline AllocatePublicVirtualInterfaceRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the public virtual interface.</p>
     */
    inline const NewPublicVirtualInterfaceAllocation& GetNewPublicVirtualInterfaceAllocation() const{ return m_newPublicVirtualInterfaceAllocation; }
    inline bool NewPublicVirtualInterfaceAllocationHasBeenSet() const { return m_newPublicVirtualInterfaceAllocationHasBeenSet; }
    inline void SetNewPublicVirtualInterfaceAllocation(const NewPublicVirtualInterfaceAllocation& value) { m_newPublicVirtualInterfaceAllocationHasBeenSet = true; m_newPublicVirtualInterfaceAllocation = value; }
    inline void SetNewPublicVirtualInterfaceAllocation(NewPublicVirtualInterfaceAllocation&& value) { m_newPublicVirtualInterfaceAllocationHasBeenSet = true; m_newPublicVirtualInterfaceAllocation = std::move(value); }
    inline AllocatePublicVirtualInterfaceRequest& WithNewPublicVirtualInterfaceAllocation(const NewPublicVirtualInterfaceAllocation& value) { SetNewPublicVirtualInterfaceAllocation(value); return *this;}
    inline AllocatePublicVirtualInterfaceRequest& WithNewPublicVirtualInterfaceAllocation(NewPublicVirtualInterfaceAllocation&& value) { SetNewPublicVirtualInterfaceAllocation(std::move(value)); return *this;}
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
