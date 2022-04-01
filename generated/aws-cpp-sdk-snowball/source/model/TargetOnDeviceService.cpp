/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/TargetOnDeviceService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

TargetOnDeviceService::TargetOnDeviceService() : 
    m_serviceName(DeviceServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false),
    m_transferOption(TransferOption::NOT_SET),
    m_transferOptionHasBeenSet(false)
{
}

TargetOnDeviceService::TargetOnDeviceService(JsonView jsonValue) : 
    m_serviceName(DeviceServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false),
    m_transferOption(TransferOption::NOT_SET),
    m_transferOptionHasBeenSet(false)
{
  *this = jsonValue;
}

TargetOnDeviceService& TargetOnDeviceService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = DeviceServiceNameMapper::GetDeviceServiceNameForName(jsonValue.GetString("ServiceName"));

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransferOption"))
  {
    m_transferOption = TransferOptionMapper::GetTransferOptionForName(jsonValue.GetString("TransferOption"));

    m_transferOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetOnDeviceService::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", DeviceServiceNameMapper::GetNameForDeviceServiceName(m_serviceName));
  }

  if(m_transferOptionHasBeenSet)
  {
   payload.WithString("TransferOption", TransferOptionMapper::GetNameForTransferOption(m_transferOption));
  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
