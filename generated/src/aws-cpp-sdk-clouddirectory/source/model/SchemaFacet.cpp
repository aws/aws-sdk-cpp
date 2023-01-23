/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/SchemaFacet.h>
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

SchemaFacet::SchemaFacet() : 
    m_schemaArnHasBeenSet(false),
    m_facetNameHasBeenSet(false)
{
}

SchemaFacet::SchemaFacet(JsonView jsonValue) : 
    m_schemaArnHasBeenSet(false),
    m_facetNameHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaFacet& SchemaFacet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FacetName"))
  {
    m_facetName = jsonValue.GetString("FacetName");

    m_facetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaFacet::Jsonize() const
{
  JsonValue payload;

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  if(m_facetNameHasBeenSet)
  {
   payload.WithString("FacetName", m_facetName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
