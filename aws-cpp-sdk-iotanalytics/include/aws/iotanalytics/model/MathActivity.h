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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>An activity that computes an arithmetic expression using the message's
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/MathActivity">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API MathActivity
  {
  public:
    MathActivity();
    MathActivity(Aws::Utils::Json::JsonView jsonValue);
    MathActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the 'math' activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the 'math' activity.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the 'math' activity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the 'math' activity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the 'math' activity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the 'math' activity.</p>
     */
    inline MathActivity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the 'math' activity.</p>
     */
    inline MathActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the 'math' activity.</p>
     */
    inline MathActivity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the attribute that contains the result of the math operation.</p>
     */
    inline const Aws::String& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The name of the attribute that contains the result of the math operation.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The name of the attribute that contains the result of the math operation.</p>
     */
    inline void SetAttribute(const Aws::String& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The name of the attribute that contains the result of the math operation.</p>
     */
    inline void SetAttribute(Aws::String&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The name of the attribute that contains the result of the math operation.</p>
     */
    inline void SetAttribute(const char* value) { m_attributeHasBeenSet = true; m_attribute.assign(value); }

    /**
     * <p>The name of the attribute that contains the result of the math operation.</p>
     */
    inline MathActivity& WithAttribute(const Aws::String& value) { SetAttribute(value); return *this;}

    /**
     * <p>The name of the attribute that contains the result of the math operation.</p>
     */
    inline MathActivity& WithAttribute(Aws::String&& value) { SetAttribute(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute that contains the result of the math operation.</p>
     */
    inline MathActivity& WithAttribute(const char* value) { SetAttribute(value); return *this;}


    /**
     * <p>An expression that uses one or more existing attributes and must return an
     * integer value.</p>
     */
    inline const Aws::String& GetMath() const{ return m_math; }

    /**
     * <p>An expression that uses one or more existing attributes and must return an
     * integer value.</p>
     */
    inline bool MathHasBeenSet() const { return m_mathHasBeenSet; }

    /**
     * <p>An expression that uses one or more existing attributes and must return an
     * integer value.</p>
     */
    inline void SetMath(const Aws::String& value) { m_mathHasBeenSet = true; m_math = value; }

    /**
     * <p>An expression that uses one or more existing attributes and must return an
     * integer value.</p>
     */
    inline void SetMath(Aws::String&& value) { m_mathHasBeenSet = true; m_math = std::move(value); }

    /**
     * <p>An expression that uses one or more existing attributes and must return an
     * integer value.</p>
     */
    inline void SetMath(const char* value) { m_mathHasBeenSet = true; m_math.assign(value); }

    /**
     * <p>An expression that uses one or more existing attributes and must return an
     * integer value.</p>
     */
    inline MathActivity& WithMath(const Aws::String& value) { SetMath(value); return *this;}

    /**
     * <p>An expression that uses one or more existing attributes and must return an
     * integer value.</p>
     */
    inline MathActivity& WithMath(Aws::String&& value) { SetMath(std::move(value)); return *this;}

    /**
     * <p>An expression that uses one or more existing attributes and must return an
     * integer value.</p>
     */
    inline MathActivity& WithMath(const char* value) { SetMath(value); return *this;}


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
    inline MathActivity& WithNext(const Aws::String& value) { SetNext(value); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline MathActivity& WithNext(Aws::String&& value) { SetNext(std::move(value)); return *this;}

    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline MathActivity& WithNext(const char* value) { SetNext(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_attribute;
    bool m_attributeHasBeenSet;

    Aws::String m_math;
    bool m_mathHasBeenSet;

    Aws::String m_next;
    bool m_nextHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
