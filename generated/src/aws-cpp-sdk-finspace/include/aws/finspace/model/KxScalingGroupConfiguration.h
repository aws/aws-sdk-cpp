﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>The structure that stores the capacity configuration details of a scaling
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxScalingGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class KxScalingGroupConfiguration
  {
  public:
    AWS_FINSPACE_API KxScalingGroupConfiguration() = default;
    AWS_FINSPACE_API KxScalingGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxScalingGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupName() const { return m_scalingGroupName; }
    inline bool ScalingGroupNameHasBeenSet() const { return m_scalingGroupNameHasBeenSet; }
    template<typename ScalingGroupNameT = Aws::String>
    void SetScalingGroupName(ScalingGroupNameT&& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = std::forward<ScalingGroupNameT>(value); }
    template<typename ScalingGroupNameT = Aws::String>
    KxScalingGroupConfiguration& WithScalingGroupName(ScalingGroupNameT&& value) { SetScalingGroupName(std::forward<ScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional hard limit on the amount of memory a kdb cluster can use. </p>
     */
    inline int GetMemoryLimit() const { return m_memoryLimit; }
    inline bool MemoryLimitHasBeenSet() const { return m_memoryLimitHasBeenSet; }
    inline void SetMemoryLimit(int value) { m_memoryLimitHasBeenSet = true; m_memoryLimit = value; }
    inline KxScalingGroupConfiguration& WithMemoryLimit(int value) { SetMemoryLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A reservation of the minimum amount of memory that should be available on
     * the scaling group for a kdb cluster to be successfully placed in a scaling
     * group. </p>
     */
    inline int GetMemoryReservation() const { return m_memoryReservation; }
    inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }
    inline void SetMemoryReservation(int value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = value; }
    inline KxScalingGroupConfiguration& WithMemoryReservation(int value) { SetMemoryReservation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of kdb cluster nodes. </p>
     */
    inline int GetNodeCount() const { return m_nodeCount; }
    inline bool NodeCountHasBeenSet() const { return m_nodeCountHasBeenSet; }
    inline void SetNodeCount(int value) { m_nodeCountHasBeenSet = true; m_nodeCount = value; }
    inline KxScalingGroupConfiguration& WithNodeCount(int value) { SetNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of vCPUs that you want to reserve for each node of this kdb
     * cluster on the scaling group host. </p>
     */
    inline double GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(double value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline KxScalingGroupConfiguration& WithCpu(double value) { SetCpu(value); return *this;}
    ///@}
  private:

    Aws::String m_scalingGroupName;
    bool m_scalingGroupNameHasBeenSet = false;

    int m_memoryLimit{0};
    bool m_memoryLimitHasBeenSet = false;

    int m_memoryReservation{0};
    bool m_memoryReservationHasBeenSet = false;

    int m_nodeCount{0};
    bool m_nodeCountHasBeenSet = false;

    double m_cpu{0.0};
    bool m_cpuHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
