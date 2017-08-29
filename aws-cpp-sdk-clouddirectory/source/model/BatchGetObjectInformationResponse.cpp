/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

BatchGetObjectInformationResponse::BatchGetObjectInformationResponse(const JsonValue& jsonValue) : 
    m_schemaFacetsHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetObjectInformationResponse& BatchGetObjectInformationResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SchemaFacets"))
  {
    Array<JsonValue> schemaFacetsJsonList = jsonValue.GetArray("SchemaFacets");
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
   Array<JsonValue> schemaFacetsJsonList(m_schemaFacets.size());
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
