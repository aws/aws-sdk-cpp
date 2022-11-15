/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CommandInvocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

CommandInvocation::CommandInvocation() : 
    m_commandIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_requestedDateTimeHasBeenSet(false),
    m_status(CommandInvocationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_traceOutputHasBeenSet(false),
    m_standardOutputUrlHasBeenSet(false),
    m_standardErrorUrlHasBeenSet(false),
    m_commandPluginsHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_notificationConfigHasBeenSet(false),
    m_cloudWatchOutputConfigHasBeenSet(false)
{
}

CommandInvocation::CommandInvocation(JsonView jsonValue) : 
    m_commandIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_requestedDateTimeHasBeenSet(false),
    m_status(CommandInvocationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_traceOutputHasBeenSet(false),
    m_standardOutputUrlHasBeenSet(false),
    m_standardErrorUrlHasBeenSet(false),
    m_commandPluginsHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_notificationConfigHasBeenSet(false),
    m_cloudWatchOutputConfigHasBeenSet(false)
{
  *this = jsonValue;
}

CommandInvocation& CommandInvocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommandId"))
  {
    m_commandId = jsonValue.GetString("CommandId");

    m_commandIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceName"))
  {
    m_instanceName = jsonValue.GetString("InstanceName");

    m_instanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comment"))
  {
    m_comment = jsonValue.GetString("Comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentName"))
  {
    m_documentName = jsonValue.GetString("DocumentName");

    m_documentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedDateTime"))
  {
    m_requestedDateTime = jsonValue.GetDouble("RequestedDateTime");

    m_requestedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CommandInvocationStatusMapper::GetCommandInvocationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");

    m_statusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TraceOutput"))
  {
    m_traceOutput = jsonValue.GetString("TraceOutput");

    m_traceOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardOutputUrl"))
  {
    m_standardOutputUrl = jsonValue.GetString("StandardOutputUrl");

    m_standardOutputUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardErrorUrl"))
  {
    m_standardErrorUrl = jsonValue.GetString("StandardErrorUrl");

    m_standardErrorUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommandPlugins"))
  {
    Aws::Utils::Array<JsonView> commandPluginsJsonList = jsonValue.GetArray("CommandPlugins");
    for(unsigned commandPluginsIndex = 0; commandPluginsIndex < commandPluginsJsonList.GetLength(); ++commandPluginsIndex)
    {
      m_commandPlugins.push_back(commandPluginsJsonList[commandPluginsIndex].AsObject());
    }
    m_commandPluginsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationConfig"))
  {
    m_notificationConfig = jsonValue.GetObject("NotificationConfig");

    m_notificationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchOutputConfig"))
  {
    m_cloudWatchOutputConfig = jsonValue.GetObject("CloudWatchOutputConfig");

    m_cloudWatchOutputConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue CommandInvocation::Jsonize() const
{
  JsonValue payload;

  if(m_commandIdHasBeenSet)
  {
   payload.WithString("CommandId", m_commandId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("InstanceName", m_instanceName);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_requestedDateTimeHasBeenSet)
  {
   payload.WithDouble("RequestedDateTime", m_requestedDateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithString("StatusDetails", m_statusDetails);

  }

  if(m_traceOutputHasBeenSet)
  {
   payload.WithString("TraceOutput", m_traceOutput);

  }

  if(m_standardOutputUrlHasBeenSet)
  {
   payload.WithString("StandardOutputUrl", m_standardOutputUrl);

  }

  if(m_standardErrorUrlHasBeenSet)
  {
   payload.WithString("StandardErrorUrl", m_standardErrorUrl);

  }

  if(m_commandPluginsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandPluginsJsonList(m_commandPlugins.size());
   for(unsigned commandPluginsIndex = 0; commandPluginsIndex < commandPluginsJsonList.GetLength(); ++commandPluginsIndex)
   {
     commandPluginsJsonList[commandPluginsIndex].AsObject(m_commandPlugins[commandPluginsIndex].Jsonize());
   }
   payload.WithArray("CommandPlugins", std::move(commandPluginsJsonList));

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_notificationConfigHasBeenSet)
  {
   payload.WithObject("NotificationConfig", m_notificationConfig.Jsonize());

  }

  if(m_cloudWatchOutputConfigHasBeenSet)
  {
   payload.WithObject("CloudWatchOutputConfig", m_cloudWatchOutputConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
