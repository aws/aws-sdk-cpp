﻿/**
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
  class AWS_IOT_API AddThingToThingGroupRequest : public IoTRequest
  {
  public:
    AddThingToThingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddThingToThingGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the group to which you are adding a thing.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }

    /**
     * <p>The name of the group to which you are adding a thing.</p>
     */
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }

    /**
     * <p>The name of the group to which you are adding a thing.</p>
     */
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = value; }

    /**
     * <p>The name of the group to which you are adding a thing.</p>
     */
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::move(value); }

    /**
     * <p>The name of the group to which you are adding a thing.</p>
     */
    inline void SetThingGroupName(const char* value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName.assign(value); }

    /**
     * <p>The name of the group to which you are adding a thing.</p>
     */
    inline AddThingToThingGroupRequest& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}

    /**
     * <p>The name of the group to which you are adding a thing.</p>
     */
    inline AddThingToThingGroupRequest& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the group to which you are adding a thing.</p>
     */
    inline AddThingToThingGroupRequest& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}


    /**
     * <p>The ARN of the group to which you are adding a thing.</p>
     */
    inline const Aws::String& GetThingGroupArn() const{ return m_thingGroupArn; }

    /**
     * <p>The ARN of the group to which you are adding a thing.</p>
     */
    inline bool ThingGroupArnHasBeenSet() const { return m_thingGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the group to which you are adding a thing.</p>
     */
    inline void SetThingGroupArn(const Aws::String& value) { m_thingGroupArnHasBeenSet = true; m_thingGroupArn = value; }

    /**
     * <p>The ARN of the group to which you are adding a thing.</p>
     */
    inline void SetThingGroupArn(Aws::String&& value) { m_thingGroupArnHasBeenSet = true; m_thingGroupArn = std::move(value); }

    /**
     * <p>The ARN of the group to which you are adding a thing.</p>
     */
    inline void SetThingGroupArn(const char* value) { m_thingGroupArnHasBeenSet = true; m_thingGroupArn.assign(value); }

    /**
     * <p>The ARN of the group to which you are adding a thing.</p>
     */
    inline AddThingToThingGroupRequest& WithThingGroupArn(const Aws::String& value) { SetThingGroupArn(value); return *this;}

    /**
     * <p>The ARN of the group to which you are adding a thing.</p>
     */
    inline AddThingToThingGroupRequest& WithThingGroupArn(Aws::String&& value) { SetThingGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the group to which you are adding a thing.</p>
     */
    inline AddThingToThingGroupRequest& WithThingGroupArn(const char* value) { SetThingGroupArn(value); return *this;}


    /**
     * <p>The name of the thing to add to a group.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing to add to a group.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing to add to a group.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing to add to a group.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing to add to a group.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing to add to a group.</p>
     */
    inline AddThingToThingGroupRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing to add to a group.</p>
     */
    inline AddThingToThingGroupRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing to add to a group.</p>
     */
    inline AddThingToThingGroupRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The ARN of the thing to add to a group.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>The ARN of the thing to add to a group.</p>
     */
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }

    /**
     * <p>The ARN of the thing to add to a group.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }

    /**
     * <p>The ARN of the thing to add to a group.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }

    /**
     * <p>The ARN of the thing to add to a group.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }

    /**
     * <p>The ARN of the thing to add to a group.</p>
     */
    inline AddThingToThingGroupRequest& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>The ARN of the thing to add to a group.</p>
     */
    inline AddThingToThingGroupRequest& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the thing to add to a group.</p>
     */
    inline AddThingToThingGroupRequest& WithThingArn(const char* value) { SetThingArn(value); return *this;}


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
    inline AddThingToThingGroupRequest& WithOverrideDynamicGroups(bool value) { SetOverrideDynamicGroups(value); return *this;}

  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet;

    Aws::String m_thingGroupArn;
    bool m_thingGroupArnHasBeenSet;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet;

    bool m_overrideDynamicGroups;
    bool m_overrideDynamicGroupsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
