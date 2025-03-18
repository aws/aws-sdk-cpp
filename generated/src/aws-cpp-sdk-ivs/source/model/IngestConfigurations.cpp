/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/IngestConfigurations.h>
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

IngestConfigurations::IngestConfigurations(JsonView jsonValue)
{
  *this = jsonValue;
}

IngestConfigurations& IngestConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioConfigurations"))
  {
    Aws::Utils::Array<JsonView> audioConfigurationsJsonList = jsonValue.GetArray("audioConfigurations");
    for(unsigned audioConfigurationsIndex = 0; audioConfigurationsIndex < audioConfigurationsJsonList.GetLength(); ++audioConfigurationsIndex)
    {
      m_audioConfigurations.push_back(audioConfigurationsJsonList[audioConfigurationsIndex].AsObject());
    }
    m_audioConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("videoConfigurations"))
  {
    Aws::Utils::Array<JsonView> videoConfigurationsJsonList = jsonValue.GetArray("videoConfigurations");
    for(unsigned videoConfigurationsIndex = 0; videoConfigurationsIndex < videoConfigurationsJsonList.GetLength(); ++videoConfigurationsIndex)
    {
      m_videoConfigurations.push_back(videoConfigurationsJsonList[videoConfigurationsIndex].AsObject());
    }
    m_videoConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue IngestConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_audioConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioConfigurationsJsonList(m_audioConfigurations.size());
   for(unsigned audioConfigurationsIndex = 0; audioConfigurationsIndex < audioConfigurationsJsonList.GetLength(); ++audioConfigurationsIndex)
   {
     audioConfigurationsJsonList[audioConfigurationsIndex].AsObject(m_audioConfigurations[audioConfigurationsIndex].Jsonize());
   }
   payload.WithArray("audioConfigurations", std::move(audioConfigurationsJsonList));

  }

  if(m_videoConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> videoConfigurationsJsonList(m_videoConfigurations.size());
   for(unsigned videoConfigurationsIndex = 0; videoConfigurationsIndex < videoConfigurationsJsonList.GetLength(); ++videoConfigurationsIndex)
   {
     videoConfigurationsJsonList[videoConfigurationsIndex].AsObject(m_videoConfigurations[videoConfigurationsIndex].Jsonize());
   }
   payload.WithArray("videoConfigurations", std::move(videoConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
