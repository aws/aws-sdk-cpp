/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/TextContentDoc.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

TextContentDoc::TextContentDoc(JsonView jsonValue)
{
  *this = jsonValue;
}

TextContentDoc& TextContentDoc::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetString("data");
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue TextContentDoc::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", m_data);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
