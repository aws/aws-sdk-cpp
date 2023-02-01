/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/AdditionalLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

AdditionalLimit::AdditionalLimit() : 
    m_limitNameHasBeenSet(false),
    m_limitValuesHasBeenSet(false)
{
}

AdditionalLimit::AdditionalLimit(JsonView jsonValue) : 
    m_limitNameHasBeenSet(false),
    m_limitValuesHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalLimit& AdditionalLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LimitName"))
  {
    m_limitName = jsonValue.GetString("LimitName");

    m_limitNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LimitValues"))
  {
    Aws::Utils::Array<JsonView> limitValuesJsonList = jsonValue.GetArray("LimitValues");
    for(unsigned limitValuesIndex = 0; limitValuesIndex < limitValuesJsonList.GetLength(); ++limitValuesIndex)
    {
      m_limitValues.push_back(limitValuesJsonList[limitValuesIndex].AsString());
    }
    m_limitValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalLimit::Jsonize() const
{
  JsonValue payload;

  if(m_limitNameHasBeenSet)
  {
   payload.WithString("LimitName", m_limitName);

  }

  if(m_limitValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> limitValuesJsonList(m_limitValues.size());
   for(unsigned limitValuesIndex = 0; limitValuesIndex < limitValuesJsonList.GetLength(); ++limitValuesIndex)
   {
     limitValuesJsonList[limitValuesIndex].AsString(m_limitValues[limitValuesIndex]);
   }
   payload.WithArray("LimitValues", std::move(limitValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
