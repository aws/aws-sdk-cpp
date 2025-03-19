/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/InferenceOutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

InferenceOutputConfiguration::InferenceOutputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceOutputConfiguration& InferenceOutputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accept"))
  {
    m_accept = jsonValue.GetString("accept");
    m_acceptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("members"))
  {
    Aws::Utils::Array<JsonView> membersJsonList = jsonValue.GetArray("members");
    for(unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex)
    {
      m_members.push_back(membersJsonList[membersIndex].AsObject());
    }
    m_membersHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceOutputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_acceptHasBeenSet)
  {
   payload.WithString("accept", m_accept);

  }

  if(m_membersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> membersJsonList(m_members.size());
   for(unsigned membersIndex = 0; membersIndex < membersJsonList.GetLength(); ++membersIndex)
   {
     membersJsonList[membersIndex].AsObject(m_members[membersIndex].Jsonize());
   }
   payload.WithArray("members", std::move(membersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
