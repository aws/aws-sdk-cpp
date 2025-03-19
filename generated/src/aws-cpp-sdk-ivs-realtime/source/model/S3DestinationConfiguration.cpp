/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/S3DestinationConfiguration.h>
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

S3DestinationConfiguration::S3DestinationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

S3DestinationConfiguration& S3DestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("storageConfigurationArn"))
  {
    m_storageConfigurationArn = jsonValue.GetString("storageConfigurationArn");
    m_storageConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encoderConfigurationArns"))
  {
    Aws::Utils::Array<JsonView> encoderConfigurationArnsJsonList = jsonValue.GetArray("encoderConfigurationArns");
    for(unsigned encoderConfigurationArnsIndex = 0; encoderConfigurationArnsIndex < encoderConfigurationArnsJsonList.GetLength(); ++encoderConfigurationArnsIndex)
    {
      m_encoderConfigurationArns.push_back(encoderConfigurationArnsJsonList[encoderConfigurationArnsIndex].AsString());
    }
    m_encoderConfigurationArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordingConfiguration"))
  {
    m_recordingConfiguration = jsonValue.GetObject("recordingConfiguration");
    m_recordingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thumbnailConfigurations"))
  {
    Aws::Utils::Array<JsonView> thumbnailConfigurationsJsonList = jsonValue.GetArray("thumbnailConfigurations");
    for(unsigned thumbnailConfigurationsIndex = 0; thumbnailConfigurationsIndex < thumbnailConfigurationsJsonList.GetLength(); ++thumbnailConfigurationsIndex)
    {
      m_thumbnailConfigurations.push_back(thumbnailConfigurationsJsonList[thumbnailConfigurationsIndex].AsObject());
    }
    m_thumbnailConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue S3DestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageConfigurationArnHasBeenSet)
  {
   payload.WithString("storageConfigurationArn", m_storageConfigurationArn);

  }

  if(m_encoderConfigurationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> encoderConfigurationArnsJsonList(m_encoderConfigurationArns.size());
   for(unsigned encoderConfigurationArnsIndex = 0; encoderConfigurationArnsIndex < encoderConfigurationArnsJsonList.GetLength(); ++encoderConfigurationArnsIndex)
   {
     encoderConfigurationArnsJsonList[encoderConfigurationArnsIndex].AsString(m_encoderConfigurationArns[encoderConfigurationArnsIndex]);
   }
   payload.WithArray("encoderConfigurationArns", std::move(encoderConfigurationArnsJsonList));

  }

  if(m_recordingConfigurationHasBeenSet)
  {
   payload.WithObject("recordingConfiguration", m_recordingConfiguration.Jsonize());

  }

  if(m_thumbnailConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> thumbnailConfigurationsJsonList(m_thumbnailConfigurations.size());
   for(unsigned thumbnailConfigurationsIndex = 0; thumbnailConfigurationsIndex < thumbnailConfigurationsJsonList.GetLength(); ++thumbnailConfigurationsIndex)
   {
     thumbnailConfigurationsJsonList[thumbnailConfigurationsIndex].AsObject(m_thumbnailConfigurations[thumbnailConfigurationsIndex].Jsonize());
   }
   payload.WithArray("thumbnailConfigurations", std::move(thumbnailConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
