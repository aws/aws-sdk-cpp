/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemEventFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemEventFilter::OpsItemEventFilter() : 
    m_key(OpsItemEventFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(OpsItemEventFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

OpsItemEventFilter::OpsItemEventFilter(JsonView jsonValue) : 
    m_key(OpsItemEventFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(OpsItemEventFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemEventFilter& OpsItemEventFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = OpsItemEventFilterKeyMapper::GetOpsItemEventFilterKeyForName(jsonValue.GetString("Key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = OpsItemEventFilterOperatorMapper::GetOpsItemEventFilterOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemEventFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", OpsItemEventFilterKeyMapper::GetNameForOpsItemEventFilterKey(m_key));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", OpsItemEventFilterOperatorMapper::GetNameForOpsItemEventFilterOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
