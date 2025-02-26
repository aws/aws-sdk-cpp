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
    AWS_BATCH_API ConsumableResourceSummary();
    AWS_BATCH_API ConsumableResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ConsumableResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceArn() const{ return m_consumableResourceArn; }
    inline bool ConsumableResourceArnHasBeenSet() const { return m_consumableResourceArnHasBeenSet; }
    inline void SetConsumableResourceArn(const Aws::String& value) { m_consumableResourceArnHasBeenSet = true; m_consumableResourceArn = value; }
    inline void SetConsumableResourceArn(Aws::String&& value) { m_consumableResourceArnHasBeenSet = true; m_consumableResourceArn = std::move(value); }
    inline void SetConsumableResourceArn(const char* value) { m_consumableResourceArnHasBeenSet = true; m_consumableResourceArn.assign(value); }
    inline ConsumableResourceSummary& WithConsumableResourceArn(const Aws::String& value) { SetConsumableResourceArn(value); return *this;}
    inline ConsumableResourceSummary& WithConsumableResourceArn(Aws::String&& value) { SetConsumableResourceArn(std::move(value)); return *this;}
    inline ConsumableResourceSummary& WithConsumableResourceArn(const char* value) { SetConsumableResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceName() const{ return m_consumableResourceName; }
    inline bool ConsumableResourceNameHasBeenSet() const { return m_consumableResourceNameHasBeenSet; }
    inline void SetConsumableResourceName(const Aws::String& value) { m_consumableResourceNameHasBeenSet = true; m_consumableResourceName = value; }
    inline void SetConsumableResourceName(Aws::String&& value) { m_consumableResourceNameHasBeenSet = true; m_consumableResourceName = std::move(value); }
    inline void SetConsumableResourceName(const char* value) { m_consumableResourceNameHasBeenSet = true; m_consumableResourceName.assign(value); }
    inline ConsumableResourceSummary& WithConsumableResourceName(const Aws::String& value) { SetConsumableResourceName(value); return *this;}
    inline ConsumableResourceSummary& WithConsumableResourceName(Aws::String&& value) { SetConsumableResourceName(std::move(value)); return *this;}
    inline ConsumableResourceSummary& WithConsumableResourceName(const char* value) { SetConsumableResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of the consumable resource that is available.</p>
     */
    inline long long GetTotalQuantity() const{ return m_totalQuantity; }
    inline bool TotalQuantityHasBeenSet() const { return m_totalQuantityHasBeenSet; }
    inline void SetTotalQuantity(long long value) { m_totalQuantityHasBeenSet = true; m_totalQuantity = value; }
    inline ConsumableResourceSummary& WithTotalQuantity(long long value) { SetTotalQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of the consumable resource that is currently in use.</p>
     */
    inline long long GetInUseQuantity() const{ return m_inUseQuantity; }
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
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ConsumableResourceSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ConsumableResourceSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ConsumableResourceSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_consumableResourceArn;
    bool m_consumableResourceArnHasBeenSet = false;

    Aws::String m_consumableResourceName;
    bool m_consumableResourceNameHasBeenSet = false;

    long long m_totalQuantity;
    bool m_totalQuantityHasBeenSet = false;

    long long m_inUseQuantity;
    bool m_inUseQuantityHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
