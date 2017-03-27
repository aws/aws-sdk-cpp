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
#include <aws/ssm/model/CommandPluginStatus.h>
#include <aws/core/utils/DateTime.h>

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
   * <p>Describes plugin details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CommandPlugin">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API CommandPlugin
  {
  public:
    CommandPlugin();
    CommandPlugin(const Aws::Utils::Json::JsonValue& jsonValue);
    CommandPlugin& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline CommandPlugin& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline CommandPlugin& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the plugin. Must be one of the following: aws:updateAgent,
     * aws:domainjoin, aws:applications, aws:runPowerShellScript, aws:psmodule,
     * aws:cloudWatch, aws:runShellScript, or aws:updateSSMAgent. </p>
     */
    inline CommandPlugin& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The status of this plugin. You can execute a document with multiple
     * plugins.</p>
     */
    inline const CommandPluginStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this plugin. You can execute a document with multiple
     * plugins.</p>
     */
    inline void SetStatus(const CommandPluginStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this plugin. You can execute a document with multiple
     * plugins.</p>
     */
    inline void SetStatus(CommandPluginStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this plugin. You can execute a document with multiple
     * plugins.</p>
     */
    inline CommandPlugin& WithStatus(const CommandPluginStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this plugin. You can execute a document with multiple
     * plugins.</p>
     */
    inline CommandPlugin& WithStatus(CommandPluginStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
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
     * instance. The instance might not exist, or it might not be responding.
     * Undeliverable invocations don't count against the parent command’s
     * <code>MaxErrors</code> limit, and they don't contribute to whether the parent
     * command status is <code>Success</code> or <code>Incomplete</code>. This is a
     * terminal state.</p> </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
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
     * instance. The instance might not exist, or it might not be responding.
     * Undeliverable invocations don't count against the parent command’s
     * <code>MaxErrors</code> limit, and they don't contribute to whether the parent
     * command status is <code>Success</code> or <code>Incomplete</code>. This is a
     * terminal state.</p> </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
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
     * instance. The instance might not exist, or it might not be responding.
     * Undeliverable invocations don't count against the parent command’s
     * <code>MaxErrors</code> limit, and they don't contribute to whether the parent
     * command status is <code>Success</code> or <code>Incomplete</code>. This is a
     * terminal state.</p> </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
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
     * instance. The instance might not exist, or it might not be responding.
     * Undeliverable invocations don't count against the parent command’s
     * <code>MaxErrors</code> limit, and they don't contribute to whether the parent
     * command status is <code>Success</code> or <code>Incomplete</code>. This is a
     * terminal state.</p> </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
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
     * instance. The instance might not exist, or it might not be responding.
     * Undeliverable invocations don't count against the parent command’s
     * <code>MaxErrors</code> limit, and they don't contribute to whether the parent
     * command status is <code>Success</code> or <code>Incomplete</code>. This is a
     * terminal state.</p> </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline CommandPlugin& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
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
     * instance. The instance might not exist, or it might not be responding.
     * Undeliverable invocations don't count against the parent command’s
     * <code>MaxErrors</code> limit, and they don't contribute to whether the parent
     * command status is <code>Success</code> or <code>Incomplete</code>. This is a
     * terminal state.</p> </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline CommandPlugin& WithStatusDetails(Aws::String&& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
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
     * instance. The instance might not exist, or it might not be responding.
     * Undeliverable invocations don't count against the parent command’s
     * <code>MaxErrors</code> limit, and they don't contribute to whether the parent
     * command status is <code>Success</code> or <code>Incomplete</code>. This is a
     * terminal state.</p> </li> <li> <p>Terminated – The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline CommandPlugin& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A numeric response code generated after executing the plugin. </p>
     */
    inline int GetResponseCode() const{ return m_responseCode; }

    /**
     * <p>A numeric response code generated after executing the plugin. </p>
     */
    inline void SetResponseCode(int value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }

    /**
     * <p>A numeric response code generated after executing the plugin. </p>
     */
    inline CommandPlugin& WithResponseCode(int value) { SetResponseCode(value); return *this;}

    /**
     * <p>The time the plugin started executing. </p>
     */
    inline const Aws::Utils::DateTime& GetResponseStartDateTime() const{ return m_responseStartDateTime; }

    /**
     * <p>The time the plugin started executing. </p>
     */
    inline void SetResponseStartDateTime(const Aws::Utils::DateTime& value) { m_responseStartDateTimeHasBeenSet = true; m_responseStartDateTime = value; }

    /**
     * <p>The time the plugin started executing. </p>
     */
    inline void SetResponseStartDateTime(Aws::Utils::DateTime&& value) { m_responseStartDateTimeHasBeenSet = true; m_responseStartDateTime = value; }

    /**
     * <p>The time the plugin started executing. </p>
     */
    inline CommandPlugin& WithResponseStartDateTime(const Aws::Utils::DateTime& value) { SetResponseStartDateTime(value); return *this;}

    /**
     * <p>The time the plugin started executing. </p>
     */
    inline CommandPlugin& WithResponseStartDateTime(Aws::Utils::DateTime&& value) { SetResponseStartDateTime(value); return *this;}

    /**
     * <p>The time the plugin stopped executing. Could stop prematurely if, for
     * example, a cancel command was sent. </p>
     */
    inline const Aws::Utils::DateTime& GetResponseFinishDateTime() const{ return m_responseFinishDateTime; }

    /**
     * <p>The time the plugin stopped executing. Could stop prematurely if, for
     * example, a cancel command was sent. </p>
     */
    inline void SetResponseFinishDateTime(const Aws::Utils::DateTime& value) { m_responseFinishDateTimeHasBeenSet = true; m_responseFinishDateTime = value; }

    /**
     * <p>The time the plugin stopped executing. Could stop prematurely if, for
     * example, a cancel command was sent. </p>
     */
    inline void SetResponseFinishDateTime(Aws::Utils::DateTime&& value) { m_responseFinishDateTimeHasBeenSet = true; m_responseFinishDateTime = value; }

    /**
     * <p>The time the plugin stopped executing. Could stop prematurely if, for
     * example, a cancel command was sent. </p>
     */
    inline CommandPlugin& WithResponseFinishDateTime(const Aws::Utils::DateTime& value) { SetResponseFinishDateTime(value); return *this;}

    /**
     * <p>The time the plugin stopped executing. Could stop prematurely if, for
     * example, a cancel command was sent. </p>
     */
    inline CommandPlugin& WithResponseFinishDateTime(Aws::Utils::DateTime&& value) { SetResponseFinishDateTime(value); return *this;}

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline CommandPlugin& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline CommandPlugin& WithOutput(Aws::String&& value) { SetOutput(value); return *this;}

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline CommandPlugin& WithOutput(const char* value) { SetOutput(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the Amazon S3 bucket for the command was not specified, then this string is
     * empty.</p>
     */
    inline const Aws::String& GetStandardOutputUrl() const{ return m_standardOutputUrl; }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the Amazon S3 bucket for the command was not specified, then this string is
     * empty.</p>
     */
    inline void SetStandardOutputUrl(const Aws::String& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the Amazon S3 bucket for the command was not specified, then this string is
     * empty.</p>
     */
    inline void SetStandardOutputUrl(Aws::String&& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the Amazon S3 bucket for the command was not specified, then this string is
     * empty.</p>
     */
    inline void SetStandardOutputUrl(const char* value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl.assign(value); }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the Amazon S3 bucket for the command was not specified, then this string is
     * empty.</p>
     */
    inline CommandPlugin& WithStandardOutputUrl(const Aws::String& value) { SetStandardOutputUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the Amazon S3 bucket for the command was not specified, then this string is
     * empty.</p>
     */
    inline CommandPlugin& WithStandardOutputUrl(Aws::String&& value) { SetStandardOutputUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the Amazon S3 bucket for the command was not specified, then this string is
     * empty.</p>
     */
    inline CommandPlugin& WithStandardOutputUrl(const char* value) { SetStandardOutputUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * is not yet complete, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardErrorUrl() const{ return m_standardErrorUrl; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * is not yet complete, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(const Aws::String& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * is not yet complete, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(Aws::String&& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * is not yet complete, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(const char* value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl.assign(value); }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * is not yet complete, then this string is empty.</p>
     */
    inline CommandPlugin& WithStandardErrorUrl(const Aws::String& value) { SetStandardErrorUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * is not yet complete, then this string is empty.</p>
     */
    inline CommandPlugin& WithStandardErrorUrl(Aws::String&& value) { SetStandardErrorUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * is not yet complete, then this string is empty.</p>
     */
    inline CommandPlugin& WithStandardErrorUrl(const char* value) { SetStandardErrorUrl(value); return *this;}

    /**
     * <p>The name of the region where the output is stored in Amazon S3.</p>
     */
    inline const Aws::String& GetOutputS3Region() const{ return m_outputS3Region; }

    /**
     * <p>The name of the region where the output is stored in Amazon S3.</p>
     */
    inline void SetOutputS3Region(const Aws::String& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = value; }

    /**
     * <p>The name of the region where the output is stored in Amazon S3.</p>
     */
    inline void SetOutputS3Region(Aws::String&& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = value; }

    /**
     * <p>The name of the region where the output is stored in Amazon S3.</p>
     */
    inline void SetOutputS3Region(const char* value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region.assign(value); }

    /**
     * <p>The name of the region where the output is stored in Amazon S3.</p>
     */
    inline CommandPlugin& WithOutputS3Region(const Aws::String& value) { SetOutputS3Region(value); return *this;}

    /**
     * <p>The name of the region where the output is stored in Amazon S3.</p>
     */
    inline CommandPlugin& WithOutputS3Region(Aws::String&& value) { SetOutputS3Region(value); return *this;}

    /**
     * <p>The name of the region where the output is stored in Amazon S3.</p>
     */
    inline CommandPlugin& WithOutputS3Region(const char* value) { SetOutputS3Region(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>test_folder/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-1234567876543/awsrunShellScript</code>
     * </p> <p> <code>test_folder</code> is the name of the Amazon S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-1234567876543</code> is the instance ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    CommandPluginStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet;
    int m_responseCode;
    bool m_responseCodeHasBeenSet;
    Aws::Utils::DateTime m_responseStartDateTime;
    bool m_responseStartDateTimeHasBeenSet;
    Aws::Utils::DateTime m_responseFinishDateTime;
    bool m_responseFinishDateTimeHasBeenSet;
    Aws::String m_output;
    bool m_outputHasBeenSet;
    Aws::String m_standardOutputUrl;
    bool m_standardOutputUrlHasBeenSet;
    Aws::String m_standardErrorUrl;
    bool m_standardErrorUrlHasBeenSet;
    Aws::String m_outputS3Region;
    bool m_outputS3RegionHasBeenSet;
    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet;
    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
