﻿/**
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
   * location from the fleet.</p> <ul> <li> <p> <b>NEW</b> -- A new fleet location
   * has been defined and desired instances is set to 1. </p> </li> <li> <p>
   * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- GameLift is setting up the
   * new fleet location, creating new instances with the game build or Realtime
   * script and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts
   * can now accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error
   * occurred when downloading, validating, building, or activating the fleet
   * location.</p> </li> <li> <p> <b>DELETING</b> -- Hosts are responding to a delete
   * fleet location request.</p> </li> <li> <p> <b>TERMINATED</b> -- The fleet
   * location no longer exists.</p> </li> <li> <p> <b>NOT_FOUND</b> -- The fleet
   * location was not found. This could be because the custom location was removed or
   * not created. </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LocationState">AWS
   * API Reference</a></p>
   */
  class LocationState
  {
  public:
    AWS_GAMELIFT_API LocationState();
    AWS_GAMELIFT_API LocationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API LocationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fleet location, expressed as an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fleet location, expressed as an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The fleet location, expressed as an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The fleet location, expressed as an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The fleet location, expressed as an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The fleet location, expressed as an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline LocationState& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fleet location, expressed as an Amazon Web Services Region code such as
     * <code>us-west-2</code>. </p>
     */
    inline LocationState& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fleet location, expressed as an Amazon Web Services Region code such as
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
    bool m_locationHasBeenSet = false;

    FleetStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
