/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingGroupProperties.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateThingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateThingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The thing group to update.</p>
     */
    inline const Aws::String& GetThingGroupName() const { return m_thingGroupName; }
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }
    template<typename ThingGroupNameT = Aws::String>
    void SetThingGroupName(ThingGroupNameT&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::forward<ThingGroupNameT>(value); }
    template<typename ThingGroupNameT = Aws::String>
    UpdateThingGroupRequest& WithThingGroupName(ThingGroupNameT&& value) { SetThingGroupName(std::forward<ThingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group properties.</p>
     */
    inline const ThingGroupProperties& GetThingGroupProperties() const { return m_thingGroupProperties; }
    inline bool ThingGroupPropertiesHasBeenSet() const { return m_thingGroupPropertiesHasBeenSet; }
    template<typename ThingGroupPropertiesT = ThingGroupProperties>
    void SetThingGroupProperties(ThingGroupPropertiesT&& value) { m_thingGroupPropertiesHasBeenSet = true; m_thingGroupProperties = std::forward<ThingGroupPropertiesT>(value); }
    template<typename ThingGroupPropertiesT = ThingGroupProperties>
    UpdateThingGroupRequest& WithThingGroupProperties(ThingGroupPropertiesT&& value) { SetThingGroupProperties(std::forward<ThingGroupPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected version of the thing group. If this does not match the version
     * of the thing group being updated, the update will fail.</p>
     */
    inline long long GetExpectedVersion() const { return m_expectedVersion; }
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }
    inline UpdateThingGroupRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    ThingGroupProperties m_thingGroupProperties;
    bool m_thingGroupPropertiesHasBeenSet = false;

    long long m_expectedVersion{0};
    bool m_expectedVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
