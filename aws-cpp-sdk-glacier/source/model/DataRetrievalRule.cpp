/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/glacier/model/DataRetrievalRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

DataRetrievalRule::DataRetrievalRule() : 
    m_strategyHasBeenSet(false),
    m_bytesPerHour(0),
    m_bytesPerHourHasBeenSet(false)
{
}

DataRetrievalRule::DataRetrievalRule(const JsonValue& jsonValue) : 
    m_strategyHasBeenSet(false),
    m_bytesPerHour(0),
    m_bytesPerHourHasBeenSet(false)
{
  *this = jsonValue;
}

DataRetrievalRule& DataRetrievalRule::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Strategy"))
  {
    m_strategy = jsonValue.GetString("Strategy");

    m_strategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BytesPerHour"))
  {
    m_bytesPerHour = jsonValue.GetInt64("BytesPerHour");

    m_bytesPerHourHasBeenSet = true;
  }

  return *this;
}

JsonValue DataRetrievalRule::Jsonize() const
{
  JsonValue payload;

  if(m_strategyHasBeenSet)
  {
   payload.WithString("Strategy", m_strategy);

  }

  if(m_bytesPerHourHasBeenSet)
  {
   payload.WithInt64("BytesPerHour", m_bytesPerHour);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws