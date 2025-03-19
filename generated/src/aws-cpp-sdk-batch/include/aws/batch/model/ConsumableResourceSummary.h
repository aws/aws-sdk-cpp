/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>Current information about a consumable resource.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ConsumableResourceSummary">AWS
   * API Reference</a></p>
   */
  class ConsumableResourceSummary
  {
  public:
    AWS_BATCH_API ConsumableResourceSummary() = default;
    AWS_BATCH_API ConsumableResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ConsumableResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceArn() const { return m_consumableResourceArn; }
    inline bool ConsumableResourceArnHasBeenSet() const { return m_consumableResourceArnHasBeenSet; }
    template<typename ConsumableResourceArnT = Aws::String>
    void SetConsumableResourceArn(ConsumableResourceArnT&& value) { m_consumableResourceArnHasBeenSet = true; m_consumableResourceArn = std::forward<ConsumableResourceArnT>(value); }
    template<typename ConsumableResourceArnT = Aws::String>
    ConsumableResourceSummary& WithConsumableResourceArn(ConsumableResourceArnT&& value) { SetConsumableResourceArn(std::forward<ConsumableResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceName() const { return m_consumableResourceName; }
    inline bool ConsumableResourceNameHasBeenSet() const { return m_consumableResourceNameHasBeenSet; }
    template<typename ConsumableResourceNameT = Aws::String>
    void SetConsumableResourceName(ConsumableResourceNameT&& value) { m_consumableResourceNameHasBeenSet = true; m_consumableResourceName = std::forward<ConsumableResourceNameT>(value); }
    template<typename ConsumableResourceNameT = Aws::String>
    ConsumableResourceSummary& WithConsumableResourceName(ConsumableResourceNameT&& value) { SetConsumableResourceName(std::forward<ConsumableResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of the consumable resource that is available.</p>
     */
    inline long long GetTotalQuantity() const { return m_totalQuantity; }
    inline bool TotalQuantityHasBeenSet() const { return m_totalQuantityHasBeenSet; }
    inline void SetTotalQuantity(long long value) { m_totalQuantityHasBeenSet = true; m_totalQuantity = value; }
    inline ConsumableResourceSummary& WithTotalQuantity(long long value) { SetTotalQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of the consumable resource that is currently in use.</p>
     */
    inline long long GetInUseQuantity() const { return m_inUseQuantity; }
    inline bool InUseQuantityHasBeenSet() const { return m_inUseQuantityHasBeenSet; }
    inline void SetInUseQuantity(long long value) { m_inUseQuantityHasBeenSet = true; m_inUseQuantity = value; }
    inline ConsumableResourceSummary& WithInUseQuantity(long long value) { SetInUseQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the resource is available to be re-used after a job
     * completes. Can be one of: </p> <ul> <li> <p> <code>REPLENISHABLE</code> </p>
     * </li> <li> <p> <code>NON_REPLENISHABLE</code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ConsumableResourceSummary& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_consumableResourceArn;
    bool m_consumableResourceArnHasBeenSet = false;

    Aws::String m_consumableResourceName;
    bool m_consumableResourceNameHasBeenSet = false;

    long long m_totalQuantity{0};
    bool m_totalQuantityHasBeenSet = false;

    long long m_inUseQuantity{0};
    bool m_inUseQuantityHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
