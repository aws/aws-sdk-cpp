/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/DocumentBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

DocumentBlock::DocumentBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentBlock& DocumentBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("format"))
  {
    m_format = DocumentFormatMapper::GetDocumentFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("context"))
  {
    m_context = jsonValue.GetString("context");
    m_contextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("citations"))
  {
    m_citations = jsonValue.GetObject("citations");
    m_citationsHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentBlock::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", DocumentFormatMapper::GetNameForDocumentFormat(m_format));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("context", m_context);

  }

  if(m_citationsHasBeenSet)
  {
   payload.WithObject("citations", m_citations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
