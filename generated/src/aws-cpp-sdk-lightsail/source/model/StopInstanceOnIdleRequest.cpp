/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/StopInstanceOnIdleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

StopInstanceOnIdleRequest::StopInstanceOnIdleRequest() : 
    m_thresholdHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

StopInstanceOnIdleRequest::StopInstanceOnIdleRequest(JsonView jsonValue) : 
    m_thresholdHasBeenSet(false),
    m_durationHasBeenSet(false)
{
  *this = jsonValue;
}

StopInstanceOnIdleRequest& StopInstanceOnIdleRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetString("threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetString("duration");

    m_durationHasBeenSet = true;
  }

  return *this;
}

JsonValue StopInstanceOnIdleRequest::Jsonize() const
{
  JsonValue payload;

  if(m_thresholdHasBeenSet)
  {
   payload.WithString("threshold", m_threshold);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithString("duration", m_duration);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
