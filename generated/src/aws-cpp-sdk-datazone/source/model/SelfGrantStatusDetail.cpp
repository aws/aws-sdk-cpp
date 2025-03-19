/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SelfGrantStatusDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SelfGrantStatusDetail::SelfGrantStatusDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

SelfGrantStatusDetail& SelfGrantStatusDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");
    m_databaseNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureCause"))
  {
    m_failureCause = jsonValue.GetString("failureCause");
    m_failureCauseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaName"))
  {
    m_schemaName = jsonValue.GetString("schemaName");
    m_schemaNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SelfGrantStatusMapper::GetSelfGrantStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfGrantStatusDetail::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_failureCauseHasBeenSet)
  {
   payload.WithString("failureCause", m_failureCause);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("schemaName", m_schemaName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SelfGrantStatusMapper::GetNameForSelfGrantStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
