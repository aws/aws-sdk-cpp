/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/IdentityDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

IdentityDocument::IdentityDocument() : 
    m_documentIndex(0),
    m_documentIndexHasBeenSet(false),
    m_identityDocumentFieldsHasBeenSet(false),
    m_blocksHasBeenSet(false)
{
}

IdentityDocument::IdentityDocument(JsonView jsonValue) : 
    m_documentIndex(0),
    m_documentIndexHasBeenSet(false),
    m_identityDocumentFieldsHasBeenSet(false),
    m_blocksHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityDocument& IdentityDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentIndex"))
  {
    m_documentIndex = jsonValue.GetInteger("DocumentIndex");

    m_documentIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityDocumentFields"))
  {
    Aws::Utils::Array<JsonView> identityDocumentFieldsJsonList = jsonValue.GetArray("IdentityDocumentFields");
    for(unsigned identityDocumentFieldsIndex = 0; identityDocumentFieldsIndex < identityDocumentFieldsJsonList.GetLength(); ++identityDocumentFieldsIndex)
    {
      m_identityDocumentFields.push_back(identityDocumentFieldsJsonList[identityDocumentFieldsIndex].AsObject());
    }
    m_identityDocumentFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Blocks"))
  {
    Aws::Utils::Array<JsonView> blocksJsonList = jsonValue.GetArray("Blocks");
    for(unsigned blocksIndex = 0; blocksIndex < blocksJsonList.GetLength(); ++blocksIndex)
    {
      m_blocks.push_back(blocksJsonList[blocksIndex].AsObject());
    }
    m_blocksHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityDocument::Jsonize() const
{
  JsonValue payload;

  if(m_documentIndexHasBeenSet)
  {
   payload.WithInteger("DocumentIndex", m_documentIndex);

  }

  if(m_identityDocumentFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identityDocumentFieldsJsonList(m_identityDocumentFields.size());
   for(unsigned identityDocumentFieldsIndex = 0; identityDocumentFieldsIndex < identityDocumentFieldsJsonList.GetLength(); ++identityDocumentFieldsIndex)
   {
     identityDocumentFieldsJsonList[identityDocumentFieldsIndex].AsObject(m_identityDocumentFields[identityDocumentFieldsIndex].Jsonize());
   }
   payload.WithArray("IdentityDocumentFields", std::move(identityDocumentFieldsJsonList));

  }

  if(m_blocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blocksJsonList(m_blocks.size());
   for(unsigned blocksIndex = 0; blocksIndex < blocksJsonList.GetLength(); ++blocksIndex)
   {
     blocksJsonList[blocksIndex].AsObject(m_blocks[blocksIndex].Jsonize());
   }
   payload.WithArray("Blocks", std::move(blocksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
