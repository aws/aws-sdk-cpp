/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class DeleteAccessorRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API DeleteAccessorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessor"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline const Aws::String& GetAccessorId() const{ return m_accessorId; }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline bool AccessorIdHasBeenSet() const { return m_accessorIdHasBeenSet; }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetAccessorId(const Aws::String& value) { m_accessorIdHasBeenSet = true; m_accessorId = value; }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetAccessorId(Aws::String&& value) { m_accessorIdHasBeenSet = true; m_accessorId = std::move(value); }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline void SetAccessorId(const char* value) { m_accessorIdHasBeenSet = true; m_accessorId.assign(value); }

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline DeleteAccessorRequest& WithAccessorId(const Aws::String& value) { SetAccessorId(value); return *this;}

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline DeleteAccessorRequest& WithAccessorId(Aws::String&& value) { SetAccessorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the accessor.</p>
     */
    inline DeleteAccessorRequest& WithAccessorId(const char* value) { SetAccessorId(value); return *this;}

  private:

    Aws::String m_accessorId;
    bool m_accessorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
