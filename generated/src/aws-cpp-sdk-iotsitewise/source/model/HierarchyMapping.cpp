/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/HierarchyMapping.h>
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

HierarchyMapping::HierarchyMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

HierarchyMapping& HierarchyMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetModelHierarchyId"))
  {
    m_assetModelHierarchyId = jsonValue.GetString("assetModelHierarchyId");
    m_assetModelHierarchyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("interfaceAssetModelHierarchyId"))
  {
    m_interfaceAssetModelHierarchyId = jsonValue.GetString("interfaceAssetModelHierarchyId");
    m_interfaceAssetModelHierarchyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue HierarchyMapping::Jsonize() const
{
  JsonValue payload;

  if(m_assetModelHierarchyIdHasBeenSet)
  {
   payload.WithString("assetModelHierarchyId", m_assetModelHierarchyId);

  }

  if(m_interfaceAssetModelHierarchyIdHasBeenSet)
  {
   payload.WithString("interfaceAssetModelHierarchyId", m_interfaceAssetModelHierarchyId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
