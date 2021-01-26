/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_sqsParametersHasBeenSet(false),
    m_httpParametersHasBeenSet(false),
    m_redshiftDataParametersHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_retryPolicyHasBeenSet(false)
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
    m_sqsParametersHasBeenSet(false),
    m_httpParametersHasBeenSet(false),
    m_redshiftDataParametersHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_retryPolicyHasBeenSet(false)
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

  if(jsonValue.ValueExists("HttpParameters"))
  {
    m_httpParameters = jsonValue.GetObject("HttpParameters");

    m_httpParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftDataParameters"))
  {
    m_redshiftDataParameters = jsonValue.GetObject("RedshiftDataParameters");

    m_redshiftDataParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeadLetterConfig"))
  {
    m_deadLetterConfig = jsonValue.GetObject("DeadLetterConfig");

    m_deadLetterConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryPolicy"))
  {
    m_retryPolicy = jsonValue.GetObject("RetryPolicy");

    m_retryPolicyHasBeenSet = true;
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

  if(m_httpParametersHasBeenSet)
  {
   payload.WithObject("HttpParameters", m_httpParameters.Jsonize());

  }

  if(m_redshiftDataParametersHasBeenSet)
  {
   payload.WithObject("RedshiftDataParameters", m_redshiftDataParameters.Jsonize());

  }

  if(m_deadLetterConfigHasBeenSet)
  {
   payload.WithObject("DeadLetterConfig", m_deadLetterConfig.Jsonize());

  }

  if(m_retryPolicyHasBeenSet)
  {
   payload.WithObject("RetryPolicy", m_retryPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
