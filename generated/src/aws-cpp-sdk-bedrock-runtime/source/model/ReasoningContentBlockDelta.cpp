/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ReasoningContentBlockDelta.h>
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

ReasoningContentBlockDelta::ReasoningContentBlockDelta(JsonView jsonValue)
{
  *this = jsonValue;
}

ReasoningContentBlockDelta& ReasoningContentBlockDelta::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redactedContent"))
  {
    m_redactedContent = HashingUtils::Base64Decode(jsonValue.GetString("redactedContent"));
    m_redactedContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signature"))
  {
    m_signature = jsonValue.GetString("signature");
    m_signatureHasBeenSet = true;
  }
  return *this;
}

JsonValue ReasoningContentBlockDelta::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_redactedContentHasBeenSet)
  {
   payload.WithString("redactedContent", HashingUtils::Base64Encode(m_redactedContent));
  }

  if(m_signatureHasBeenSet)
  {
   payload.WithString("signature", m_signature);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
