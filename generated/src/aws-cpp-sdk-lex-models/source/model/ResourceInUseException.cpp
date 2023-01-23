/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/ResourceInUseException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

ResourceInUseException::ResourceInUseException() : 
    m_referenceType(ReferenceType::NOT_SET),
    m_referenceTypeHasBeenSet(false),
    m_exampleReferenceHasBeenSet(false)
{
}

ResourceInUseException::ResourceInUseException(JsonView jsonValue) : 
    m_referenceType(ReferenceType::NOT_SET),
    m_referenceTypeHasBeenSet(false),
    m_exampleReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceInUseException& ResourceInUseException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("referenceType"))
  {
    m_referenceType = ReferenceTypeMapper::GetReferenceTypeForName(jsonValue.GetString("referenceType"));

    m_referenceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exampleReference"))
  {
    m_exampleReference = jsonValue.GetObject("exampleReference");

    m_exampleReferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceInUseException::Jsonize() const
{
  JsonValue payload;

  if(m_referenceTypeHasBeenSet)
  {
   payload.WithString("referenceType", ReferenceTypeMapper::GetNameForReferenceType(m_referenceType));
  }

  if(m_exampleReferenceHasBeenSet)
  {
   payload.WithObject("exampleReference", m_exampleReference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
