/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The attribute payload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttributePayload">AWS
   * API Reference</a></p>
   */
  class AttributePayload
  {
  public:
    AWS_IOT_API AttributePayload();
    AWS_IOT_API AttributePayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AttributePayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline AttributePayload& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline AttributePayload& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline AttributePayload& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline AttributePayload& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline AttributePayload& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline AttributePayload& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline AttributePayload& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline AttributePayload& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A JSON string containing up to three key-value pair in JSON format. For
     * example:</p> <p> <code>{\"attributes\":{\"string1\":\"string2\"}}</code> </p>
     */
    inline AttributePayload& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether the list of attributes provided in the
     * <code>AttributePayload</code> is merged with the attributes stored in the
     * registry, instead of overwriting them.</p> <p>To remove an attribute, call
     * <code>UpdateThing</code> with an empty attribute value.</p>  <p>The
     * <code>merge</code> attribute is only valid when calling <code>UpdateThing</code>
     * or <code>UpdateThingGroup</code>.</p> 
     */
    inline bool GetMerge() const{ return m_merge; }

    /**
     * <p>Specifies whether the list of attributes provided in the
     * <code>AttributePayload</code> is merged with the attributes stored in the
     * registry, instead of overwriting them.</p> <p>To remove an attribute, call
     * <code>UpdateThing</code> with an empty attribute value.</p>  <p>The
     * <code>merge</code> attribute is only valid when calling <code>UpdateThing</code>
     * or <code>UpdateThingGroup</code>.</p> 
     */
    inline bool MergeHasBeenSet() const { return m_mergeHasBeenSet; }

    /**
     * <p>Specifies whether the list of attributes provided in the
     * <code>AttributePayload</code> is merged with the attributes stored in the
     * registry, instead of overwriting them.</p> <p>To remove an attribute, call
     * <code>UpdateThing</code> with an empty attribute value.</p>  <p>The
     * <code>merge</code> attribute is only valid when calling <code>UpdateThing</code>
     * or <code>UpdateThingGroup</code>.</p> 
     */
    inline void SetMerge(bool value) { m_mergeHasBeenSet = true; m_merge = value; }

    /**
     * <p>Specifies whether the list of attributes provided in the
     * <code>AttributePayload</code> is merged with the attributes stored in the
     * registry, instead of overwriting them.</p> <p>To remove an attribute, call
     * <code>UpdateThing</code> with an empty attribute value.</p>  <p>The
     * <code>merge</code> attribute is only valid when calling <code>UpdateThing</code>
     * or <code>UpdateThingGroup</code>.</p> 
     */
    inline AttributePayload& WithMerge(bool value) { SetMerge(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    bool m_merge;
    bool m_mergeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
