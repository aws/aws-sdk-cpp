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
    AWS_BATCH_API ConsumableResourceProperties();
    AWS_BATCH_API ConsumableResourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ConsumableResourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of consumable resources required by a job.</p>
     */
    inline const Aws::Vector<ConsumableResourceRequirement>& GetConsumableResourceList() const{ return m_consumableResourceList; }
    inline bool ConsumableResourceListHasBeenSet() const { return m_consumableResourceListHasBeenSet; }
    inline void SetConsumableResourceList(const Aws::Vector<ConsumableResourceRequirement>& value) { m_consumableResourceListHasBeenSet = true; m_consumableResourceList = value; }
    inline void SetConsumableResourceList(Aws::Vector<ConsumableResourceRequirement>&& value) { m_consumableResourceListHasBeenSet = true; m_consumableResourceList = std::move(value); }
    inline ConsumableResourceProperties& WithConsumableResourceList(const Aws::Vector<ConsumableResourceRequirement>& value) { SetConsumableResourceList(value); return *this;}
    inline ConsumableResourceProperties& WithConsumableResourceList(Aws::Vector<ConsumableResourceRequirement>&& value) { SetConsumableResourceList(std::move(value)); return *this;}
    inline ConsumableResourceProperties& AddConsumableResourceList(const ConsumableResourceRequirement& value) { m_consumableResourceListHasBeenSet = true; m_consumableResourceList.push_back(value); return *this; }
    inline ConsumableResourceProperties& AddConsumableResourceList(ConsumableResourceRequirement&& value) { m_consumableResourceListHasBeenSet = true; m_consumableResourceList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ConsumableResourceRequirement> m_consumableResourceList;
    bool m_consumableResourceListHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
