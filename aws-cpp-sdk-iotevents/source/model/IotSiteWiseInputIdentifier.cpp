/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/IotSiteWiseInputIdentifier.h>
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

IotSiteWiseInputIdentifier::IotSiteWiseInputIdentifier() : 
    m_iotSiteWiseAssetModelPropertyIdentifierHasBeenSet(false)
{
}

IotSiteWiseInputIdentifier::IotSiteWiseInputIdentifier(JsonView jsonValue) : 
    m_iotSiteWiseAssetModelPropertyIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

IotSiteWiseInputIdentifier& IotSiteWiseInputIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iotSiteWiseAssetModelPropertyIdentifier"))
  {
    m_iotSiteWiseAssetModelPropertyIdentifier = jsonValue.GetObject("iotSiteWiseAssetModelPropertyIdentifier");

    m_iotSiteWiseAssetModelPropertyIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue IotSiteWiseInputIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_iotSiteWiseAssetModelPropertyIdentifierHasBeenSet)
  {
   payload.WithObject("iotSiteWiseAssetModelPropertyIdentifier", m_iotSiteWiseAssetModelPropertyIdentifier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
