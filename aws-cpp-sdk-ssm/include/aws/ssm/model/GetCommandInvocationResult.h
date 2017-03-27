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
#include <aws/ssm/model/CommandInvocationStatus.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_SSM_API GetCommandInvocationResult
  {
  public:
    GetCommandInvocationResult();
    GetCommandInvocationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCommandInvocationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The parent command ID of the invocation plugin.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }

    /**
     * <p>The parent command ID of the invocation plugin.</p>
     */
    inline void SetCommandId(const Aws::String& value) { m_commandId = value; }

    /**
     * <p>The parent command ID of the invocation plugin.</p>
     */
    inline void SetCommandId(Aws::String&& value) { m_commandId = value; }

    /**
     * <p>The parent command ID of the invocation plugin.</p>
     */
    inline void SetCommandId(const char* value) { m_commandId.assign(value); }

    /**
     * <p>The parent command ID of the invocation plugin.</p>
     */
    inline GetCommandInvocationResult& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}

    /**
     * <p>The parent command ID of the invocation plugin.</p>
     */
    inline GetCommandInvocationResult& WithCommandId(Aws::String&& value) { SetCommandId(value); return *this;}

    /**
     * <p>The parent command ID of the invocation plugin.</p>
     */
    inline GetCommandInvocationResult& WithCommandId(const char* value) { SetCommandId(value); return *this;}

    /**
     * <p>The ID of the managed instance targeted by the command. A managed instance
     * can be an Amazon EC2 instance or an instance in your hybrid environment that is
     * configured for Systems Manager.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the managed instance targeted by the command. A managed instance
     * can be an Amazon EC2 instance or an instance in your hybrid environment that is
     * configured for Systems Manager.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /**
     * <p>The ID of the managed instance targeted by the command. A managed instance
     * can be an Amazon EC2 instance or an instance in your hybrid environment that is
     * configured for Systems Manager.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = value; }

    /**
     * <p>The ID of the managed instance targeted by the command. A managed instance
     * can be an Amazon EC2 instance or an instance in your hybrid environment that is
     * configured for Systems Manager.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /**
     * <p>The ID of the managed instance targeted by the command. A managed instance
     * can be an Amazon EC2 instance or an instance in your hybrid environment that is
     * configured for Systems Manager.</p>
     */
    inline GetCommandInvocationResult& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the managed instance targeted by the command. A managed instance
     * can be an Amazon EC2 instance or an instance in your hybrid environment that is
     * configured for Systems Manager.</p>
     */
    inline GetCommandInvocationResult& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the managed instance targeted by the command. A managed instance
     * can be an Amazon EC2 instance or an instance in your hybrid environment that is
     * configured for Systems Manager.</p>
     */
    inline GetCommandInvocationResult& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The comment text for the command.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>The comment text for the command.</p>
     */
    inline void SetComment(const Aws::String& value) { m_comment = value; }

    /**
     * <p>The comment text for the command.</p>
     */
    inline void SetComment(Aws::String&& value) { m_comment = value; }

    /**
     * <p>The comment text for the command.</p>
     */
    inline void SetComment(const char* value) { m_comment.assign(value); }

    /**
     * <p>The comment text for the command.</p>
     */
    inline GetCommandInvocationResult& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>The comment text for the command.</p>
     */
    inline GetCommandInvocationResult& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * <p>The comment text for the command.</p>
     */
    inline GetCommandInvocationResult& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * <p>The name of the document that was executed. For example,
     * AWS-RunShellScript.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the document that was executed. For example,
     * AWS-RunShellScript.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentName = value; }

    /**
     * <p>The name of the document that was executed. For example,
     * AWS-RunShellScript.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentName = value; }

    /**
     * <p>The name of the document that was executed. For example,
     * AWS-RunShellScript.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentName.assign(value); }

    /**
     * <p>The name of the document that was executed. For example,
     * AWS-RunShellScript.</p>
     */
    inline GetCommandInvocationResult& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the document that was executed. For example,
     * AWS-RunShellScript.</p>
     */
    inline GetCommandInvocationResult& WithDocumentName(Aws::String&& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the document that was executed. For example,
     * AWS-RunShellScript.</p>
     */
    inline GetCommandInvocationResult& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the plugin for which you want detailed results. For example,
     * aws:RunShellScript is a plugin.</p>
     */
    inline const Aws::String& GetPluginName() const{ return m_pluginName; }

    /**
     * <p>The name of the plugin for which you want detailed results. For example,
     * aws:RunShellScript is a plugin.</p>
     */
    inline void SetPluginName(const Aws::String& value) { m_pluginName = value; }

    /**
     * <p>The name of the plugin for which you want detailed results. For example,
     * aws:RunShellScript is a plugin.</p>
     */
    inline void SetPluginName(Aws::String&& value) { m_pluginName = value; }

    /**
     * <p>The name of the plugin for which you want detailed results. For example,
     * aws:RunShellScript is a plugin.</p>
     */
    inline void SetPluginName(const char* value) { m_pluginName.assign(value); }

    /**
     * <p>The name of the plugin for which you want detailed results. For example,
     * aws:RunShellScript is a plugin.</p>
     */
    inline GetCommandInvocationResult& WithPluginName(const Aws::String& value) { SetPluginName(value); return *this;}

    /**
     * <p>The name of the plugin for which you want detailed results. For example,
     * aws:RunShellScript is a plugin.</p>
     */
    inline GetCommandInvocationResult& WithPluginName(Aws::String&& value) { SetPluginName(value); return *this;}

    /**
     * <p>The name of the plugin for which you want detailed results. For example,
     * aws:RunShellScript is a plugin.</p>
     */
    inline GetCommandInvocationResult& WithPluginName(const char* value) { SetPluginName(value); return *this;}

    /**
     * <p>The error level response code for the plugin script. If the response code is
     * <code>-1</code>, then the command has not started executing on the instance, or
     * it was not received by the instance.</p>
     */
    inline int GetResponseCode() const{ return m_responseCode; }

    /**
     * <p>The error level response code for the plugin script. If the response code is
     * <code>-1</code>, then the command has not started executing on the instance, or
     * it was not received by the instance.</p>
     */
    inline void SetResponseCode(int value) { m_responseCode = value; }

    /**
     * <p>The error level response code for the plugin script. If the response code is
     * <code>-1</code>, then the command has not started executing on the instance, or
     * it was not received by the instance.</p>
     */
    inline GetCommandInvocationResult& WithResponseCode(int value) { SetResponseCode(value); return *this;}

    /**
     * <p>The date and time the plugin started executing. Date and time are written in
     * ISO 8601 format. For example, August 28, 2016 is represented as 2016-08-28. If
     * the plugin has not started to execute, the string is empty.</p>
     */
    inline const Aws::String& GetExecutionStartDateTime() const{ return m_executionStartDateTime; }

    /**
     * <p>The date and time the plugin started executing. Date and time are written in
     * ISO 8601 format. For example, August 28, 2016 is represented as 2016-08-28. If
     * the plugin has not started to execute, the string is empty.</p>
     */
    inline void SetExecutionStartDateTime(const Aws::String& value) { m_executionStartDateTime = value; }

    /**
     * <p>The date and time the plugin started executing. Date and time are written in
     * ISO 8601 format. For example, August 28, 2016 is represented as 2016-08-28. If
     * the plugin has not started to execute, the string is empty.</p>
     */
    inline void SetExecutionStartDateTime(Aws::String&& value) { m_executionStartDateTime = value; }

    /**
     * <p>The date and time the plugin started executing. Date and time are written in
     * ISO 8601 format. For example, August 28, 2016 is represented as 2016-08-28. If
     * the plugin has not started to execute, the string is empty.</p>
     */
    inline void SetExecutionStartDateTime(const char* value) { m_executionStartDateTime.assign(value); }

    /**
     * <p>The date and time the plugin started executing. Date and time are written in
     * ISO 8601 format. For example, August 28, 2016 is represented as 2016-08-28. If
     * the plugin has not started to execute, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionStartDateTime(const Aws::String& value) { SetExecutionStartDateTime(value); return *this;}

    /**
     * <p>The date and time the plugin started executing. Date and time are written in
     * ISO 8601 format. For example, August 28, 2016 is represented as 2016-08-28. If
     * the plugin has not started to execute, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionStartDateTime(Aws::String&& value) { SetExecutionStartDateTime(value); return *this;}

    /**
     * <p>The date and time the plugin started executing. Date and time are written in
     * ISO 8601 format. For example, August 28, 2016 is represented as 2016-08-28. If
     * the plugin has not started to execute, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionStartDateTime(const char* value) { SetExecutionStartDateTime(value); return *this;}

    /**
     * <p>Duration since <code>ExecutionStartDateTime</code>.</p>
     */
    inline const Aws::String& GetExecutionElapsedTime() const{ return m_executionElapsedTime; }

    /**
     * <p>Duration since <code>ExecutionStartDateTime</code>.</p>
     */
    inline void SetExecutionElapsedTime(const Aws::String& value) { m_executionElapsedTime = value; }

    /**
     * <p>Duration since <code>ExecutionStartDateTime</code>.</p>
     */
    inline void SetExecutionElapsedTime(Aws::String&& value) { m_executionElapsedTime = value; }

    /**
     * <p>Duration since <code>ExecutionStartDateTime</code>.</p>
     */
    inline void SetExecutionElapsedTime(const char* value) { m_executionElapsedTime.assign(value); }

    /**
     * <p>Duration since <code>ExecutionStartDateTime</code>.</p>
     */
    inline GetCommandInvocationResult& WithExecutionElapsedTime(const Aws::String& value) { SetExecutionElapsedTime(value); return *this;}

    /**
     * <p>Duration since <code>ExecutionStartDateTime</code>.</p>
     */
    inline GetCommandInvocationResult& WithExecutionElapsedTime(Aws::String&& value) { SetExecutionElapsedTime(value); return *this;}

    /**
     * <p>Duration since <code>ExecutionStartDateTime</code>.</p>
     */
    inline GetCommandInvocationResult& WithExecutionElapsedTime(const char* value) { SetExecutionElapsedTime(value); return *this;}

    /**
     * <p>The date and time the plugin was finished executing. Date and time are
     * written in ISO 8601 format. For example, August 28, 2016 is represented as
     * 2016-08-28. If the plugin has not started to execute, the string is empty.</p>
     */
    inline const Aws::String& GetExecutionEndDateTime() const{ return m_executionEndDateTime; }

    /**
     * <p>The date and time the plugin was finished executing. Date and time are
     * written in ISO 8601 format. For example, August 28, 2016 is represented as
     * 2016-08-28. If the plugin has not started to execute, the string is empty.</p>
     */
    inline void SetExecutionEndDateTime(const Aws::String& value) { m_executionEndDateTime = value; }

    /**
     * <p>The date and time the plugin was finished executing. Date and time are
     * written in ISO 8601 format. For example, August 28, 2016 is represented as
     * 2016-08-28. If the plugin has not started to execute, the string is empty.</p>
     */
    inline void SetExecutionEndDateTime(Aws::String&& value) { m_executionEndDateTime = value; }

    /**
     * <p>The date and time the plugin was finished executing. Date and time are
     * written in ISO 8601 format. For example, August 28, 2016 is represented as
     * 2016-08-28. If the plugin has not started to execute, the string is empty.</p>
     */
    inline void SetExecutionEndDateTime(const char* value) { m_executionEndDateTime.assign(value); }

    /**
     * <p>The date and time the plugin was finished executing. Date and time are
     * written in ISO 8601 format. For example, August 28, 2016 is represented as
     * 2016-08-28. If the plugin has not started to execute, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionEndDateTime(const Aws::String& value) { SetExecutionEndDateTime(value); return *this;}

    /**
     * <p>The date and time the plugin was finished executing. Date and time are
     * written in ISO 8601 format. For example, August 28, 2016 is represented as
     * 2016-08-28. If the plugin has not started to execute, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionEndDateTime(Aws::String&& value) { SetExecutionEndDateTime(value); return *this;}

    /**
     * <p>The date and time the plugin was finished executing. Date and time are
     * written in ISO 8601 format. For example, August 28, 2016 is represented as
     * 2016-08-28. If the plugin has not started to execute, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionEndDateTime(const char* value) { SetExecutionEndDateTime(value); return *this;}

    /**
     * <p>The status of the parent command for this invocation. This status can be
     * different than <code>StatusDetails</code>.</p>
     */
    inline const CommandInvocationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the parent command for this invocation. This status can be
     * different than <code>StatusDetails</code>.</p>
     */
    inline void SetStatus(const CommandInvocationStatus& value) { m_status = value; }

    /**
     * <p>The status of the parent command for this invocation. This status can be
     * different than <code>StatusDetails</code>.</p>
     */
    inline void SetStatus(CommandInvocationStatus&& value) { m_status = value; }

    /**
     * <p>The status of the parent command for this invocation. This status can be
     * different than <code>StatusDetails</code>.</p>
     */
    inline GetCommandInvocationResult& WithStatus(const CommandInvocationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the parent command for this invocation. This status can be
     * different than <code>StatusDetails</code>.</p>
     */
    inline GetCommandInvocationResult& WithStatus(CommandInvocationStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>A detailed status of the command execution for an invocation.
     * <code>StatusDetails</code> includes more information than <code>Status</code>
     * because it includes states resulting from error and concurrency control
     * parameters. <code>StatusDetails</code> can show different results than
     * <code>Status</code>. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Delayed – The
     * system attempted to send the command to the target, but the target was not
     * available. The instance might not be available because of network issues, the
     * instance was stopped, etc. The system will try to deliver the command again.</p>
     * </li> <li> <p>Success – The command or plugin was executed successfully. This is
     * a terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – The command started to execute on the instance, but the execution
     * was not complete before the timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command wasn't executed successfully on
     * the instance. For a plugin, this indicates that the result code was not zero.
     * For a command invocation, this indicates that the result code for one or more
     * plugins was not zero. Invocation failures count against the
     * <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Canceled – The command was terminated before it was
     * completed. This is a terminal state.</p> </li> <li> <p>Undeliverable – The
     * command can't be delivered to the instance. The instance might not exist or
     * might not be responding. Undeliverable invocations don't count against the
     * parent command’s <code>MaxErrors</code> limit and don't contribute to whether
     * the parent command status is <code>Success</code> or <code>Incomplete</code>.
     * This is a terminal state.</p> </li> <li> <p>Terminated – The parent command
     * exceeded its <code>MaxErrors</code> limit and subsequent command invocations
     * were canceled by the system. This is a terminal state.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A detailed status of the command execution for an invocation.
     * <code>StatusDetails</code> includes more information than <code>Status</code>
     * because it includes states resulting from error and concurrency control
     * parameters. <code>StatusDetails</code> can show different results than
     * <code>Status</code>. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Delayed – The
     * system attempted to send the command to the target, but the target was not
     * available. The instance might not be available because of network issues, the
     * instance was stopped, etc. The system will try to deliver the command again.</p>
     * </li> <li> <p>Success – The command or plugin was executed successfully. This is
     * a terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – The command started to execute on the instance, but the execution
     * was not complete before the timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command wasn't executed successfully on
     * the instance. For a plugin, this indicates that the result code was not zero.
     * For a command invocation, this indicates that the result code for one or more
     * plugins was not zero. Invocation failures count against the
     * <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Canceled – The command was terminated before it was
     * completed. This is a terminal state.</p> </li> <li> <p>Undeliverable – The
     * command can't be delivered to the instance. The instance might not exist or
     * might not be responding. Undeliverable invocations don't count against the
     * parent command’s <code>MaxErrors</code> limit and don't contribute to whether
     * the parent command status is <code>Success</code> or <code>Incomplete</code>.
     * This is a terminal state.</p> </li> <li> <p>Terminated – The parent command
     * exceeded its <code>MaxErrors</code> limit and subsequent command invocations
     * were canceled by the system. This is a terminal state.</p> </li> </ul>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetails = value; }

    /**
     * <p>A detailed status of the command execution for an invocation.
     * <code>StatusDetails</code> includes more information than <code>Status</code>
     * because it includes states resulting from error and concurrency control
     * parameters. <code>StatusDetails</code> can show different results than
     * <code>Status</code>. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Delayed – The
     * system attempted to send the command to the target, but the target was not
     * available. The instance might not be available because of network issues, the
     * instance was stopped, etc. The system will try to deliver the command again.</p>
     * </li> <li> <p>Success – The command or plugin was executed successfully. This is
     * a terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – The command started to execute on the instance, but the execution
     * was not complete before the timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command wasn't executed successfully on
     * the instance. For a plugin, this indicates that the result code was not zero.
     * For a command invocation, this indicates that the result code for one or more
     * plugins was not zero. Invocation failures count against the
     * <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Canceled – The command was terminated before it was
     * completed. This is a terminal state.</p> </li> <li> <p>Undeliverable – The
     * command can't be delivered to the instance. The instance might not exist or
     * might not be responding. Undeliverable invocations don't count against the
     * parent command’s <code>MaxErrors</code> limit and don't contribute to whether
     * the parent command status is <code>Success</code> or <code>Incomplete</code>.
     * This is a terminal state.</p> </li> <li> <p>Terminated – The parent command
     * exceeded its <code>MaxErrors</code> limit and subsequent command invocations
     * were canceled by the system. This is a terminal state.</p> </li> </ul>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetails = value; }

    /**
     * <p>A detailed status of the command execution for an invocation.
     * <code>StatusDetails</code> includes more information than <code>Status</code>
     * because it includes states resulting from error and concurrency control
     * parameters. <code>StatusDetails</code> can show different results than
     * <code>Status</code>. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Delayed – The
     * system attempted to send the command to the target, but the target was not
     * available. The instance might not be available because of network issues, the
     * instance was stopped, etc. The system will try to deliver the command again.</p>
     * </li> <li> <p>Success – The command or plugin was executed successfully. This is
     * a terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – The command started to execute on the instance, but the execution
     * was not complete before the timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command wasn't executed successfully on
     * the instance. For a plugin, this indicates that the result code was not zero.
     * For a command invocation, this indicates that the result code for one or more
     * plugins was not zero. Invocation failures count against the
     * <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Canceled – The command was terminated before it was
     * completed. This is a terminal state.</p> </li> <li> <p>Undeliverable – The
     * command can't be delivered to the instance. The instance might not exist or
     * might not be responding. Undeliverable invocations don't count against the
     * parent command’s <code>MaxErrors</code> limit and don't contribute to whether
     * the parent command status is <code>Success</code> or <code>Incomplete</code>.
     * This is a terminal state.</p> </li> <li> <p>Terminated – The parent command
     * exceeded its <code>MaxErrors</code> limit and subsequent command invocations
     * were canceled by the system. This is a terminal state.</p> </li> </ul>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetails.assign(value); }

    /**
     * <p>A detailed status of the command execution for an invocation.
     * <code>StatusDetails</code> includes more information than <code>Status</code>
     * because it includes states resulting from error and concurrency control
     * parameters. <code>StatusDetails</code> can show different results than
     * <code>Status</code>. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Delayed – The
     * system attempted to send the command to the target, but the target was not
     * available. The instance might not be available because of network issues, the
     * instance was stopped, etc. The system will try to deliver the command again.</p>
     * </li> <li> <p>Success – The command or plugin was executed successfully. This is
     * a terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – The command started to execute on the instance, but the execution
     * was not complete before the timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command wasn't executed successfully on
     * the instance. For a plugin, this indicates that the result code was not zero.
     * For a command invocation, this indicates that the result code for one or more
     * plugins was not zero. Invocation failures count against the
     * <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Canceled – The command was terminated before it was
     * completed. This is a terminal state.</p> </li> <li> <p>Undeliverable – The
     * command can't be delivered to the instance. The instance might not exist or
     * might not be responding. Undeliverable invocations don't count against the
     * parent command’s <code>MaxErrors</code> limit and don't contribute to whether
     * the parent command status is <code>Success</code> or <code>Incomplete</code>.
     * This is a terminal state.</p> </li> <li> <p>Terminated – The parent command
     * exceeded its <code>MaxErrors</code> limit and subsequent command invocations
     * were canceled by the system. This is a terminal state.</p> </li> </ul>
     */
    inline GetCommandInvocationResult& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A detailed status of the command execution for an invocation.
     * <code>StatusDetails</code> includes more information than <code>Status</code>
     * because it includes states resulting from error and concurrency control
     * parameters. <code>StatusDetails</code> can show different results than
     * <code>Status</code>. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Delayed – The
     * system attempted to send the command to the target, but the target was not
     * available. The instance might not be available because of network issues, the
     * instance was stopped, etc. The system will try to deliver the command again.</p>
     * </li> <li> <p>Success – The command or plugin was executed successfully. This is
     * a terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – The command started to execute on the instance, but the execution
     * was not complete before the timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command wasn't executed successfully on
     * the instance. For a plugin, this indicates that the result code was not zero.
     * For a command invocation, this indicates that the result code for one or more
     * plugins was not zero. Invocation failures count against the
     * <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Canceled – The command was terminated before it was
     * completed. This is a terminal state.</p> </li> <li> <p>Undeliverable – The
     * command can't be delivered to the instance. The instance might not exist or
     * might not be responding. Undeliverable invocations don't count against the
     * parent command’s <code>MaxErrors</code> limit and don't contribute to whether
     * the parent command status is <code>Success</code> or <code>Incomplete</code>.
     * This is a terminal state.</p> </li> <li> <p>Terminated – The parent command
     * exceeded its <code>MaxErrors</code> limit and subsequent command invocations
     * were canceled by the system. This is a terminal state.</p> </li> </ul>
     */
    inline GetCommandInvocationResult& WithStatusDetails(Aws::String&& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A detailed status of the command execution for an invocation.
     * <code>StatusDetails</code> includes more information than <code>Status</code>
     * because it includes states resulting from error and concurrency control
     * parameters. <code>StatusDetails</code> can show different results than
     * <code>Status</code>. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to the
     * instance.</p> </li> <li> <p>In Progress – The command has been sent to the
     * instance but has not reached a terminal state.</p> </li> <li> <p>Delayed – The
     * system attempted to send the command to the target, but the target was not
     * available. The instance might not be available because of network issues, the
     * instance was stopped, etc. The system will try to deliver the command again.</p>
     * </li> <li> <p>Success – The command or plugin was executed successfully. This is
     * a terminal state.</p> </li> <li> <p>Delivery Timed Out – The command was not
     * delivered to the instance before the delivery timeout expired. Delivery timeouts
     * do not count against the parent command’s <code>MaxErrors</code> limit, but they
     * do contribute to whether the parent command status is <code>Success</code> or
     * <code>Incomplete</code>. This is a terminal state.</p> </li> <li> <p>Execution
     * Timed Out – The command started to execute on the instance, but the execution
     * was not complete before the timeout expired. Execution timeouts count against
     * the <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed – The command wasn't executed successfully on
     * the instance. For a plugin, this indicates that the result code was not zero.
     * For a command invocation, this indicates that the result code for one or more
     * plugins was not zero. Invocation failures count against the
     * <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Canceled – The command was terminated before it was
     * completed. This is a terminal state.</p> </li> <li> <p>Undeliverable – The
     * command can't be delivered to the instance. The instance might not exist or
     * might not be responding. Undeliverable invocations don't count against the
     * parent command’s <code>MaxErrors</code> limit and don't contribute to whether
     * the parent command status is <code>Success</code> or <code>Incomplete</code>.
     * This is a terminal state.</p> </li> <li> <p>Terminated – The parent command
     * exceeded its <code>MaxErrors</code> limit and subsequent command invocations
     * were canceled by the system. This is a terminal state.</p> </li> </ul>
     */
    inline GetCommandInvocationResult& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished executing, if <code>ExecutionStatus</code> is neither
     * <code>Succeeded</code> nor <code>Failed</code>, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardOutputContent() const{ return m_standardOutputContent; }

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished executing, if <code>ExecutionStatus</code> is neither
     * <code>Succeeded</code> nor <code>Failed</code>, then this string is empty.</p>
     */
    inline void SetStandardOutputContent(const Aws::String& value) { m_standardOutputContent = value; }

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished executing, if <code>ExecutionStatus</code> is neither
     * <code>Succeeded</code> nor <code>Failed</code>, then this string is empty.</p>
     */
    inline void SetStandardOutputContent(Aws::String&& value) { m_standardOutputContent = value; }

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished executing, if <code>ExecutionStatus</code> is neither
     * <code>Succeeded</code> nor <code>Failed</code>, then this string is empty.</p>
     */
    inline void SetStandardOutputContent(const char* value) { m_standardOutputContent.assign(value); }

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished executing, if <code>ExecutionStatus</code> is neither
     * <code>Succeeded</code> nor <code>Failed</code>, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardOutputContent(const Aws::String& value) { SetStandardOutputContent(value); return *this;}

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished executing, if <code>ExecutionStatus</code> is neither
     * <code>Succeeded</code> nor <code>Failed</code>, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardOutputContent(Aws::String&& value) { SetStandardOutputContent(value); return *this;}

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished executing, if <code>ExecutionStatus</code> is neither
     * <code>Succeeded</code> nor <code>Failed</code>, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardOutputContent(const char* value) { SetStandardOutputContent(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If an Amazon S3 bucket was not specified, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardOutputUrl() const{ return m_standardOutputUrl; }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If an Amazon S3 bucket was not specified, then this string is empty.</p>
     */
    inline void SetStandardOutputUrl(const Aws::String& value) { m_standardOutputUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If an Amazon S3 bucket was not specified, then this string is empty.</p>
     */
    inline void SetStandardOutputUrl(Aws::String&& value) { m_standardOutputUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If an Amazon S3 bucket was not specified, then this string is empty.</p>
     */
    inline void SetStandardOutputUrl(const char* value) { m_standardOutputUrl.assign(value); }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If an Amazon S3 bucket was not specified, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardOutputUrl(const Aws::String& value) { SetStandardOutputUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If an Amazon S3 bucket was not specified, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardOutputUrl(Aws::String&& value) { SetStandardOutputUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If an Amazon S3 bucket was not specified, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardOutputUrl(const char* value) { SetStandardOutputUrl(value); return *this;}

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardErrorContent() const{ return m_standardErrorContent; }

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline void SetStandardErrorContent(const Aws::String& value) { m_standardErrorContent = value; }

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline void SetStandardErrorContent(Aws::String&& value) { m_standardErrorContent = value; }

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline void SetStandardErrorContent(const char* value) { m_standardErrorContent.assign(value); }

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorContent(const Aws::String& value) { SetStandardErrorContent(value); return *this;}

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorContent(Aws::String&& value) { SetStandardErrorContent(value); return *this;}

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorContent(const char* value) { SetStandardErrorContent(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardErrorUrl() const{ return m_standardErrorUrl; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(const Aws::String& value) { m_standardErrorUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(Aws::String&& value) { m_standardErrorUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(const char* value) { m_standardErrorUrl.assign(value); }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorUrl(const Aws::String& value) { SetStandardErrorUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorUrl(Aws::String&& value) { SetStandardErrorUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished executing, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorUrl(const char* value) { SetStandardErrorUrl(value); return *this;}

  private:
    Aws::String m_commandId;
    Aws::String m_instanceId;
    Aws::String m_comment;
    Aws::String m_documentName;
    Aws::String m_pluginName;
    int m_responseCode;
    Aws::String m_executionStartDateTime;
    Aws::String m_executionElapsedTime;
    Aws::String m_executionEndDateTime;
    CommandInvocationStatus m_status;
    Aws::String m_statusDetails;
    Aws::String m_standardOutputContent;
    Aws::String m_standardOutputUrl;
    Aws::String m_standardErrorContent;
    Aws::String m_standardErrorUrl;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
