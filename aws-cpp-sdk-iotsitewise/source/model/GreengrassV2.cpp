/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/GreengrassV2.h>
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

GreengrassV2::GreengrassV2() : 
    m_coreDeviceThingNameHasBeenSet(false)
{
}

GreengrassV2::GreengrassV2(JsonView jsonValue) : 
    m_coreDeviceThingNameHasBeenSet(false)
{
  *this = jsonValue;
}

GreengrassV2& GreengrassV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("coreDeviceThingName"))
  {
    m_coreDeviceThingName = jsonValue.GetString("coreDeviceThingName");

    m_coreDeviceThingNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GreengrassV2::Jsonize() const
{
  JsonValue payload;

  if(m_coreDeviceThingNameHasBeenSet)
  {
   payload.WithString("coreDeviceThingName", m_coreDeviceThingName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
