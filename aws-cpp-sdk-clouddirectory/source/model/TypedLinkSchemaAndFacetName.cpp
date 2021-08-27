/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/TypedLinkSchemaAndFacetName.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

TypedLinkSchemaAndFacetName::TypedLinkSchemaAndFacetName() : 
    m_schemaArnHasBeenSet(false),
    m_typedLinkNameHasBeenSet(false)
{
}

TypedLinkSchemaAndFacetName::TypedLinkSchemaAndFacetName(JsonView jsonValue) : 
    m_schemaArnHasBeenSet(false),
    m_typedLinkNameHasBeenSet(false)
{
  *this = jsonValue;
}

TypedLinkSchemaAndFacetName& TypedLinkSchemaAndFacetName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TypedLinkName"))
  {
    m_typedLinkName = jsonValue.GetString("TypedLinkName");

    m_typedLinkNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TypedLinkSchemaAndFacetName::Jsonize() const
{
  JsonValue payload;

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  if(m_typedLinkNameHasBeenSet)
  {
   payload.WithString("TypedLinkName", m_typedLinkName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
