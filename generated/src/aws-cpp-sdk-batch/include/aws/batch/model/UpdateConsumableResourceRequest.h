/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class UpdateConsumableResourceRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API UpdateConsumableResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConsumableResource"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or ARN of the consumable resource to be updated.</p>
     */
    inline const Aws::String& GetConsumableResource() const{ return m_consumableResource; }
    inline bool ConsumableResourceHasBeenSet() const { return m_consumableResourceHasBeenSet; }
    inline void SetConsumableResource(const Aws::String& value) { m_consumableResourceHasBeenSet = true; m_consumableResource = value; }
    inline void SetConsumableResource(Aws::String&& value) { m_consumableResourceHasBeenSet = true; m_consumableResource = std::move(value); }
    inline void SetConsumableResource(const char* value) { m_consumableResourceHasBeenSet = true; m_consumableResource.assign(value); }
    inline UpdateConsumableResourceRequest& WithConsumableResource(const Aws::String& value) { SetConsumableResource(value); return *this;}
    inline UpdateConsumableResourceRequest& WithConsumableResource(Aws::String&& value) { SetConsumableResource(std::move(value)); return *this;}
    inline UpdateConsumableResourceRequest& WithConsumableResource(const char* value) { SetConsumableResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the quantity of the consumable resource will be updated. Must
     * be one of:</p> <ul> <li> <p> <code>SET</code> </p> <p>Sets the quantity of the
     * resource to the value specified by the <code>quantity</code> parameter.</p>
     * </li> <li> <p> <code>ADD</code> </p> <p>Increases the quantity of the resource
     * by the value specified by the <code>quantity</code> parameter.</p> </li> <li>
     * <p> <code>REMOVE</code> </p> <p>Reduces the quantity of the resource by the
     * value specified by the <code>quantity</code> parameter.</p> </li> </ul>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline UpdateConsumableResourceRequest& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline UpdateConsumableResourceRequest& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline UpdateConsumableResourceRequest& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change in the total quantity of the consumable resource. The
     * <code>operation</code> parameter determines whether the value specified here
     * will be the new total quantity, or the amount by which the total quantity will
     * be increased or reduced. Must be a non-negative value.</p>
     */
    inline long long GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(long long value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline UpdateConsumableResourceRequest& WithQuantity(long long value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is specified and two update requests with identical
     * payloads and <code>clientToken</code>s are received, these requests are
     * considered the same request and the second request is rejected. A
     * <code>clientToken</code> is valid for 8 hours or until one hour after the
     * consumable resource is deleted, whichever is less.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateConsumableResourceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateConsumableResourceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateConsumableResourceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_consumableResource;
    bool m_consumableResourceHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    long long m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
