/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SupplementalDataStorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

SupplementalDataStorageConfiguration::SupplementalDataStorageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SupplementalDataStorageConfiguration& SupplementalDataStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("storageLocations"))
  {
    Aws::Utils::Array<JsonView> storageLocationsJsonList = jsonValue.GetArray("storageLocations");
    for(unsigned storageLocationsIndex = 0; storageLocationsIndex < storageLocationsJsonList.GetLength(); ++storageLocationsIndex)
    {
      m_storageLocations.push_back(storageLocationsJsonList[storageLocationsIndex].AsObject());
    }
    m_storageLocationsHasBeenSet = true;
  }
  return *this;
}

JsonValue SupplementalDataStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> storageLocationsJsonList(m_storageLocations.size());
   for(unsigned storageLocationsIndex = 0; storageLocationsIndex < storageLocationsJsonList.GetLength(); ++storageLocationsIndex)
   {
     storageLocationsJsonList[storageLocationsIndex].AsObject(m_storageLocations[storageLocationsIndex].Jsonize());
   }
   payload.WithArray("storageLocations", std::move(storageLocationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
