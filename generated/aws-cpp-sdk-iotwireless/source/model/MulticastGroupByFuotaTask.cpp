/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/MulticastGroupByFuotaTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

MulticastGroupByFuotaTask::MulticastGroupByFuotaTask() : 
    m_idHasBeenSet(false)
{
}

MulticastGroupByFuotaTask::MulticastGroupByFuotaTask(JsonView jsonValue) : 
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

MulticastGroupByFuotaTask& MulticastGroupByFuotaTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue MulticastGroupByFuotaTask::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
