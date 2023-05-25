/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/OtherName.h>
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

OtherName::OtherName() : 
    m_typeIdHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

OtherName::OtherName(JsonView jsonValue) : 
    m_typeIdHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

OtherName& OtherName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypeId"))
  {
    m_typeId = jsonValue.GetString("TypeId");

    m_typeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue OtherName::Jsonize() const
{
  JsonValue payload;

  if(m_typeIdHasBeenSet)
  {
   payload.WithString("TypeId", m_typeId);

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
