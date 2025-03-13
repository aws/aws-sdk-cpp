/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RetryStageMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

RetryStageMetadata::RetryStageMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

RetryStageMetadata& RetryStageMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoStageRetryAttempt"))
  {
    m_autoStageRetryAttempt = jsonValue.GetInteger("autoStageRetryAttempt");
    m_autoStageRetryAttemptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("manualStageRetryAttempt"))
  {
    m_manualStageRetryAttempt = jsonValue.GetInteger("manualStageRetryAttempt");
    m_manualStageRetryAttemptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestRetryTrigger"))
  {
    m_latestRetryTrigger = RetryTriggerMapper::GetRetryTriggerForName(jsonValue.GetString("latestRetryTrigger"));
    m_latestRetryTriggerHasBeenSet = true;
  }
  return *this;
}

JsonValue RetryStageMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_autoStageRetryAttemptHasBeenSet)
  {
   payload.WithInteger("autoStageRetryAttempt", m_autoStageRetryAttempt);

  }

  if(m_manualStageRetryAttemptHasBeenSet)
  {
   payload.WithInteger("manualStageRetryAttempt", m_manualStageRetryAttempt);

  }

  if(m_latestRetryTriggerHasBeenSet)
  {
   payload.WithString("latestRetryTrigger", RetryTriggerMapper::GetNameForRetryTrigger(m_latestRetryTrigger));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
