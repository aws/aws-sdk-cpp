/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/PendingModifiedServiceUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

PendingModifiedServiceUpdate::PendingModifiedServiceUpdate() : 
    m_serviceUpdateNameHasBeenSet(false),
    m_status(ServiceUpdateStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

PendingModifiedServiceUpdate::PendingModifiedServiceUpdate(JsonView jsonValue) : 
    m_serviceUpdateNameHasBeenSet(false),
    m_status(ServiceUpdateStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

PendingModifiedServiceUpdate& PendingModifiedServiceUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceUpdateName"))
  {
    m_serviceUpdateName = jsonValue.GetString("ServiceUpdateName");

    m_serviceUpdateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ServiceUpdateStatusMapper::GetServiceUpdateStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue PendingModifiedServiceUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_serviceUpdateNameHasBeenSet)
  {
   payload.WithString("ServiceUpdateName", m_serviceUpdateName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
