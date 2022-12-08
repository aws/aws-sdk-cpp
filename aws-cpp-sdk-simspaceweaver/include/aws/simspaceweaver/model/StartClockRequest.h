/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/SimSpaceWeaverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   */
  class StartClockRequest : public SimSpaceWeaverRequest
  {
  public:
    AWS_SIMSPACEWEAVER_API StartClockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartClock"; }

    AWS_SIMSPACEWEAVER_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the simulation.</p>
     */
    inline const Aws::String& GetSimulation() const{ return m_simulation; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline bool SimulationHasBeenSet() const { return m_simulationHasBeenSet; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetSimulation(const Aws::String& value) { m_simulationHasBeenSet = true; m_simulation = value; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetSimulation(Aws::String&& value) { m_simulationHasBeenSet = true; m_simulation = std::move(value); }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetSimulation(const char* value) { m_simulationHasBeenSet = true; m_simulation.assign(value); }

    /**
     * <p>The name of the simulation.</p>
     */
    inline StartClockRequest& WithSimulation(const Aws::String& value) { SetSimulation(value); return *this;}

    /**
     * <p>The name of the simulation.</p>
     */
    inline StartClockRequest& WithSimulation(Aws::String&& value) { SetSimulation(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation.</p>
     */
    inline StartClockRequest& WithSimulation(const char* value) { SetSimulation(value); return *this;}

  private:

    Aws::String m_simulation;
    bool m_simulationHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
