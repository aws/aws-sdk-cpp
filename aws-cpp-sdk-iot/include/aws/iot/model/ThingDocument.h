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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>The thing search index document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingDocument">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ThingDocument
  {
  public:
    ThingDocument();
    ThingDocument(const Aws::Utils::Json::JsonValue& jsonValue);
    ThingDocument& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The thing name.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The thing name.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The thing name.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The thing name.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The thing name.</p>
     */
    inline ThingDocument& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The thing name.</p>
     */
    inline ThingDocument& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The thing name.</p>
     */
    inline ThingDocument& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The thing ID.</p>
     */
    inline const Aws::String& GetThingId() const{ return m_thingId; }

    /**
     * <p>The thing ID.</p>
     */
    inline void SetThingId(const Aws::String& value) { m_thingIdHasBeenSet = true; m_thingId = value; }

    /**
     * <p>The thing ID.</p>
     */
    inline void SetThingId(Aws::String&& value) { m_thingIdHasBeenSet = true; m_thingId = std::move(value); }

    /**
     * <p>The thing ID.</p>
     */
    inline void SetThingId(const char* value) { m_thingIdHasBeenSet = true; m_thingId.assign(value); }

    /**
     * <p>The thing ID.</p>
     */
    inline ThingDocument& WithThingId(const Aws::String& value) { SetThingId(value); return *this;}

    /**
     * <p>The thing ID.</p>
     */
    inline ThingDocument& WithThingId(Aws::String&& value) { SetThingId(std::move(value)); return *this;}

    /**
     * <p>The thing ID.</p>
     */
    inline ThingDocument& WithThingId(const char* value) { SetThingId(value); return *this;}


    /**
     * <p>The thing type name.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }

    /**
     * <p>The thing type name.</p>
     */
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }

    /**
     * <p>The thing type name.</p>
     */
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::move(value); }

    /**
     * <p>The thing type name.</p>
     */
    inline void SetThingTypeName(const char* value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName.assign(value); }

    /**
     * <p>The thing type name.</p>
     */
    inline ThingDocument& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The thing type name.</p>
     */
    inline ThingDocument& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}

    /**
     * <p>The thing type name.</p>
     */
    inline ThingDocument& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}


    /**
     * <p>Thing group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThingGroupNames() const{ return m_thingGroupNames; }

    /**
     * <p>Thing group names.</p>
     */
    inline void SetThingGroupNames(const Aws::Vector<Aws::String>& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames = value; }

    /**
     * <p>Thing group names.</p>
     */
    inline void SetThingGroupNames(Aws::Vector<Aws::String>&& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames = std::move(value); }

    /**
     * <p>Thing group names.</p>
     */
    inline ThingDocument& WithThingGroupNames(const Aws::Vector<Aws::String>& value) { SetThingGroupNames(value); return *this;}

    /**
     * <p>Thing group names.</p>
     */
    inline ThingDocument& WithThingGroupNames(Aws::Vector<Aws::String>&& value) { SetThingGroupNames(std::move(value)); return *this;}

    /**
     * <p>Thing group names.</p>
     */
    inline ThingDocument& AddThingGroupNames(const Aws::String& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames.push_back(value); return *this; }

    /**
     * <p>Thing group names.</p>
     */
    inline ThingDocument& AddThingGroupNames(Aws::String&& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Thing group names.</p>
     */
    inline ThingDocument& AddThingGroupNames(const char* value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames.push_back(value); return *this; }


    /**
     * <p>The attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes.</p>
     */
    inline ThingDocument& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes.</p>
     */
    inline ThingDocument& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes.</p>
     */
    inline ThingDocument& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The attributes.</p>
     */
    inline ThingDocument& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attributes.</p>
     */
    inline ThingDocument& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes.</p>
     */
    inline ThingDocument& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The attributes.</p>
     */
    inline ThingDocument& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The attributes.</p>
     */
    inline ThingDocument& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The attributes.</p>
     */
    inline ThingDocument& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The shadow.</p>
     */
    inline const Aws::String& GetShadow() const{ return m_shadow; }

    /**
     * <p>The shadow.</p>
     */
    inline void SetShadow(const Aws::String& value) { m_shadowHasBeenSet = true; m_shadow = value; }

    /**
     * <p>The shadow.</p>
     */
    inline void SetShadow(Aws::String&& value) { m_shadowHasBeenSet = true; m_shadow = std::move(value); }

    /**
     * <p>The shadow.</p>
     */
    inline void SetShadow(const char* value) { m_shadowHasBeenSet = true; m_shadow.assign(value); }

    /**
     * <p>The shadow.</p>
     */
    inline ThingDocument& WithShadow(const Aws::String& value) { SetShadow(value); return *this;}

    /**
     * <p>The shadow.</p>
     */
    inline ThingDocument& WithShadow(Aws::String&& value) { SetShadow(std::move(value)); return *this;}

    /**
     * <p>The shadow.</p>
     */
    inline ThingDocument& WithShadow(const char* value) { SetShadow(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::String m_thingId;
    bool m_thingIdHasBeenSet;

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet;

    Aws::Vector<Aws::String> m_thingGroupNames;
    bool m_thingGroupNamesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::String m_shadow;
    bool m_shadowHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
