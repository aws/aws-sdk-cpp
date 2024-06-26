﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InferenceConfig.h>
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

InferenceConfig::InferenceConfig() : 
    m_textInferenceConfigHasBeenSet(false)
{
}

InferenceConfig::InferenceConfig(JsonView jsonValue)
  : InferenceConfig()
{
  *this = jsonValue;
}

InferenceConfig& InferenceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textInferenceConfig"))
  {
    m_textInferenceConfig = jsonValue.GetObject("textInferenceConfig");

    m_textInferenceConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_textInferenceConfigHasBeenSet)
  {
   payload.WithObject("textInferenceConfig", m_textInferenceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
