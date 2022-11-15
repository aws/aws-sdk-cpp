/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CustomRoutingAccelerator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

CustomRoutingAccelerator::CustomRoutingAccelerator() : 
    m_acceleratorArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_ipSetsHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_status(CustomRoutingAcceleratorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

CustomRoutingAccelerator::CustomRoutingAccelerator(JsonView jsonValue) : 
    m_acceleratorArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_ipSetsHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_status(CustomRoutingAcceleratorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CustomRoutingAccelerator& CustomRoutingAccelerator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceleratorArn"))
  {
    m_acceleratorArn = jsonValue.GetString("AcceleratorArn");

    m_acceleratorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddressType"))
  {
    m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(jsonValue.GetString("IpAddressType"));

    m_ipAddressTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpSets"))
  {
    Aws::Utils::Array<JsonView> ipSetsJsonList = jsonValue.GetArray("IpSets");
    for(unsigned ipSetsIndex = 0; ipSetsIndex < ipSetsJsonList.GetLength(); ++ipSetsIndex)
    {
      m_ipSets.push_back(ipSetsJsonList[ipSetsIndex].AsObject());
    }
    m_ipSetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsName"))
  {
    m_dnsName = jsonValue.GetString("DnsName");

    m_dnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CustomRoutingAcceleratorStatusMapper::GetCustomRoutingAcceleratorStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomRoutingAccelerator::Jsonize() const
{
  JsonValue payload;

  if(m_acceleratorArnHasBeenSet)
  {
   payload.WithString("AcceleratorArn", m_acceleratorArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("IpAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_ipSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipSetsJsonList(m_ipSets.size());
   for(unsigned ipSetsIndex = 0; ipSetsIndex < ipSetsJsonList.GetLength(); ++ipSetsIndex)
   {
     ipSetsJsonList[ipSetsIndex].AsObject(m_ipSets[ipSetsIndex].Jsonize());
   }
   payload.WithArray("IpSets", std::move(ipSetsJsonList));

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CustomRoutingAcceleratorStatusMapper::GetNameForCustomRoutingAcceleratorStatus(m_status));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
