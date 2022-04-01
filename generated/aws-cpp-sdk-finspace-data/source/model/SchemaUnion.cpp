/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/SchemaUnion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

SchemaUnion::SchemaUnion() : 
    m_tabularSchemaConfigHasBeenSet(false)
{
}

SchemaUnion::SchemaUnion(JsonView jsonValue) : 
    m_tabularSchemaConfigHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaUnion& SchemaUnion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tabularSchemaConfig"))
  {
    m_tabularSchemaConfig = jsonValue.GetObject("tabularSchemaConfig");

    m_tabularSchemaConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaUnion::Jsonize() const
{
  JsonValue payload;

  if(m_tabularSchemaConfigHasBeenSet)
  {
   payload.WithObject("tabularSchemaConfig", m_tabularSchemaConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
