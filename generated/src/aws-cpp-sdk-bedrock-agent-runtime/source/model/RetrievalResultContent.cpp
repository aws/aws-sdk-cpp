/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalResultContent.h>
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

RetrievalResultContent::RetrievalResultContent(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrievalResultContent& RetrievalResultContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("byteContent"))
  {
    m_byteContent = jsonValue.GetString("byteContent");
    m_byteContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("row"))
  {
    Aws::Utils::Array<JsonView> rowJsonList = jsonValue.GetArray("row");
    for(unsigned rowIndex = 0; rowIndex < rowJsonList.GetLength(); ++rowIndex)
    {
      m_row.push_back(rowJsonList[rowIndex].AsObject());
    }
    m_rowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = RetrievalResultContentTypeMapper::GetRetrievalResultContentTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalResultContent::Jsonize() const
{
  JsonValue payload;

  if(m_byteContentHasBeenSet)
  {
   payload.WithString("byteContent", m_byteContent);

  }

  if(m_rowHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowJsonList(m_row.size());
   for(unsigned rowIndex = 0; rowIndex < rowJsonList.GetLength(); ++rowIndex)
   {
     rowJsonList[rowIndex].AsObject(m_row[rowIndex].Jsonize());
   }
   payload.WithArray("row", std::move(rowJsonList));

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RetrievalResultContentTypeMapper::GetNameForRetrievalResultContentType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
