/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PayloadPart.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

PayloadPart::PayloadPart() : 
    m_attributionHasBeenSet(false),
    m_bytesHasBeenSet(false)
{
}

PayloadPart::PayloadPart(JsonView jsonValue) : 
    m_attributionHasBeenSet(false),
    m_bytesHasBeenSet(false)
{
  *this = jsonValue;
}

PayloadPart& PayloadPart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribution"))
  {
    m_attribution = jsonValue.GetObject("attribution");

    m_attributionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bytes"))
  {
    m_bytes = HashingUtils::Base64Decode(jsonValue.GetString("bytes"));
    m_bytesHasBeenSet = true;
  }

  return *this;
}

JsonValue PayloadPart::Jsonize() const
{
  JsonValue payload;

  if(m_attributionHasBeenSet)
  {
   payload.WithObject("attribution", m_attribution.Jsonize());

  }

  if(m_bytesHasBeenSet)
  {
   payload.WithString("bytes", HashingUtils::Base64Encode(m_bytes));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
