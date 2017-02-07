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
#include <aws/clouddirectory/model/BatchUpdateObjectAttributes.h>
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

BatchUpdateObjectAttributes::BatchUpdateObjectAttributes() : 
    m_objectReferenceHasBeenSet(false),
    m_attributeUpdatesHasBeenSet(false)
{
}

BatchUpdateObjectAttributes::BatchUpdateObjectAttributes(const JsonValue& jsonValue) : 
    m_objectReferenceHasBeenSet(false),
    m_attributeUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchUpdateObjectAttributes& BatchUpdateObjectAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ObjectReference"))
  {
    m_objectReference = jsonValue.GetObject("ObjectReference");

    m_objectReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeUpdates"))
  {
    Array<JsonValue> attributeUpdatesJsonList = jsonValue.GetArray("AttributeUpdates");
    for(unsigned attributeUpdatesIndex = 0; attributeUpdatesIndex < attributeUpdatesJsonList.GetLength(); ++attributeUpdatesIndex)
    {
      m_attributeUpdates.push_back(attributeUpdatesJsonList[attributeUpdatesIndex].AsObject());
    }
    m_attributeUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchUpdateObjectAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_objectReferenceHasBeenSet)
  {
   payload.WithObject("ObjectReference", m_objectReference.Jsonize());

  }

  if(m_attributeUpdatesHasBeenSet)
  {
   Array<JsonValue> attributeUpdatesJsonList(m_attributeUpdates.size());
   for(unsigned attributeUpdatesIndex = 0; attributeUpdatesIndex < attributeUpdatesJsonList.GetLength(); ++attributeUpdatesIndex)
   {
     attributeUpdatesJsonList[attributeUpdatesIndex].AsObject(m_attributeUpdates[attributeUpdatesIndex].Jsonize());
   }
   payload.WithArray("AttributeUpdates", std::move(attributeUpdatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws