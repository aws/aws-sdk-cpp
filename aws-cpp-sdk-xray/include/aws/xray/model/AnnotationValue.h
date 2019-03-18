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
#include <aws/xray/XRay_EXPORTS.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Value of a segment annotation. Has one of three value types: Number, Boolean
   * or String.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/AnnotationValue">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API AnnotationValue
  {
  public:
    AnnotationValue();
    AnnotationValue(Aws::Utils::Json::JsonView jsonValue);
    AnnotationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Value for a Number annotation.</p>
     */
    inline double GetNumberValue() const{ return m_numberValue; }

    /**
     * <p>Value for a Number annotation.</p>
     */
    inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }

    /**
     * <p>Value for a Number annotation.</p>
     */
    inline void SetNumberValue(double value) { m_numberValueHasBeenSet = true; m_numberValue = value; }

    /**
     * <p>Value for a Number annotation.</p>
     */
    inline AnnotationValue& WithNumberValue(double value) { SetNumberValue(value); return *this;}


    /**
     * <p>Value for a Boolean annotation.</p>
     */
    inline bool GetBooleanValue() const{ return m_booleanValue; }

    /**
     * <p>Value for a Boolean annotation.</p>
     */
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }

    /**
     * <p>Value for a Boolean annotation.</p>
     */
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }

    /**
     * <p>Value for a Boolean annotation.</p>
     */
    inline AnnotationValue& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}


    /**
     * <p>Value for a String annotation.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>Value for a String annotation.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>Value for a String annotation.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>Value for a String annotation.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>Value for a String annotation.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>Value for a String annotation.</p>
     */
    inline AnnotationValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>Value for a String annotation.</p>
     */
    inline AnnotationValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>Value for a String annotation.</p>
     */
    inline AnnotationValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}

  private:

    double m_numberValue;
    bool m_numberValueHasBeenSet;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
