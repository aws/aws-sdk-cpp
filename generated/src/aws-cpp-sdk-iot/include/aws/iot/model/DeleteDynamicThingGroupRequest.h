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
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class DeleteDynamicThingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteDynamicThingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDynamicThingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the dynamic thing group to delete.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }

    /**
     * <p>The name of the dynamic thing group to delete.</p>
     */
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }

    /**
     * <p>The name of the dynamic thing group to delete.</p>
     */
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = value; }

    /**
     * <p>The name of the dynamic thing group to delete.</p>
     */
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::move(value); }

    /**
     * <p>The name of the dynamic thing group to delete.</p>
     */
    inline void SetThingGroupName(const char* value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName.assign(value); }

    /**
     * <p>The name of the dynamic thing group to delete.</p>
     */
    inline DeleteDynamicThingGroupRequest& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}

    /**
     * <p>The name of the dynamic thing group to delete.</p>
     */
    inline DeleteDynamicThingGroupRequest& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the dynamic thing group to delete.</p>
     */
    inline DeleteDynamicThingGroupRequest& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}


    /**
     * <p>The expected version of the dynamic thing group to delete.</p>
     */
    inline long long GetExpectedVersion() const{ return m_expectedVersion; }

    /**
     * <p>The expected version of the dynamic thing group to delete.</p>
     */
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }

    /**
     * <p>The expected version of the dynamic thing group to delete.</p>
     */
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }

    /**
     * <p>The expected version of the dynamic thing group to delete.</p>
     */
    inline DeleteDynamicThingGroupRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}

  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    long long m_expectedVersion;
    bool m_expectedVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
