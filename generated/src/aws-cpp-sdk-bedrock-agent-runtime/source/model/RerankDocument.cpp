/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankDocument.h>
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

RerankDocument::RerankDocument(JsonView jsonValue)
{
  *this = jsonValue;
}

RerankDocument& RerankDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jsonDocument"))
  {
    m_jsonDocument = jsonValue.GetObject("jsonDocument");
    m_jsonDocumentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("textDocument"))
  {
    m_textDocument = jsonValue.GetObject("textDocument");
    m_textDocumentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = RerankDocumentTypeMapper::GetRerankDocumentTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RerankDocument::Jsonize() const
{
  JsonValue payload;

  if(m_jsonDocumentHasBeenSet)
  {
    if(!m_jsonDocument.View().IsNull())
    {
       payload.WithObject("jsonDocument", JsonValue(m_jsonDocument.View()));
    }
  }

  if(m_textDocumentHasBeenSet)
  {
   payload.WithObject("textDocument", m_textDocument.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RerankDocumentTypeMapper::GetNameForRerankDocumentType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
