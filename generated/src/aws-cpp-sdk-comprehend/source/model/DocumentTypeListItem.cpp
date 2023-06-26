/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentTypeListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DocumentTypeListItem::DocumentTypeListItem() : 
    m_page(0),
    m_pageHasBeenSet(false),
    m_type(DocumentType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

DocumentTypeListItem::DocumentTypeListItem(JsonView jsonValue) : 
    m_page(0),
    m_pageHasBeenSet(false),
    m_type(DocumentType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentTypeListItem& DocumentTypeListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Page"))
  {
    m_page = jsonValue.GetInteger("Page");

    m_pageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DocumentTypeMapper::GetDocumentTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentTypeListItem::Jsonize() const
{
  JsonValue payload;

  if(m_pageHasBeenSet)
  {
   payload.WithInteger("Page", m_page);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DocumentTypeMapper::GetNameForDocumentType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
