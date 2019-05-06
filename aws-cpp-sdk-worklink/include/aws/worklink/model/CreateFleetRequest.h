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
  class AWS_WORKLINK_API CreateFleetRequest : public WorkLinkRequest
  {
  public:
    CreateFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleet"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A unique name for the fleet.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::move(value); }

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline CreateFleetRequest& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline CreateFleetRequest& WithFleetName(Aws::String&& value) { SetFleetName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the fleet.</p>
     */
    inline CreateFleetRequest& WithFleetName(const char* value) { SetFleetName(value); return *this;}


    /**
     * <p>The fleet name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The fleet name to display.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The fleet name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The fleet name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The fleet name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The fleet name to display.</p>
     */
    inline CreateFleetRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The fleet name to display.</p>
     */
    inline CreateFleetRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The fleet name to display.</p>
     */
    inline CreateFleetRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


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
    inline CreateFleetRequest& WithOptimizeForEndUserLocation(bool value) { SetOptimizeForEndUserLocation(value); return *this;}

  private:

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    bool m_optimizeForEndUserLocation;
    bool m_optimizeForEndUserLocationHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
