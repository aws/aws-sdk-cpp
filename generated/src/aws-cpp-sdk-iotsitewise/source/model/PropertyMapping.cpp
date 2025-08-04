/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PropertyMapping.h>
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

PropertyMapping::PropertyMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

PropertyMapping& PropertyMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetModelPropertyId"))
  {
    m_assetModelPropertyId = jsonValue.GetString("assetModelPropertyId");
    m_assetModelPropertyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("interfaceAssetModelPropertyId"))
  {
    m_interfaceAssetModelPropertyId = jsonValue.GetString("interfaceAssetModelPropertyId");
    m_interfaceAssetModelPropertyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue PropertyMapping::Jsonize() const
{
  JsonValue payload;

  if(m_assetModelPropertyIdHasBeenSet)
  {
   payload.WithString("assetModelPropertyId", m_assetModelPropertyId);

  }

  if(m_interfaceAssetModelPropertyIdHasBeenSet)
  {
   payload.WithString("interfaceAssetModelPropertyId", m_interfaceAssetModelPropertyId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
