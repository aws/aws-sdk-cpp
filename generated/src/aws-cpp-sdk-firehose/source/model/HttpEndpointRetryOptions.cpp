/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/HttpEndpointRetryOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

HttpEndpointRetryOptions::HttpEndpointRetryOptions() : 
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false)
{
}

HttpEndpointRetryOptions::HttpEndpointRetryOptions(JsonView jsonValue) : 
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

HttpEndpointRetryOptions& HttpEndpointRetryOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DurationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("DurationInSeconds");

    m_durationInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpEndpointRetryOptions::Jsonize() const
{
  JsonValue payload;

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("DurationInSeconds", m_durationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
