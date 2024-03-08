/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/SetupExecutionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

SetupExecutionDetails::SetupExecutionDetails() : 
    m_commandHasBeenSet(false),
    m_dateTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SetupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_standardErrorHasBeenSet(false),
    m_standardOutputHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

SetupExecutionDetails::SetupExecutionDetails(JsonView jsonValue) : 
    m_commandHasBeenSet(false),
    m_dateTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SetupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_standardErrorHasBeenSet(false),
    m_standardOutputHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

SetupExecutionDetails& SetupExecutionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("command"))
  {
    m_command = jsonValue.GetString("command");

    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateTime"))
  {
    m_dateTime = jsonValue.GetDouble("dateTime");

    m_dateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SetupStatusMapper::GetSetupStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("standardError"))
  {
    m_standardError = jsonValue.GetString("standardError");

    m_standardErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("standardOutput"))
  {
    m_standardOutput = jsonValue.GetString("standardOutput");

    m_standardOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue SetupExecutionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_commandHasBeenSet)
  {
   payload.WithString("command", m_command);

  }

  if(m_dateTimeHasBeenSet)
  {
   payload.WithDouble("dateTime", m_dateTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SetupStatusMapper::GetNameForSetupStatus(m_status));
  }

  if(m_standardErrorHasBeenSet)
  {
   payload.WithString("standardError", m_standardError);

  }

  if(m_standardOutputHasBeenSet)
  {
   payload.WithString("standardOutput", m_standardOutput);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
