/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/EmptyFieldValue.h>
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
   * <p>Object to store union of Field values.</p>  <p>The <code>Summary</code>
   * system field accepts 1500 characters while all other fields accept 500
   * characters.</p> <p><h3>See Also:</h3>   <a
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
     * <p>An empty value.</p>
     */
    inline const EmptyFieldValue& GetEmptyValue() const{ return m_emptyValue; }

    /**
     * <p>An empty value.</p>
     */
    inline bool EmptyValueHasBeenSet() const { return m_emptyValueHasBeenSet; }

    /**
     * <p>An empty value.</p>
     */
    inline void SetEmptyValue(const EmptyFieldValue& value) { m_emptyValueHasBeenSet = true; m_emptyValue = value; }

    /**
     * <p>An empty value.</p>
     */
    inline void SetEmptyValue(EmptyFieldValue&& value) { m_emptyValueHasBeenSet = true; m_emptyValue = std::move(value); }

    /**
     * <p>An empty value.</p>
     */
    inline FieldValueUnion& WithEmptyValue(const EmptyFieldValue& value) { SetEmptyValue(value); return *this;}

    /**
     * <p>An empty value.</p>
     */
    inline FieldValueUnion& WithEmptyValue(EmptyFieldValue&& value) { SetEmptyValue(std::move(value)); return *this;}


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


    /**
     * <p>Represents the user that performed the audit.</p>
     */
    inline const Aws::String& GetUserArnValue() const{ return m_userArnValue; }

    /**
     * <p>Represents the user that performed the audit.</p>
     */
    inline bool UserArnValueHasBeenSet() const { return m_userArnValueHasBeenSet; }

    /**
     * <p>Represents the user that performed the audit.</p>
     */
    inline void SetUserArnValue(const Aws::String& value) { m_userArnValueHasBeenSet = true; m_userArnValue = value; }

    /**
     * <p>Represents the user that performed the audit.</p>
     */
    inline void SetUserArnValue(Aws::String&& value) { m_userArnValueHasBeenSet = true; m_userArnValue = std::move(value); }

    /**
     * <p>Represents the user that performed the audit.</p>
     */
    inline void SetUserArnValue(const char* value) { m_userArnValueHasBeenSet = true; m_userArnValue.assign(value); }

    /**
     * <p>Represents the user that performed the audit.</p>
     */
    inline FieldValueUnion& WithUserArnValue(const Aws::String& value) { SetUserArnValue(value); return *this;}

    /**
     * <p>Represents the user that performed the audit.</p>
     */
    inline FieldValueUnion& WithUserArnValue(Aws::String&& value) { SetUserArnValue(std::move(value)); return *this;}

    /**
     * <p>Represents the user that performed the audit.</p>
     */
    inline FieldValueUnion& WithUserArnValue(const char* value) { SetUserArnValue(value); return *this;}

  private:

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    EmptyFieldValue m_emptyValue;
    bool m_emptyValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::String m_userArnValue;
    bool m_userArnValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
