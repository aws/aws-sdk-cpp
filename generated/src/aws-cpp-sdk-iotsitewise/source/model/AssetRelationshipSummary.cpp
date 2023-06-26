/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetRelationshipSummary.h>
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

AssetRelationshipSummary::AssetRelationshipSummary() : 
    m_hierarchyInfoHasBeenSet(false),
    m_relationshipType(AssetRelationshipType::NOT_SET),
    m_relationshipTypeHasBeenSet(false)
{
}

AssetRelationshipSummary::AssetRelationshipSummary(JsonView jsonValue) : 
    m_hierarchyInfoHasBeenSet(false),
    m_relationshipType(AssetRelationshipType::NOT_SET),
    m_relationshipTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AssetRelationshipSummary& AssetRelationshipSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hierarchyInfo"))
  {
    m_hierarchyInfo = jsonValue.GetObject("hierarchyInfo");

    m_hierarchyInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationshipType"))
  {
    m_relationshipType = AssetRelationshipTypeMapper::GetAssetRelationshipTypeForName(jsonValue.GetString("relationshipType"));

    m_relationshipTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetRelationshipSummary::Jsonize() const
{
  JsonValue payload;

  if(m_hierarchyInfoHasBeenSet)
  {
   payload.WithObject("hierarchyInfo", m_hierarchyInfo.Jsonize());

  }

  if(m_relationshipTypeHasBeenSet)
  {
   payload.WithString("relationshipType", AssetRelationshipTypeMapper::GetNameForAssetRelationshipType(m_relationshipType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
