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
    AWS_BATCH_API UpdateConsumableResourceRequest() = default;

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
    inline const Aws::String& GetConsumableResource() const { return m_consumableResource; }
    inline bool ConsumableResourceHasBeenSet() const { return m_consumableResourceHasBeenSet; }
    template<typename ConsumableResourceT = Aws::String>
    void SetConsumableResource(ConsumableResourceT&& value) { m_consumableResourceHasBeenSet = true; m_consumableResource = std::forward<ConsumableResourceT>(value); }
    template<typename ConsumableResourceT = Aws::String>
    UpdateConsumableResourceRequest& WithConsumableResource(ConsumableResourceT&& value) { SetConsumableResource(std::forward<ConsumableResourceT>(value)); return *this;}
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
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    UpdateConsumableResourceRequest& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change in the total quantity of the consumable resource. The
     * <code>operation</code> parameter determines whether the value specified here
     * will be the new total quantity, or the amount by which the total quantity will
     * be increased or reduced. Must be a non-negative value.</p>
     */
    inline long long GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(long long value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline UpdateConsumableResourceRequest& WithQuantity(long long value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is specified and two update requests with identical
     * payloads and <code>clientToken</code>s are received, these requests are
     * considered the same request. Both requests will succeed, but the update will
     * only happen once. A <code>clientToken</code> is valid for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateConsumableResourceRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_consumableResource;
    bool m_consumableResourceHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    long long m_quantity{0};
    bool m_quantityHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
