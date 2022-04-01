/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/IdentityDocumentField.h>
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

IdentityDocumentField::IdentityDocumentField() : 
    m_typeHasBeenSet(false),
    m_valueDetectionHasBeenSet(false)
{
}

IdentityDocumentField::IdentityDocumentField(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_valueDetectionHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityDocumentField& IdentityDocumentField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetObject("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueDetection"))
  {
    m_valueDetection = jsonValue.GetObject("ValueDetection");

    m_valueDetectionHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityDocumentField::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithObject("Type", m_type.Jsonize());

  }

  if(m_valueDetectionHasBeenSet)
  {
   payload.WithObject("ValueDetection", m_valueDetection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
