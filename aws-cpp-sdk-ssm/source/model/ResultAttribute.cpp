/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResultAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResultAttribute::ResultAttribute() : 
    m_typeNameHasBeenSet(false)
{
}

ResultAttribute::ResultAttribute(JsonView jsonValue) : 
    m_typeNameHasBeenSet(false)
{
  *this = jsonValue;
}

ResultAttribute& ResultAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

    m_typeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
