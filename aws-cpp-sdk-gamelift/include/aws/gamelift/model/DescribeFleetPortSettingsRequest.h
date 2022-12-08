/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DescribeFleetPortSettingsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeFleetPortSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFleetPortSettings"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet to retrieve port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet to retrieve port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet to retrieve port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet to retrieve port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet to retrieve port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet to retrieve port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline DescribeFleetPortSettingsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet to retrieve port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline DescribeFleetPortSettingsRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet to retrieve port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline DescribeFleetPortSettingsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A remote location to check for status of port setting updates. Use the Amazon
     * Web Services Region code format, such as <code>us-west-2</code>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>A remote location to check for status of port setting updates. Use the Amazon
     * Web Services Region code format, such as <code>us-west-2</code>.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>A remote location to check for status of port setting updates. Use the Amazon
     * Web Services Region code format, such as <code>us-west-2</code>.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>A remote location to check for status of port setting updates. Use the Amazon
     * Web Services Region code format, such as <code>us-west-2</code>.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>A remote location to check for status of port setting updates. Use the Amazon
     * Web Services Region code format, such as <code>us-west-2</code>.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>A remote location to check for status of port setting updates. Use the Amazon
     * Web Services Region code format, such as <code>us-west-2</code>.</p>
     */
    inline DescribeFleetPortSettingsRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>A remote location to check for status of port setting updates. Use the Amazon
     * Web Services Region code format, such as <code>us-west-2</code>.</p>
     */
    inline DescribeFleetPortSettingsRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>A remote location to check for status of port setting updates. Use the Amazon
     * Web Services Region code format, such as <code>us-west-2</code>.</p>
     */
    inline DescribeFleetPortSettingsRequest& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
