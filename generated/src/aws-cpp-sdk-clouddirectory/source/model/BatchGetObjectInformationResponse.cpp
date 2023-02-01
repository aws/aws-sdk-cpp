/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchGetObjectInformationResponse.h>
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

BatchGetObjectInformationResponse::BatchGetObjectInformationResponse() : 
    m_schemaFacetsHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false)
{
}

BatchGetObjectInformationResponse::BatchGetObjectInformationResponse(JsonView jsonValue) : 
    m_schemaFacetsHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetObjectInformationResponse& BatchGetObjectInformationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaFacets"))
  {
    Aws::Utils::Array<JsonView> schemaFacetsJsonList = jsonValue.GetArray("SchemaFacets");
    for(unsigned schemaFacetsIndex = 0; schemaFacetsIndex < schemaFacetsJsonList.GetLength(); ++schemaFacetsIndex)
    {
      m_schemaFacets.push_back(schemaFacetsJsonList[schemaFacetsIndex].AsObject());
    }
    m_schemaFacetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectIdentifier"))
  {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");

    m_objectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetObjectInformationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_schemaFacetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaFacetsJsonList(m_schemaFacets.size());
   for(unsigned schemaFacetsIndex = 0; schemaFacetsIndex < schemaFacetsJsonList.GetLength(); ++schemaFacetsIndex)
   {
     schemaFacetsJsonList[schemaFacetsIndex].AsObject(m_schemaFacets[schemaFacetsIndex].Jsonize());
   }
   payload.WithArray("SchemaFacets", std::move(schemaFacetsJsonList));

  }

  if(m_objectIdentifierHasBeenSet)
  {
   payload.WithString("ObjectIdentifier", m_objectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
