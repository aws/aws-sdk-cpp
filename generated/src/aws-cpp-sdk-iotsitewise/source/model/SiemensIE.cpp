/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/SiemensIE.h>
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

SiemensIE::SiemensIE(JsonView jsonValue)
{
  *this = jsonValue;
}

SiemensIE& SiemensIE::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iotCoreThingName"))
  {
    m_iotCoreThingName = jsonValue.GetString("iotCoreThingName");
    m_iotCoreThingNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SiemensIE::Jsonize() const
{
  JsonValue payload;

  if(m_iotCoreThingNameHasBeenSet)
  {
   payload.WithString("iotCoreThingName", m_iotCoreThingName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
