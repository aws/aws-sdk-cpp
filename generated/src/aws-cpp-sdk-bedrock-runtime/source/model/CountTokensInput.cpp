/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/CountTokensInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

CountTokensInput::CountTokensInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CountTokensInput& CountTokensInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invokeModel"))
  {
    m_invokeModel = jsonValue.GetObject("invokeModel");
    m_invokeModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("converse"))
  {
    m_converse = jsonValue.GetObject("converse");
    m_converseHasBeenSet = true;
  }
  return *this;
}

JsonValue CountTokensInput::Jsonize() const
{
  JsonValue payload;

  if(m_invokeModelHasBeenSet)
  {
   payload.WithObject("invokeModel", m_invokeModel.Jsonize());

  }

  if(m_converseHasBeenSet)
  {
   payload.WithObject("converse", m_converse.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
