/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/RuntimeConfiguration.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateRuntimeConfigurationInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateRuntimeConfigurationRequest : public GameLiftRequest
  {
  public:
    UpdateRuntimeConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuntimeConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for a fleet to update runtime configuration for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for a fleet to update runtime configuration for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for a fleet to update runtime configuration for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for a fleet to update runtime configuration for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for a fleet to update runtime configuration for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for a fleet to update runtime configuration for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline UpdateRuntimeConfigurationRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for a fleet to update runtime configuration for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline UpdateRuntimeConfigurationRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a fleet to update runtime configuration for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline UpdateRuntimeConfigurationRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * runtime configuration with at least one server process configuration.</p>
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * runtime configuration with at least one server process configuration.</p>
     */
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * runtime configuration with at least one server process configuration.</p>
     */
    inline void SetRuntimeConfiguration(const RuntimeConfiguration& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * runtime configuration with at least one server process configuration.</p>
     */
    inline void SetRuntimeConfiguration(RuntimeConfiguration&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::move(value); }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * runtime configuration with at least one server process configuration.</p>
     */
    inline UpdateRuntimeConfigurationRequest& WithRuntimeConfiguration(const RuntimeConfiguration& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance and includes the following configuration settings: the server
     * executable or launch script file, launch parameters, and the number of processes
     * to run concurrently on each instance. A CreateFleet request must include a
     * runtime configuration with at least one server process configuration.</p>
     */
    inline UpdateRuntimeConfigurationRequest& WithRuntimeConfiguration(RuntimeConfiguration&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    RuntimeConfiguration m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
