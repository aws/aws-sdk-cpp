/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ContentBlock.h>
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

ContentBlock::ContentBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentBlock& ContentBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ContentBlockTypeMapper::GetContentBlockTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("data"))
  {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("data"));
    m_dataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mimeType"))
  {
    m_mimeType = jsonValue.GetString("mimeType");
    m_mimeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInt64("size");
    m_sizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentBlock::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ContentBlockTypeMapper::GetNameForContentBlockType(m_type));
  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", HashingUtils::Base64Encode(m_data));
  }

  if(m_mimeTypeHasBeenSet)
  {
   payload.WithString("mimeType", m_mimeType);

  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInt64("size", m_size);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
