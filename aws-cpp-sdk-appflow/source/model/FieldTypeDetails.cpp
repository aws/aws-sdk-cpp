/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/FieldTypeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

FieldTypeDetails::FieldTypeDetails() : 
    m_fieldTypeHasBeenSet(false),
    m_filterOperatorsHasBeenSet(false),
    m_supportedValuesHasBeenSet(false),
    m_valueRegexPatternHasBeenSet(false),
    m_supportedDateFormatHasBeenSet(false),
    m_fieldValueRangeHasBeenSet(false),
    m_fieldLengthRangeHasBeenSet(false)
{
}

FieldTypeDetails::FieldTypeDetails(JsonView jsonValue) : 
    m_fieldTypeHasBeenSet(false),
    m_filterOperatorsHasBeenSet(false),
    m_supportedValuesHasBeenSet(false),
    m_valueRegexPatternHasBeenSet(false),
    m_supportedDateFormatHasBeenSet(false),
    m_fieldValueRangeHasBeenSet(false),
    m_fieldLengthRangeHasBeenSet(false)
{
  *this = jsonValue;
}

FieldTypeDetails& FieldTypeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldType"))
  {
    m_fieldType = jsonValue.GetString("fieldType");

    m_fieldTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterOperators"))
  {
    Aws::Utils::Array<JsonView> filterOperatorsJsonList = jsonValue.GetArray("filterOperators");
    for(unsigned filterOperatorsIndex = 0; filterOperatorsIndex < filterOperatorsJsonList.GetLength(); ++filterOperatorsIndex)
    {
      m_filterOperators.push_back(OperatorMapper::GetOperatorForName(filterOperatorsJsonList[filterOperatorsIndex].AsString()));
    }
    m_filterOperatorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedValues"))
  {
    Aws::Utils::Array<JsonView> supportedValuesJsonList = jsonValue.GetArray("supportedValues");
    for(unsigned supportedValuesIndex = 0; supportedValuesIndex < supportedValuesJsonList.GetLength(); ++supportedValuesIndex)
    {
      m_supportedValues.push_back(supportedValuesJsonList[supportedValuesIndex].AsString());
    }
    m_supportedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("valueRegexPattern"))
  {
    m_valueRegexPattern = jsonValue.GetString("valueRegexPattern");

    m_valueRegexPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedDateFormat"))
  {
    m_supportedDateFormat = jsonValue.GetString("supportedDateFormat");

    m_supportedDateFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldValueRange"))
  {
    m_fieldValueRange = jsonValue.GetObject("fieldValueRange");

    m_fieldValueRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldLengthRange"))
  {
    m_fieldLengthRange = jsonValue.GetObject("fieldLengthRange");

    m_fieldLengthRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldTypeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_fieldTypeHasBeenSet)
  {
   payload.WithString("fieldType", m_fieldType);

  }

  if(m_filterOperatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterOperatorsJsonList(m_filterOperators.size());
   for(unsigned filterOperatorsIndex = 0; filterOperatorsIndex < filterOperatorsJsonList.GetLength(); ++filterOperatorsIndex)
   {
     filterOperatorsJsonList[filterOperatorsIndex].AsString(OperatorMapper::GetNameForOperator(m_filterOperators[filterOperatorsIndex]));
   }
   payload.WithArray("filterOperators", std::move(filterOperatorsJsonList));

  }

  if(m_supportedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedValuesJsonList(m_supportedValues.size());
   for(unsigned supportedValuesIndex = 0; supportedValuesIndex < supportedValuesJsonList.GetLength(); ++supportedValuesIndex)
   {
     supportedValuesJsonList[supportedValuesIndex].AsString(m_supportedValues[supportedValuesIndex]);
   }
   payload.WithArray("supportedValues", std::move(supportedValuesJsonList));

  }

  if(m_valueRegexPatternHasBeenSet)
  {
   payload.WithString("valueRegexPattern", m_valueRegexPattern);

  }

  if(m_supportedDateFormatHasBeenSet)
  {
   payload.WithString("supportedDateFormat", m_supportedDateFormat);

  }

  if(m_fieldValueRangeHasBeenSet)
  {
   payload.WithObject("fieldValueRange", m_fieldValueRange.Jsonize());

  }

  if(m_fieldLengthRangeHasBeenSet)
  {
   payload.WithObject("fieldLengthRange", m_fieldLengthRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
