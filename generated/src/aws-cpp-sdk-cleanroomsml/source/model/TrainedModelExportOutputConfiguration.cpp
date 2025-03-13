/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelExportOutputConfiguration.h>
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

TrainedModelExportOutputConfiguration::TrainedModelExportOutputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TrainedModelExportOutputConfiguration& TrainedModelExportOutputConfiguration::operator =(JsonView jsonValue)
{
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

JsonValue TrainedModelExportOutputConfiguration::Jsonize() const
{
  JsonValue payload;

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
