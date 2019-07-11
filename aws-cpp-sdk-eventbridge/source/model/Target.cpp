/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/eventbridge/model/Target.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

Target::Target() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_inputPathHasBeenSet(false),
    m_inputTransformerHasBeenSet(false),
    m_kinesisParametersHasBeenSet(false),
    m_runCommandParametersHasBeenSet(false),
    m_ecsParametersHasBeenSet(false),
    m_batchParametersHasBeenSet(false),
    m_sqsParametersHasBeenSet(false)
{
}

Target::Target(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_inputPathHasBeenSet(false),
    m_inputTransformerHasBeenSet(false),
    m_kinesisParametersHasBeenSet(false),
    m_runCommandParametersHasBeenSet(false),
    m_ecsParametersHasBeenSet(false),
    m_batchParametersHasBeenSet(false),
    m_sqsParametersHasBeenSet(false)
{
  *this = jsonValue;
}

Target& Target::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetString("Input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputPath"))
  {
    m_inputPath = jsonValue.GetString("InputPath");

    m_inputPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputTransformer"))
  {
    m_inputTransformer = jsonValue.GetObject("InputTransformer");

    m_inputTransformerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisParameters"))
  {
    m_kinesisParameters = jsonValue.GetObject("KinesisParameters");

    m_kinesisParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunCommandParameters"))
  {
    m_runCommandParameters = jsonValue.GetObject("RunCommandParameters");

    m_runCommandParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EcsParameters"))
  {
    m_ecsParameters = jsonValue.GetObject("EcsParameters");

    m_ecsParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchParameters"))
  {
    m_batchParameters = jsonValue.GetObject("BatchParameters");

    m_batchParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqsParameters"))
  {
    m_sqsParameters = jsonValue.GetObject("SqsParameters");

    m_sqsParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue Target::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("Input", m_input);

  }

  if(m_inputPathHasBeenSet)
  {
   payload.WithString("InputPath", m_inputPath);

  }

  if(m_inputTransformerHasBeenSet)
  {
   payload.WithObject("InputTransformer", m_inputTransformer.Jsonize());

  }

  if(m_kinesisParametersHasBeenSet)
  {
   payload.WithObject("KinesisParameters", m_kinesisParameters.Jsonize());

  }

  if(m_runCommandParametersHasBeenSet)
  {
   payload.WithObject("RunCommandParameters", m_runCommandParameters.Jsonize());

  }

  if(m_ecsParametersHasBeenSet)
  {
   payload.WithObject("EcsParameters", m_ecsParameters.Jsonize());

  }

  if(m_batchParametersHasBeenSet)
  {
   payload.WithObject("BatchParameters", m_batchParameters.Jsonize());

  }

  if(m_sqsParametersHasBeenSet)
  {
   payload.WithObject("SqsParameters", m_sqsParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
