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

S3DestinationConfiguration::S3DestinationConfiguration() : 
    m_encoderConfigurationArnsHasBeenSet(false),
    m_recordingConfigurationHasBeenSet(false),
    m_storageConfigurationArnHasBeenSet(false)
{
}

S3DestinationConfiguration::S3DestinationConfiguration(JsonView jsonValue) : 
    m_encoderConfigurationArnsHasBeenSet(false),
    m_recordingConfigurationHasBeenSet(false),
    m_storageConfigurationArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3DestinationConfiguration& S3DestinationConfiguration::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("storageConfigurationArn"))
  {
    m_storageConfigurationArn = jsonValue.GetString("storageConfigurationArn");

    m_storageConfigurationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DestinationConfiguration::Jsonize() const
{
  JsonValue payload;

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

  if(m_storageConfigurationArnHasBeenSet)
  {
   payload.WithString("storageConfigurationArn", m_storageConfigurationArn);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
