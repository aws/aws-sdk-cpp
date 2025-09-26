/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankSource.h>
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

RerankSource::RerankSource(JsonView jsonValue)
{
  *this = jsonValue;
}

RerankSource& RerankSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = RerankSourceTypeMapper::GetRerankSourceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inlineDocumentSource"))
  {
    m_inlineDocumentSource = jsonValue.GetObject("inlineDocumentSource");
    m_inlineDocumentSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue RerankSource::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RerankSourceTypeMapper::GetNameForRerankSourceType(m_type));
  }

  if(m_inlineDocumentSourceHasBeenSet)
  {
   payload.WithObject("inlineDocumentSource", m_inlineDocumentSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
