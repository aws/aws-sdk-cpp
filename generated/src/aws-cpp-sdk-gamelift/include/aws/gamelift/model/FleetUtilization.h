/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Current resource utilization statistics in a specified fleet or location. The
   * location value might refer to a fleet's remote location or its home
   * region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/FleetUtilization">AWS
   * API Reference</a></p>
   */
  class FleetUtilization
  {
  public:
    AWS_GAMELIFT_API FleetUtilization();
    AWS_GAMELIFT_API FleetUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API FleetUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline FleetUtilization& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline FleetUtilization& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline FleetUtilization& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }
    inline FleetUtilization& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline FleetUtilization& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline FleetUtilization& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of server processes in <code>ACTIVE</code> status that are
     * currently running across all instances in the fleet location. </p>
     */
    inline int GetActiveServerProcessCount() const{ return m_activeServerProcessCount; }
    inline bool ActiveServerProcessCountHasBeenSet() const { return m_activeServerProcessCountHasBeenSet; }
    inline void SetActiveServerProcessCount(int value) { m_activeServerProcessCountHasBeenSet = true; m_activeServerProcessCount = value; }
    inline FleetUtilization& WithActiveServerProcessCount(int value) { SetActiveServerProcessCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of active game sessions that are currently being hosted across all
     * instances in the fleet location.</p>
     */
    inline int GetActiveGameSessionCount() const{ return m_activeGameSessionCount; }
    inline bool ActiveGameSessionCountHasBeenSet() const { return m_activeGameSessionCountHasBeenSet; }
    inline void SetActiveGameSessionCount(int value) { m_activeGameSessionCountHasBeenSet = true; m_activeGameSessionCount = value; }
    inline FleetUtilization& WithActiveGameSessionCount(int value) { SetActiveGameSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of active player sessions that are currently being hosted across
     * all instances in the fleet location.</p>
     */
    inline int GetCurrentPlayerSessionCount() const{ return m_currentPlayerSessionCount; }
    inline bool CurrentPlayerSessionCountHasBeenSet() const { return m_currentPlayerSessionCountHasBeenSet; }
    inline void SetCurrentPlayerSessionCount(int value) { m_currentPlayerSessionCountHasBeenSet = true; m_currentPlayerSessionCount = value; }
    inline FleetUtilization& WithCurrentPlayerSessionCount(int value) { SetCurrentPlayerSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of players allowed across all game sessions that are
     * currently being hosted across all instances in the fleet location.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }
    inline FleetUtilization& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet location for the fleet utilization information, expressed as an
     * Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline FleetUtilization& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline FleetUtilization& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline FleetUtilization& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    int m_activeServerProcessCount;
    bool m_activeServerProcessCountHasBeenSet = false;

    int m_activeGameSessionCount;
    bool m_activeGameSessionCountHasBeenSet = false;

    int m_currentPlayerSessionCount;
    bool m_currentPlayerSessionCountHasBeenSet = false;

    int m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
