/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateThingGroupsForThingRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateThingGroupsForThingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThingGroupsForThing"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The thing whose group memberships will be updated.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    UpdateThingGroupsForThingRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The groups to which the thing will be added.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThingGroupsToAdd() const { return m_thingGroupsToAdd; }
    inline bool ThingGroupsToAddHasBeenSet() const { return m_thingGroupsToAddHasBeenSet; }
    template<typename ThingGroupsToAddT = Aws::Vector<Aws::String>>
    void SetThingGroupsToAdd(ThingGroupsToAddT&& value) { m_thingGroupsToAddHasBeenSet = true; m_thingGroupsToAdd = std::forward<ThingGroupsToAddT>(value); }
    template<typename ThingGroupsToAddT = Aws::Vector<Aws::String>>
    UpdateThingGroupsForThingRequest& WithThingGroupsToAdd(ThingGroupsToAddT&& value) { SetThingGroupsToAdd(std::forward<ThingGroupsToAddT>(value)); return *this;}
    template<typename ThingGroupsToAddT = Aws::String>
    UpdateThingGroupsForThingRequest& AddThingGroupsToAdd(ThingGroupsToAddT&& value) { m_thingGroupsToAddHasBeenSet = true; m_thingGroupsToAdd.emplace_back(std::forward<ThingGroupsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The groups from which the thing will be removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThingGroupsToRemove() const { return m_thingGroupsToRemove; }
    inline bool ThingGroupsToRemoveHasBeenSet() const { return m_thingGroupsToRemoveHasBeenSet; }
    template<typename ThingGroupsToRemoveT = Aws::Vector<Aws::String>>
    void SetThingGroupsToRemove(ThingGroupsToRemoveT&& value) { m_thingGroupsToRemoveHasBeenSet = true; m_thingGroupsToRemove = std::forward<ThingGroupsToRemoveT>(value); }
    template<typename ThingGroupsToRemoveT = Aws::Vector<Aws::String>>
    UpdateThingGroupsForThingRequest& WithThingGroupsToRemove(ThingGroupsToRemoveT&& value) { SetThingGroupsToRemove(std::forward<ThingGroupsToRemoveT>(value)); return *this;}
    template<typename ThingGroupsToRemoveT = Aws::String>
    UpdateThingGroupsForThingRequest& AddThingGroupsToRemove(ThingGroupsToRemoveT&& value) { m_thingGroupsToRemoveHasBeenSet = true; m_thingGroupsToRemove.emplace_back(std::forward<ThingGroupsToRemoveT>(value)); return *this; }
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
    inline UpdateThingGroupsForThingRequest& WithOverrideDynamicGroups(bool value) { SetOverrideDynamicGroups(value); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_thingGroupsToAdd;
    bool m_thingGroupsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_thingGroupsToRemove;
    bool m_thingGroupsToRemoveHasBeenSet = false;

    bool m_overrideDynamicGroups{false};
    bool m_overrideDynamicGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
