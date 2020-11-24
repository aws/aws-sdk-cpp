/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/LastUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MWAA
{
namespace Model
{

LastUpdate::LastUpdate() : 
    m_createdAtHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_status(UpdateStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

LastUpdate::LastUpdate(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_status(UpdateStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

LastUpdate& LastUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = UpdateStatusMapper::GetUpdateStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue LastUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", UpdateStatusMapper::GetNameForUpdateStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MWAA
} // namespace Aws
