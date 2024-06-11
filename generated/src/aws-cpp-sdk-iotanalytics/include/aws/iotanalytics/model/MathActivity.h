/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class MathActivity
  {
  public:
    AWS_IOTANALYTICS_API MathActivity();
    AWS_IOTANALYTICS_API MathActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API MathActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the math activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MathActivity& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MathActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MathActivity& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute that contains the result of the math operation.</p>
     */
    inline const Aws::String& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const Aws::String& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(Aws::String&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline void SetAttribute(const char* value) { m_attributeHasBeenSet = true; m_attribute.assign(value); }
    inline MathActivity& WithAttribute(const Aws::String& value) { SetAttribute(value); return *this;}
    inline MathActivity& WithAttribute(Aws::String&& value) { SetAttribute(std::move(value)); return *this;}
    inline MathActivity& WithAttribute(const char* value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An expression that uses one or more existing attributes and must return an
     * integer value.</p>
     */
    inline const Aws::String& GetMath() const{ return m_math; }
    inline bool MathHasBeenSet() const { return m_mathHasBeenSet; }
    inline void SetMath(const Aws::String& value) { m_mathHasBeenSet = true; m_math = value; }
    inline void SetMath(Aws::String&& value) { m_mathHasBeenSet = true; m_math = std::move(value); }
    inline void SetMath(const char* value) { m_mathHasBeenSet = true; m_math.assign(value); }
    inline MathActivity& WithMath(const Aws::String& value) { SetMath(value); return *this;}
    inline MathActivity& WithMath(Aws::String&& value) { SetMath(std::move(value)); return *this;}
    inline MathActivity& WithMath(const char* value) { SetMath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline const Aws::String& GetNext() const{ return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    inline void SetNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next = value; }
    inline void SetNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }
    inline void SetNext(const char* value) { m_nextHasBeenSet = true; m_next.assign(value); }
    inline MathActivity& WithNext(const Aws::String& value) { SetNext(value); return *this;}
    inline MathActivity& WithNext(Aws::String&& value) { SetNext(std::move(value)); return *this;}
    inline MathActivity& WithNext(const char* value) { SetNext(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_math;
    bool m_mathHasBeenSet = false;

    Aws::String m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
