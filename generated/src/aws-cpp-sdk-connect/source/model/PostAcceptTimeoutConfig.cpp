/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PostAcceptTimeoutConfig.h>
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

PostAcceptTimeoutConfig::PostAcceptTimeoutConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

PostAcceptTimeoutConfig& PostAcceptTimeoutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DurationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("DurationInSeconds");
    m_durationInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue PostAcceptTimeoutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("DurationInSeconds", m_durationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
