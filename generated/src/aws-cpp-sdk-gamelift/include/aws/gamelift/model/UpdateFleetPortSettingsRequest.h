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
    AWS_GAMELIFT_API UpdateFleetPortSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleetPortSettings"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet to update port settings for. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    UpdateFleetPortSettingsRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of port settings to be added to the fleet resource.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInboundPermissionAuthorizations() const { return m_inboundPermissionAuthorizations; }
    inline bool InboundPermissionAuthorizationsHasBeenSet() const { return m_inboundPermissionAuthorizationsHasBeenSet; }
    template<typename InboundPermissionAuthorizationsT = Aws::Vector<IpPermission>>
    void SetInboundPermissionAuthorizations(InboundPermissionAuthorizationsT&& value) { m_inboundPermissionAuthorizationsHasBeenSet = true; m_inboundPermissionAuthorizations = std::forward<InboundPermissionAuthorizationsT>(value); }
    template<typename InboundPermissionAuthorizationsT = Aws::Vector<IpPermission>>
    UpdateFleetPortSettingsRequest& WithInboundPermissionAuthorizations(InboundPermissionAuthorizationsT&& value) { SetInboundPermissionAuthorizations(std::forward<InboundPermissionAuthorizationsT>(value)); return *this;}
    template<typename InboundPermissionAuthorizationsT = IpPermission>
    UpdateFleetPortSettingsRequest& AddInboundPermissionAuthorizations(InboundPermissionAuthorizationsT&& value) { m_inboundPermissionAuthorizationsHasBeenSet = true; m_inboundPermissionAuthorizations.emplace_back(std::forward<InboundPermissionAuthorizationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of port settings to be removed from the fleet resource.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInboundPermissionRevocations() const { return m_inboundPermissionRevocations; }
    inline bool InboundPermissionRevocationsHasBeenSet() const { return m_inboundPermissionRevocationsHasBeenSet; }
    template<typename InboundPermissionRevocationsT = Aws::Vector<IpPermission>>
    void SetInboundPermissionRevocations(InboundPermissionRevocationsT&& value) { m_inboundPermissionRevocationsHasBeenSet = true; m_inboundPermissionRevocations = std::forward<InboundPermissionRevocationsT>(value); }
    template<typename InboundPermissionRevocationsT = Aws::Vector<IpPermission>>
    UpdateFleetPortSettingsRequest& WithInboundPermissionRevocations(InboundPermissionRevocationsT&& value) { SetInboundPermissionRevocations(std::forward<InboundPermissionRevocationsT>(value)); return *this;}
    template<typename InboundPermissionRevocationsT = IpPermission>
    UpdateFleetPortSettingsRequest& AddInboundPermissionRevocations(InboundPermissionRevocationsT&& value) { m_inboundPermissionRevocationsHasBeenSet = true; m_inboundPermissionRevocations.emplace_back(std::forward<InboundPermissionRevocationsT>(value)); return *this; }
    ///@}
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
