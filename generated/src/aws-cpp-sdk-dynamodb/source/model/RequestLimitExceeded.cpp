/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/RequestLimitExceeded.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

RequestLimitExceeded::RequestLimitExceeded(JsonView jsonValue)
{
  *this = jsonValue;
}

RequestLimitExceeded& RequestLimitExceeded::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThrottlingReasons"))
  {
    Aws::Utils::Array<JsonView> throttlingReasonsJsonList = jsonValue.GetArray("ThrottlingReasons");
    for(unsigned throttlingReasonsIndex = 0; throttlingReasonsIndex < throttlingReasonsJsonList.GetLength(); ++throttlingReasonsIndex)
    {
      m_throttlingReasons.push_back(throttlingReasonsJsonList[throttlingReasonsIndex].AsObject());
    }
    m_throttlingReasonsHasBeenSet = true;
  }
  return *this;
}

JsonValue RequestLimitExceeded::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_throttlingReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> throttlingReasonsJsonList(m_throttlingReasons.size());
   for(unsigned throttlingReasonsIndex = 0; throttlingReasonsIndex < throttlingReasonsJsonList.GetLength(); ++throttlingReasonsIndex)
   {
     throttlingReasonsJsonList[throttlingReasonsIndex].AsObject(m_throttlingReasons[throttlingReasonsIndex].Jsonize());
   }
   payload.WithArray("ThrottlingReasons", std::move(throttlingReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
