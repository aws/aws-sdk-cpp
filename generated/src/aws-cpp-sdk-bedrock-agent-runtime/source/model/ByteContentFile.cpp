/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ByteContentFile.h>
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

ByteContentFile::ByteContentFile(JsonView jsonValue)
{
  *this = jsonValue;
}

ByteContentFile& ByteContentFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mediaType"))
  {
    m_mediaType = jsonValue.GetString("mediaType");
    m_mediaTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("data"))
  {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("data"));
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue ByteContentFile::Jsonize() const
{
  JsonValue payload;

  if(m_mediaTypeHasBeenSet)
  {
   payload.WithString("mediaType", m_mediaType);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", HashingUtils::Base64Encode(m_data));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
