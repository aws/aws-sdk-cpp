/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>

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
   * <p>Compute information for the simulation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Compute">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API Compute
  {
  public:
    Compute();
    Compute(Aws::Utils::Json::JsonView jsonValue);
    Compute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The simulation unit limit. Your simulation is allocated CPU and memory
     * proportional to the supplied simulation unit limit. A simulation unit is 1 vcpu
     * and 2GB of memory. You are only billed for the SU utilization you consume up to
     * the maximim value provided. The default is 15. </p>
     */
    inline int GetSimulationUnitLimit() const{ return m_simulationUnitLimit; }

    /**
     * <p>The simulation unit limit. Your simulation is allocated CPU and memory
     * proportional to the supplied simulation unit limit. A simulation unit is 1 vcpu
     * and 2GB of memory. You are only billed for the SU utilization you consume up to
     * the maximim value provided. The default is 15. </p>
     */
    inline bool SimulationUnitLimitHasBeenSet() const { return m_simulationUnitLimitHasBeenSet; }

    /**
     * <p>The simulation unit limit. Your simulation is allocated CPU and memory
     * proportional to the supplied simulation unit limit. A simulation unit is 1 vcpu
     * and 2GB of memory. You are only billed for the SU utilization you consume up to
     * the maximim value provided. The default is 15. </p>
     */
    inline void SetSimulationUnitLimit(int value) { m_simulationUnitLimitHasBeenSet = true; m_simulationUnitLimit = value; }

    /**
     * <p>The simulation unit limit. Your simulation is allocated CPU and memory
     * proportional to the supplied simulation unit limit. A simulation unit is 1 vcpu
     * and 2GB of memory. You are only billed for the SU utilization you consume up to
     * the maximim value provided. The default is 15. </p>
     */
    inline Compute& WithSimulationUnitLimit(int value) { SetSimulationUnitLimit(value); return *this;}

  private:

    int m_simulationUnitLimit;
    bool m_simulationUnitLimitHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
