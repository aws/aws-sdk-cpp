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
#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/CommandInvocationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/NotificationConfig.h>
#include <aws/ssm/model/CommandPlugin.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>An invocation is copy of a command sent to a specific instance. A command can
   * apply to one or more instances. A command invocation applies to one instance.
   * For example, if a user executes SendCommand against three instances, then a
   * command invocation is created for each requested instance ID. A command
   * invocation returns status and detail information about a command you executed.
   * </p>
   */
  class AWS_SSM_API CommandInvocation
  {
  public:
    CommandInvocation();
    CommandInvocation(const Aws::Utils::Json::JsonValue& jsonValue);
    CommandInvocation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The command against which this invocation was requested.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }

    /**
     * <p>The command against which this invocation was requested.</p>
     */
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * <p>The command against which this invocation was requested.</p>
     */
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * <p>The command against which this invocation was requested.</p>
     */
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }

    /**
     * <p>The command against which this invocation was requested.</p>
     */
    inline CommandInvocation& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}

    /**
     * <p>The command against which this invocation was requested.</p>
     */
    inline CommandInvocation& WithCommandId(Aws::String&& value) { SetCommandId(value); return *this;}

    /**
     * <p>The command against which this invocation was requested.</p>
     */
    inline CommandInvocation& WithCommandId(const char* value) { SetCommandId(value); return *this;}

    /**
     * <p>The instance ID in which this invocation was requested.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID in which this invocation was requested.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID in which this invocation was requested.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID in which this invocation was requested.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID in which this invocation was requested.</p>
     */
    inline CommandInvocation& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID in which this invocation was requested.</p>
     */
    inline CommandInvocation& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID in which this invocation was requested.</p>
     */
    inline CommandInvocation& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline CommandInvocation& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline CommandInvocation& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline CommandInvocation& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * <p>The document name that was requested for execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The document name that was requested for execution.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The document name that was requested for execution.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The document name that was requested for execution.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The document name that was requested for execution.</p>
     */
    inline CommandInvocation& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The document name that was requested for execution.</p>
     */
    inline CommandInvocation& WithDocumentName(Aws::String&& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The document name that was requested for execution.</p>
     */
    inline CommandInvocation& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}

    /**
     * <p>The time and date the request was sent to this instance.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedDateTime() const{ return m_requestedDateTime; }

    /**
     * <p>The time and date the request was sent to this instance.</p>
     */
    inline void SetRequestedDateTime(const Aws::Utils::DateTime& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = value; }

    /**
     * <p>The time and date the request was sent to this instance.</p>
     */
    inline void SetRequestedDateTime(Aws::Utils::DateTime&& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = value; }

    /**
     * <p>The time and date the request was sent to this instance.</p>
     */
    inline CommandInvocation& WithRequestedDateTime(const Aws::Utils::DateTime& value) { SetRequestedDateTime(value); return *this;}

    /**
     * <p>The time and date the request was sent to this instance.</p>
     */
    inline CommandInvocation& WithRequestedDateTime(Aws::Utils::DateTime&& value) { SetRequestedDateTime(value); return *this;}

    /**
     * <p>Whether or not the invocation succeeded, failed, or is pending.</p>
     */
    inline const CommandInvocationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Whether or not the invocation succeeded, failed, or is pending.</p>
     */
    inline void SetStatus(const CommandInvocationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Whether or not the invocation succeeded, failed, or is pending.</p>
     */
    inline void SetStatus(CommandInvocationStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Whether or not the invocation succeeded, failed, or is pending.</p>
     */
    inline CommandInvocation& WithStatus(const CommandInvocationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Whether or not the invocation succeeded, failed, or is pending.</p>
     */
    inline CommandInvocation& WithStatus(CommandInvocationStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p> Gets the trace output sent by the agent. </p>
     */
    inline const Aws::String& GetTraceOutput() const{ return m_traceOutput; }

    /**
     * <p> Gets the trace output sent by the agent. </p>
     */
    inline void SetTraceOutput(const Aws::String& value) { m_traceOutputHasBeenSet = true; m_traceOutput = value; }

    /**
     * <p> Gets the trace output sent by the agent. </p>
     */
    inline void SetTraceOutput(Aws::String&& value) { m_traceOutputHasBeenSet = true; m_traceOutput = value; }

    /**
     * <p> Gets the trace output sent by the agent. </p>
     */
    inline void SetTraceOutput(const char* value) { m_traceOutputHasBeenSet = true; m_traceOutput.assign(value); }

    /**
     * <p> Gets the trace output sent by the agent. </p>
     */
    inline CommandInvocation& WithTraceOutput(const Aws::String& value) { SetTraceOutput(value); return *this;}

    /**
     * <p> Gets the trace output sent by the agent. </p>
     */
    inline CommandInvocation& WithTraceOutput(Aws::String&& value) { SetTraceOutput(value); return *this;}

    /**
     * <p> Gets the trace output sent by the agent. </p>
     */
    inline CommandInvocation& WithTraceOutput(const char* value) { SetTraceOutput(value); return *this;}

    
    inline const Aws::Vector<CommandPlugin>& GetCommandPlugins() const{ return m_commandPlugins; }

    
    inline void SetCommandPlugins(const Aws::Vector<CommandPlugin>& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins = value; }

    
    inline void SetCommandPlugins(Aws::Vector<CommandPlugin>&& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins = value; }

    
    inline CommandInvocation& WithCommandPlugins(const Aws::Vector<CommandPlugin>& value) { SetCommandPlugins(value); return *this;}

    
    inline CommandInvocation& WithCommandPlugins(Aws::Vector<CommandPlugin>&& value) { SetCommandPlugins(value); return *this;}

    
    inline CommandInvocation& AddCommandPlugins(const CommandPlugin& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins.push_back(value); return *this; }

    
    inline CommandInvocation& AddCommandPlugins(CommandPlugin&& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins.push_back(value); return *this; }

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline CommandInvocation& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline CommandInvocation& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM service role that SSM uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline CommandInvocation& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per instance basis.</p>
     */
    inline const NotificationConfig& GetNotificationConfig() const{ return m_notificationConfig; }

    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per instance basis.</p>
     */
    inline void SetNotificationConfig(const NotificationConfig& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }

    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per instance basis.</p>
     */
    inline void SetNotificationConfig(NotificationConfig&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }

    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per instance basis.</p>
     */
    inline CommandInvocation& WithNotificationConfig(const NotificationConfig& value) { SetNotificationConfig(value); return *this;}

    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per instance basis.</p>
     */
    inline CommandInvocation& WithNotificationConfig(NotificationConfig&& value) { SetNotificationConfig(value); return *this;}

  private:
    Aws::String m_commandId;
    bool m_commandIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;
    Aws::Utils::DateTime m_requestedDateTime;
    bool m_requestedDateTimeHasBeenSet;
    CommandInvocationStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_traceOutput;
    bool m_traceOutputHasBeenSet;
    Aws::Vector<CommandPlugin> m_commandPlugins;
    bool m_commandPluginsHasBeenSet;
    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;
    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
