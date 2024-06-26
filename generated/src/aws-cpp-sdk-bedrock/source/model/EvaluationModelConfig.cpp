﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationModelConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

EvaluationModelConfig::EvaluationModelConfig() : 
    m_bedrockModelHasBeenSet(false)
{
}

EvaluationModelConfig::EvaluationModelConfig(JsonView jsonValue)
  : EvaluationModelConfig()
{
  *this = jsonValue;
}

EvaluationModelConfig& EvaluationModelConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bedrockModel"))
  {
    m_bedrockModel = jsonValue.GetObject("bedrockModel");

    m_bedrockModelHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationModelConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bedrockModelHasBeenSet)
  {
   payload.WithObject("bedrockModel", m_bedrockModel.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
