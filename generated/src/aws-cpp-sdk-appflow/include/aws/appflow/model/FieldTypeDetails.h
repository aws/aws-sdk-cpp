/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/Range.h>
#include <aws/appflow/model/Operator.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Contains details regarding the supported field type and the operators that
   * can be applied for filtering. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/FieldTypeDetails">AWS
   * API Reference</a></p>
   */
  class FieldTypeDetails
  {
  public:
    AWS_APPFLOW_API FieldTypeDetails();
    AWS_APPFLOW_API FieldTypeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API FieldTypeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of field, such as string, integer, date, and so on. </p>
     */
    inline const Aws::String& GetFieldType() const{ return m_fieldType; }
    inline bool FieldTypeHasBeenSet() const { return m_fieldTypeHasBeenSet; }
    inline void SetFieldType(const Aws::String& value) { m_fieldTypeHasBeenSet = true; m_fieldType = value; }
    inline void SetFieldType(Aws::String&& value) { m_fieldTypeHasBeenSet = true; m_fieldType = std::move(value); }
    inline void SetFieldType(const char* value) { m_fieldTypeHasBeenSet = true; m_fieldType.assign(value); }
    inline FieldTypeDetails& WithFieldType(const Aws::String& value) { SetFieldType(value); return *this;}
    inline FieldTypeDetails& WithFieldType(Aws::String&& value) { SetFieldType(std::move(value)); return *this;}
    inline FieldTypeDetails& WithFieldType(const char* value) { SetFieldType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of operators supported by a field. </p>
     */
    inline const Aws::Vector<Operator>& GetFilterOperators() const{ return m_filterOperators; }
    inline bool FilterOperatorsHasBeenSet() const { return m_filterOperatorsHasBeenSet; }
    inline void SetFilterOperators(const Aws::Vector<Operator>& value) { m_filterOperatorsHasBeenSet = true; m_filterOperators = value; }
    inline void SetFilterOperators(Aws::Vector<Operator>&& value) { m_filterOperatorsHasBeenSet = true; m_filterOperators = std::move(value); }
    inline FieldTypeDetails& WithFilterOperators(const Aws::Vector<Operator>& value) { SetFilterOperators(value); return *this;}
    inline FieldTypeDetails& WithFilterOperators(Aws::Vector<Operator>&& value) { SetFilterOperators(std::move(value)); return *this;}
    inline FieldTypeDetails& AddFilterOperators(const Operator& value) { m_filterOperatorsHasBeenSet = true; m_filterOperators.push_back(value); return *this; }
    inline FieldTypeDetails& AddFilterOperators(Operator&& value) { m_filterOperatorsHasBeenSet = true; m_filterOperators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of values that a field can contain. For example, a Boolean
     * <code>fieldType</code> can have two values: "true" and "false". </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedValues() const{ return m_supportedValues; }
    inline bool SupportedValuesHasBeenSet() const { return m_supportedValuesHasBeenSet; }
    inline void SetSupportedValues(const Aws::Vector<Aws::String>& value) { m_supportedValuesHasBeenSet = true; m_supportedValues = value; }
    inline void SetSupportedValues(Aws::Vector<Aws::String>&& value) { m_supportedValuesHasBeenSet = true; m_supportedValues = std::move(value); }
    inline FieldTypeDetails& WithSupportedValues(const Aws::Vector<Aws::String>& value) { SetSupportedValues(value); return *this;}
    inline FieldTypeDetails& WithSupportedValues(Aws::Vector<Aws::String>&& value) { SetSupportedValues(std::move(value)); return *this;}
    inline FieldTypeDetails& AddSupportedValues(const Aws::String& value) { m_supportedValuesHasBeenSet = true; m_supportedValues.push_back(value); return *this; }
    inline FieldTypeDetails& AddSupportedValues(Aws::String&& value) { m_supportedValuesHasBeenSet = true; m_supportedValues.push_back(std::move(value)); return *this; }
    inline FieldTypeDetails& AddSupportedValues(const char* value) { m_supportedValuesHasBeenSet = true; m_supportedValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The regular expression pattern for the field name.</p>
     */
    inline const Aws::String& GetValueRegexPattern() const{ return m_valueRegexPattern; }
    inline bool ValueRegexPatternHasBeenSet() const { return m_valueRegexPatternHasBeenSet; }
    inline void SetValueRegexPattern(const Aws::String& value) { m_valueRegexPatternHasBeenSet = true; m_valueRegexPattern = value; }
    inline void SetValueRegexPattern(Aws::String&& value) { m_valueRegexPatternHasBeenSet = true; m_valueRegexPattern = std::move(value); }
    inline void SetValueRegexPattern(const char* value) { m_valueRegexPatternHasBeenSet = true; m_valueRegexPattern.assign(value); }
    inline FieldTypeDetails& WithValueRegexPattern(const Aws::String& value) { SetValueRegexPattern(value); return *this;}
    inline FieldTypeDetails& WithValueRegexPattern(Aws::String&& value) { SetValueRegexPattern(std::move(value)); return *this;}
    inline FieldTypeDetails& WithValueRegexPattern(const char* value) { SetValueRegexPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date format that the field supports.</p>
     */
    inline const Aws::String& GetSupportedDateFormat() const{ return m_supportedDateFormat; }
    inline bool SupportedDateFormatHasBeenSet() const { return m_supportedDateFormatHasBeenSet; }
    inline void SetSupportedDateFormat(const Aws::String& value) { m_supportedDateFormatHasBeenSet = true; m_supportedDateFormat = value; }
    inline void SetSupportedDateFormat(Aws::String&& value) { m_supportedDateFormatHasBeenSet = true; m_supportedDateFormat = std::move(value); }
    inline void SetSupportedDateFormat(const char* value) { m_supportedDateFormatHasBeenSet = true; m_supportedDateFormat.assign(value); }
    inline FieldTypeDetails& WithSupportedDateFormat(const Aws::String& value) { SetSupportedDateFormat(value); return *this;}
    inline FieldTypeDetails& WithSupportedDateFormat(Aws::String&& value) { SetSupportedDateFormat(std::move(value)); return *this;}
    inline FieldTypeDetails& WithSupportedDateFormat(const char* value) { SetSupportedDateFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of values this field can hold.</p>
     */
    inline const Range& GetFieldValueRange() const{ return m_fieldValueRange; }
    inline bool FieldValueRangeHasBeenSet() const { return m_fieldValueRangeHasBeenSet; }
    inline void SetFieldValueRange(const Range& value) { m_fieldValueRangeHasBeenSet = true; m_fieldValueRange = value; }
    inline void SetFieldValueRange(Range&& value) { m_fieldValueRangeHasBeenSet = true; m_fieldValueRange = std::move(value); }
    inline FieldTypeDetails& WithFieldValueRange(const Range& value) { SetFieldValueRange(value); return *this;}
    inline FieldTypeDetails& WithFieldValueRange(Range&& value) { SetFieldValueRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the allowable length range for this field's value.</p>
     */
    inline const Range& GetFieldLengthRange() const{ return m_fieldLengthRange; }
    inline bool FieldLengthRangeHasBeenSet() const { return m_fieldLengthRangeHasBeenSet; }
    inline void SetFieldLengthRange(const Range& value) { m_fieldLengthRangeHasBeenSet = true; m_fieldLengthRange = value; }
    inline void SetFieldLengthRange(Range&& value) { m_fieldLengthRangeHasBeenSet = true; m_fieldLengthRange = std::move(value); }
    inline FieldTypeDetails& WithFieldLengthRange(const Range& value) { SetFieldLengthRange(value); return *this;}
    inline FieldTypeDetails& WithFieldLengthRange(Range&& value) { SetFieldLengthRange(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldType;
    bool m_fieldTypeHasBeenSet = false;

    Aws::Vector<Operator> m_filterOperators;
    bool m_filterOperatorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedValues;
    bool m_supportedValuesHasBeenSet = false;

    Aws::String m_valueRegexPattern;
    bool m_valueRegexPatternHasBeenSet = false;

    Aws::String m_supportedDateFormat;
    bool m_supportedDateFormatHasBeenSet = false;

    Range m_fieldValueRange;
    bool m_fieldValueRangeHasBeenSet = false;

    Range m_fieldLengthRange;
    bool m_fieldLengthRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
