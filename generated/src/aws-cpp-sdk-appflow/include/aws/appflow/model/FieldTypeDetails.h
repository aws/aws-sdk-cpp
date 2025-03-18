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
    AWS_APPFLOW_API FieldTypeDetails() = default;
    AWS_APPFLOW_API FieldTypeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API FieldTypeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of field, such as string, integer, date, and so on. </p>
     */
    inline const Aws::String& GetFieldType() const { return m_fieldType; }
    inline bool FieldTypeHasBeenSet() const { return m_fieldTypeHasBeenSet; }
    template<typename FieldTypeT = Aws::String>
    void SetFieldType(FieldTypeT&& value) { m_fieldTypeHasBeenSet = true; m_fieldType = std::forward<FieldTypeT>(value); }
    template<typename FieldTypeT = Aws::String>
    FieldTypeDetails& WithFieldType(FieldTypeT&& value) { SetFieldType(std::forward<FieldTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of operators supported by a field. </p>
     */
    inline const Aws::Vector<Operator>& GetFilterOperators() const { return m_filterOperators; }
    inline bool FilterOperatorsHasBeenSet() const { return m_filterOperatorsHasBeenSet; }
    template<typename FilterOperatorsT = Aws::Vector<Operator>>
    void SetFilterOperators(FilterOperatorsT&& value) { m_filterOperatorsHasBeenSet = true; m_filterOperators = std::forward<FilterOperatorsT>(value); }
    template<typename FilterOperatorsT = Aws::Vector<Operator>>
    FieldTypeDetails& WithFilterOperators(FilterOperatorsT&& value) { SetFilterOperators(std::forward<FilterOperatorsT>(value)); return *this;}
    inline FieldTypeDetails& AddFilterOperators(Operator value) { m_filterOperatorsHasBeenSet = true; m_filterOperators.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of values that a field can contain. For example, a Boolean
     * <code>fieldType</code> can have two values: "true" and "false". </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedValues() const { return m_supportedValues; }
    inline bool SupportedValuesHasBeenSet() const { return m_supportedValuesHasBeenSet; }
    template<typename SupportedValuesT = Aws::Vector<Aws::String>>
    void SetSupportedValues(SupportedValuesT&& value) { m_supportedValuesHasBeenSet = true; m_supportedValues = std::forward<SupportedValuesT>(value); }
    template<typename SupportedValuesT = Aws::Vector<Aws::String>>
    FieldTypeDetails& WithSupportedValues(SupportedValuesT&& value) { SetSupportedValues(std::forward<SupportedValuesT>(value)); return *this;}
    template<typename SupportedValuesT = Aws::String>
    FieldTypeDetails& AddSupportedValues(SupportedValuesT&& value) { m_supportedValuesHasBeenSet = true; m_supportedValues.emplace_back(std::forward<SupportedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The regular expression pattern for the field name.</p>
     */
    inline const Aws::String& GetValueRegexPattern() const { return m_valueRegexPattern; }
    inline bool ValueRegexPatternHasBeenSet() const { return m_valueRegexPatternHasBeenSet; }
    template<typename ValueRegexPatternT = Aws::String>
    void SetValueRegexPattern(ValueRegexPatternT&& value) { m_valueRegexPatternHasBeenSet = true; m_valueRegexPattern = std::forward<ValueRegexPatternT>(value); }
    template<typename ValueRegexPatternT = Aws::String>
    FieldTypeDetails& WithValueRegexPattern(ValueRegexPatternT&& value) { SetValueRegexPattern(std::forward<ValueRegexPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date format that the field supports.</p>
     */
    inline const Aws::String& GetSupportedDateFormat() const { return m_supportedDateFormat; }
    inline bool SupportedDateFormatHasBeenSet() const { return m_supportedDateFormatHasBeenSet; }
    template<typename SupportedDateFormatT = Aws::String>
    void SetSupportedDateFormat(SupportedDateFormatT&& value) { m_supportedDateFormatHasBeenSet = true; m_supportedDateFormat = std::forward<SupportedDateFormatT>(value); }
    template<typename SupportedDateFormatT = Aws::String>
    FieldTypeDetails& WithSupportedDateFormat(SupportedDateFormatT&& value) { SetSupportedDateFormat(std::forward<SupportedDateFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of values this field can hold.</p>
     */
    inline const Range& GetFieldValueRange() const { return m_fieldValueRange; }
    inline bool FieldValueRangeHasBeenSet() const { return m_fieldValueRangeHasBeenSet; }
    template<typename FieldValueRangeT = Range>
    void SetFieldValueRange(FieldValueRangeT&& value) { m_fieldValueRangeHasBeenSet = true; m_fieldValueRange = std::forward<FieldValueRangeT>(value); }
    template<typename FieldValueRangeT = Range>
    FieldTypeDetails& WithFieldValueRange(FieldValueRangeT&& value) { SetFieldValueRange(std::forward<FieldValueRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the allowable length range for this field's value.</p>
     */
    inline const Range& GetFieldLengthRange() const { return m_fieldLengthRange; }
    inline bool FieldLengthRangeHasBeenSet() const { return m_fieldLengthRangeHasBeenSet; }
    template<typename FieldLengthRangeT = Range>
    void SetFieldLengthRange(FieldLengthRangeT&& value) { m_fieldLengthRangeHasBeenSet = true; m_fieldLengthRange = std::forward<FieldLengthRangeT>(value); }
    template<typename FieldLengthRangeT = Range>
    FieldTypeDetails& WithFieldLengthRange(FieldLengthRangeT&& value) { SetFieldLengthRange(std::forward<FieldLengthRangeT>(value)); return *this;}
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
