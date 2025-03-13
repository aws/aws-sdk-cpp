/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/S3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

S3Location::S3Location(JsonView jsonValue)
{
  *this = jsonValue;
}

S3Location& S3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Location::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
