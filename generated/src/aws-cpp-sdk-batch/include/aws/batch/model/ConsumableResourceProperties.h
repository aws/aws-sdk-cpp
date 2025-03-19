/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/ConsumableResourceRequirement.h>
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
   * <p>Contains a list of consumable resources required by a job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ConsumableResourceProperties">AWS
   * API Reference</a></p>
   */
  class ConsumableResourceProperties
  {
  public:
    AWS_BATCH_API ConsumableResourceProperties() = default;
    AWS_BATCH_API ConsumableResourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ConsumableResourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of consumable resources required by a job.</p>
     */
    inline const Aws::Vector<ConsumableResourceRequirement>& GetConsumableResourceList() const { return m_consumableResourceList; }
    inline bool ConsumableResourceListHasBeenSet() const { return m_consumableResourceListHasBeenSet; }
    template<typename ConsumableResourceListT = Aws::Vector<ConsumableResourceRequirement>>
    void SetConsumableResourceList(ConsumableResourceListT&& value) { m_consumableResourceListHasBeenSet = true; m_consumableResourceList = std::forward<ConsumableResourceListT>(value); }
    template<typename ConsumableResourceListT = Aws::Vector<ConsumableResourceRequirement>>
    ConsumableResourceProperties& WithConsumableResourceList(ConsumableResourceListT&& value) { SetConsumableResourceList(std::forward<ConsumableResourceListT>(value)); return *this;}
    template<typename ConsumableResourceListT = ConsumableResourceRequirement>
    ConsumableResourceProperties& AddConsumableResourceList(ConsumableResourceListT&& value) { m_consumableResourceListHasBeenSet = true; m_consumableResourceList.emplace_back(std::forward<ConsumableResourceListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ConsumableResourceRequirement> m_consumableResourceList;
    bool m_consumableResourceListHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
