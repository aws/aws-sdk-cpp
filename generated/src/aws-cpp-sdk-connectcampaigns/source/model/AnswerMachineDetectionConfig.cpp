/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/AnswerMachineDetectionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

AnswerMachineDetectionConfig::AnswerMachineDetectionConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AnswerMachineDetectionConfig& AnswerMachineDetectionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enableAnswerMachineDetection"))
  {
    m_enableAnswerMachineDetection = jsonValue.GetBool("enableAnswerMachineDetection");
    m_enableAnswerMachineDetectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awaitAnswerMachinePrompt"))
  {
    m_awaitAnswerMachinePrompt = jsonValue.GetBool("awaitAnswerMachinePrompt");
    m_awaitAnswerMachinePromptHasBeenSet = true;
  }
  return *this;
}

JsonValue AnswerMachineDetectionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableAnswerMachineDetectionHasBeenSet)
  {
   payload.WithBool("enableAnswerMachineDetection", m_enableAnswerMachineDetection);

  }

  if(m_awaitAnswerMachinePromptHasBeenSet)
  {
   payload.WithBool("awaitAnswerMachinePrompt", m_awaitAnswerMachinePrompt);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
