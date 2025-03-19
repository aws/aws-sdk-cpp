/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/CompositionThumbnailConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

CompositionThumbnailConfiguration::CompositionThumbnailConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CompositionThumbnailConfiguration& CompositionThumbnailConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetIntervalSeconds"))
  {
    m_targetIntervalSeconds = jsonValue.GetInteger("targetIntervalSeconds");
    m_targetIntervalSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storage"))
  {
    Aws::Utils::Array<JsonView> storageJsonList = jsonValue.GetArray("storage");
    for(unsigned storageIndex = 0; storageIndex < storageJsonList.GetLength(); ++storageIndex)
    {
      m_storage.push_back(ThumbnailStorageTypeMapper::GetThumbnailStorageTypeForName(storageJsonList[storageIndex].AsString()));
    }
    m_storageHasBeenSet = true;
  }
  return *this;
}

JsonValue CompositionThumbnailConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_targetIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("targetIntervalSeconds", m_targetIntervalSeconds);

  }

  if(m_storageHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> storageJsonList(m_storage.size());
   for(unsigned storageIndex = 0; storageIndex < storageJsonList.GetLength(); ++storageIndex)
   {
     storageJsonList[storageIndex].AsString(ThumbnailStorageTypeMapper::GetNameForThumbnailStorageType(m_storage[storageIndex]));
   }
   payload.WithArray("storage", std::move(storageJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
