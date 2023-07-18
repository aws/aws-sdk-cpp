﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/ComputeType.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Compute information for the simulation job</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ComputeResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API ComputeResponse
  {
  public:
    ComputeResponse();
    ComputeResponse(Aws::Utils::Json::JsonView jsonValue);
    ComputeResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The simulation unit limit. Your simulation is allocated CPU and memory
     * proportional to the supplied simulation unit limit. A simulation unit is 1 vcpu
     * and 2GB of memory. You are only billed for the SU utilization you consume up to
     * the maximum value provided. The default is 15. </p>
     */
    inline int GetSimulationUnitLimit() const{ return m_simulationUnitLimit; }

    /**
     * <p>The simulation unit limit. Your simulation is allocated CPU and memory
     * proportional to the supplied simulation unit limit. A simulation unit is 1 vcpu
     * and 2GB of memory. You are only billed for the SU utilization you consume up to
     * the maximum value provided. The default is 15. </p>
     */
    inline bool SimulationUnitLimitHasBeenSet() const { return m_simulationUnitLimitHasBeenSet; }

    /**
     * <p>The simulation unit limit. Your simulation is allocated CPU and memory
     * proportional to the supplied simulation unit limit. A simulation unit is 1 vcpu
     * and 2GB of memory. You are only billed for the SU utilization you consume up to
     * the maximum value provided. The default is 15. </p>
     */
    inline void SetSimulationUnitLimit(int value) { m_simulationUnitLimitHasBeenSet = true; m_simulationUnitLimit = value; }

    /**
     * <p>The simulation unit limit. Your simulation is allocated CPU and memory
     * proportional to the supplied simulation unit limit. A simulation unit is 1 vcpu
     * and 2GB of memory. You are only billed for the SU utilization you consume up to
     * the maximum value provided. The default is 15. </p>
     */
    inline ComputeResponse& WithSimulationUnitLimit(int value) { SetSimulationUnitLimit(value); return *this;}


    /**
     * <p>Compute type response information for the simulation job.</p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    /**
     * <p>Compute type response information for the simulation job.</p>
     */
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }

    /**
     * <p>Compute type response information for the simulation job.</p>
     */
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>Compute type response information for the simulation job.</p>
     */
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }

    /**
     * <p>Compute type response information for the simulation job.</p>
     */
    inline ComputeResponse& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    /**
     * <p>Compute type response information for the simulation job.</p>
     */
    inline ComputeResponse& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}


    /**
     * <p>Compute GPU unit limit for the simulation job. It is the same as the number
     * of GPUs allocated to the SimulationJob.</p>
     */
    inline int GetGpuUnitLimit() const{ return m_gpuUnitLimit; }

    /**
     * <p>Compute GPU unit limit for the simulation job. It is the same as the number
     * of GPUs allocated to the SimulationJob.</p>
     */
    inline bool GpuUnitLimitHasBeenSet() const { return m_gpuUnitLimitHasBeenSet; }

    /**
     * <p>Compute GPU unit limit for the simulation job. It is the same as the number
     * of GPUs allocated to the SimulationJob.</p>
     */
    inline void SetGpuUnitLimit(int value) { m_gpuUnitLimitHasBeenSet = true; m_gpuUnitLimit = value; }

    /**
     * <p>Compute GPU unit limit for the simulation job. It is the same as the number
     * of GPUs allocated to the SimulationJob.</p>
     */
    inline ComputeResponse& WithGpuUnitLimit(int value) { SetGpuUnitLimit(value); return *this;}

  private:

    int m_simulationUnitLimit;
    bool m_simulationUnitLimitHasBeenSet;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet;

    int m_gpuUnitLimit;
    bool m_gpuUnitLimitHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
