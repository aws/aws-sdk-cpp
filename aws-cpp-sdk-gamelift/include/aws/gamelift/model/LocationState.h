/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetStatus.h>
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
   * <p>A fleet location and its life-cycle state. A location state object might be
   * used to describe a fleet's remote location or home Region. Life-cycle state
   * tracks the progress of launching the first instance in a new location and
   * preparing it for game hosting, and then removing all instances and deleting the
   * location from the fleet.</p> <p> <b>Related actions</b> </p> <p>
   * <a>CreateFleet</a> | <a>CreateFleetLocations</a> | <a>DeleteFleetLocations</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LocationState">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API LocationState
  {
  public:
    LocationState();
    LocationState(Aws::Utils::Json::JsonView jsonValue);
    LocationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fleet location, expressed as an AWS Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fleet location, expressed as an AWS Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The fleet location, expressed as an AWS Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The fleet location, expressed as an AWS Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The fleet location, expressed as an AWS Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The fleet location, expressed as an AWS Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline LocationState& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fleet location, expressed as an AWS Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline LocationState& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fleet location, expressed as an AWS Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline LocationState& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The life-cycle status of a fleet location. </p>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The life-cycle status of a fleet location. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The life-cycle status of a fleet location. </p>
     */
    inline void SetStatus(const FleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The life-cycle status of a fleet location. </p>
     */
    inline void SetStatus(FleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The life-cycle status of a fleet location. </p>
     */
    inline LocationState& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The life-cycle status of a fleet location. </p>
     */
    inline LocationState& WithStatus(FleetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet;

    FleetStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
