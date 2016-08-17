/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSMap.h>

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
   * <p>The properties of the thing, including thing name, thing type name, and a
   * list of thing attributes.</p>
   */
  class AWS_IOT_API ThingAttribute
  {
  public:
    ThingAttribute();
    ThingAttribute(const Aws::Utils::Json::JsonValue& jsonValue);
    ThingAttribute& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing.</p>
     */
    inline ThingAttribute& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline ThingAttribute& WithThingName(Aws::String&& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline ThingAttribute& WithThingName(const char* value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing type, if the thing has been associated with a type.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }

    /**
     * <p>The name of the thing type, if the thing has been associated with a type.</p>
     */
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }

    /**
     * <p>The name of the thing type, if the thing has been associated with a type.</p>
     */
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }

    /**
     * <p>The name of the thing type, if the thing has been associated with a type.</p>
     */
    inline void SetThingTypeName(const char* value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName.assign(value); }

    /**
     * <p>The name of the thing type, if the thing has been associated with a type.</p>
     */
    inline ThingAttribute& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type, if the thing has been associated with a type.</p>
     */
    inline ThingAttribute& WithThingTypeName(Aws::String&& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type, if the thing has been associated with a type.</p>
     */
    inline ThingAttribute& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline ThingAttribute& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline ThingAttribute& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline ThingAttribute& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline ThingAttribute& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline ThingAttribute& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline ThingAttribute& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline ThingAttribute& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline ThingAttribute& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A list of thing attributes which are name-value pairs.</p>
     */
    inline ThingAttribute& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>The version of the thing record in the registry.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of the thing record in the registry.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the thing record in the registry.</p>
     */
    inline ThingAttribute& WithVersion(long long value) { SetVersion(value); return *this;}

  private:
    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;
    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
    long long m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
