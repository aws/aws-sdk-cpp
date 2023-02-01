/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DocumentInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DocumentInfo::DocumentInfo() : 
    m_documentIdHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

DocumentInfo::DocumentInfo(JsonView jsonValue) : 
    m_documentIdHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentInfo& DocumentInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentId"))
  {
    m_documentId = jsonValue.GetString("DocumentId");

    m_documentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentInfo::Jsonize() const
{
  JsonValue payload;

  if(m_documentIdHasBeenSet)
  {
   payload.WithString("DocumentId", m_documentId);

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
