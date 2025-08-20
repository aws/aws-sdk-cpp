/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/InvokeModelTokensRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

InvokeModelTokensRequest::InvokeModelTokensRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

InvokeModelTokensRequest& InvokeModelTokensRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("body"))
  {
    m_body = HashingUtils::Base64Decode(jsonValue.GetString("body"));
    m_bodyHasBeenSet = true;
  }
  return *this;
}

JsonValue InvokeModelTokensRequest::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", HashingUtils::Base64Encode(m_body));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
