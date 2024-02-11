/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CompositionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

CompositionDetails::CompositionDetails() : 
    m_compositionRelationshipHasBeenSet(false)
{
}

CompositionDetails::CompositionDetails(JsonView jsonValue) : 
    m_compositionRelationshipHasBeenSet(false)
{
  *this = jsonValue;
}

CompositionDetails& CompositionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("compositionRelationship"))
  {
    Aws::Utils::Array<JsonView> compositionRelationshipJsonList = jsonValue.GetArray("compositionRelationship");
    for(unsigned compositionRelationshipIndex = 0; compositionRelationshipIndex < compositionRelationshipJsonList.GetLength(); ++compositionRelationshipIndex)
    {
      m_compositionRelationship.push_back(compositionRelationshipJsonList[compositionRelationshipIndex].AsObject());
    }
    m_compositionRelationshipHasBeenSet = true;
  }

  return *this;
}

JsonValue CompositionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_compositionRelationshipHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> compositionRelationshipJsonList(m_compositionRelationship.size());
   for(unsigned compositionRelationshipIndex = 0; compositionRelationshipIndex < compositionRelationshipJsonList.GetLength(); ++compositionRelationshipIndex)
   {
     compositionRelationshipJsonList[compositionRelationshipIndex].AsObject(m_compositionRelationship[compositionRelationshipIndex].Jsonize());
   }
   payload.WithArray("compositionRelationship", std::move(compositionRelationshipJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
