/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/IpPermission.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UpdateFleetPortSettingsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateFleetPortSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleetPortSettings"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet to update port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet to update port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet to update port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet to update port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet to update port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet to update port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet to update port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet to update port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A collection of port settings to be added to the fleet resource.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInboundPermissionAuthorizations() const{ return m_inboundPermissionAuthorizations; }

    /**
     * <p>A collection of port settings to be added to the fleet resource.</p>
     */
    inline bool InboundPermissionAuthorizationsHasBeenSet() const { return m_inboundPermissionAuthorizationsHasBeenSet; }

    /**
     * <p>A collection of port settings to be added to the fleet resource.</p>
     */
    inline void SetInboundPermissionAuthorizations(const Aws::Vector<IpPermission>& value) { m_inboundPermissionAuthorizationsHasBeenSet = true; m_inboundPermissionAuthorizations = value; }

    /**
     * <p>A collection of port settings to be added to the fleet resource.</p>
     */
    inline void SetInboundPermissionAuthorizations(Aws::Vector<IpPermission>&& value) { m_inboundPermissionAuthorizationsHasBeenSet = true; m_inboundPermissionAuthorizations = std::move(value); }

    /**
     * <p>A collection of port settings to be added to the fleet resource.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithInboundPermissionAuthorizations(const Aws::Vector<IpPermission>& value) { SetInboundPermissionAuthorizations(value); return *this;}

    /**
     * <p>A collection of port settings to be added to the fleet resource.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithInboundPermissionAuthorizations(Aws::Vector<IpPermission>&& value) { SetInboundPermissionAuthorizations(std::move(value)); return *this;}

    /**
     * <p>A collection of port settings to be added to the fleet resource.</p>
     */
    inline UpdateFleetPortSettingsRequest& AddInboundPermissionAuthorizations(const IpPermission& value) { m_inboundPermissionAuthorizationsHasBeenSet = true; m_inboundPermissionAuthorizations.push_back(value); return *this; }

    /**
     * <p>A collection of port settings to be added to the fleet resource.</p>
     */
    inline UpdateFleetPortSettingsRequest& AddInboundPermissionAuthorizations(IpPermission&& value) { m_inboundPermissionAuthorizationsHasBeenSet = true; m_inboundPermissionAuthorizations.push_back(std::move(value)); return *this; }


    /**
     * <p>A collection of port settings to be removed from the fleet resource.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInboundPermissionRevocations() const{ return m_inboundPermissionRevocations; }

    /**
     * <p>A collection of port settings to be removed from the fleet resource.</p>
     */
    inline bool InboundPermissionRevocationsHasBeenSet() const { return m_inboundPermissionRevocationsHasBeenSet; }

    /**
     * <p>A collection of port settings to be removed from the fleet resource.</p>
     */
    inline void SetInboundPermissionRevocations(const Aws::Vector<IpPermission>& value) { m_inboundPermissionRevocationsHasBeenSet = true; m_inboundPermissionRevocations = value; }

    /**
     * <p>A collection of port settings to be removed from the fleet resource.</p>
     */
    inline void SetInboundPermissionRevocations(Aws::Vector<IpPermission>&& value) { m_inboundPermissionRevocationsHasBeenSet = true; m_inboundPermissionRevocations = std::move(value); }

    /**
     * <p>A collection of port settings to be removed from the fleet resource.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithInboundPermissionRevocations(const Aws::Vector<IpPermission>& value) { SetInboundPermissionRevocations(value); return *this;}

    /**
     * <p>A collection of port settings to be removed from the fleet resource.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithInboundPermissionRevocations(Aws::Vector<IpPermission>&& value) { SetInboundPermissionRevocations(std::move(value)); return *this;}

    /**
     * <p>A collection of port settings to be removed from the fleet resource.</p>
     */
    inline UpdateFleetPortSettingsRequest& AddInboundPermissionRevocations(const IpPermission& value) { m_inboundPermissionRevocationsHasBeenSet = true; m_inboundPermissionRevocations.push_back(value); return *this; }

    /**
     * <p>A collection of port settings to be removed from the fleet resource.</p>
     */
    inline UpdateFleetPortSettingsRequest& AddInboundPermissionRevocations(IpPermission&& value) { m_inboundPermissionRevocationsHasBeenSet = true; m_inboundPermissionRevocations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::Vector<IpPermission> m_inboundPermissionAuthorizations;
    bool m_inboundPermissionAuthorizationsHasBeenSet = false;

    Aws::Vector<IpPermission> m_inboundPermissionRevocations;
    bool m_inboundPermissionRevocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
