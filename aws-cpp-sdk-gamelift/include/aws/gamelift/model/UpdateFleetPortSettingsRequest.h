/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetPortSettingsInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateFleetPortSettingsRequest : public GameLiftRequest
  {
  public:
    UpdateFleetPortSettingsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet to update port settings for.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet to update port settings for.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet to update port settings for.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet to update port settings for.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet to update port settings for.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet to update port settings for.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet to update port settings for.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Collection of port settings to be added to the fleet record.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInboundPermissionAuthorizations() const{ return m_inboundPermissionAuthorizations; }

    /**
     * <p>Collection of port settings to be added to the fleet record.</p>
     */
    inline void SetInboundPermissionAuthorizations(const Aws::Vector<IpPermission>& value) { m_inboundPermissionAuthorizationsHasBeenSet = true; m_inboundPermissionAuthorizations = value; }

    /**
     * <p>Collection of port settings to be added to the fleet record.</p>
     */
    inline void SetInboundPermissionAuthorizations(Aws::Vector<IpPermission>&& value) { m_inboundPermissionAuthorizationsHasBeenSet = true; m_inboundPermissionAuthorizations = std::move(value); }

    /**
     * <p>Collection of port settings to be added to the fleet record.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithInboundPermissionAuthorizations(const Aws::Vector<IpPermission>& value) { SetInboundPermissionAuthorizations(value); return *this;}

    /**
     * <p>Collection of port settings to be added to the fleet record.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithInboundPermissionAuthorizations(Aws::Vector<IpPermission>&& value) { SetInboundPermissionAuthorizations(std::move(value)); return *this;}

    /**
     * <p>Collection of port settings to be added to the fleet record.</p>
     */
    inline UpdateFleetPortSettingsRequest& AddInboundPermissionAuthorizations(const IpPermission& value) { m_inboundPermissionAuthorizationsHasBeenSet = true; m_inboundPermissionAuthorizations.push_back(value); return *this; }

    /**
     * <p>Collection of port settings to be added to the fleet record.</p>
     */
    inline UpdateFleetPortSettingsRequest& AddInboundPermissionAuthorizations(IpPermission&& value) { m_inboundPermissionAuthorizationsHasBeenSet = true; m_inboundPermissionAuthorizations.push_back(std::move(value)); return *this; }

    /**
     * <p>Collection of port settings to be removed from the fleet record.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInboundPermissionRevocations() const{ return m_inboundPermissionRevocations; }

    /**
     * <p>Collection of port settings to be removed from the fleet record.</p>
     */
    inline void SetInboundPermissionRevocations(const Aws::Vector<IpPermission>& value) { m_inboundPermissionRevocationsHasBeenSet = true; m_inboundPermissionRevocations = value; }

    /**
     * <p>Collection of port settings to be removed from the fleet record.</p>
     */
    inline void SetInboundPermissionRevocations(Aws::Vector<IpPermission>&& value) { m_inboundPermissionRevocationsHasBeenSet = true; m_inboundPermissionRevocations = std::move(value); }

    /**
     * <p>Collection of port settings to be removed from the fleet record.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithInboundPermissionRevocations(const Aws::Vector<IpPermission>& value) { SetInboundPermissionRevocations(value); return *this;}

    /**
     * <p>Collection of port settings to be removed from the fleet record.</p>
     */
    inline UpdateFleetPortSettingsRequest& WithInboundPermissionRevocations(Aws::Vector<IpPermission>&& value) { SetInboundPermissionRevocations(std::move(value)); return *this;}

    /**
     * <p>Collection of port settings to be removed from the fleet record.</p>
     */
    inline UpdateFleetPortSettingsRequest& AddInboundPermissionRevocations(const IpPermission& value) { m_inboundPermissionRevocationsHasBeenSet = true; m_inboundPermissionRevocations.push_back(value); return *this; }

    /**
     * <p>Collection of port settings to be removed from the fleet record.</p>
     */
    inline UpdateFleetPortSettingsRequest& AddInboundPermissionRevocations(IpPermission&& value) { m_inboundPermissionRevocationsHasBeenSet = true; m_inboundPermissionRevocations.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::Vector<IpPermission> m_inboundPermissionAuthorizations;
    bool m_inboundPermissionAuthorizationsHasBeenSet;
    Aws::Vector<IpPermission> m_inboundPermissionRevocations;
    bool m_inboundPermissionRevocationsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
