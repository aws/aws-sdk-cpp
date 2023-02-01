/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AnswerMachineDetectionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AnswerMachineDetectionConfig::AnswerMachineDetectionConfig() : 
    m_enableAnswerMachineDetection(false),
    m_enableAnswerMachineDetectionHasBeenSet(false),
    m_awaitAnswerMachinePrompt(false),
    m_awaitAnswerMachinePromptHasBeenSet(false)
{
}

AnswerMachineDetectionConfig::AnswerMachineDetectionConfig(JsonView jsonValue) : 
    m_enableAnswerMachineDetection(false),
    m_enableAnswerMachineDetectionHasBeenSet(false),
    m_awaitAnswerMachinePrompt(false),
    m_awaitAnswerMachinePromptHasBeenSet(false)
{
  *this = jsonValue;
}

AnswerMachineDetectionConfig& AnswerMachineDetectionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableAnswerMachineDetection"))
  {
    m_enableAnswerMachineDetection = jsonValue.GetBool("EnableAnswerMachineDetection");

    m_enableAnswerMachineDetectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwaitAnswerMachinePrompt"))
  {
    m_awaitAnswerMachinePrompt = jsonValue.GetBool("AwaitAnswerMachinePrompt");

    m_awaitAnswerMachinePromptHasBeenSet = true;
  }

  return *this;
}

JsonValue AnswerMachineDetectionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableAnswerMachineDetectionHasBeenSet)
  {
   payload.WithBool("EnableAnswerMachineDetection", m_enableAnswerMachineDetection);

  }

  if(m_awaitAnswerMachinePromptHasBeenSet)
  {
   payload.WithBool("AwaitAnswerMachinePrompt", m_awaitAnswerMachinePrompt);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
