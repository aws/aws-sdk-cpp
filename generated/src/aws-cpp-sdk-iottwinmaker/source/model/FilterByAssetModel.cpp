/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/FilterByAssetModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

FilterByAssetModel::FilterByAssetModel() : 
    m_assetModelIdHasBeenSet(false),
    m_assetModelExternalIdHasBeenSet(false),
    m_includeOffspring(false),
    m_includeOffspringHasBeenSet(false),
    m_includeAssets(false),
    m_includeAssetsHasBeenSet(false)
{
}

FilterByAssetModel::FilterByAssetModel(JsonView jsonValue) : 
    m_assetModelIdHasBeenSet(false),
    m_assetModelExternalIdHasBeenSet(false),
    m_includeOffspring(false),
    m_includeOffspringHasBeenSet(false),
    m_includeAssets(false),
    m_includeAssetsHasBeenSet(false)
{
  *this = jsonValue;
}

FilterByAssetModel& FilterByAssetModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetModelId"))
  {
    m_assetModelId = jsonValue.GetString("assetModelId");

    m_assetModelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetModelExternalId"))
  {
    m_assetModelExternalId = jsonValue.GetString("assetModelExternalId");

    m_assetModelExternalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeOffspring"))
  {
    m_includeOffspring = jsonValue.GetBool("includeOffspring");

    m_includeOffspringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeAssets"))
  {
    m_includeAssets = jsonValue.GetBool("includeAssets");

    m_includeAssetsHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterByAssetModel::Jsonize() const
{
  JsonValue payload;

  if(m_assetModelIdHasBeenSet)
  {
   payload.WithString("assetModelId", m_assetModelId);

  }

  if(m_assetModelExternalIdHasBeenSet)
  {
   payload.WithString("assetModelExternalId", m_assetModelExternalId);

  }

  if(m_includeOffspringHasBeenSet)
  {
   payload.WithBool("includeOffspring", m_includeOffspring);

  }

  if(m_includeAssetsHasBeenSet)
  {
   payload.WithBool("includeAssets", m_includeAssets);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
