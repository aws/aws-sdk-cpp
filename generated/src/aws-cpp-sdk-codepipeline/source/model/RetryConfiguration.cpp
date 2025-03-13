/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RetryConfiguration.h>
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

RetryConfiguration::RetryConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RetryConfiguration& RetryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("retryMode"))
  {
    m_retryMode = StageRetryModeMapper::GetStageRetryModeForName(jsonValue.GetString("retryMode"));
    m_retryModeHasBeenSet = true;
  }
  return *this;
}

JsonValue RetryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_retryModeHasBeenSet)
  {
   payload.WithString("retryMode", StageRetryModeMapper::GetNameForStageRetryMode(m_retryMode));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
