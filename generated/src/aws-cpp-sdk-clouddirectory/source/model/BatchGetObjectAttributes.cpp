/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchGetObjectAttributes::BatchGetObjectAttributes(JsonView jsonValue) : 
    m_objectReferenceHasBeenSet(false),
    m_schemaFacetHasBeenSet(false),
    m_attributeNamesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetObjectAttributes& BatchGetObjectAttributes::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> attributeNamesJsonList = jsonValue.GetArray("AttributeNames");
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
   Aws::Utils::Array<JsonValue> attributeNamesJsonList(m_attributeNames.size());
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
