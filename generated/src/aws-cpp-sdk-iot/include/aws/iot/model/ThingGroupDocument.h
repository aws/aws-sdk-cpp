/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>The thing group search index document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingGroupDocument">AWS
   * API Reference</a></p>
   */
  class ThingGroupDocument
  {
  public:
    AWS_IOT_API ThingGroupDocument() = default;
    AWS_IOT_API ThingGroupDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingGroupDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The thing group name.</p>
     */
    inline const Aws::String& GetThingGroupName() const { return m_thingGroupName; }
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }
    template<typename ThingGroupNameT = Aws::String>
    void SetThingGroupName(ThingGroupNameT&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::forward<ThingGroupNameT>(value); }
    template<typename ThingGroupNameT = Aws::String>
    ThingGroupDocument& WithThingGroupName(ThingGroupNameT&& value) { SetThingGroupName(std::forward<ThingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group ID.</p>
     */
    inline const Aws::String& GetThingGroupId() const { return m_thingGroupId; }
    inline bool ThingGroupIdHasBeenSet() const { return m_thingGroupIdHasBeenSet; }
    template<typename ThingGroupIdT = Aws::String>
    void SetThingGroupId(ThingGroupIdT&& value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId = std::forward<ThingGroupIdT>(value); }
    template<typename ThingGroupIdT = Aws::String>
    ThingGroupDocument& WithThingGroupId(ThingGroupIdT&& value) { SetThingGroupId(std::forward<ThingGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group description.</p>
     */
    inline const Aws::String& GetThingGroupDescription() const { return m_thingGroupDescription; }
    inline bool ThingGroupDescriptionHasBeenSet() const { return m_thingGroupDescriptionHasBeenSet; }
    template<typename ThingGroupDescriptionT = Aws::String>
    void SetThingGroupDescription(ThingGroupDescriptionT&& value) { m_thingGroupDescriptionHasBeenSet = true; m_thingGroupDescription = std::forward<ThingGroupDescriptionT>(value); }
    template<typename ThingGroupDescriptionT = Aws::String>
    ThingGroupDocument& WithThingGroupDescription(ThingGroupDescriptionT&& value) { SetThingGroupDescription(std::forward<ThingGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    ThingGroupDocument& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    ThingGroupDocument& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Parent group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParentGroupNames() const { return m_parentGroupNames; }
    inline bool ParentGroupNamesHasBeenSet() const { return m_parentGroupNamesHasBeenSet; }
    template<typename ParentGroupNamesT = Aws::Vector<Aws::String>>
    void SetParentGroupNames(ParentGroupNamesT&& value) { m_parentGroupNamesHasBeenSet = true; m_parentGroupNames = std::forward<ParentGroupNamesT>(value); }
    template<typename ParentGroupNamesT = Aws::Vector<Aws::String>>
    ThingGroupDocument& WithParentGroupNames(ParentGroupNamesT&& value) { SetParentGroupNames(std::forward<ParentGroupNamesT>(value)); return *this;}
    template<typename ParentGroupNamesT = Aws::String>
    ThingGroupDocument& AddParentGroupNames(ParentGroupNamesT&& value) { m_parentGroupNamesHasBeenSet = true; m_parentGroupNames.emplace_back(std::forward<ParentGroupNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    Aws::String m_thingGroupId;
    bool m_thingGroupIdHasBeenSet = false;

    Aws::String m_thingGroupDescription;
    bool m_thingGroupDescriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<Aws::String> m_parentGroupNames;
    bool m_parentGroupNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
