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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>The attribute payload, a JSON string containing up to three key-value pairs
   * (for example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
   */
  class AWS_IOT_API AttributePayload
  {
  public:
    AttributePayload();
    AttributePayload(const Aws::Utils::Json::JsonValue& jsonValue);
    AttributePayload& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline AttributePayload& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline AttributePayload& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline AttributePayload& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline AttributePayload& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline AttributePayload& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline AttributePayload& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline AttributePayload& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline AttributePayload& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format (for
     * example, {\"attributes\":{\"string1\":\"string2\"}}).</p>
     */
    inline AttributePayload& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

  private:
    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
