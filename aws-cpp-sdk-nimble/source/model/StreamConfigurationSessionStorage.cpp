/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamConfigurationSessionStorage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

StreamConfigurationSessionStorage::StreamConfigurationSessionStorage() : 
    m_modeHasBeenSet(false),
    m_rootHasBeenSet(false)
{
}

StreamConfigurationSessionStorage::StreamConfigurationSessionStorage(JsonView jsonValue) : 
    m_modeHasBeenSet(false),
    m_rootHasBeenSet(false)
{
  *this = jsonValue;
}

StreamConfigurationSessionStorage& StreamConfigurationSessionStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mode"))
  {
    Aws::Utils::Array<JsonView> modeJsonList = jsonValue.GetArray("mode");
    for(unsigned modeIndex = 0; modeIndex < modeJsonList.GetLength(); ++modeIndex)
    {
      m_mode.push_back(StreamingSessionStorageModeMapper::GetStreamingSessionStorageModeForName(modeJsonList[modeIndex].AsString()));
    }
    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("root"))
  {
    m_root = jsonValue.GetObject("root");

    m_rootHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamConfigurationSessionStorage::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modeJsonList(m_mode.size());
   for(unsigned modeIndex = 0; modeIndex < modeJsonList.GetLength(); ++modeIndex)
   {
     modeJsonList[modeIndex].AsString(StreamingSessionStorageModeMapper::GetNameForStreamingSessionStorageMode(m_mode[modeIndex]));
   }
   payload.WithArray("mode", std::move(modeJsonList));

  }

  if(m_rootHasBeenSet)
  {
   payload.WithObject("root", m_root.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
