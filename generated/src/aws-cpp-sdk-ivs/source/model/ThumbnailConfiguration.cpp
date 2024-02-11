/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ThumbnailConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

ThumbnailConfiguration::ThumbnailConfiguration() : 
    m_recordingMode(RecordingMode::NOT_SET),
    m_recordingModeHasBeenSet(false),
    m_resolution(ThumbnailConfigurationResolution::NOT_SET),
    m_resolutionHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_targetIntervalSeconds(0),
    m_targetIntervalSecondsHasBeenSet(false)
{
}

ThumbnailConfiguration::ThumbnailConfiguration(JsonView jsonValue) : 
    m_recordingMode(RecordingMode::NOT_SET),
    m_recordingModeHasBeenSet(false),
    m_resolution(ThumbnailConfigurationResolution::NOT_SET),
    m_resolutionHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_targetIntervalSeconds(0),
    m_targetIntervalSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ThumbnailConfiguration& ThumbnailConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recordingMode"))
  {
    m_recordingMode = RecordingModeMapper::GetRecordingModeForName(jsonValue.GetString("recordingMode"));

    m_recordingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolution"))
  {
    m_resolution = ThumbnailConfigurationResolutionMapper::GetThumbnailConfigurationResolutionForName(jsonValue.GetString("resolution"));

    m_resolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storage"))
  {
    Aws::Utils::Array<JsonView> storageJsonList = jsonValue.GetArray("storage");
    for(unsigned storageIndex = 0; storageIndex < storageJsonList.GetLength(); ++storageIndex)
    {
      m_storage.push_back(ThumbnailConfigurationStorageMapper::GetThumbnailConfigurationStorageForName(storageJsonList[storageIndex].AsString()));
    }
    m_storageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetIntervalSeconds"))
  {
    m_targetIntervalSeconds = jsonValue.GetInt64("targetIntervalSeconds");

    m_targetIntervalSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ThumbnailConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_recordingModeHasBeenSet)
  {
   payload.WithString("recordingMode", RecordingModeMapper::GetNameForRecordingMode(m_recordingMode));
  }

  if(m_resolutionHasBeenSet)
  {
   payload.WithString("resolution", ThumbnailConfigurationResolutionMapper::GetNameForThumbnailConfigurationResolution(m_resolution));
  }

  if(m_storageHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> storageJsonList(m_storage.size());
   for(unsigned storageIndex = 0; storageIndex < storageJsonList.GetLength(); ++storageIndex)
   {
     storageJsonList[storageIndex].AsString(ThumbnailConfigurationStorageMapper::GetNameForThumbnailConfigurationStorage(m_storage[storageIndex]));
   }
   payload.WithArray("storage", std::move(storageJsonList));

  }

  if(m_targetIntervalSecondsHasBeenSet)
  {
   payload.WithInt64("targetIntervalSeconds", m_targetIntervalSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
