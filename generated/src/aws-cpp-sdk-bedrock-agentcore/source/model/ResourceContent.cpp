/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ResourceContent.h>
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

ResourceContent::ResourceContent(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceContent& ResourceContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ResourceContentTypeMapper::GetResourceContentTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mimeType"))
  {
    m_mimeType = jsonValue.GetString("mimeType");
    m_mimeTypeHasBeenSet = true;
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

JsonValue ResourceContent::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ResourceContentTypeMapper::GetNameForResourceContentType(m_type));
  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  if(m_mimeTypeHasBeenSet)
  {
   payload.WithString("mimeType", m_mimeType);

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
