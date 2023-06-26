/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>An activity that removes attributes from a message.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/RemoveAttributesActivity">AWS
   * API Reference</a></p>
   */
  class RemoveAttributesActivity
  {
  public:
    AWS_IOTANALYTICS_API RemoveAttributesActivity();
    AWS_IOTANALYTICS_API RemoveAttributesActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API RemoveAttributesActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the <code>removeAttributes</code> activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>removeAttributes</code> activity.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>removeAttributes</code> activity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>removeAttributes</code> activity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>removeAttributes</code> activity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>removeAttributes</code> activity.</p>
     */
    inline RemoveAttributesActivity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>removeAttributes</code> activity.</p>
     */
    inline RemoveAttributesActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>removeAttributes</code> activity.</p>
     */
    inline RemoveAttributesActivity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of 1-50 attributes to remove from the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A list of 1-50 attributes to remove from the message.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A list of 1-50 attributes to remove from the message.</p>
     */
    inline void SetAttributes(const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of 1-50 attributes to remove from the message.</p>
     */
    inline void SetAttributes(Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A list of 1-50 attributes to remove from the message.</p>
     */
    inline RemoveAttributesActivity& WithAttributes(const Aws::Vector<Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of 1-50 attributes to remove from the message.</p>
     */
    inline RemoveAttributesActivity& WithAttributes(Aws::Vector<Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of 1-50 attributes to remove from the message.</p>
     */
    inline RemoveAttributesActivity& AddAttributes(const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>A list of 1-50 attributes to remove from the message.</p>
     */
    inline RemoveAttributesActivity& AddAttributes(Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of 1-50 attributes to remove from the message.</p>
     */
    inline RemoveAttributesActivity& AddAttributes(const char* value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }


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
    inline RemoveAttributesActivity& WithNext(const Aws::String& value) { SetNext(value); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline RemoveAttributesActivity& WithNext(Aws::String&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline RemoveAttributesActivity& WithNext(const char* value) { SetNext(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
