/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/CitationLocation.h>
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

CitationLocation::CitationLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

CitationLocation& CitationLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("documentChar"))
  {
    m_documentChar = jsonValue.GetObject("documentChar");
    m_documentCharHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentPage"))
  {
    m_documentPage = jsonValue.GetObject("documentPage");
    m_documentPageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentChunk"))
  {
    m_documentChunk = jsonValue.GetObject("documentChunk");
    m_documentChunkHasBeenSet = true;
  }
  return *this;
}

JsonValue CitationLocation::Jsonize() const
{
  JsonValue payload;

  if(m_documentCharHasBeenSet)
  {
   payload.WithObject("documentChar", m_documentChar.Jsonize());

  }

  if(m_documentPageHasBeenSet)
  {
   payload.WithObject("documentPage", m_documentPage.Jsonize());

  }

  if(m_documentChunkHasBeenSet)
  {
   payload.WithObject("documentChunk", m_documentChunk.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
