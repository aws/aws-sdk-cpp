/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_commentHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_requestedDateTimeHasBeenSet(false),
    m_status(CommandInvocationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_traceOutputHasBeenSet(false),
    m_commandPluginsHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_notificationConfigHasBeenSet(false)
{
}

CommandInvocation::CommandInvocation(const JsonValue& jsonValue) : 
    m_commandIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_requestedDateTimeHasBeenSet(false),
    m_status(CommandInvocationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_traceOutputHasBeenSet(false),
    m_commandPluginsHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_notificationConfigHasBeenSet(false)
{
  *this = jsonValue;
}

CommandInvocation& CommandInvocation::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("TraceOutput"))
  {
    m_traceOutput = jsonValue.GetString("TraceOutput");

    m_traceOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommandPlugins"))
  {
    Array<JsonValue> commandPluginsJsonList = jsonValue.GetArray("CommandPlugins");
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

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_requestedDateTimeHasBeenSet)
  {
   payload.WithDouble("RequestedDateTime", m_requestedDateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(m_status));
  }

  if(m_traceOutputHasBeenSet)
  {
   payload.WithString("TraceOutput", m_traceOutput);

  }

  if(m_commandPluginsHasBeenSet)
  {
   Array<JsonValue> commandPluginsJsonList(m_commandPlugins.size());
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

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws