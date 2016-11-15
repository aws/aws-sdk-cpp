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
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AttributePayload.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the UpdateThing operation.</p>
   */
  class AWS_IOT_API UpdateThingRequest : public IoTRequest
  {
  public:
    UpdateThingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the thing to update.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing to update.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing to update.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing to update.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing to update.</p>
     */
    inline UpdateThingRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing to update.</p>
     */
    inline UpdateThingRequest& WithThingName(Aws::String&& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing to update.</p>
     */
    inline UpdateThingRequest& WithThingName(const char* value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(const char* value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName.assign(value); }

    /**
     * <p>The name of the thing type.</p>
     */
    inline UpdateThingRequest& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline UpdateThingRequest& WithThingTypeName(Aws::String&& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline UpdateThingRequest& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}

    /**
     * <p>A list of thing attributes, a JSON string containing name-value pairs. For
     * example:</p> <p><code>{\"attributes\":{\"name1\":\"value2\"}})</code></p>
     * <p>This data is used to add new attributes or update existing attributes.</p>
     */
    inline const AttributePayload& GetAttributePayload() const{ return m_attributePayload; }

    /**
     * <p>A list of thing attributes, a JSON string containing name-value pairs. For
     * example:</p> <p><code>{\"attributes\":{\"name1\":\"value2\"}})</code></p>
     * <p>This data is used to add new attributes or update existing attributes.</p>
     */
    inline void SetAttributePayload(const AttributePayload& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = value; }

    /**
     * <p>A list of thing attributes, a JSON string containing name-value pairs. For
     * example:</p> <p><code>{\"attributes\":{\"name1\":\"value2\"}})</code></p>
     * <p>This data is used to add new attributes or update existing attributes.</p>
     */
    inline void SetAttributePayload(AttributePayload&& value) { m_attributePayloadHasBeenSet = true; m_attributePayload = value; }

    /**
     * <p>A list of thing attributes, a JSON string containing name-value pairs. For
     * example:</p> <p><code>{\"attributes\":{\"name1\":\"value2\"}})</code></p>
     * <p>This data is used to add new attributes or update existing attributes.</p>
     */
    inline UpdateThingRequest& WithAttributePayload(const AttributePayload& value) { SetAttributePayload(value); return *this;}

    /**
     * <p>A list of thing attributes, a JSON string containing name-value pairs. For
     * example:</p> <p><code>{\"attributes\":{\"name1\":\"value2\"}})</code></p>
     * <p>This data is used to add new attributes or update existing attributes.</p>
     */
    inline UpdateThingRequest& WithAttributePayload(AttributePayload&& value) { SetAttributePayload(value); return *this;}

    /**
     * <p>The expected version of the thing record in the registry. If the version of
     * the record in the registry does not match the expected version specified in the
     * request, the <code>UpdateThing</code> request is rejected with a
     * <code>VersionConflictException</code>.</p>
     */
    inline long long GetExpectedVersion() const{ return m_expectedVersion; }

    /**
     * <p>The expected version of the thing record in the registry. If the version of
     * the record in the registry does not match the expected version specified in the
     * request, the <code>UpdateThing</code> request is rejected with a
     * <code>VersionConflictException</code>.</p>
     */
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }

    /**
     * <p>The expected version of the thing record in the registry. If the version of
     * the record in the registry does not match the expected version specified in the
     * request, the <code>UpdateThing</code> request is rejected with a
     * <code>VersionConflictException</code>.</p>
     */
    inline UpdateThingRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}

    /**
     * <p>Remove a thing type association. If <b>true</b>, the assocation is
     * removed.</p>
     */
    inline bool GetRemoveThingType() const{ return m_removeThingType; }

    /**
     * <p>Remove a thing type association. If <b>true</b>, the assocation is
     * removed.</p>
     */
    inline void SetRemoveThingType(bool value) { m_removeThingTypeHasBeenSet = true; m_removeThingType = value; }

    /**
     * <p>Remove a thing type association. If <b>true</b>, the assocation is
     * removed.</p>
     */
    inline UpdateThingRequest& WithRemoveThingType(bool value) { SetRemoveThingType(value); return *this;}

  private:
    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;
    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet;
    AttributePayload m_attributePayload;
    bool m_attributePayloadHasBeenSet;
    long long m_expectedVersion;
    bool m_expectedVersionHasBeenSet;
    bool m_removeThingType;
    bool m_removeThingTypeHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
