/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_kinesisStreamsInputHasBeenSet(false),
    m_kinesisFirehoseInputHasBeenSet(false),
    m_inputParallelismHasBeenSet(false),
    m_inputSchemaHasBeenSet(false)
{
}

Input::Input(const JsonValue& jsonValue) : 
    m_namePrefixHasBeenSet(false),
    m_kinesisStreamsInputHasBeenSet(false),
    m_kinesisFirehoseInputHasBeenSet(false),
    m_inputParallelismHasBeenSet(false),
    m_inputSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

Input& Input::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("NamePrefix"))
  {
    m_namePrefix = jsonValue.GetString("NamePrefix");

    m_namePrefixHasBeenSet = true;
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