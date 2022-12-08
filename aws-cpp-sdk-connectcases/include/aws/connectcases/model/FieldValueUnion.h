/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Object to store union of Field values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldValueUnion">AWS
   * API Reference</a></p>
   */
  class FieldValueUnion
  {
  public:
    AWS_CONNECTCASES_API FieldValueUnion();
    AWS_CONNECTCASES_API FieldValueUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldValueUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Can be either null, or have a Boolean value type. Only one value can be
     * provided.</p>
     */
    inline bool GetBooleanValue() const{ return m_booleanValue; }

    /**
     * <p>Can be either null, or have a Boolean value type. Only one value can be
     * provided.</p>
     */
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }

    /**
     * <p>Can be either null, or have a Boolean value type. Only one value can be
     * provided.</p>
     */
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }

    /**
     * <p>Can be either null, or have a Boolean value type. Only one value can be
     * provided.</p>
     */
    inline FieldValueUnion& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}


    /**
     * <p>Can be either null, or have a Double number value type. Only one value can be
     * provided.</p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>Can be either null, or have a Double number value type. Only one value can be
     * provided.</p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>Can be either null, or have a Double number value type. Only one value can be
     * provided.</p>
     */
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>Can be either null, or have a Double number value type. Only one value can be
     * provided.</p>
     */
    inline FieldValueUnion& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}


    /**
     * <p>String value type.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>String value type.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>String value type.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>String value type.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>String value type.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>String value type.</p>
     */
    inline FieldValueUnion& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>String value type.</p>
     */
    inline FieldValueUnion& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>String value type.</p>
     */
    inline FieldValueUnion& WithStringValue(const char* value) { SetStringValue(value); return *this;}

  private:

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
