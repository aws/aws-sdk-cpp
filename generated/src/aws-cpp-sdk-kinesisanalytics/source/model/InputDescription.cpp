/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/InputDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

InputDescription::InputDescription() : 
    m_inputIdHasBeenSet(false),
    m_namePrefixHasBeenSet(false),
    m_inAppStreamNamesHasBeenSet(false),
    m_inputProcessingConfigurationDescriptionHasBeenSet(false),
    m_kinesisStreamsInputDescriptionHasBeenSet(false),
    m_kinesisFirehoseInputDescriptionHasBeenSet(false),
    m_inputSchemaHasBeenSet(false),
    m_inputParallelismHasBeenSet(false),
    m_inputStartingPositionConfigurationHasBeenSet(false)
{
}

InputDescription::InputDescription(JsonView jsonValue) : 
    m_inputIdHasBeenSet(false),
    m_namePrefixHasBeenSet(false),
    m_inAppStreamNamesHasBeenSet(false),
    m_inputProcessingConfigurationDescriptionHasBeenSet(false),
    m_kinesisStreamsInputDescriptionHasBeenSet(false),
    m_kinesisFirehoseInputDescriptionHasBeenSet(false),
    m_inputSchemaHasBeenSet(false),
    m_inputParallelismHasBeenSet(false),
    m_inputStartingPositionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

InputDescription& InputDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputId"))
  {
    m_inputId = jsonValue.GetString("InputId");

    m_inputIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NamePrefix"))
  {
    m_namePrefix = jsonValue.GetString("NamePrefix");

    m_namePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InAppStreamNames"))
  {
    Aws::Utils::Array<JsonView> inAppStreamNamesJsonList = jsonValue.GetArray("InAppStreamNames");
    for(unsigned inAppStreamNamesIndex = 0; inAppStreamNamesIndex < inAppStreamNamesJsonList.GetLength(); ++inAppStreamNamesIndex)
    {
      m_inAppStreamNames.push_back(inAppStreamNamesJsonList[inAppStreamNamesIndex].AsString());
    }
    m_inAppStreamNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputProcessingConfigurationDescription"))
  {
    m_inputProcessingConfigurationDescription = jsonValue.GetObject("InputProcessingConfigurationDescription");

    m_inputProcessingConfigurationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisStreamsInputDescription"))
  {
    m_kinesisStreamsInputDescription = jsonValue.GetObject("KinesisStreamsInputDescription");

    m_kinesisStreamsInputDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseInputDescription"))
  {
    m_kinesisFirehoseInputDescription = jsonValue.GetObject("KinesisFirehoseInputDescription");

    m_kinesisFirehoseInputDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputSchema"))
  {
    m_inputSchema = jsonValue.GetObject("InputSchema");

    m_inputSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputParallelism"))
  {
    m_inputParallelism = jsonValue.GetObject("InputParallelism");

    m_inputParallelismHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputStartingPositionConfiguration"))
  {
    m_inputStartingPositionConfiguration = jsonValue.GetObject("InputStartingPositionConfiguration");

    m_inputStartingPositionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDescription::Jsonize() const
{
  JsonValue payload;

  if(m_inputIdHasBeenSet)
  {
   payload.WithString("InputId", m_inputId);

  }

  if(m_namePrefixHasBeenSet)
  {
   payload.WithString("NamePrefix", m_namePrefix);

  }

  if(m_inAppStreamNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inAppStreamNamesJsonList(m_inAppStreamNames.size());
   for(unsigned inAppStreamNamesIndex = 0; inAppStreamNamesIndex < inAppStreamNamesJsonList.GetLength(); ++inAppStreamNamesIndex)
   {
     inAppStreamNamesJsonList[inAppStreamNamesIndex].AsString(m_inAppStreamNames[inAppStreamNamesIndex]);
   }
   payload.WithArray("InAppStreamNames", std::move(inAppStreamNamesJsonList));

  }

  if(m_inputProcessingConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("InputProcessingConfigurationDescription", m_inputProcessingConfigurationDescription.Jsonize());

  }

  if(m_kinesisStreamsInputDescriptionHasBeenSet)
  {
   payload.WithObject("KinesisStreamsInputDescription", m_kinesisStreamsInputDescription.Jsonize());

  }

  if(m_kinesisFirehoseInputDescriptionHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseInputDescription", m_kinesisFirehoseInputDescription.Jsonize());

  }

  if(m_inputSchemaHasBeenSet)
  {
   payload.WithObject("InputSchema", m_inputSchema.Jsonize());

  }

  if(m_inputParallelismHasBeenSet)
  {
   payload.WithObject("InputParallelism", m_inputParallelism.Jsonize());

  }

  if(m_inputStartingPositionConfigurationHasBeenSet)
  {
   payload.WithObject("InputStartingPositionConfiguration", m_inputStartingPositionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
