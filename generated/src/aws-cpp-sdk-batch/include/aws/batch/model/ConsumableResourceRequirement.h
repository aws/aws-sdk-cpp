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
   * <p>Information about a consumable resource required to run a job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ConsumableResourceRequirement">AWS
   * API Reference</a></p>
   */
  class ConsumableResourceRequirement
  {
  public:
    AWS_BATCH_API ConsumableResourceRequirement() = default;
    AWS_BATCH_API ConsumableResourceRequirement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ConsumableResourceRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name or ARN of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResource() const { return m_consumableResource; }
    inline bool ConsumableResourceHasBeenSet() const { return m_consumableResourceHasBeenSet; }
    template<typename ConsumableResourceT = Aws::String>
    void SetConsumableResource(ConsumableResourceT&& value) { m_consumableResourceHasBeenSet = true; m_consumableResource = std::forward<ConsumableResourceT>(value); }
    template<typename ConsumableResourceT = Aws::String>
    ConsumableResourceRequirement& WithConsumableResource(ConsumableResourceT&& value) { SetConsumableResource(std::forward<ConsumableResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantity of the consumable resource that is needed.</p>
     */
    inline long long GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(long long value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline ConsumableResourceRequirement& WithQuantity(long long value) { SetQuantity(value); return *this;}
    ///@}
  private:

    Aws::String m_consumableResource;
    bool m_consumableResourceHasBeenSet = false;

    long long m_quantity{0};
    bool m_quantityHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
