/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/worklink/WorkLinkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkLink
{
namespace Model
{

  /**
   */
  class AWS_WORKLINK_API UpdateFleetMetadataRequest : public WorkLinkRequest
  {
  public:
    UpdateFleetMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleetMetadata"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline UpdateFleetMetadataRequest& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline UpdateFleetMetadataRequest& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline UpdateFleetMetadataRequest& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The fleet name to display. The existing DisplayName is unset if null is
     * passed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The fleet name to display. The existing DisplayName is unset if null is
     * passed.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The fleet name to display. The existing DisplayName is unset if null is
     * passed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The fleet name to display. The existing DisplayName is unset if null is
     * passed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The fleet name to display. The existing DisplayName is unset if null is
     * passed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The fleet name to display. The existing DisplayName is unset if null is
     * passed.</p>
     */
    inline UpdateFleetMetadataRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The fleet name to display. The existing DisplayName is unset if null is
     * passed.</p>
     */
    inline UpdateFleetMetadataRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The fleet name to display. The existing DisplayName is unset if null is
     * passed.</p>
     */
    inline UpdateFleetMetadataRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The option to optimize for better performance by routing traffic through the
     * closest AWS Region to users, which may be outside of your home Region.</p>
     */
    inline bool GetOptimizeForEndUserLocation() const{ return m_optimizeForEndUserLocation; }

    /**
     * <p>The option to optimize for better performance by routing traffic through the
     * closest AWS Region to users, which may be outside of your home Region.</p>
     */
    inline bool OptimizeForEndUserLocationHasBeenSet() const { return m_optimizeForEndUserLocationHasBeenSet; }

    /**
     * <p>The option to optimize for better performance by routing traffic through the
     * closest AWS Region to users, which may be outside of your home Region.</p>
     */
    inline void SetOptimizeForEndUserLocation(bool value) { m_optimizeForEndUserLocationHasBeenSet = true; m_optimizeForEndUserLocation = value; }

    /**
     * <p>The option to optimize for better performance by routing traffic through the
     * closest AWS Region to users, which may be outside of your home Region.</p>
     */
    inline UpdateFleetMetadataRequest& WithOptimizeForEndUserLocation(bool value) { SetOptimizeForEndUserLocation(value); return *this;}

  private:

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    bool m_optimizeForEndUserLocation;
    bool m_optimizeForEndUserLocationHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
