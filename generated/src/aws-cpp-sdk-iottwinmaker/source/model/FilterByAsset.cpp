/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/FilterByAsset.h>
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

FilterByAsset::FilterByAsset() : 
    m_assetIdHasBeenSet(false),
    m_assetExternalIdHasBeenSet(false),
    m_includeOffspring(false),
    m_includeOffspringHasBeenSet(false),
    m_includeAssetModel(false),
    m_includeAssetModelHasBeenSet(false)
{
}

FilterByAsset::FilterByAsset(JsonView jsonValue) : 
    m_assetIdHasBeenSet(false),
    m_assetExternalIdHasBeenSet(false),
    m_includeOffspring(false),
    m_includeOffspringHasBeenSet(false),
    m_includeAssetModel(false),
    m_includeAssetModelHasBeenSet(false)
{
  *this = jsonValue;
}

FilterByAsset& FilterByAsset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

    m_assetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetExternalId"))
  {
    m_assetExternalId = jsonValue.GetString("assetExternalId");

    m_assetExternalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeOffspring"))
  {
    m_includeOffspring = jsonValue.GetBool("includeOffspring");

    m_includeOffspringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeAssetModel"))
  {
    m_includeAssetModel = jsonValue.GetBool("includeAssetModel");

    m_includeAssetModelHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterByAsset::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_assetExternalIdHasBeenSet)
  {
   payload.WithString("assetExternalId", m_assetExternalId);

  }

  if(m_includeOffspringHasBeenSet)
  {
   payload.WithBool("includeOffspring", m_includeOffspring);

  }

  if(m_includeAssetModelHasBeenSet)
  {
   payload.WithBool("includeAssetModel", m_includeAssetModel);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
