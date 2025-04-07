/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CommandExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

CommandExecution::CommandExecution(JsonView jsonValue)
{
  *this = jsonValue;
}

CommandExecution& CommandExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sandboxId"))
  {
    m_sandboxId = jsonValue.GetString("sandboxId");
    m_sandboxIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("submitTime"))
  {
    m_submitTime = jsonValue.GetDouble("submitTime");
    m_submitTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("command"))
  {
    m_command = jsonValue.GetString("command");
    m_commandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = CommandTypeMapper::GetCommandTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exitCode"))
  {
    m_exitCode = jsonValue.GetString("exitCode");
    m_exitCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("standardOutputContent"))
  {
    m_standardOutputContent = jsonValue.GetString("standardOutputContent");
    m_standardOutputContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("standardErrContent"))
  {
    m_standardErrContent = jsonValue.GetString("standardErrContent");
    m_standardErrContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logs"))
  {
    m_logs = jsonValue.GetObject("logs");
    m_logsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sandboxArn"))
  {
    m_sandboxArn = jsonValue.GetString("sandboxArn");
    m_sandboxArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CommandExecution::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_sandboxIdHasBeenSet)
  {
   payload.WithString("sandboxId", m_sandboxId);

  }

  if(m_submitTimeHasBeenSet)
  {
   payload.WithDouble("submitTime", m_submitTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_commandHasBeenSet)
  {
   payload.WithString("command", m_command);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CommandTypeMapper::GetNameForCommandType(m_type));
  }

  if(m_exitCodeHasBeenSet)
  {
   payload.WithString("exitCode", m_exitCode);

  }

  if(m_standardOutputContentHasBeenSet)
  {
   payload.WithString("standardOutputContent", m_standardOutputContent);

  }

  if(m_standardErrContentHasBeenSet)
  {
   payload.WithString("standardErrContent", m_standardErrContent);

  }

  if(m_logsHasBeenSet)
  {
   payload.WithObject("logs", m_logs.Jsonize());

  }

  if(m_sandboxArnHasBeenSet)
  {
   payload.WithString("sandboxArn", m_sandboxArn);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
