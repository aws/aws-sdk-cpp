﻿/*
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
   * <p>Creates a new message using only the specified attributes from the original
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/SelectAttributesActivity">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API SelectAttributesActivity
  {
  public:
    SelectAttributesActivity();
    SelectAttributesActivity(Aws::Utils::Json::JsonView jsonValue);
    SelectAttributesActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the 'selectAttributes' activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the 'selectAttributes' activity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the 'selectAttributes' activity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the 'selectAttributes' activity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the 'selectAttributes' activity.</p>
     */
    inline SelectAttributesActivity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the 'selectAttributes' activity.</p>
     */
    inline SelectAttributesActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the 'selectAttributes' activity.</p>
     */
    inline SelectAttributesActivity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of the attributes to select from the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A list of the attributes to select from the message.</p>
     */
    inline void SetAttributes(const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of the attributes to select from the message.</p>
     */
    inline void SetAttributes(Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A list of the attributes to select from the message.</p>
     */
    inline SelectAttributesActivity& WithAttributes(const Aws::Vector<Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of the attributes to select from the message.</p>
     */
    inline SelectAttributesActivity& WithAttributes(Aws::Vector<Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of the attributes to select from the message.</p>
     */
    inline SelectAttributesActivity& AddAttributes(const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>A list of the attributes to select from the message.</p>
     */
    inline SelectAttributesActivity& AddAttributes(Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the attributes to select from the message.</p>
     */
    inline SelectAttributesActivity& AddAttributes(const char* value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }


    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline const Aws::String& GetNext() const{ return m_next; }

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
    inline SelectAttributesActivity& WithNext(const Aws::String& value) { SetNext(value); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline SelectAttributesActivity& WithNext(Aws::String&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline SelectAttributesActivity& WithNext(const char* value) { SetNext(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::String m_next;
    bool m_nextHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
