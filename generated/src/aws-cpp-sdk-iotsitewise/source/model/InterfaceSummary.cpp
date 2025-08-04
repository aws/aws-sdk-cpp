/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/InterfaceSummary.h>
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

InterfaceSummary::InterfaceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

InterfaceSummary& InterfaceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("interfaceAssetModelId"))
  {
    m_interfaceAssetModelId = jsonValue.GetString("interfaceAssetModelId");
    m_interfaceAssetModelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("interfaceAssetModelPropertyId"))
  {
    m_interfaceAssetModelPropertyId = jsonValue.GetString("interfaceAssetModelPropertyId");
    m_interfaceAssetModelPropertyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue InterfaceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_interfaceAssetModelIdHasBeenSet)
  {
   payload.WithString("interfaceAssetModelId", m_interfaceAssetModelId);

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
