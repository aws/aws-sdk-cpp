/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ByteContentDoc.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

ByteContentDoc::ByteContentDoc() : 
    m_dataHasBeenSet(false),
    m_mimeTypeHasBeenSet(false)
{
}

ByteContentDoc::ByteContentDoc(JsonView jsonValue)
  : ByteContentDoc()
{
  *this = jsonValue;
}

ByteContentDoc& ByteContentDoc::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue ByteContentDoc::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", HashingUtils::Base64Encode(m_data));
  }

  if(m_mimeTypeHasBeenSet)
  {
   payload.WithString("mimeType", m_mimeType);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
