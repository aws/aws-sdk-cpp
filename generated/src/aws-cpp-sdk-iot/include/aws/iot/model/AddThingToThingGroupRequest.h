/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AddThingToThingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API AddThingToThingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddThingToThingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the group to which you are adding a thing.</p>
     */
    inline const Aws::String& GetThingGroupName() const { return m_thingGroupName; }
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }
    template<typename ThingGroupNameT = Aws::String>
    void SetThingGroupName(ThingGroupNameT&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::forward<ThingGroupNameT>(value); }
    template<typename ThingGroupNameT = Aws::String>
    AddThingToThingGroupRequest& WithThingGroupName(ThingGroupNameT&& value) { SetThingGroupName(std::forward<ThingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the group to which you are adding a thing.</p>
     */
    inline const Aws::String& GetThingGroupArn() const { return m_thingGroupArn; }
    inline bool ThingGroupArnHasBeenSet() const { return m_thingGroupArnHasBeenSet; }
    template<typename ThingGroupArnT = Aws::String>
    void SetThingGroupArn(ThingGroupArnT&& value) { m_thingGroupArnHasBeenSet = true; m_thingGroupArn = std::forward<ThingGroupArnT>(value); }
    template<typename ThingGroupArnT = Aws::String>
    AddThingToThingGroupRequest& WithThingGroupArn(ThingGroupArnT&& value) { SetThingGroupArn(std::forward<ThingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing to add to a group.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    AddThingToThingGroupRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the thing to add to a group.</p>
     */
    inline const Aws::String& GetThingArn() const { return m_thingArn; }
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }
    template<typename ThingArnT = Aws::String>
    void SetThingArn(ThingArnT&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::forward<ThingArnT>(value); }
    template<typename ThingArnT = Aws::String>
    AddThingToThingGroupRequest& WithThingArn(ThingArnT&& value) { SetThingArn(std::forward<ThingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Override dynamic thing groups with static thing groups when 10-group limit is
     * reached. If a thing belongs to 10 thing groups, and one or more of those groups
     * are dynamic thing groups, adding a thing to a static group removes the thing
     * from the last dynamic group.</p>
     */
    inline bool GetOverrideDynamicGroups() const { return m_overrideDynamicGroups; }
    inline bool OverrideDynamicGroupsHasBeenSet() const { return m_overrideDynamicGroupsHasBeenSet; }
    inline void SetOverrideDynamicGroups(bool value) { m_overrideDynamicGroupsHasBeenSet = true; m_overrideDynamicGroups = value; }
    inline AddThingToThingGroupRequest& WithOverrideDynamicGroups(bool value) { SetOverrideDynamicGroups(value); return *this;}
    ///@}
  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    Aws::String m_thingGroupArn;
    bool m_thingGroupArnHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;

    bool m_overrideDynamicGroups{false};
    bool m_overrideDynamicGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
