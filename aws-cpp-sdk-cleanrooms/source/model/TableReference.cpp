/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/TableReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

TableReference::TableReference() : 
    m_glueHasBeenSet(false)
{
}

TableReference::TableReference(JsonView jsonValue) : 
    m_glueHasBeenSet(false)
{
  *this = jsonValue;
}

TableReference& TableReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("glue"))
  {
    m_glue = jsonValue.GetObject("glue");

    m_glueHasBeenSet = true;
  }

  return *this;
}

JsonValue TableReference::Jsonize() const
{
  JsonValue payload;

  if(m_glueHasBeenSet)
  {
   payload.WithObject("glue", m_glue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
