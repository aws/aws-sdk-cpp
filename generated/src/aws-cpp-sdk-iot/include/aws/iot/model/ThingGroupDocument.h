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
    AWS_IOT_API ThingGroupDocument();
    AWS_IOT_API ThingGroupDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingGroupDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The thing group name.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = value; }
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::move(value); }
    inline void SetThingGroupName(const char* value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName.assign(value); }
    inline ThingGroupDocument& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}
    inline ThingGroupDocument& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}
    inline ThingGroupDocument& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group ID.</p>
     */
    inline const Aws::String& GetThingGroupId() const{ return m_thingGroupId; }
    inline bool ThingGroupIdHasBeenSet() const { return m_thingGroupIdHasBeenSet; }
    inline void SetThingGroupId(const Aws::String& value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId = value; }
    inline void SetThingGroupId(Aws::String&& value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId = std::move(value); }
    inline void SetThingGroupId(const char* value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId.assign(value); }
    inline ThingGroupDocument& WithThingGroupId(const Aws::String& value) { SetThingGroupId(value); return *this;}
    inline ThingGroupDocument& WithThingGroupId(Aws::String&& value) { SetThingGroupId(std::move(value)); return *this;}
    inline ThingGroupDocument& WithThingGroupId(const char* value) { SetThingGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group description.</p>
     */
    inline const Aws::String& GetThingGroupDescription() const{ return m_thingGroupDescription; }
    inline bool ThingGroupDescriptionHasBeenSet() const { return m_thingGroupDescriptionHasBeenSet; }
    inline void SetThingGroupDescription(const Aws::String& value) { m_thingGroupDescriptionHasBeenSet = true; m_thingGroupDescription = value; }
    inline void SetThingGroupDescription(Aws::String&& value) { m_thingGroupDescriptionHasBeenSet = true; m_thingGroupDescription = std::move(value); }
    inline void SetThingGroupDescription(const char* value) { m_thingGroupDescriptionHasBeenSet = true; m_thingGroupDescription.assign(value); }
    inline ThingGroupDocument& WithThingGroupDescription(const Aws::String& value) { SetThingGroupDescription(value); return *this;}
    inline ThingGroupDocument& WithThingGroupDescription(Aws::String&& value) { SetThingGroupDescription(std::move(value)); return *this;}
    inline ThingGroupDocument& WithThingGroupDescription(const char* value) { SetThingGroupDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline ThingGroupDocument& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline ThingGroupDocument& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline ThingGroupDocument& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline ThingGroupDocument& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ThingGroupDocument& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ThingGroupDocument& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ThingGroupDocument& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline ThingGroupDocument& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline ThingGroupDocument& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Parent group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParentGroupNames() const{ return m_parentGroupNames; }
    inline bool ParentGroupNamesHasBeenSet() const { return m_parentGroupNamesHasBeenSet; }
    inline void SetParentGroupNames(const Aws::Vector<Aws::String>& value) { m_parentGroupNamesHasBeenSet = true; m_parentGroupNames = value; }
    inline void SetParentGroupNames(Aws::Vector<Aws::String>&& value) { m_parentGroupNamesHasBeenSet = true; m_parentGroupNames = std::move(value); }
    inline ThingGroupDocument& WithParentGroupNames(const Aws::Vector<Aws::String>& value) { SetParentGroupNames(value); return *this;}
    inline ThingGroupDocument& WithParentGroupNames(Aws::Vector<Aws::String>&& value) { SetParentGroupNames(std::move(value)); return *this;}
    inline ThingGroupDocument& AddParentGroupNames(const Aws::String& value) { m_parentGroupNamesHasBeenSet = true; m_parentGroupNames.push_back(value); return *this; }
    inline ThingGroupDocument& AddParentGroupNames(Aws::String&& value) { m_parentGroupNamesHasBeenSet = true; m_parentGroupNames.push_back(std::move(value)); return *this; }
    inline ThingGroupDocument& AddParentGroupNames(const char* value) { m_parentGroupNamesHasBeenSet = true; m_parentGroupNames.push_back(value); return *this; }
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
