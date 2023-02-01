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
  class DescribeThingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeThingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeThingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the thing group.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }

    /**
     * <p>The name of the thing group.</p>
     */
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }

    /**
     * <p>The name of the thing group.</p>
     */
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = value; }

    /**
     * <p>The name of the thing group.</p>
     */
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::move(value); }

    /**
     * <p>The name of the thing group.</p>
     */
    inline void SetThingGroupName(const char* value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName.assign(value); }

    /**
     * <p>The name of the thing group.</p>
     */
    inline DescribeThingGroupRequest& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}

    /**
     * <p>The name of the thing group.</p>
     */
    inline DescribeThingGroupRequest& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing group.</p>
     */
    inline DescribeThingGroupRequest& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}

  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
