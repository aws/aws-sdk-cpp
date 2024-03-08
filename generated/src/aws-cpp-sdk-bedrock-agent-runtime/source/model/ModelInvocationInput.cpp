/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ModelInvocationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

ModelInvocationInput::ModelInvocationInput() : 
    m_inferenceConfigurationHasBeenSet(false),
    m_overrideLambdaHasBeenSet(false),
    m_parserMode(CreationMode::NOT_SET),
    m_parserModeHasBeenSet(false),
    m_promptCreationMode(CreationMode::NOT_SET),
    m_promptCreationModeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_type(PromptType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ModelInvocationInput::ModelInvocationInput(JsonView jsonValue) : 
    m_inferenceConfigurationHasBeenSet(false),
    m_overrideLambdaHasBeenSet(false),
    m_parserMode(CreationMode::NOT_SET),
    m_parserModeHasBeenSet(false),
    m_promptCreationMode(CreationMode::NOT_SET),
    m_promptCreationModeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_type(PromptType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ModelInvocationInput& ModelInvocationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inferenceConfiguration"))
  {
    m_inferenceConfiguration = jsonValue.GetObject("inferenceConfiguration");

    m_inferenceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrideLambda"))
  {
    m_overrideLambda = jsonValue.GetString("overrideLambda");

    m_overrideLambdaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parserMode"))
  {
    m_parserMode = CreationModeMapper::GetCreationModeForName(jsonValue.GetString("parserMode"));

    m_parserModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("promptCreationMode"))
  {
    m_promptCreationMode = CreationModeMapper::GetCreationModeForName(jsonValue.GetString("promptCreationMode"));

    m_promptCreationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("traceId"))
  {
    m_traceId = jsonValue.GetString("traceId");

    m_traceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = PromptTypeMapper::GetPromptTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelInvocationInput::Jsonize() const
{
  JsonValue payload;

  if(m_inferenceConfigurationHasBeenSet)
  {
   payload.WithObject("inferenceConfiguration", m_inferenceConfiguration.Jsonize());

  }

  if(m_overrideLambdaHasBeenSet)
  {
   payload.WithString("overrideLambda", m_overrideLambda);

  }

  if(m_parserModeHasBeenSet)
  {
   payload.WithString("parserMode", CreationModeMapper::GetNameForCreationMode(m_parserMode));
  }

  if(m_promptCreationModeHasBeenSet)
  {
   payload.WithString("promptCreationMode", CreationModeMapper::GetNameForCreationMode(m_promptCreationMode));
  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_traceIdHasBeenSet)
  {
   payload.WithString("traceId", m_traceId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PromptTypeMapper::GetNameForPromptType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
