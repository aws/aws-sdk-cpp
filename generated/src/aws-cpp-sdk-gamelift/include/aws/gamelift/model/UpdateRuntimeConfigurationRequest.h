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
   */
  class UpdateRuntimeConfigurationRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateRuntimeConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuntimeConfiguration"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet to update runtime configuration for. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet to update runtime configuration for. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet to update runtime configuration for. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet to update runtime configuration for. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet to update runtime configuration for. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet to update runtime configuration for. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline UpdateRuntimeConfigurationRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet to update runtime configuration for. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline UpdateRuntimeConfigurationRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet to update runtime configuration for. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline UpdateRuntimeConfigurationRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance, how to launch them, and the number of processes to run
     * concurrently.</p>
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance, how to launch them, and the number of processes to run
     * concurrently.</p>
     */
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance, how to launch them, and the number of processes to run
     * concurrently.</p>
     */
    inline void SetRuntimeConfiguration(const RuntimeConfiguration& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance, how to launch them, and the number of processes to run
     * concurrently.</p>
     */
    inline void SetRuntimeConfiguration(RuntimeConfiguration&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::move(value); }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance, how to launch them, and the number of processes to run
     * concurrently.</p>
     */
    inline UpdateRuntimeConfigurationRequest& WithRuntimeConfiguration(const RuntimeConfiguration& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * Server processes run either a custom game build executable or a Realtime Servers
     * script. The runtime configuration lists the types of server processes to run on
     * an instance, how to launch them, and the number of processes to run
     * concurrently.</p>
     */
    inline UpdateRuntimeConfigurationRequest& WithRuntimeConfiguration(RuntimeConfiguration&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    RuntimeConfiguration m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
