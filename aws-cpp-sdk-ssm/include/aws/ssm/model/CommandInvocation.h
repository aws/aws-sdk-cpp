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
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CommandInvocation">AWS
   * API Reference</a></p>
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
     * <p>The name of the invocation target. For Amazon EC2 instances this is the value
     * for the <code>aws:Name</code> tag. For on-premises instances, this is the name
     * of the instance.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the invocation target. For Amazon EC2 instances this is the value
     * for the <code>aws:Name</code> tag. For on-premises instances, this is the name
     * of the instance.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the invocation target. For Amazon EC2 instances this is the value
     * for the <code>aws:Name</code> tag. For on-premises instances, this is the name
     * of the instance.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the invocation target. For Amazon EC2 instances this is the value
     * for the <code>aws:Name</code> tag. For on-premises instances, this is the name
     * of the instance.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the invocation target. For Amazon EC2 instances this is the value
     * for the <code>aws:Name</code> tag. For on-premises instances, this is the name
     * of the instance.</p>
     */
    inline CommandInvocation& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the invocation target. For Amazon EC2 instances this is the value
     * for the <code>aws:Name</code> tag. For on-premises instances, this is the name
     * of the instance.</p>
     */
    inline CommandInvocation& WithInstanceName(Aws::String&& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the invocation target. For Amazon EC2 instances this is the value
     * for the <code>aws:Name</code> tag. For on-premises instances, this is the name
     * of the instance.</p>
     */
    inline CommandInvocation& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

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
     * <p>A detailed status of the command execution for each invocation (each instance
     * targeted by the command). <code>StatusDetails</code> includes more information
     * than <code>Status</code> because it includes states resulting from error and
     * concurrency control parameters. <code>StatusDetails</code> can show different
     * results than <code>Status</code>. For more information about these statuses, see
     * <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Success – The
     * execution of the command or plugin was successfully completed. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – Command execution started on the instance, but the execution was not
     * complete before the execution timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command was not successful on the
     * instance. For a plugin, this indicates that the result code was not zero. For a
     * command invocation, this indicates that the result code for one or more plugins
     * was not zero. Invocation failures count against the <code>MaxErrors</code> limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Canceled –
     * The command was terminated before it was completed. This is a terminal
     * state.</p> </li> <li> <p>Undeliverable – The command can't be delivered to the
     * instance. The instance might not exist or might not be responding. Undeliverable
     * invocations don't count against the parent command’s <code>MaxErrors</code>
     * limit and don't contribute to whether the parent command status is
     * <code>Success</code> or <code>Incomplete</code>. This is a terminal state.</p>
     * </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A detailed status of the command execution for each invocation (each instance
     * targeted by the command). <code>StatusDetails</code> includes more information
     * than <code>Status</code> because it includes states resulting from error and
     * concurrency control parameters. <code>StatusDetails</code> can show different
     * results than <code>Status</code>. For more information about these statuses, see
     * <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Success – The
     * execution of the command or plugin was successfully completed. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – Command execution started on the instance, but the execution was not
     * complete before the execution timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command was not successful on the
     * instance. For a plugin, this indicates that the result code was not zero. For a
     * command invocation, this indicates that the result code for one or more plugins
     * was not zero. Invocation failures count against the <code>MaxErrors</code> limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Canceled –
     * The command was terminated before it was completed. This is a terminal
     * state.</p> </li> <li> <p>Undeliverable – The command can't be delivered to the
     * instance. The instance might not exist or might not be responding. Undeliverable
     * invocations don't count against the parent command’s <code>MaxErrors</code>
     * limit and don't contribute to whether the parent command status is
     * <code>Success</code> or <code>Incomplete</code>. This is a terminal state.</p>
     * </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A detailed status of the command execution for each invocation (each instance
     * targeted by the command). <code>StatusDetails</code> includes more information
     * than <code>Status</code> because it includes states resulting from error and
     * concurrency control parameters. <code>StatusDetails</code> can show different
     * results than <code>Status</code>. For more information about these statuses, see
     * <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Success – The
     * execution of the command or plugin was successfully completed. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – Command execution started on the instance, but the execution was not
     * complete before the execution timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command was not successful on the
     * instance. For a plugin, this indicates that the result code was not zero. For a
     * command invocation, this indicates that the result code for one or more plugins
     * was not zero. Invocation failures count against the <code>MaxErrors</code> limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Canceled –
     * The command was terminated before it was completed. This is a terminal
     * state.</p> </li> <li> <p>Undeliverable – The command can't be delivered to the
     * instance. The instance might not exist or might not be responding. Undeliverable
     * invocations don't count against the parent command’s <code>MaxErrors</code>
     * limit and don't contribute to whether the parent command status is
     * <code>Success</code> or <code>Incomplete</code>. This is a terminal state.</p>
     * </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A detailed status of the command execution for each invocation (each instance
     * targeted by the command). <code>StatusDetails</code> includes more information
     * than <code>Status</code> because it includes states resulting from error and
     * concurrency control parameters. <code>StatusDetails</code> can show different
     * results than <code>Status</code>. For more information about these statuses, see
     * <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Success – The
     * execution of the command or plugin was successfully completed. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – Command execution started on the instance, but the execution was not
     * complete before the execution timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command was not successful on the
     * instance. For a plugin, this indicates that the result code was not zero. For a
     * command invocation, this indicates that the result code for one or more plugins
     * was not zero. Invocation failures count against the <code>MaxErrors</code> limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Canceled –
     * The command was terminated before it was completed. This is a terminal
     * state.</p> </li> <li> <p>Undeliverable – The command can't be delivered to the
     * instance. The instance might not exist or might not be responding. Undeliverable
     * invocations don't count against the parent command’s <code>MaxErrors</code>
     * limit and don't contribute to whether the parent command status is
     * <code>Success</code> or <code>Incomplete</code>. This is a terminal state.</p>
     * </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }

    /**
     * <p>A detailed status of the command execution for each invocation (each instance
     * targeted by the command). <code>StatusDetails</code> includes more information
     * than <code>Status</code> because it includes states resulting from error and
     * concurrency control parameters. <code>StatusDetails</code> can show different
     * results than <code>Status</code>. For more information about these statuses, see
     * <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Success – The
     * execution of the command or plugin was successfully completed. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – Command execution started on the instance, but the execution was not
     * complete before the execution timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command was not successful on the
     * instance. For a plugin, this indicates that the result code was not zero. For a
     * command invocation, this indicates that the result code for one or more plugins
     * was not zero. Invocation failures count against the <code>MaxErrors</code> limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Canceled –
     * The command was terminated before it was completed. This is a terminal
     * state.</p> </li> <li> <p>Undeliverable – The command can't be delivered to the
     * instance. The instance might not exist or might not be responding. Undeliverable
     * invocations don't count against the parent command’s <code>MaxErrors</code>
     * limit and don't contribute to whether the parent command status is
     * <code>Success</code> or <code>Incomplete</code>. This is a terminal state.</p>
     * </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline CommandInvocation& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A detailed status of the command execution for each invocation (each instance
     * targeted by the command). <code>StatusDetails</code> includes more information
     * than <code>Status</code> because it includes states resulting from error and
     * concurrency control parameters. <code>StatusDetails</code> can show different
     * results than <code>Status</code>. For more information about these statuses, see
     * <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Success – The
     * execution of the command or plugin was successfully completed. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – Command execution started on the instance, but the execution was not
     * complete before the execution timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command was not successful on the
     * instance. For a plugin, this indicates that the result code was not zero. For a
     * command invocation, this indicates that the result code for one or more plugins
     * was not zero. Invocation failures count against the <code>MaxErrors</code> limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Canceled –
     * The command was terminated before it was completed. This is a terminal
     * state.</p> </li> <li> <p>Undeliverable – The command can't be delivered to the
     * instance. The instance might not exist or might not be responding. Undeliverable
     * invocations don't count against the parent command’s <code>MaxErrors</code>
     * limit and don't contribute to whether the parent command status is
     * <code>Success</code> or <code>Incomplete</code>. This is a terminal state.</p>
     * </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline CommandInvocation& WithStatusDetails(Aws::String&& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A detailed status of the command execution for each invocation (each instance
     * targeted by the command). <code>StatusDetails</code> includes more information
     * than <code>Status</code> because it includes states resulting from error and
     * concurrency control parameters. <code>StatusDetails</code> can show different
     * results than <code>Status</code>. For more information about these statuses, see
     * <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Success – The
     * execution of the command or plugin was successfully completed. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – Command execution started on the instance, but the execution was not
     * complete before the execution timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command was not successful on the
     * instance. For a plugin, this indicates that the result code was not zero. For a
     * command invocation, this indicates that the result code for one or more plugins
     * was not zero. Invocation failures count against the <code>MaxErrors</code> limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Canceled –
     * The command was terminated before it was completed. This is a terminal
     * state.</p> </li> <li> <p>Undeliverable – The command can't be delivered to the
     * instance. The instance might not exist or might not be responding. Undeliverable
     * invocations don't count against the parent command’s <code>MaxErrors</code>
     * limit and don't contribute to whether the parent command status is
     * <code>Success</code> or <code>Incomplete</code>. This is a terminal state.</p>
     * </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline CommandInvocation& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}

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

    /**
     * <p>The URL to the plugin’s StdOut file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation,
     * <code>StandardOutputUrl</code> is populated if there is just one plugin defined
     * for the command, and the Amazon S3 bucket was defined for the command.</p>
     */
    inline const Aws::String& GetStandardOutputUrl() const{ return m_standardOutputUrl; }

    /**
     * <p>The URL to the plugin’s StdOut file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation,
     * <code>StandardOutputUrl</code> is populated if there is just one plugin defined
     * for the command, and the Amazon S3 bucket was defined for the command.</p>
     */
    inline void SetStandardOutputUrl(const Aws::String& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = value; }

    /**
     * <p>The URL to the plugin’s StdOut file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation,
     * <code>StandardOutputUrl</code> is populated if there is just one plugin defined
     * for the command, and the Amazon S3 bucket was defined for the command.</p>
     */
    inline void SetStandardOutputUrl(Aws::String&& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = value; }

    /**
     * <p>The URL to the plugin’s StdOut file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation,
     * <code>StandardOutputUrl</code> is populated if there is just one plugin defined
     * for the command, and the Amazon S3 bucket was defined for the command.</p>
     */
    inline void SetStandardOutputUrl(const char* value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl.assign(value); }

    /**
     * <p>The URL to the plugin’s StdOut file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation,
     * <code>StandardOutputUrl</code> is populated if there is just one plugin defined
     * for the command, and the Amazon S3 bucket was defined for the command.</p>
     */
    inline CommandInvocation& WithStandardOutputUrl(const Aws::String& value) { SetStandardOutputUrl(value); return *this;}

    /**
     * <p>The URL to the plugin’s StdOut file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation,
     * <code>StandardOutputUrl</code> is populated if there is just one plugin defined
     * for the command, and the Amazon S3 bucket was defined for the command.</p>
     */
    inline CommandInvocation& WithStandardOutputUrl(Aws::String&& value) { SetStandardOutputUrl(value); return *this;}

    /**
     * <p>The URL to the plugin’s StdOut file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation,
     * <code>StandardOutputUrl</code> is populated if there is just one plugin defined
     * for the command, and the Amazon S3 bucket was defined for the command.</p>
     */
    inline CommandInvocation& WithStandardOutputUrl(const char* value) { SetStandardOutputUrl(value); return *this;}

    /**
     * <p>The URL to the plugin’s StdErr file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation, <code>StandardErrorUrl</code>
     * is populated if there is just one plugin defined for the command, and the Amazon
     * S3 bucket was defined for the command.</p>
     */
    inline const Aws::String& GetStandardErrorUrl() const{ return m_standardErrorUrl; }

    /**
     * <p>The URL to the plugin’s StdErr file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation, <code>StandardErrorUrl</code>
     * is populated if there is just one plugin defined for the command, and the Amazon
     * S3 bucket was defined for the command.</p>
     */
    inline void SetStandardErrorUrl(const Aws::String& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = value; }

    /**
     * <p>The URL to the plugin’s StdErr file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation, <code>StandardErrorUrl</code>
     * is populated if there is just one plugin defined for the command, and the Amazon
     * S3 bucket was defined for the command.</p>
     */
    inline void SetStandardErrorUrl(Aws::String&& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = value; }

    /**
     * <p>The URL to the plugin’s StdErr file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation, <code>StandardErrorUrl</code>
     * is populated if there is just one plugin defined for the command, and the Amazon
     * S3 bucket was defined for the command.</p>
     */
    inline void SetStandardErrorUrl(const char* value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl.assign(value); }

    /**
     * <p>The URL to the plugin’s StdErr file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation, <code>StandardErrorUrl</code>
     * is populated if there is just one plugin defined for the command, and the Amazon
     * S3 bucket was defined for the command.</p>
     */
    inline CommandInvocation& WithStandardErrorUrl(const Aws::String& value) { SetStandardErrorUrl(value); return *this;}

    /**
     * <p>The URL to the plugin’s StdErr file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation, <code>StandardErrorUrl</code>
     * is populated if there is just one plugin defined for the command, and the Amazon
     * S3 bucket was defined for the command.</p>
     */
    inline CommandInvocation& WithStandardErrorUrl(Aws::String&& value) { SetStandardErrorUrl(value); return *this;}

    /**
     * <p>The URL to the plugin’s StdErr file in Amazon S3, if the Amazon S3 bucket was
     * defined for the parent command. For an invocation, <code>StandardErrorUrl</code>
     * is populated if there is just one plugin defined for the command, and the Amazon
     * S3 bucket was defined for the command.</p>
     */
    inline CommandInvocation& WithStandardErrorUrl(const char* value) { SetStandardErrorUrl(value); return *this;}

    
    inline const Aws::Vector<CommandPlugin>& GetCommandPlugins() const{ return m_commandPlugins; }

    
    inline void SetCommandPlugins(const Aws::Vector<CommandPlugin>& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins = value; }

    
    inline void SetCommandPlugins(Aws::Vector<CommandPlugin>&& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins = value; }

    
    inline CommandInvocation& WithCommandPlugins(const Aws::Vector<CommandPlugin>& value) { SetCommandPlugins(value); return *this;}

    
    inline CommandInvocation& WithCommandPlugins(Aws::Vector<CommandPlugin>&& value) { SetCommandPlugins(value); return *this;}

    
    inline CommandInvocation& AddCommandPlugins(const CommandPlugin& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins.push_back(value); return *this; }

    
    inline CommandInvocation& AddCommandPlugins(CommandPlugin&& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins.push_back(value); return *this; }

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline CommandInvocation& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes on a per instance basis.</p>
     */
    inline CommandInvocation& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
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
    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;
    Aws::Utils::DateTime m_requestedDateTime;
    bool m_requestedDateTimeHasBeenSet;
    CommandInvocationStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet;
    Aws::String m_traceOutput;
    bool m_traceOutputHasBeenSet;
    Aws::String m_standardOutputUrl;
    bool m_standardOutputUrlHasBeenSet;
    Aws::String m_standardErrorUrl;
    bool m_standardErrorUrlHasBeenSet;
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
