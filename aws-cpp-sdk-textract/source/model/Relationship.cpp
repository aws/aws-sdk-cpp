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

#include <aws/textract/model/Relationship.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

Relationship::Relationship() : 
    m_type(RelationshipType::NOT_SET),
    m_typeHasBeenSet(false),
    m_idsHasBeenSet(false)
{
}

Relationship::Relationship(JsonView jsonValue) : 
    m_type(RelationshipType::NOT_SET),
    m_typeHasBeenSet(false),
    m_idsHasBeenSet(false)
{
  *this = jsonValue;
}

Relationship& Relationship::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RelationshipTypeMapper::GetRelationshipTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ids"))
  {
    Array<JsonView> idsJsonList = jsonValue.GetArray("Ids");
    for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
    {
      m_ids.push_back(idsJsonList[idsIndex].AsString());
    }
    m_idsHasBeenSet = true;
  }

  return *this;
}

JsonValue Relationship::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RelationshipTypeMapper::GetNameForRelationshipType(m_type));
  }

  if(m_idsHasBeenSet)
  {
   Array<JsonValue> idsJsonList(m_ids.size());
   for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
   {
     idsJsonList[idsIndex].AsString(m_ids[idsIndex]);
   }
   payload.WithArray("Ids", std::move(idsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
