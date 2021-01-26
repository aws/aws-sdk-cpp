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
    m_supportedValuesHasBeenSet(false)
{
}

FieldTypeDetails::FieldTypeDetails(JsonView jsonValue) : 
    m_fieldTypeHasBeenSet(false),
    m_filterOperatorsHasBeenSet(false),
    m_supportedValuesHasBeenSet(false)
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
    Array<JsonView> filterOperatorsJsonList = jsonValue.GetArray("filterOperators");
    for(unsigned filterOperatorsIndex = 0; filterOperatorsIndex < filterOperatorsJsonList.GetLength(); ++filterOperatorsIndex)
    {
      m_filterOperators.push_back(OperatorMapper::GetOperatorForName(filterOperatorsJsonList[filterOperatorsIndex].AsString()));
    }
    m_filterOperatorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedValues"))
  {
    Array<JsonView> supportedValuesJsonList = jsonValue.GetArray("supportedValues");
    for(unsigned supportedValuesIndex = 0; supportedValuesIndex < supportedValuesJsonList.GetLength(); ++supportedValuesIndex)
    {
      m_supportedValues.push_back(supportedValuesJsonList[supportedValuesIndex].AsString());
    }
    m_supportedValuesHasBeenSet = true;
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
   Array<JsonValue> filterOperatorsJsonList(m_filterOperators.size());
   for(unsigned filterOperatorsIndex = 0; filterOperatorsIndex < filterOperatorsJsonList.GetLength(); ++filterOperatorsIndex)
   {
     filterOperatorsJsonList[filterOperatorsIndex].AsString(OperatorMapper::GetNameForOperator(m_filterOperators[filterOperatorsIndex]));
   }
   payload.WithArray("filterOperators", std::move(filterOperatorsJsonList));

  }

  if(m_supportedValuesHasBeenSet)
  {
   Array<JsonValue> supportedValuesJsonList(m_supportedValues.size());
   for(unsigned supportedValuesIndex = 0; supportedValuesIndex < supportedValuesJsonList.GetLength(); ++supportedValuesIndex)
   {
     supportedValuesJsonList[supportedValuesIndex].AsString(m_supportedValues[supportedValuesIndex]);
   }
   payload.WithArray("supportedValues", std::move(supportedValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
