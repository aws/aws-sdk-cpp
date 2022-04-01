/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/IotSiteWiseAssetModelPropertyIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

IotSiteWiseAssetModelPropertyIdentifier::IotSiteWiseAssetModelPropertyIdentifier() : 
    m_assetModelIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false)
{
}

IotSiteWiseAssetModelPropertyIdentifier::IotSiteWiseAssetModelPropertyIdentifier(JsonView jsonValue) : 
    m_assetModelIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false)
{
  *this = jsonValue;
}

IotSiteWiseAssetModelPropertyIdentifier& IotSiteWiseAssetModelPropertyIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetModelId"))
  {
    m_assetModelId = jsonValue.GetString("assetModelId");

    m_assetModelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyId"))
  {
    m_propertyId = jsonValue.GetString("propertyId");

    m_propertyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue IotSiteWiseAssetModelPropertyIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_assetModelIdHasBeenSet)
  {
   payload.WithString("assetModelId", m_assetModelId);

  }

  if(m_propertyIdHasBeenSet)
  {
   payload.WithString("propertyId", m_propertyId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
