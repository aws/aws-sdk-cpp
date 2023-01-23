/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetHierarchyInfo.h>
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

AssetHierarchyInfo::AssetHierarchyInfo() : 
    m_parentAssetIdHasBeenSet(false),
    m_childAssetIdHasBeenSet(false)
{
}

AssetHierarchyInfo::AssetHierarchyInfo(JsonView jsonValue) : 
    m_parentAssetIdHasBeenSet(false),
    m_childAssetIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssetHierarchyInfo& AssetHierarchyInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parentAssetId"))
  {
    m_parentAssetId = jsonValue.GetString("parentAssetId");

    m_parentAssetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("childAssetId"))
  {
    m_childAssetId = jsonValue.GetString("childAssetId");

    m_childAssetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetHierarchyInfo::Jsonize() const
{
  JsonValue payload;

  if(m_parentAssetIdHasBeenSet)
  {
   payload.WithString("parentAssetId", m_parentAssetId);

  }

  if(m_childAssetIdHasBeenSet)
  {
   payload.WithString("childAssetId", m_childAssetId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
