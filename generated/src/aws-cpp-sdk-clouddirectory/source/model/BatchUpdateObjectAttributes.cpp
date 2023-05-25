/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchUpdateObjectAttributes::BatchUpdateObjectAttributes(JsonView jsonValue) : 
    m_objectReferenceHasBeenSet(false),
    m_attributeUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchUpdateObjectAttributes& BatchUpdateObjectAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectReference"))
  {
    m_objectReference = jsonValue.GetObject("ObjectReference");

    m_objectReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeUpdates"))
  {
    Aws::Utils::Array<JsonView> attributeUpdatesJsonList = jsonValue.GetArray("AttributeUpdates");
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
   Aws::Utils::Array<JsonValue> attributeUpdatesJsonList(m_attributeUpdates.size());
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
