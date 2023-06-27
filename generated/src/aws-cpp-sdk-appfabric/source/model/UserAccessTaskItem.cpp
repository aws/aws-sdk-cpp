/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/UserAccessTaskItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

UserAccessTaskItem::UserAccessTaskItem() : 
    m_appHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

UserAccessTaskItem::UserAccessTaskItem(JsonView jsonValue) : 
    m_appHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

UserAccessTaskItem& UserAccessTaskItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("app"))
  {
    m_app = jsonValue.GetString("app");

    m_appHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tenantId"))
  {
    m_tenantId = jsonValue.GetString("tenantId");

    m_tenantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue UserAccessTaskItem::Jsonize() const
{
  JsonValue payload;

  if(m_appHasBeenSet)
  {
   payload.WithString("app", m_app);

  }

  if(m_tenantIdHasBeenSet)
  {
   payload.WithString("tenantId", m_tenantId);

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
