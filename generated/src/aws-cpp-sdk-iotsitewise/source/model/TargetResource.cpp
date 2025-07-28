/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/TargetResource.h>
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

TargetResource::TargetResource(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetResource& TargetResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");
    m_assetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computationModelId"))
  {
    m_computationModelId = jsonValue.GetString("computationModelId");
    m_computationModelIdHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetResource::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_computationModelIdHasBeenSet)
  {
   payload.WithString("computationModelId", m_computationModelId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
