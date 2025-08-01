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
   * <p>Defines the capacity limit for a service environment. This structure
   * specifies the maximum amount of resources that can be used by service jobs in
   * the environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CapacityLimit">AWS
   * API Reference</a></p>
   */
  class CapacityLimit
  {
  public:
    AWS_BATCH_API CapacityLimit() = default;
    AWS_BATCH_API CapacityLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API CapacityLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum capacity available for the service environment. This value
     * represents the maximum amount of resources that can be allocated to service
     * jobs.</p> <p>For example, <code>maxCapacity=50</code>,
     * <code>capacityUnit=NUM_INSTANCES</code>. This indicates that the maximum number
     * of instances that can be run on this service environment is 50. You could then
     * run 5 SageMaker Training jobs that each use 10 instances. However, if you submit
     * another job that requires 10 instances, it will wait in the queue.</p>
     */
    inline int GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline CapacityLimit& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measure for the capacity limit. This defines how the maxCapacity
     * value should be interpreted. For <code>SAGEMAKER_TRAINING</code> jobs, use
     * <code>NUM_INSTANCES</code>.</p>
     */
    inline const Aws::String& GetCapacityUnit() const { return m_capacityUnit; }
    inline bool CapacityUnitHasBeenSet() const { return m_capacityUnitHasBeenSet; }
    template<typename CapacityUnitT = Aws::String>
    void SetCapacityUnit(CapacityUnitT&& value) { m_capacityUnitHasBeenSet = true; m_capacityUnit = std::forward<CapacityUnitT>(value); }
    template<typename CapacityUnitT = Aws::String>
    CapacityLimit& WithCapacityUnit(CapacityUnitT&& value) { SetCapacityUnit(std::forward<CapacityUnitT>(value)); return *this;}
    ///@}
  private:

    int m_maxCapacity{0};
    bool m_maxCapacityHasBeenSet = false;

    Aws::String m_capacityUnit;
    bool m_capacityUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
