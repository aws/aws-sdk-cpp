/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/Input.h>
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

Input::Input() : 
    m_namePrefixHasBeenSet(false),
    m_inputProcessingConfigurationHasBeenSet(false),
    m_kinesisStreamsInputHasBeenSet(false),
    m_kinesisFirehoseInputHasBeenSet(false),
    m_inputParallelismHasBeenSet(false),
    m_inputSchemaHasBeenSet(false)
{
}

Input::Input(JsonView jsonValue) : 
    m_namePrefixHasBeenSet(false),
    m_inputProcessingConfigurationHasBeenSet(false),
    m_kinesisStreamsInputHasBeenSet(false),
    m_kinesisFirehoseInputHasBeenSet(false),
    m_inputParallelismHasBeenSet(false),
    m_inputSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

Input& Input::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NamePrefix"))
  {
    m_namePrefix = jsonValue.GetString("NamePrefix");

    m_namePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputProcessingConfiguration"))
  {
    m_inputProcessingConfiguration = jsonValue.GetObject("InputProcessingConfiguration");

    m_inputProcessingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisStreamsInput"))
  {
    m_kinesisStreamsInput = jsonValue.GetObject("KinesisStreamsInput");

    m_kinesisStreamsInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseInput"))
  {
    m_kinesisFirehoseInput = jsonValue.GetObject("KinesisFirehoseInput");

    m_kinesisFirehoseInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputParallelism"))
  {
    m_inputParallelism = jsonValue.GetObject("InputParallelism");

    m_inputParallelismHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputSchema"))
  {
    m_inputSchema = jsonValue.GetObject("InputSchema");

    m_inputSchemaHasBeenSet = true;
  }

  return *this;
}

JsonValue Input::Jsonize() const
{
  JsonValue payload;

  if(m_namePrefixHasBeenSet)
  {
   payload.WithString("NamePrefix", m_namePrefix);

  }

  if(m_inputProcessingConfigurationHasBeenSet)
  {
   payload.WithObject("InputProcessingConfiguration", m_inputProcessingConfiguration.Jsonize());

  }

  if(m_kinesisStreamsInputHasBeenSet)
  {
   payload.WithObject("KinesisStreamsInput", m_kinesisStreamsInput.Jsonize());

  }

  if(m_kinesisFirehoseInputHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseInput", m_kinesisFirehoseInput.Jsonize());

  }

  if(m_inputParallelismHasBeenSet)
  {
   payload.WithObject("InputParallelism", m_inputParallelism.Jsonize());

  }

  if(m_inputSchemaHasBeenSet)
  {
   payload.WithObject("InputSchema", m_inputSchema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
