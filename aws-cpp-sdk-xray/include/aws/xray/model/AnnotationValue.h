/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Value of a segment annotation. Has one of three value types: Number, Boolean,
   * or String.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/AnnotationValue">AWS
   * API Reference</a></p>
   */
  class AnnotationValue
  {
  public:
    AWS_XRAY_API AnnotationValue();
    AWS_XRAY_API AnnotationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API AnnotationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_numberValueHasBeenSet = false;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
