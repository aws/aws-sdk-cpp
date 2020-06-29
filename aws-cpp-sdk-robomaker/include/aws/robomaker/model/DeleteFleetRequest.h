/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class AWS_ROBOMAKER_API DeleteFleetRequest : public RoboMakerRequest
  {
  public:
    DeleteFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFleet"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleet() const{ return m_fleet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline bool FleetHasBeenSet() const { return m_fleetHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(const Aws::String& value) { m_fleetHasBeenSet = true; m_fleet = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(Aws::String&& value) { m_fleetHasBeenSet = true; m_fleet = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(const char* value) { m_fleetHasBeenSet = true; m_fleet.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DeleteFleetRequest& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DeleteFleetRequest& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DeleteFleetRequest& WithFleet(const char* value) { SetFleet(value); return *this;}

  private:

    Aws::String m_fleet;
    bool m_fleetHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
