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
   * location value might refer to a fleet's remote location or its home Region.</p>
   * <p> <b>Related actions</b> </p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline FleetUtilization& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline FleetUtilization& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline FleetUtilization& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline FleetUtilization& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline FleetUtilization& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline FleetUtilization& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The number of server processes in <code>ACTIVE</code> status that are
     * currently running across all instances in the fleet location. </p>
     */
    inline int GetActiveServerProcessCount() const{ return m_activeServerProcessCount; }

    /**
     * <p>The number of server processes in <code>ACTIVE</code> status that are
     * currently running across all instances in the fleet location. </p>
     */
    inline bool ActiveServerProcessCountHasBeenSet() const { return m_activeServerProcessCountHasBeenSet; }

    /**
     * <p>The number of server processes in <code>ACTIVE</code> status that are
     * currently running across all instances in the fleet location. </p>
     */
    inline void SetActiveServerProcessCount(int value) { m_activeServerProcessCountHasBeenSet = true; m_activeServerProcessCount = value; }

    /**
     * <p>The number of server processes in <code>ACTIVE</code> status that are
     * currently running across all instances in the fleet location. </p>
     */
    inline FleetUtilization& WithActiveServerProcessCount(int value) { SetActiveServerProcessCount(value); return *this;}


    /**
     * <p>The number of active game sessions that are currently being hosted across all
     * instances in the fleet location.</p>
     */
    inline int GetActiveGameSessionCount() const{ return m_activeGameSessionCount; }

    /**
     * <p>The number of active game sessions that are currently being hosted across all
     * instances in the fleet location.</p>
     */
    inline bool ActiveGameSessionCountHasBeenSet() const { return m_activeGameSessionCountHasBeenSet; }

    /**
     * <p>The number of active game sessions that are currently being hosted across all
     * instances in the fleet location.</p>
     */
    inline void SetActiveGameSessionCount(int value) { m_activeGameSessionCountHasBeenSet = true; m_activeGameSessionCount = value; }

    /**
     * <p>The number of active game sessions that are currently being hosted across all
     * instances in the fleet location.</p>
     */
    inline FleetUtilization& WithActiveGameSessionCount(int value) { SetActiveGameSessionCount(value); return *this;}


    /**
     * <p>The number of active player sessions that are currently being hosted across
     * all instances in the fleet location.</p>
     */
    inline int GetCurrentPlayerSessionCount() const{ return m_currentPlayerSessionCount; }

    /**
     * <p>The number of active player sessions that are currently being hosted across
     * all instances in the fleet location.</p>
     */
    inline bool CurrentPlayerSessionCountHasBeenSet() const { return m_currentPlayerSessionCountHasBeenSet; }

    /**
     * <p>The number of active player sessions that are currently being hosted across
     * all instances in the fleet location.</p>
     */
    inline void SetCurrentPlayerSessionCount(int value) { m_currentPlayerSessionCountHasBeenSet = true; m_currentPlayerSessionCount = value; }

    /**
     * <p>The number of active player sessions that are currently being hosted across
     * all instances in the fleet location.</p>
     */
    inline FleetUtilization& WithCurrentPlayerSessionCount(int value) { SetCurrentPlayerSessionCount(value); return *this;}


    /**
     * <p>The maximum number of players allowed across all game sessions that are
     * currently being hosted across all instances in the fleet location.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }

    /**
     * <p>The maximum number of players allowed across all game sessions that are
     * currently being hosted across all instances in the fleet location.</p>
     */
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }

    /**
     * <p>The maximum number of players allowed across all game sessions that are
     * currently being hosted across all instances in the fleet location.</p>
     */
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }

    /**
     * <p>The maximum number of players allowed across all game sessions that are
     * currently being hosted across all instances in the fleet location.</p>
     */
    inline FleetUtilization& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}


    /**
     * <p>The fleet location for the fleet utilization information, expressed as an
     * Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fleet location for the fleet utilization information, expressed as an
     * Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The fleet location for the fleet utilization information, expressed as an
     * Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The fleet location for the fleet utilization information, expressed as an
     * Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The fleet location for the fleet utilization information, expressed as an
     * Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The fleet location for the fleet utilization information, expressed as an
     * Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline FleetUtilization& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fleet location for the fleet utilization information, expressed as an
     * Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline FleetUtilization& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fleet location for the fleet utilization information, expressed as an
     * Amazon Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline FleetUtilization& WithLocation(const char* value) { SetLocation(value); return *this;}

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
