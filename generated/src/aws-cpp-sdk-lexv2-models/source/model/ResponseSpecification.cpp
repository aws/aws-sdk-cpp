/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ResponseSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

ResponseSpecification::ResponseSpecification() : 
    m_messageGroupsHasBeenSet(false),
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false)
{
}

ResponseSpecification::ResponseSpecification(JsonView jsonValue) : 
    m_messageGroupsHasBeenSet(false),
    m_allowInterrupt(false),
    m_allowInterruptHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseSpecification& ResponseSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageGroups"))
  {
    Aws::Utils::Array<JsonView> messageGroupsJsonList = jsonValue.GetArray("messageGroups");
    for(unsigned messageGroupsIndex = 0; messageGroupsIndex < messageGroupsJsonList.GetLength(); ++messageGroupsIndex)
    {
      m_messageGroups.push_back(messageGroupsJsonList[messageGroupsIndex].AsObject());
    }
    m_messageGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowInterrupt"))
  {
    m_allowInterrupt = jsonValue.GetBool("allowInterrupt");

    m_allowInterruptHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_messageGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messageGroupsJsonList(m_messageGroups.size());
   for(unsigned messageGroupsIndex = 0; messageGroupsIndex < messageGroupsJsonList.GetLength(); ++messageGroupsIndex)
   {
     messageGroupsJsonList[messageGroupsIndex].AsObject(m_messageGroups[messageGroupsIndex].Jsonize());
   }
   payload.WithArray("messageGroups", std::move(messageGroupsJsonList));

  }

  if(m_allowInterruptHasBeenSet)
  {
   payload.WithBool("allowInterrupt", m_allowInterrupt);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
