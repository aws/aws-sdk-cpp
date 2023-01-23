/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/AttributeKey.h>
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

AttributeKey::AttributeKey() : 
    m_schemaArnHasBeenSet(false),
    m_facetNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AttributeKey::AttributeKey(JsonView jsonValue) : 
    m_schemaArnHasBeenSet(false),
    m_facetNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeKey& AttributeKey::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeKey::Jsonize() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
