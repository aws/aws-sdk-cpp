/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/AutoRetryConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

AutoRetryConfig::AutoRetryConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoRetryConfig& AutoRetryConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoRetryLimit"))
  {
    m_autoRetryLimit = jsonValue.GetInteger("autoRetryLimit");
    m_autoRetryLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoRetryNumber"))
  {
    m_autoRetryNumber = jsonValue.GetInteger("autoRetryNumber");
    m_autoRetryNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextAutoRetry"))
  {
    m_nextAutoRetry = jsonValue.GetString("nextAutoRetry");
    m_nextAutoRetryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("previousAutoRetry"))
  {
    m_previousAutoRetry = jsonValue.GetString("previousAutoRetry");
    m_previousAutoRetryHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoRetryConfig::Jsonize() const
{
  JsonValue payload;

  if(m_autoRetryLimitHasBeenSet)
  {
   payload.WithInteger("autoRetryLimit", m_autoRetryLimit);

  }

  if(m_autoRetryNumberHasBeenSet)
  {
   payload.WithInteger("autoRetryNumber", m_autoRetryNumber);

  }

  if(m_nextAutoRetryHasBeenSet)
  {
   payload.WithString("nextAutoRetry", m_nextAutoRetry);

  }

  if(m_previousAutoRetryHasBeenSet)
  {
   payload.WithString("previousAutoRetry", m_previousAutoRetry);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
