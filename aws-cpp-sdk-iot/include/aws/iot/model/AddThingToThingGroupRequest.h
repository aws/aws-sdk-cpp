﻿/*
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

  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet;

    Aws::String m_thingGroupArn;
    bool m_thingGroupArnHasBeenSet;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
