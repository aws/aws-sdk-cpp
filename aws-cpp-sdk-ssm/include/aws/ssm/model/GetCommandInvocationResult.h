/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/model/CloudWatchOutputConfig.h>
#include <utility>

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
    GetCommandInvocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCommandInvocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetCommandId(Aws::String&& value) { m_commandId = std::move(value); }

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
    inline GetCommandInvocationResult& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}

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
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }

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
    inline GetCommandInvocationResult& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

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
    inline void SetComment(Aws::String&& value) { m_comment = std::move(value); }

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
    inline GetCommandInvocationResult& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>The comment text for the command.</p>
     */
    inline GetCommandInvocationResult& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The name of the document that was run. For example, AWS-RunShellScript.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the document that was run. For example, AWS-RunShellScript.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentName = value; }

    /**
     * <p>The name of the document that was run. For example, AWS-RunShellScript.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentName = std::move(value); }

    /**
     * <p>The name of the document that was run. For example, AWS-RunShellScript.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentName.assign(value); }

    /**
     * <p>The name of the document that was run. For example, AWS-RunShellScript.</p>
     */
    inline GetCommandInvocationResult& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the document that was run. For example, AWS-RunShellScript.</p>
     */
    inline GetCommandInvocationResult& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name of the document that was run. For example, AWS-RunShellScript.</p>
     */
    inline GetCommandInvocationResult& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The SSM document version used in the request.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The SSM document version used in the request.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersion = value; }

    /**
     * <p>The SSM document version used in the request.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersion = std::move(value); }

    /**
     * <p>The SSM document version used in the request.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersion.assign(value); }

    /**
     * <p>The SSM document version used in the request.</p>
     */
    inline GetCommandInvocationResult& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The SSM document version used in the request.</p>
     */
    inline GetCommandInvocationResult& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The SSM document version used in the request.</p>
     */
    inline GetCommandInvocationResult& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


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
    inline void SetPluginName(Aws::String&& value) { m_pluginName = std::move(value); }

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
    inline GetCommandInvocationResult& WithPluginName(Aws::String&& value) { SetPluginName(std::move(value)); return *this;}

    /**
     * <p>The name of the plugin for which you want detailed results. For example,
     * aws:RunShellScript is a plugin.</p>
     */
    inline GetCommandInvocationResult& WithPluginName(const char* value) { SetPluginName(value); return *this;}


    /**
     * <p>The error level response code for the plugin script. If the response code is
     * -1, then the command has not started running on the instance, or it was not
     * received by the instance.</p>
     */
    inline int GetResponseCode() const{ return m_responseCode; }

    /**
     * <p>The error level response code for the plugin script. If the response code is
     * -1, then the command has not started running on the instance, or it was not
     * received by the instance.</p>
     */
    inline void SetResponseCode(int value) { m_responseCode = value; }

    /**
     * <p>The error level response code for the plugin script. If the response code is
     * -1, then the command has not started running on the instance, or it was not
     * received by the instance.</p>
     */
    inline GetCommandInvocationResult& WithResponseCode(int value) { SetResponseCode(value); return *this;}


    /**
     * <p>The date and time the plugin started running. Date and time are written in
     * ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedBefore</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedBefore,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has
     * not started to run, the string is empty.</p>
     */
    inline const Aws::String& GetExecutionStartDateTime() const{ return m_executionStartDateTime; }

    /**
     * <p>The date and time the plugin started running. Date and time are written in
     * ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedBefore</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedBefore,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has
     * not started to run, the string is empty.</p>
     */
    inline void SetExecutionStartDateTime(const Aws::String& value) { m_executionStartDateTime = value; }

    /**
     * <p>The date and time the plugin started running. Date and time are written in
     * ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedBefore</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedBefore,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has
     * not started to run, the string is empty.</p>
     */
    inline void SetExecutionStartDateTime(Aws::String&& value) { m_executionStartDateTime = std::move(value); }

    /**
     * <p>The date and time the plugin started running. Date and time are written in
     * ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedBefore</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedBefore,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has
     * not started to run, the string is empty.</p>
     */
    inline void SetExecutionStartDateTime(const char* value) { m_executionStartDateTime.assign(value); }

    /**
     * <p>The date and time the plugin started running. Date and time are written in
     * ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedBefore</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedBefore,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has
     * not started to run, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionStartDateTime(const Aws::String& value) { SetExecutionStartDateTime(value); return *this;}

    /**
     * <p>The date and time the plugin started running. Date and time are written in
     * ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedBefore</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedBefore,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has
     * not started to run, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionStartDateTime(Aws::String&& value) { SetExecutionStartDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the plugin started running. Date and time are written in
     * ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedBefore</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedBefore,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has
     * not started to run, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionStartDateTime(const char* value) { SetExecutionStartDateTime(value); return *this;}


    /**
     * <p>Duration since ExecutionStartDateTime.</p>
     */
    inline const Aws::String& GetExecutionElapsedTime() const{ return m_executionElapsedTime; }

    /**
     * <p>Duration since ExecutionStartDateTime.</p>
     */
    inline void SetExecutionElapsedTime(const Aws::String& value) { m_executionElapsedTime = value; }

    /**
     * <p>Duration since ExecutionStartDateTime.</p>
     */
    inline void SetExecutionElapsedTime(Aws::String&& value) { m_executionElapsedTime = std::move(value); }

    /**
     * <p>Duration since ExecutionStartDateTime.</p>
     */
    inline void SetExecutionElapsedTime(const char* value) { m_executionElapsedTime.assign(value); }

    /**
     * <p>Duration since ExecutionStartDateTime.</p>
     */
    inline GetCommandInvocationResult& WithExecutionElapsedTime(const Aws::String& value) { SetExecutionElapsedTime(value); return *this;}

    /**
     * <p>Duration since ExecutionStartDateTime.</p>
     */
    inline GetCommandInvocationResult& WithExecutionElapsedTime(Aws::String&& value) { SetExecutionElapsedTime(std::move(value)); return *this;}

    /**
     * <p>Duration since ExecutionStartDateTime.</p>
     */
    inline GetCommandInvocationResult& WithExecutionElapsedTime(const char* value) { SetExecutionElapsedTime(value); return *this;}


    /**
     * <p>The date and time the plugin was finished running. Date and time are written
     * in ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedAfter</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedAfter,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has not
     * started to run, the string is empty.</p>
     */
    inline const Aws::String& GetExecutionEndDateTime() const{ return m_executionEndDateTime; }

    /**
     * <p>The date and time the plugin was finished running. Date and time are written
     * in ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedAfter</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedAfter,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has not
     * started to run, the string is empty.</p>
     */
    inline void SetExecutionEndDateTime(const Aws::String& value) { m_executionEndDateTime = value; }

    /**
     * <p>The date and time the plugin was finished running. Date and time are written
     * in ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedAfter</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedAfter,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has not
     * started to run, the string is empty.</p>
     */
    inline void SetExecutionEndDateTime(Aws::String&& value) { m_executionEndDateTime = std::move(value); }

    /**
     * <p>The date and time the plugin was finished running. Date and time are written
     * in ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedAfter</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedAfter,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has not
     * started to run, the string is empty.</p>
     */
    inline void SetExecutionEndDateTime(const char* value) { m_executionEndDateTime.assign(value); }

    /**
     * <p>The date and time the plugin was finished running. Date and time are written
     * in ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedAfter</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedAfter,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has not
     * started to run, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionEndDateTime(const Aws::String& value) { SetExecutionEndDateTime(value); return *this;}

    /**
     * <p>The date and time the plugin was finished running. Date and time are written
     * in ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedAfter</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedAfter,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has not
     * started to run, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionEndDateTime(Aws::String&& value) { SetExecutionEndDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the plugin was finished running. Date and time are written
     * in ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample AWS CLI command uses the <code>InvokedAfter</code> filter.</p>
     * <p> <code>aws ssm list-commands --filters
     * key=InvokedAfter,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin has not
     * started to run, the string is empty.</p>
     */
    inline GetCommandInvocationResult& WithExecutionEndDateTime(const char* value) { SetExecutionEndDateTime(value); return *this;}


    /**
     * <p>The status of this invocation plugin. This status can be different than
     * StatusDetails.</p>
     */
    inline const CommandInvocationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this invocation plugin. This status can be different than
     * StatusDetails.</p>
     */
    inline void SetStatus(const CommandInvocationStatus& value) { m_status = value; }

    /**
     * <p>The status of this invocation plugin. This status can be different than
     * StatusDetails.</p>
     */
    inline void SetStatus(CommandInvocationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of this invocation plugin. This status can be different than
     * StatusDetails.</p>
     */
    inline GetCommandInvocationResult& WithStatus(const CommandInvocationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this invocation plugin. This status can be different than
     * StatusDetails.</p>
     */
    inline GetCommandInvocationResult& WithStatus(CommandInvocationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A detailed status of the command execution for an invocation. StatusDetails
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * Command Statuses</a> in the <i>AWS Systems Manager User Guide</i>. StatusDetails
     * can be one of the following values:</p> <ul> <li> <p>Pending: The command has
     * not been sent to the instance.</p> </li> <li> <p>In Progress: The command has
     * been sent to the instance but has not reached a terminal state.</p> </li> <li>
     * <p>Delayed: The system attempted to send the command to the target, but the
     * target was not available. The instance might not be available because of network
     * issues, the instance was stopped, etc. The system will try to deliver the
     * command again.</p> </li> <li> <p>Success: The command or plugin was run
     * successfully. This is a terminal state.</p> </li> <li> <p>Delivery Timed Out:
     * The command was not delivered to the instance before the delivery timeout
     * expired. Delivery timeouts do not count against the parent command's MaxErrors
     * limit, but they do contribute to whether the parent command status is Success or
     * Incomplete. This is a terminal state.</p> </li> <li> <p>Execution Timed Out: The
     * command started to run on the instance, but the execution was not complete
     * before the timeout expired. Execution timeouts count against the MaxErrors limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Failed: The
     * command wasn't run successfully on the instance. For a plugin, this indicates
     * that the result code was not zero. For a command invocation, this indicates that
     * the result code for one or more plugins was not zero. Invocation failures count
     * against the MaxErrors limit of the parent command. This is a terminal state.</p>
     * </li> <li> <p>Canceled: The command was terminated before it was completed. This
     * is a terminal state.</p> </li> <li> <p>Undeliverable: The command can't be
     * delivered to the instance. The instance might not exist or might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit and don't contribute to whether the parent command status is
     * Success or Incomplete. This is a terminal state.</p> </li> <li> <p>Terminated:
     * The parent command exceeded its MaxErrors limit and subsequent command
     * invocations were canceled by the system. This is a terminal state.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A detailed status of the command execution for an invocation. StatusDetails
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * Command Statuses</a> in the <i>AWS Systems Manager User Guide</i>. StatusDetails
     * can be one of the following values:</p> <ul> <li> <p>Pending: The command has
     * not been sent to the instance.</p> </li> <li> <p>In Progress: The command has
     * been sent to the instance but has not reached a terminal state.</p> </li> <li>
     * <p>Delayed: The system attempted to send the command to the target, but the
     * target was not available. The instance might not be available because of network
     * issues, the instance was stopped, etc. The system will try to deliver the
     * command again.</p> </li> <li> <p>Success: The command or plugin was run
     * successfully. This is a terminal state.</p> </li> <li> <p>Delivery Timed Out:
     * The command was not delivered to the instance before the delivery timeout
     * expired. Delivery timeouts do not count against the parent command's MaxErrors
     * limit, but they do contribute to whether the parent command status is Success or
     * Incomplete. This is a terminal state.</p> </li> <li> <p>Execution Timed Out: The
     * command started to run on the instance, but the execution was not complete
     * before the timeout expired. Execution timeouts count against the MaxErrors limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Failed: The
     * command wasn't run successfully on the instance. For a plugin, this indicates
     * that the result code was not zero. For a command invocation, this indicates that
     * the result code for one or more plugins was not zero. Invocation failures count
     * against the MaxErrors limit of the parent command. This is a terminal state.</p>
     * </li> <li> <p>Canceled: The command was terminated before it was completed. This
     * is a terminal state.</p> </li> <li> <p>Undeliverable: The command can't be
     * delivered to the instance. The instance might not exist or might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit and don't contribute to whether the parent command status is
     * Success or Incomplete. This is a terminal state.</p> </li> <li> <p>Terminated:
     * The parent command exceeded its MaxErrors limit and subsequent command
     * invocations were canceled by the system. This is a terminal state.</p> </li>
     * </ul>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetails = value; }

    /**
     * <p>A detailed status of the command execution for an invocation. StatusDetails
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * Command Statuses</a> in the <i>AWS Systems Manager User Guide</i>. StatusDetails
     * can be one of the following values:</p> <ul> <li> <p>Pending: The command has
     * not been sent to the instance.</p> </li> <li> <p>In Progress: The command has
     * been sent to the instance but has not reached a terminal state.</p> </li> <li>
     * <p>Delayed: The system attempted to send the command to the target, but the
     * target was not available. The instance might not be available because of network
     * issues, the instance was stopped, etc. The system will try to deliver the
     * command again.</p> </li> <li> <p>Success: The command or plugin was run
     * successfully. This is a terminal state.</p> </li> <li> <p>Delivery Timed Out:
     * The command was not delivered to the instance before the delivery timeout
     * expired. Delivery timeouts do not count against the parent command's MaxErrors
     * limit, but they do contribute to whether the parent command status is Success or
     * Incomplete. This is a terminal state.</p> </li> <li> <p>Execution Timed Out: The
     * command started to run on the instance, but the execution was not complete
     * before the timeout expired. Execution timeouts count against the MaxErrors limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Failed: The
     * command wasn't run successfully on the instance. For a plugin, this indicates
     * that the result code was not zero. For a command invocation, this indicates that
     * the result code for one or more plugins was not zero. Invocation failures count
     * against the MaxErrors limit of the parent command. This is a terminal state.</p>
     * </li> <li> <p>Canceled: The command was terminated before it was completed. This
     * is a terminal state.</p> </li> <li> <p>Undeliverable: The command can't be
     * delivered to the instance. The instance might not exist or might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit and don't contribute to whether the parent command status is
     * Success or Incomplete. This is a terminal state.</p> </li> <li> <p>Terminated:
     * The parent command exceeded its MaxErrors limit and subsequent command
     * invocations were canceled by the system. This is a terminal state.</p> </li>
     * </ul>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetails = std::move(value); }

    /**
     * <p>A detailed status of the command execution for an invocation. StatusDetails
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * Command Statuses</a> in the <i>AWS Systems Manager User Guide</i>. StatusDetails
     * can be one of the following values:</p> <ul> <li> <p>Pending: The command has
     * not been sent to the instance.</p> </li> <li> <p>In Progress: The command has
     * been sent to the instance but has not reached a terminal state.</p> </li> <li>
     * <p>Delayed: The system attempted to send the command to the target, but the
     * target was not available. The instance might not be available because of network
     * issues, the instance was stopped, etc. The system will try to deliver the
     * command again.</p> </li> <li> <p>Success: The command or plugin was run
     * successfully. This is a terminal state.</p> </li> <li> <p>Delivery Timed Out:
     * The command was not delivered to the instance before the delivery timeout
     * expired. Delivery timeouts do not count against the parent command's MaxErrors
     * limit, but they do contribute to whether the parent command status is Success or
     * Incomplete. This is a terminal state.</p> </li> <li> <p>Execution Timed Out: The
     * command started to run on the instance, but the execution was not complete
     * before the timeout expired. Execution timeouts count against the MaxErrors limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Failed: The
     * command wasn't run successfully on the instance. For a plugin, this indicates
     * that the result code was not zero. For a command invocation, this indicates that
     * the result code for one or more plugins was not zero. Invocation failures count
     * against the MaxErrors limit of the parent command. This is a terminal state.</p>
     * </li> <li> <p>Canceled: The command was terminated before it was completed. This
     * is a terminal state.</p> </li> <li> <p>Undeliverable: The command can't be
     * delivered to the instance. The instance might not exist or might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit and don't contribute to whether the parent command status is
     * Success or Incomplete. This is a terminal state.</p> </li> <li> <p>Terminated:
     * The parent command exceeded its MaxErrors limit and subsequent command
     * invocations were canceled by the system. This is a terminal state.</p> </li>
     * </ul>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetails.assign(value); }

    /**
     * <p>A detailed status of the command execution for an invocation. StatusDetails
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * Command Statuses</a> in the <i>AWS Systems Manager User Guide</i>. StatusDetails
     * can be one of the following values:</p> <ul> <li> <p>Pending: The command has
     * not been sent to the instance.</p> </li> <li> <p>In Progress: The command has
     * been sent to the instance but has not reached a terminal state.</p> </li> <li>
     * <p>Delayed: The system attempted to send the command to the target, but the
     * target was not available. The instance might not be available because of network
     * issues, the instance was stopped, etc. The system will try to deliver the
     * command again.</p> </li> <li> <p>Success: The command or plugin was run
     * successfully. This is a terminal state.</p> </li> <li> <p>Delivery Timed Out:
     * The command was not delivered to the instance before the delivery timeout
     * expired. Delivery timeouts do not count against the parent command's MaxErrors
     * limit, but they do contribute to whether the parent command status is Success or
     * Incomplete. This is a terminal state.</p> </li> <li> <p>Execution Timed Out: The
     * command started to run on the instance, but the execution was not complete
     * before the timeout expired. Execution timeouts count against the MaxErrors limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Failed: The
     * command wasn't run successfully on the instance. For a plugin, this indicates
     * that the result code was not zero. For a command invocation, this indicates that
     * the result code for one or more plugins was not zero. Invocation failures count
     * against the MaxErrors limit of the parent command. This is a terminal state.</p>
     * </li> <li> <p>Canceled: The command was terminated before it was completed. This
     * is a terminal state.</p> </li> <li> <p>Undeliverable: The command can't be
     * delivered to the instance. The instance might not exist or might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit and don't contribute to whether the parent command status is
     * Success or Incomplete. This is a terminal state.</p> </li> <li> <p>Terminated:
     * The parent command exceeded its MaxErrors limit and subsequent command
     * invocations were canceled by the system. This is a terminal state.</p> </li>
     * </ul>
     */
    inline GetCommandInvocationResult& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A detailed status of the command execution for an invocation. StatusDetails
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * Command Statuses</a> in the <i>AWS Systems Manager User Guide</i>. StatusDetails
     * can be one of the following values:</p> <ul> <li> <p>Pending: The command has
     * not been sent to the instance.</p> </li> <li> <p>In Progress: The command has
     * been sent to the instance but has not reached a terminal state.</p> </li> <li>
     * <p>Delayed: The system attempted to send the command to the target, but the
     * target was not available. The instance might not be available because of network
     * issues, the instance was stopped, etc. The system will try to deliver the
     * command again.</p> </li> <li> <p>Success: The command or plugin was run
     * successfully. This is a terminal state.</p> </li> <li> <p>Delivery Timed Out:
     * The command was not delivered to the instance before the delivery timeout
     * expired. Delivery timeouts do not count against the parent command's MaxErrors
     * limit, but they do contribute to whether the parent command status is Success or
     * Incomplete. This is a terminal state.</p> </li> <li> <p>Execution Timed Out: The
     * command started to run on the instance, but the execution was not complete
     * before the timeout expired. Execution timeouts count against the MaxErrors limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Failed: The
     * command wasn't run successfully on the instance. For a plugin, this indicates
     * that the result code was not zero. For a command invocation, this indicates that
     * the result code for one or more plugins was not zero. Invocation failures count
     * against the MaxErrors limit of the parent command. This is a terminal state.</p>
     * </li> <li> <p>Canceled: The command was terminated before it was completed. This
     * is a terminal state.</p> </li> <li> <p>Undeliverable: The command can't be
     * delivered to the instance. The instance might not exist or might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit and don't contribute to whether the parent command status is
     * Success or Incomplete. This is a terminal state.</p> </li> <li> <p>Terminated:
     * The parent command exceeded its MaxErrors limit and subsequent command
     * invocations were canceled by the system. This is a terminal state.</p> </li>
     * </ul>
     */
    inline GetCommandInvocationResult& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>A detailed status of the command execution for an invocation. StatusDetails
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * Command Statuses</a> in the <i>AWS Systems Manager User Guide</i>. StatusDetails
     * can be one of the following values:</p> <ul> <li> <p>Pending: The command has
     * not been sent to the instance.</p> </li> <li> <p>In Progress: The command has
     * been sent to the instance but has not reached a terminal state.</p> </li> <li>
     * <p>Delayed: The system attempted to send the command to the target, but the
     * target was not available. The instance might not be available because of network
     * issues, the instance was stopped, etc. The system will try to deliver the
     * command again.</p> </li> <li> <p>Success: The command or plugin was run
     * successfully. This is a terminal state.</p> </li> <li> <p>Delivery Timed Out:
     * The command was not delivered to the instance before the delivery timeout
     * expired. Delivery timeouts do not count against the parent command's MaxErrors
     * limit, but they do contribute to whether the parent command status is Success or
     * Incomplete. This is a terminal state.</p> </li> <li> <p>Execution Timed Out: The
     * command started to run on the instance, but the execution was not complete
     * before the timeout expired. Execution timeouts count against the MaxErrors limit
     * of the parent command. This is a terminal state.</p> </li> <li> <p>Failed: The
     * command wasn't run successfully on the instance. For a plugin, this indicates
     * that the result code was not zero. For a command invocation, this indicates that
     * the result code for one or more plugins was not zero. Invocation failures count
     * against the MaxErrors limit of the parent command. This is a terminal state.</p>
     * </li> <li> <p>Canceled: The command was terminated before it was completed. This
     * is a terminal state.</p> </li> <li> <p>Undeliverable: The command can't be
     * delivered to the instance. The instance might not exist or might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit and don't contribute to whether the parent command status is
     * Success or Incomplete. This is a terminal state.</p> </li> <li> <p>Terminated:
     * The parent command exceeded its MaxErrors limit and subsequent command
     * invocations were canceled by the system. This is a terminal state.</p> </li>
     * </ul>
     */
    inline GetCommandInvocationResult& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}


    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished running, if ExecutionStatus is neither Succeeded nor Failed,
     * then this string is empty.</p>
     */
    inline const Aws::String& GetStandardOutputContent() const{ return m_standardOutputContent; }

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished running, if ExecutionStatus is neither Succeeded nor Failed,
     * then this string is empty.</p>
     */
    inline void SetStandardOutputContent(const Aws::String& value) { m_standardOutputContent = value; }

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished running, if ExecutionStatus is neither Succeeded nor Failed,
     * then this string is empty.</p>
     */
    inline void SetStandardOutputContent(Aws::String&& value) { m_standardOutputContent = std::move(value); }

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished running, if ExecutionStatus is neither Succeeded nor Failed,
     * then this string is empty.</p>
     */
    inline void SetStandardOutputContent(const char* value) { m_standardOutputContent.assign(value); }

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished running, if ExecutionStatus is neither Succeeded nor Failed,
     * then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardOutputContent(const Aws::String& value) { SetStandardOutputContent(value); return *this;}

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished running, if ExecutionStatus is neither Succeeded nor Failed,
     * then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardOutputContent(Aws::String&& value) { SetStandardOutputContent(std::move(value)); return *this;}

    /**
     * <p>The first 24,000 characters written by the plugin to stdout. If the command
     * has not finished running, if ExecutionStatus is neither Succeeded nor Failed,
     * then this string is empty.</p>
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
    inline void SetStandardOutputUrl(Aws::String&& value) { m_standardOutputUrl = std::move(value); }

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
    inline GetCommandInvocationResult& WithStandardOutputUrl(Aws::String&& value) { SetStandardOutputUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If an Amazon S3 bucket was not specified, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardOutputUrl(const char* value) { SetStandardOutputUrl(value); return *this;}


    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardErrorContent() const{ return m_standardErrorContent; }

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline void SetStandardErrorContent(const Aws::String& value) { m_standardErrorContent = value; }

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline void SetStandardErrorContent(Aws::String&& value) { m_standardErrorContent = std::move(value); }

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline void SetStandardErrorContent(const char* value) { m_standardErrorContent.assign(value); }

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorContent(const Aws::String& value) { SetStandardErrorContent(value); return *this;}

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorContent(Aws::String&& value) { SetStandardErrorContent(std::move(value)); return *this;}

    /**
     * <p>The first 8,000 characters written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorContent(const char* value) { SetStandardErrorContent(value); return *this;}


    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardErrorUrl() const{ return m_standardErrorUrl; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(const Aws::String& value) { m_standardErrorUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(Aws::String&& value) { m_standardErrorUrl = std::move(value); }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(const char* value) { m_standardErrorUrl.assign(value); }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorUrl(const Aws::String& value) { SetStandardErrorUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorUrl(Aws::String&& value) { SetStandardErrorUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If the command
     * has not finished running, then this string is empty.</p>
     */
    inline GetCommandInvocationResult& WithStandardErrorUrl(const char* value) { SetStandardErrorUrl(value); return *this;}


    /**
     * <p>CloudWatch Logs information where Systems Manager sent the command
     * output.</p>
     */
    inline const CloudWatchOutputConfig& GetCloudWatchOutputConfig() const{ return m_cloudWatchOutputConfig; }

    /**
     * <p>CloudWatch Logs information where Systems Manager sent the command
     * output.</p>
     */
    inline void SetCloudWatchOutputConfig(const CloudWatchOutputConfig& value) { m_cloudWatchOutputConfig = value; }

    /**
     * <p>CloudWatch Logs information where Systems Manager sent the command
     * output.</p>
     */
    inline void SetCloudWatchOutputConfig(CloudWatchOutputConfig&& value) { m_cloudWatchOutputConfig = std::move(value); }

    /**
     * <p>CloudWatch Logs information where Systems Manager sent the command
     * output.</p>
     */
    inline GetCommandInvocationResult& WithCloudWatchOutputConfig(const CloudWatchOutputConfig& value) { SetCloudWatchOutputConfig(value); return *this;}

    /**
     * <p>CloudWatch Logs information where Systems Manager sent the command
     * output.</p>
     */
    inline GetCommandInvocationResult& WithCloudWatchOutputConfig(CloudWatchOutputConfig&& value) { SetCloudWatchOutputConfig(std::move(value)); return *this;}

  private:

    Aws::String m_commandId;

    Aws::String m_instanceId;

    Aws::String m_comment;

    Aws::String m_documentName;

    Aws::String m_documentVersion;

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

    CloudWatchOutputConfig m_cloudWatchOutputConfig;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
