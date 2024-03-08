/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetTargetNameMap.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AssetTargetNameMap::AssetTargetNameMap() : 
    m_assetIdHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
}

AssetTargetNameMap::AssetTargetNameMap(JsonView jsonValue) : 
    m_assetIdHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
  *this = jsonValue;
}

AssetTargetNameMap& AssetTargetNameMap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

    m_assetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetName"))
  {
    m_targetName = jsonValue.GetString("targetName");

    m_targetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetTargetNameMap::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_targetNameHasBeenSet)
  {
   payload.WithString("targetName", m_targetName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
