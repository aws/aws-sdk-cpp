/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DocumentAttributeTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DocumentAttributeTarget::DocumentAttributeTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentAttributeTarget& DocumentAttributeTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetDocumentAttributeKey"))
  {
    m_targetDocumentAttributeKey = jsonValue.GetString("TargetDocumentAttributeKey");
    m_targetDocumentAttributeKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetDocumentAttributeValueDeletion"))
  {
    m_targetDocumentAttributeValueDeletion = jsonValue.GetBool("TargetDocumentAttributeValueDeletion");
    m_targetDocumentAttributeValueDeletionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetDocumentAttributeValue"))
  {
    m_targetDocumentAttributeValue = jsonValue.GetObject("TargetDocumentAttributeValue");
    m_targetDocumentAttributeValueHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentAttributeTarget::Jsonize() const
{
  JsonValue payload;

  if(m_targetDocumentAttributeKeyHasBeenSet)
  {
   payload.WithString("TargetDocumentAttributeKey", m_targetDocumentAttributeKey);

  }

  if(m_targetDocumentAttributeValueDeletionHasBeenSet)
  {
   payload.WithBool("TargetDocumentAttributeValueDeletion", m_targetDocumentAttributeValueDeletion);

  }

  if(m_targetDocumentAttributeValueHasBeenSet)
  {
   payload.WithObject("TargetDocumentAttributeValue", m_targetDocumentAttributeValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
