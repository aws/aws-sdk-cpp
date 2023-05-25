/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CustomAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

CustomAttribute::CustomAttribute() : 
    m_objectIdentifierHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CustomAttribute::CustomAttribute(JsonView jsonValue) : 
    m_objectIdentifierHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

CustomAttribute& CustomAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectIdentifier"))
  {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");

    m_objectIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_objectIdentifierHasBeenSet)
  {
   payload.WithString("ObjectIdentifier", m_objectIdentifier);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
