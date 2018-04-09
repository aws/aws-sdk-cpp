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

#include <aws/clouddirectory/model/BatchGetObjectAttributes.h>
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

BatchGetObjectAttributes::BatchGetObjectAttributes() : 
    m_objectReferenceHasBeenSet(false),
    m_schemaFacetHasBeenSet(false),
    m_attributeNamesHasBeenSet(false)
{
}

BatchGetObjectAttributes::BatchGetObjectAttributes(const JsonValue& jsonValue) : 
    m_objectReferenceHasBeenSet(false),
    m_schemaFacetHasBeenSet(false),
    m_attributeNamesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetObjectAttributes& BatchGetObjectAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ObjectReference"))
  {
    m_objectReference = jsonValue.GetObject("ObjectReference");

    m_objectReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaFacet"))
  {
    m_schemaFacet = jsonValue.GetObject("SchemaFacet");

    m_schemaFacetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeNames"))
  {
    Array<JsonValue> attributeNamesJsonList = jsonValue.GetArray("AttributeNames");
    for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
    {
      m_attributeNames.push_back(attributeNamesJsonList[attributeNamesIndex].AsString());
    }
    m_attributeNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetObjectAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_objectReferenceHasBeenSet)
  {
   payload.WithObject("ObjectReference", m_objectReference.Jsonize());

  }

  if(m_schemaFacetHasBeenSet)
  {
   payload.WithObject("SchemaFacet", m_schemaFacet.Jsonize());

  }

  if(m_attributeNamesHasBeenSet)
  {
   Array<JsonValue> attributeNamesJsonList(m_attributeNames.size());
   for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
   {
     attributeNamesJsonList[attributeNamesIndex].AsString(m_attributeNames[attributeNamesIndex]);
   }
   payload.WithArray("AttributeNames", std::move(attributeNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
