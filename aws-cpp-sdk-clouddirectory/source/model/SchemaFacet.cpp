/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

SchemaFacet::SchemaFacet(const JsonValue& jsonValue) : 
    m_schemaArnHasBeenSet(false),
    m_facetNameHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaFacet& SchemaFacet::operator =(const JsonValue& jsonValue)
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