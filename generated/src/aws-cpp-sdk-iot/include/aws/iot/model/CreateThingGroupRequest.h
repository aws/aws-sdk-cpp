/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateThingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateThingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateThingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The thing group name to create.</p>
     */
    inline const Aws::String& GetThingGroupName() const { return m_thingGroupName; }
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }
    template<typename ThingGroupNameT = Aws::String>
    void SetThingGroupName(ThingGroupNameT&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::forward<ThingGroupNameT>(value); }
    template<typename ThingGroupNameT = Aws::String>
    CreateThingGroupRequest& WithThingGroupName(ThingGroupNameT&& value) { SetThingGroupName(std::forward<ThingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parent thing group.</p>
     */
    inline const Aws::String& GetParentGroupName() const { return m_parentGroupName; }
    inline bool ParentGroupNameHasBeenSet() const { return m_parentGroupNameHasBeenSet; }
    template<typename ParentGroupNameT = Aws::String>
    void SetParentGroupName(ParentGroupNameT&& value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName = std::forward<ParentGroupNameT>(value); }
    template<typename ParentGroupNameT = Aws::String>
    CreateThingGroupRequest& WithParentGroupName(ParentGroupNameT&& value) { SetParentGroupName(std::forward<ParentGroupNameT>(value)); return *this;}
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
    CreateThingGroupRequest& WithThingGroupProperties(ThingGroupPropertiesT&& value) { SetThingGroupProperties(std::forward<ThingGroupPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the thing group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateThingGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateThingGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    Aws::String m_parentGroupName;
    bool m_parentGroupNameHasBeenSet = false;

    ThingGroupProperties m_thingGroupProperties;
    bool m_thingGroupPropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
