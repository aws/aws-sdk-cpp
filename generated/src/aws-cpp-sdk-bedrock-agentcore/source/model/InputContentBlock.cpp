/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InputContentBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

InputContentBlock::InputContentBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

InputContentBlock& InputContentBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blob"))
  {
    m_blob = HashingUtils::Base64Decode(jsonValue.GetString("blob"));
    m_blobHasBeenSet = true;
  }
  return *this;
}

JsonValue InputContentBlock::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_blobHasBeenSet)
  {
   payload.WithString("blob", HashingUtils::Base64Encode(m_blob));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
