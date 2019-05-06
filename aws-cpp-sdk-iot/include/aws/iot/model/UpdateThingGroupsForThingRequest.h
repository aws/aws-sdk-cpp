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
  class AWS_IOT_API UpdateThingGroupsForThingRequest : public IoTRequest
  {
  public:
    UpdateThingGroupsForThingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThingGroupsForThing"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The thing whose group memberships will be updated.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The thing whose group memberships will be updated.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The thing whose group memberships will be updated.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The thing whose group memberships will be updated.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The thing whose group memberships will be updated.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The thing whose group memberships will be updated.</p>
     */
    inline UpdateThingGroupsForThingRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The thing whose group memberships will be updated.</p>
     */
    inline UpdateThingGroupsForThingRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The thing whose group memberships will be updated.</p>
     */
    inline UpdateThingGroupsForThingRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The groups to which the thing will be added.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThingGroupsToAdd() const{ return m_thingGroupsToAdd; }

    /**
     * <p>The groups to which the thing will be added.</p>
     */
    inline bool ThingGroupsToAddHasBeenSet() const { return m_thingGroupsToAddHasBeenSet; }

    /**
     * <p>The groups to which the thing will be added.</p>
     */
    inline void SetThingGroupsToAdd(const Aws::Vector<Aws::String>& value) { m_thingGroupsToAddHasBeenSet = true; m_thingGroupsToAdd = value; }

    /**
     * <p>The groups to which the thing will be added.</p>
     */
    inline void SetThingGroupsToAdd(Aws::Vector<Aws::String>&& value) { m_thingGroupsToAddHasBeenSet = true; m_thingGroupsToAdd = std::move(value); }

    /**
     * <p>The groups to which the thing will be added.</p>
     */
    inline UpdateThingGroupsForThingRequest& WithThingGroupsToAdd(const Aws::Vector<Aws::String>& value) { SetThingGroupsToAdd(value); return *this;}

    /**
     * <p>The groups to which the thing will be added.</p>
     */
    inline UpdateThingGroupsForThingRequest& WithThingGroupsToAdd(Aws::Vector<Aws::String>&& value) { SetThingGroupsToAdd(std::move(value)); return *this;}

    /**
     * <p>The groups to which the thing will be added.</p>
     */
    inline UpdateThingGroupsForThingRequest& AddThingGroupsToAdd(const Aws::String& value) { m_thingGroupsToAddHasBeenSet = true; m_thingGroupsToAdd.push_back(value); return *this; }

    /**
     * <p>The groups to which the thing will be added.</p>
     */
    inline UpdateThingGroupsForThingRequest& AddThingGroupsToAdd(Aws::String&& value) { m_thingGroupsToAddHasBeenSet = true; m_thingGroupsToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>The groups to which the thing will be added.</p>
     */
    inline UpdateThingGroupsForThingRequest& AddThingGroupsToAdd(const char* value) { m_thingGroupsToAddHasBeenSet = true; m_thingGroupsToAdd.push_back(value); return *this; }


    /**
     * <p>The groups from which the thing will be removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThingGroupsToRemove() const{ return m_thingGroupsToRemove; }

    /**
     * <p>The groups from which the thing will be removed.</p>
     */
    inline bool ThingGroupsToRemoveHasBeenSet() const { return m_thingGroupsToRemoveHasBeenSet; }

    /**
     * <p>The groups from which the thing will be removed.</p>
     */
    inline void SetThingGroupsToRemove(const Aws::Vector<Aws::String>& value) { m_thingGroupsToRemoveHasBeenSet = true; m_thingGroupsToRemove = value; }

    /**
     * <p>The groups from which the thing will be removed.</p>
     */
    inline void SetThingGroupsToRemove(Aws::Vector<Aws::String>&& value) { m_thingGroupsToRemoveHasBeenSet = true; m_thingGroupsToRemove = std::move(value); }

    /**
     * <p>The groups from which the thing will be removed.</p>
     */
    inline UpdateThingGroupsForThingRequest& WithThingGroupsToRemove(const Aws::Vector<Aws::String>& value) { SetThingGroupsToRemove(value); return *this;}

    /**
     * <p>The groups from which the thing will be removed.</p>
     */
    inline UpdateThingGroupsForThingRequest& WithThingGroupsToRemove(Aws::Vector<Aws::String>&& value) { SetThingGroupsToRemove(std::move(value)); return *this;}

    /**
     * <p>The groups from which the thing will be removed.</p>
     */
    inline UpdateThingGroupsForThingRequest& AddThingGroupsToRemove(const Aws::String& value) { m_thingGroupsToRemoveHasBeenSet = true; m_thingGroupsToRemove.push_back(value); return *this; }

    /**
     * <p>The groups from which the thing will be removed.</p>
     */
    inline UpdateThingGroupsForThingRequest& AddThingGroupsToRemove(Aws::String&& value) { m_thingGroupsToRemoveHasBeenSet = true; m_thingGroupsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The groups from which the thing will be removed.</p>
     */
    inline UpdateThingGroupsForThingRequest& AddThingGroupsToRemove(const char* value) { m_thingGroupsToRemoveHasBeenSet = true; m_thingGroupsToRemove.push_back(value); return *this; }


    /**
     * <p>Override dynamic thing groups with static thing groups when 10-group limit is
     * reached. If a thing belongs to 10 thing groups, and one or more of those groups
     * are dynamic thing groups, adding a thing to a static group removes the thing
     * from the last dynamic group.</p>
     */
    inline bool GetOverrideDynamicGroups() const{ return m_overrideDynamicGroups; }

    /**
     * <p>Override dynamic thing groups with static thing groups when 10-group limit is
     * reached. If a thing belongs to 10 thing groups, and one or more of those groups
     * are dynamic thing groups, adding a thing to a static group removes the thing
     * from the last dynamic group.</p>
     */
    inline bool OverrideDynamicGroupsHasBeenSet() const { return m_overrideDynamicGroupsHasBeenSet; }

    /**
     * <p>Override dynamic thing groups with static thing groups when 10-group limit is
     * reached. If a thing belongs to 10 thing groups, and one or more of those groups
     * are dynamic thing groups, adding a thing to a static group removes the thing
     * from the last dynamic group.</p>
     */
    inline void SetOverrideDynamicGroups(bool value) { m_overrideDynamicGroupsHasBeenSet = true; m_overrideDynamicGroups = value; }

    /**
     * <p>Override dynamic thing groups with static thing groups when 10-group limit is
     * reached. If a thing belongs to 10 thing groups, and one or more of those groups
     * are dynamic thing groups, adding a thing to a static group removes the thing
     * from the last dynamic group.</p>
     */
    inline UpdateThingGroupsForThingRequest& WithOverrideDynamicGroups(bool value) { SetOverrideDynamicGroups(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::Vector<Aws::String> m_thingGroupsToAdd;
    bool m_thingGroupsToAddHasBeenSet;

    Aws::Vector<Aws::String> m_thingGroupsToRemove;
    bool m_thingGroupsToRemoveHasBeenSet;

    bool m_overrideDynamicGroups;
    bool m_overrideDynamicGroupsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
