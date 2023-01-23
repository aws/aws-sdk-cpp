/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateDeviceCertificateParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

UpdateDeviceCertificateParams::UpdateDeviceCertificateParams() : 
    m_action(DeviceCertificateUpdateAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

UpdateDeviceCertificateParams::UpdateDeviceCertificateParams(JsonView jsonValue) : 
    m_action(DeviceCertificateUpdateAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateDeviceCertificateParams& UpdateDeviceCertificateParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = DeviceCertificateUpdateActionMapper::GetDeviceCertificateUpdateActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateDeviceCertificateParams::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", DeviceCertificateUpdateActionMapper::GetNameForDeviceCertificateUpdateAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
