/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ChatStreamingConfiguration.h>
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

ChatStreamingConfiguration::ChatStreamingConfiguration() : 
    m_streamingEndpointArnHasBeenSet(false)
{
}

ChatStreamingConfiguration::ChatStreamingConfiguration(JsonView jsonValue) : 
    m_streamingEndpointArnHasBeenSet(false)
{
  *this = jsonValue;
}

ChatStreamingConfiguration& ChatStreamingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamingEndpointArn"))
  {
    m_streamingEndpointArn = jsonValue.GetString("StreamingEndpointArn");

    m_streamingEndpointArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ChatStreamingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_streamingEndpointArnHasBeenSet)
  {
   payload.WithString("StreamingEndpointArn", m_streamingEndpointArn);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
