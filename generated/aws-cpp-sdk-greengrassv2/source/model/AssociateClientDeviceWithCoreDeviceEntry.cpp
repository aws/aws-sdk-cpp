/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/AssociateClientDeviceWithCoreDeviceEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

AssociateClientDeviceWithCoreDeviceEntry::AssociateClientDeviceWithCoreDeviceEntry() : 
    m_thingNameHasBeenSet(false)
{
}

AssociateClientDeviceWithCoreDeviceEntry::AssociateClientDeviceWithCoreDeviceEntry(JsonView jsonValue) : 
    m_thingNameHasBeenSet(false)
{
  *this = jsonValue;
}

AssociateClientDeviceWithCoreDeviceEntry& AssociateClientDeviceWithCoreDeviceEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociateClientDeviceWithCoreDeviceEntry::Jsonize() const
{
  JsonValue payload;

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
