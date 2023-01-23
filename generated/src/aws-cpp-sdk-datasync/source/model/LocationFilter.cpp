/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/LocationFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

LocationFilter::LocationFilter() : 
    m_name(LocationFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(Operator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

LocationFilter::LocationFilter(JsonView jsonValue) : 
    m_name(LocationFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(Operator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

LocationFilter& LocationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = LocationFilterNameMapper::GetLocationFilterNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
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
    m_operator = OperatorMapper::GetOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue LocationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", LocationFilterNameMapper::GetNameForLocationFilterName(m_name));
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
   payload.WithString("Operator", OperatorMapper::GetNameForOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
