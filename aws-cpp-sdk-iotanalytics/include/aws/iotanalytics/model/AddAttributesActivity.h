/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>An activity that adds other attributes based on existing attributes in the
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/AddAttributesActivity">AWS
   * API Reference</a></p>
   */
  class AddAttributesActivity
  {
  public:
    AWS_IOTANALYTICS_API AddAttributesActivity();
    AWS_IOTANALYTICS_API AddAttributesActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API AddAttributesActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the addAttributes activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the addAttributes activity.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the addAttributes activity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the addAttributes activity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the addAttributes activity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the addAttributes activity.</p>
     */
    inline AddAttributesActivity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the addAttributes activity.</p>
     */
    inline AddAttributesActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the addAttributes activity.</p>
     */
    inline AddAttributesActivity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline AddAttributesActivity& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline AddAttributesActivity& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline AddAttributesActivity& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline AddAttributesActivity& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline AddAttributesActivity& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline AddAttributesActivity& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline AddAttributesActivity& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline AddAttributesActivity& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of 1-50 <code>AttributeNameMapping</code> objects that map an existing
     * attribute to a new attribute.</p>  <p>The existing attributes remain in
     * the message, so if you want to remove the originals, use
     * <code>RemoveAttributeActivity</code>.</p> 
     */
    inline AddAttributesActivity& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline const Aws::String& GetNext() const{ return m_next; }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline void SetNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next = value; }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline void SetNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline void SetNext(const char* value) { m_nextHasBeenSet = true; m_next.assign(value); }

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline AddAttributesActivity& WithNext(const Aws::String& value) { SetNext(value); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline AddAttributesActivity& WithNext(Aws::String&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline AddAttributesActivity& WithNext(const char* value) { SetNext(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
