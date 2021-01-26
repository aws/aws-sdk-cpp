/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/SSMValidationParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

SSMValidationParameters::SSMValidationParameters() : 
    m_sourceHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_scriptType(ScriptType::NOT_SET),
    m_scriptTypeHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_executionTimeoutSeconds(0),
    m_executionTimeoutSecondsHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false)
{
}

SSMValidationParameters::SSMValidationParameters(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_scriptType(ScriptType::NOT_SET),
    m_scriptTypeHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_executionTimeoutSeconds(0),
    m_executionTimeoutSecondsHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false)
{
  *this = jsonValue;
}

SSMValidationParameters& SSMValidationParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scriptType"))
  {
    m_scriptType = ScriptTypeMapper::GetScriptTypeForName(jsonValue.GetString("scriptType"));

    m_scriptTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("command"))
  {
    m_command = jsonValue.GetString("command");

    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionTimeoutSeconds"))
  {
    m_executionTimeoutSeconds = jsonValue.GetInteger("executionTimeoutSeconds");

    m_executionTimeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputS3BucketName"))
  {
    m_outputS3BucketName = jsonValue.GetString("outputS3BucketName");

    m_outputS3BucketNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SSMValidationParameters::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_scriptTypeHasBeenSet)
  {
   payload.WithString("scriptType", ScriptTypeMapper::GetNameForScriptType(m_scriptType));
  }

  if(m_commandHasBeenSet)
  {
   payload.WithString("command", m_command);

  }

  if(m_executionTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("executionTimeoutSeconds", m_executionTimeoutSeconds);

  }

  if(m_outputS3BucketNameHasBeenSet)
  {
   payload.WithString("outputS3BucketName", m_outputS3BucketName);

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
