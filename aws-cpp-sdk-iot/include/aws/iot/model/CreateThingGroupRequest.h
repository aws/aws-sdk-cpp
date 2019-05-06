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
#include <aws/iot/model/ThingGroupProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API CreateThingGroupRequest : public IoTRequest
  {
  public:
    CreateThingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateThingGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The thing group name to create.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }

    /**
     * <p>The thing group name to create.</p>
     */
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }

    /**
     * <p>The thing group name to create.</p>
     */
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = value; }

    /**
     * <p>The thing group name to create.</p>
     */
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::move(value); }

    /**
     * <p>The thing group name to create.</p>
     */
    inline void SetThingGroupName(const char* value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName.assign(value); }

    /**
     * <p>The thing group name to create.</p>
     */
    inline CreateThingGroupRequest& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}

    /**
     * <p>The thing group name to create.</p>
     */
    inline CreateThingGroupRequest& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}

    /**
     * <p>The thing group name to create.</p>
     */
    inline CreateThingGroupRequest& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}


    /**
     * <p>The name of the parent thing group.</p>
     */
    inline const Aws::String& GetParentGroupName() const{ return m_parentGroupName; }

    /**
     * <p>The name of the parent thing group.</p>
     */
    inline bool ParentGroupNameHasBeenSet() const { return m_parentGroupNameHasBeenSet; }

    /**
     * <p>The name of the parent thing group.</p>
     */
    inline void SetParentGroupName(const Aws::String& value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName = value; }

    /**
     * <p>The name of the parent thing group.</p>
     */
    inline void SetParentGroupName(Aws::String&& value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName = std::move(value); }

    /**
     * <p>The name of the parent thing group.</p>
     */
    inline void SetParentGroupName(const char* value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName.assign(value); }

    /**
     * <p>The name of the parent thing group.</p>
     */
    inline CreateThingGroupRequest& WithParentGroupName(const Aws::String& value) { SetParentGroupName(value); return *this;}

    /**
     * <p>The name of the parent thing group.</p>
     */
    inline CreateThingGroupRequest& WithParentGroupName(Aws::String&& value) { SetParentGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parent thing group.</p>
     */
    inline CreateThingGroupRequest& WithParentGroupName(const char* value) { SetParentGroupName(value); return *this;}


    /**
     * <p>The thing group properties.</p>
     */
    inline const ThingGroupProperties& GetThingGroupProperties() const{ return m_thingGroupProperties; }

    /**
     * <p>The thing group properties.</p>
     */
    inline bool ThingGroupPropertiesHasBeenSet() const { return m_thingGroupPropertiesHasBeenSet; }

    /**
     * <p>The thing group properties.</p>
     */
    inline void SetThingGroupProperties(const ThingGroupProperties& value) { m_thingGroupPropertiesHasBeenSet = true; m_thingGroupProperties = value; }

    /**
     * <p>The thing group properties.</p>
     */
    inline void SetThingGroupProperties(ThingGroupProperties&& value) { m_thingGroupPropertiesHasBeenSet = true; m_thingGroupProperties = std::move(value); }

    /**
     * <p>The thing group properties.</p>
     */
    inline CreateThingGroupRequest& WithThingGroupProperties(const ThingGroupProperties& value) { SetThingGroupProperties(value); return *this;}

    /**
     * <p>The thing group properties.</p>
     */
    inline CreateThingGroupRequest& WithThingGroupProperties(ThingGroupProperties&& value) { SetThingGroupProperties(std::move(value)); return *this;}


    /**
     * <p>Metadata which can be used to manage the thing group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the thing group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the thing group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the thing group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the thing group.</p>
     */
    inline CreateThingGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the thing group.</p>
     */
    inline CreateThingGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the thing group.</p>
     */
    inline CreateThingGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the thing group.</p>
     */
    inline CreateThingGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet;

    Aws::String m_parentGroupName;
    bool m_parentGroupNameHasBeenSet;

    ThingGroupProperties m_thingGroupProperties;
    bool m_thingGroupPropertiesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
