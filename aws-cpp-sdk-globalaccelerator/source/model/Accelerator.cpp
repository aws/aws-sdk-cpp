/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/globalaccelerator/model/Accelerator.h>
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

Accelerator::Accelerator() : 
    m_acceleratorArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_ipSetsHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_status(AcceleratorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

Accelerator::Accelerator(JsonView jsonValue) : 
    m_acceleratorArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_ipSetsHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_status(AcceleratorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Accelerator& Accelerator::operator =(JsonView jsonValue)
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
    Array<JsonView> ipSetsJsonList = jsonValue.GetArray("IpSets");
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
    m_status = AcceleratorStatusMapper::GetAcceleratorStatusForName(jsonValue.GetString("Status"));

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

JsonValue Accelerator::Jsonize() const
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
   Array<JsonValue> ipSetsJsonList(m_ipSets.size());
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
   payload.WithString("Status", AcceleratorStatusMapper::GetNameForAcceleratorStatus(m_status));
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
