/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/CommandPluginStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
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
  class CommandPlugin
  {
  public:
    AWS_SSM_API CommandPlugin();
    AWS_SSM_API CommandPlugin(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API CommandPlugin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the plugin. Must be one of the following:
     * <code>aws:updateAgent</code>, <code>aws:domainjoin</code>,
     * <code>aws:applications</code>, <code>aws:runPowerShellScript</code>,
     * <code>aws:psmodule</code>, <code>aws:cloudWatch</code>,
     * <code>aws:runShellScript</code>, or <code>aws:updateSSMAgent</code>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the plugin. Must be one of the following:
     * <code>aws:updateAgent</code>, <code>aws:domainjoin</code>,
     * <code>aws:applications</code>, <code>aws:runPowerShellScript</code>,
     * <code>aws:psmodule</code>, <code>aws:cloudWatch</code>,
     * <code>aws:runShellScript</code>, or <code>aws:updateSSMAgent</code>. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the plugin. Must be one of the following:
     * <code>aws:updateAgent</code>, <code>aws:domainjoin</code>,
     * <code>aws:applications</code>, <code>aws:runPowerShellScript</code>,
     * <code>aws:psmodule</code>, <code>aws:cloudWatch</code>,
     * <code>aws:runShellScript</code>, or <code>aws:updateSSMAgent</code>. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the plugin. Must be one of the following:
     * <code>aws:updateAgent</code>, <code>aws:domainjoin</code>,
     * <code>aws:applications</code>, <code>aws:runPowerShellScript</code>,
     * <code>aws:psmodule</code>, <code>aws:cloudWatch</code>,
     * <code>aws:runShellScript</code>, or <code>aws:updateSSMAgent</code>. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the plugin. Must be one of the following:
     * <code>aws:updateAgent</code>, <code>aws:domainjoin</code>,
     * <code>aws:applications</code>, <code>aws:runPowerShellScript</code>,
     * <code>aws:psmodule</code>, <code>aws:cloudWatch</code>,
     * <code>aws:runShellScript</code>, or <code>aws:updateSSMAgent</code>. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the plugin. Must be one of the following:
     * <code>aws:updateAgent</code>, <code>aws:domainjoin</code>,
     * <code>aws:applications</code>, <code>aws:runPowerShellScript</code>,
     * <code>aws:psmodule</code>, <code>aws:cloudWatch</code>,
     * <code>aws:runShellScript</code>, or <code>aws:updateSSMAgent</code>. </p>
     */
    inline CommandPlugin& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the plugin. Must be one of the following:
     * <code>aws:updateAgent</code>, <code>aws:domainjoin</code>,
     * <code>aws:applications</code>, <code>aws:runPowerShellScript</code>,
     * <code>aws:psmodule</code>, <code>aws:cloudWatch</code>,
     * <code>aws:runShellScript</code>, or <code>aws:updateSSMAgent</code>. </p>
     */
    inline CommandPlugin& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the plugin. Must be one of the following:
     * <code>aws:updateAgent</code>, <code>aws:domainjoin</code>,
     * <code>aws:applications</code>, <code>aws:runPowerShellScript</code>,
     * <code>aws:psmodule</code>, <code>aws:cloudWatch</code>,
     * <code>aws:runShellScript</code>, or <code>aws:updateSSMAgent</code>. </p>
     */
    inline CommandPlugin& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of this plugin. You can run a document with multiple plugins.</p>
     */
    inline const CommandPluginStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this plugin. You can run a document with multiple plugins.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of this plugin. You can run a document with multiple plugins.</p>
     */
    inline void SetStatus(const CommandPluginStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this plugin. You can run a document with multiple plugins.</p>
     */
    inline void SetStatus(CommandPluginStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of this plugin. You can run a document with multiple plugins.</p>
     */
    inline CommandPlugin& WithStatus(const CommandPluginStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this plugin. You can run a document with multiple plugins.</p>
     */
    inline CommandPlugin& WithStatus(CommandPluginStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. StatusDetails can be one of the following values:</p> <ul> <li>
     * <p>Pending: The command hasn't been sent to the managed node.</p> </li> <li>
     * <p>In Progress: The command has been sent to the managed node but hasn't reached
     * a terminal state.</p> </li> <li> <p>Success: The execution of the command or
     * plugin was successfully completed. This is a terminal state.</p> </li> <li>
     * <p>Delivery Timed Out: The command wasn't delivered to the managed node before
     * the delivery timeout expired. Delivery timeouts don't count against the parent
     * command's <code>MaxErrors</code> limit, but they do contribute to whether the
     * parent command status is Success or Incomplete. This is a terminal state.</p>
     * </li> <li> <p>Execution Timed Out: Command execution started on the managed
     * node, but the execution wasn't complete before the execution timeout expired.
     * Execution timeouts count against the <code>MaxErrors</code> limit of the parent
     * command. This is a terminal state.</p> </li> <li> <p>Failed: The command wasn't
     * successful on the managed node. For a plugin, this indicates that the result
     * code wasn't zero. For a command invocation, this indicates that the result code
     * for one or more plugins wasn't zero. Invocation failures count against the
     * MaxErrors limit of the parent command. This is a terminal state.</p> </li> <li>
     * <p>Cancelled: The command was terminated before it was completed. This is a
     * terminal state.</p> </li> <li> <p>Undeliverable: The command can't be delivered
     * to the managed node. The managed node might not exist, or it might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit, and they don't contribute to whether the parent command status
     * is Success or Incomplete. This is a terminal state.</p> </li> <li>
     * <p>Terminated: The parent command exceeded its MaxErrors limit and subsequent
     * command invocations were canceled by the system. This is a terminal state.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. StatusDetails can be one of the following values:</p> <ul> <li>
     * <p>Pending: The command hasn't been sent to the managed node.</p> </li> <li>
     * <p>In Progress: The command has been sent to the managed node but hasn't reached
     * a terminal state.</p> </li> <li> <p>Success: The execution of the command or
     * plugin was successfully completed. This is a terminal state.</p> </li> <li>
     * <p>Delivery Timed Out: The command wasn't delivered to the managed node before
     * the delivery timeout expired. Delivery timeouts don't count against the parent
     * command's <code>MaxErrors</code> limit, but they do contribute to whether the
     * parent command status is Success or Incomplete. This is a terminal state.</p>
     * </li> <li> <p>Execution Timed Out: Command execution started on the managed
     * node, but the execution wasn't complete before the execution timeout expired.
     * Execution timeouts count against the <code>MaxErrors</code> limit of the parent
     * command. This is a terminal state.</p> </li> <li> <p>Failed: The command wasn't
     * successful on the managed node. For a plugin, this indicates that the result
     * code wasn't zero. For a command invocation, this indicates that the result code
     * for one or more plugins wasn't zero. Invocation failures count against the
     * MaxErrors limit of the parent command. This is a terminal state.</p> </li> <li>
     * <p>Cancelled: The command was terminated before it was completed. This is a
     * terminal state.</p> </li> <li> <p>Undeliverable: The command can't be delivered
     * to the managed node. The managed node might not exist, or it might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit, and they don't contribute to whether the parent command status
     * is Success or Incomplete. This is a terminal state.</p> </li> <li>
     * <p>Terminated: The parent command exceeded its MaxErrors limit and subsequent
     * command invocations were canceled by the system. This is a terminal state.</p>
     * </li> </ul>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. StatusDetails can be one of the following values:</p> <ul> <li>
     * <p>Pending: The command hasn't been sent to the managed node.</p> </li> <li>
     * <p>In Progress: The command has been sent to the managed node but hasn't reached
     * a terminal state.</p> </li> <li> <p>Success: The execution of the command or
     * plugin was successfully completed. This is a terminal state.</p> </li> <li>
     * <p>Delivery Timed Out: The command wasn't delivered to the managed node before
     * the delivery timeout expired. Delivery timeouts don't count against the parent
     * command's <code>MaxErrors</code> limit, but they do contribute to whether the
     * parent command status is Success or Incomplete. This is a terminal state.</p>
     * </li> <li> <p>Execution Timed Out: Command execution started on the managed
     * node, but the execution wasn't complete before the execution timeout expired.
     * Execution timeouts count against the <code>MaxErrors</code> limit of the parent
     * command. This is a terminal state.</p> </li> <li> <p>Failed: The command wasn't
     * successful on the managed node. For a plugin, this indicates that the result
     * code wasn't zero. For a command invocation, this indicates that the result code
     * for one or more plugins wasn't zero. Invocation failures count against the
     * MaxErrors limit of the parent command. This is a terminal state.</p> </li> <li>
     * <p>Cancelled: The command was terminated before it was completed. This is a
     * terminal state.</p> </li> <li> <p>Undeliverable: The command can't be delivered
     * to the managed node. The managed node might not exist, or it might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit, and they don't contribute to whether the parent command status
     * is Success or Incomplete. This is a terminal state.</p> </li> <li>
     * <p>Terminated: The parent command exceeded its MaxErrors limit and subsequent
     * command invocations were canceled by the system. This is a terminal state.</p>
     * </li> </ul>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. StatusDetails can be one of the following values:</p> <ul> <li>
     * <p>Pending: The command hasn't been sent to the managed node.</p> </li> <li>
     * <p>In Progress: The command has been sent to the managed node but hasn't reached
     * a terminal state.</p> </li> <li> <p>Success: The execution of the command or
     * plugin was successfully completed. This is a terminal state.</p> </li> <li>
     * <p>Delivery Timed Out: The command wasn't delivered to the managed node before
     * the delivery timeout expired. Delivery timeouts don't count against the parent
     * command's <code>MaxErrors</code> limit, but they do contribute to whether the
     * parent command status is Success or Incomplete. This is a terminal state.</p>
     * </li> <li> <p>Execution Timed Out: Command execution started on the managed
     * node, but the execution wasn't complete before the execution timeout expired.
     * Execution timeouts count against the <code>MaxErrors</code> limit of the parent
     * command. This is a terminal state.</p> </li> <li> <p>Failed: The command wasn't
     * successful on the managed node. For a plugin, this indicates that the result
     * code wasn't zero. For a command invocation, this indicates that the result code
     * for one or more plugins wasn't zero. Invocation failures count against the
     * MaxErrors limit of the parent command. This is a terminal state.</p> </li> <li>
     * <p>Cancelled: The command was terminated before it was completed. This is a
     * terminal state.</p> </li> <li> <p>Undeliverable: The command can't be delivered
     * to the managed node. The managed node might not exist, or it might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit, and they don't contribute to whether the parent command status
     * is Success or Incomplete. This is a terminal state.</p> </li> <li>
     * <p>Terminated: The parent command exceeded its MaxErrors limit and subsequent
     * command invocations were canceled by the system. This is a terminal state.</p>
     * </li> </ul>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. StatusDetails can be one of the following values:</p> <ul> <li>
     * <p>Pending: The command hasn't been sent to the managed node.</p> </li> <li>
     * <p>In Progress: The command has been sent to the managed node but hasn't reached
     * a terminal state.</p> </li> <li> <p>Success: The execution of the command or
     * plugin was successfully completed. This is a terminal state.</p> </li> <li>
     * <p>Delivery Timed Out: The command wasn't delivered to the managed node before
     * the delivery timeout expired. Delivery timeouts don't count against the parent
     * command's <code>MaxErrors</code> limit, but they do contribute to whether the
     * parent command status is Success or Incomplete. This is a terminal state.</p>
     * </li> <li> <p>Execution Timed Out: Command execution started on the managed
     * node, but the execution wasn't complete before the execution timeout expired.
     * Execution timeouts count against the <code>MaxErrors</code> limit of the parent
     * command. This is a terminal state.</p> </li> <li> <p>Failed: The command wasn't
     * successful on the managed node. For a plugin, this indicates that the result
     * code wasn't zero. For a command invocation, this indicates that the result code
     * for one or more plugins wasn't zero. Invocation failures count against the
     * MaxErrors limit of the parent command. This is a terminal state.</p> </li> <li>
     * <p>Cancelled: The command was terminated before it was completed. This is a
     * terminal state.</p> </li> <li> <p>Undeliverable: The command can't be delivered
     * to the managed node. The managed node might not exist, or it might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit, and they don't contribute to whether the parent command status
     * is Success or Incomplete. This is a terminal state.</p> </li> <li>
     * <p>Terminated: The parent command exceeded its MaxErrors limit and subsequent
     * command invocations were canceled by the system. This is a terminal state.</p>
     * </li> </ul>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. StatusDetails can be one of the following values:</p> <ul> <li>
     * <p>Pending: The command hasn't been sent to the managed node.</p> </li> <li>
     * <p>In Progress: The command has been sent to the managed node but hasn't reached
     * a terminal state.</p> </li> <li> <p>Success: The execution of the command or
     * plugin was successfully completed. This is a terminal state.</p> </li> <li>
     * <p>Delivery Timed Out: The command wasn't delivered to the managed node before
     * the delivery timeout expired. Delivery timeouts don't count against the parent
     * command's <code>MaxErrors</code> limit, but they do contribute to whether the
     * parent command status is Success or Incomplete. This is a terminal state.</p>
     * </li> <li> <p>Execution Timed Out: Command execution started on the managed
     * node, but the execution wasn't complete before the execution timeout expired.
     * Execution timeouts count against the <code>MaxErrors</code> limit of the parent
     * command. This is a terminal state.</p> </li> <li> <p>Failed: The command wasn't
     * successful on the managed node. For a plugin, this indicates that the result
     * code wasn't zero. For a command invocation, this indicates that the result code
     * for one or more plugins wasn't zero. Invocation failures count against the
     * MaxErrors limit of the parent command. This is a terminal state.</p> </li> <li>
     * <p>Cancelled: The command was terminated before it was completed. This is a
     * terminal state.</p> </li> <li> <p>Undeliverable: The command can't be delivered
     * to the managed node. The managed node might not exist, or it might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit, and they don't contribute to whether the parent command status
     * is Success or Incomplete. This is a terminal state.</p> </li> <li>
     * <p>Terminated: The parent command exceeded its MaxErrors limit and subsequent
     * command invocations were canceled by the system. This is a terminal state.</p>
     * </li> </ul>
     */
    inline CommandPlugin& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. StatusDetails can be one of the following values:</p> <ul> <li>
     * <p>Pending: The command hasn't been sent to the managed node.</p> </li> <li>
     * <p>In Progress: The command has been sent to the managed node but hasn't reached
     * a terminal state.</p> </li> <li> <p>Success: The execution of the command or
     * plugin was successfully completed. This is a terminal state.</p> </li> <li>
     * <p>Delivery Timed Out: The command wasn't delivered to the managed node before
     * the delivery timeout expired. Delivery timeouts don't count against the parent
     * command's <code>MaxErrors</code> limit, but they do contribute to whether the
     * parent command status is Success or Incomplete. This is a terminal state.</p>
     * </li> <li> <p>Execution Timed Out: Command execution started on the managed
     * node, but the execution wasn't complete before the execution timeout expired.
     * Execution timeouts count against the <code>MaxErrors</code> limit of the parent
     * command. This is a terminal state.</p> </li> <li> <p>Failed: The command wasn't
     * successful on the managed node. For a plugin, this indicates that the result
     * code wasn't zero. For a command invocation, this indicates that the result code
     * for one or more plugins wasn't zero. Invocation failures count against the
     * MaxErrors limit of the parent command. This is a terminal state.</p> </li> <li>
     * <p>Cancelled: The command was terminated before it was completed. This is a
     * terminal state.</p> </li> <li> <p>Undeliverable: The command can't be delivered
     * to the managed node. The managed node might not exist, or it might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit, and they don't contribute to whether the parent command status
     * is Success or Incomplete. This is a terminal state.</p> </li> <li>
     * <p>Terminated: The parent command exceeded its MaxErrors limit and subsequent
     * command invocations were canceled by the system. This is a terminal state.</p>
     * </li> </ul>
     */
    inline CommandPlugin& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. StatusDetails can be one of the following values:</p> <ul> <li>
     * <p>Pending: The command hasn't been sent to the managed node.</p> </li> <li>
     * <p>In Progress: The command has been sent to the managed node but hasn't reached
     * a terminal state.</p> </li> <li> <p>Success: The execution of the command or
     * plugin was successfully completed. This is a terminal state.</p> </li> <li>
     * <p>Delivery Timed Out: The command wasn't delivered to the managed node before
     * the delivery timeout expired. Delivery timeouts don't count against the parent
     * command's <code>MaxErrors</code> limit, but they do contribute to whether the
     * parent command status is Success or Incomplete. This is a terminal state.</p>
     * </li> <li> <p>Execution Timed Out: Command execution started on the managed
     * node, but the execution wasn't complete before the execution timeout expired.
     * Execution timeouts count against the <code>MaxErrors</code> limit of the parent
     * command. This is a terminal state.</p> </li> <li> <p>Failed: The command wasn't
     * successful on the managed node. For a plugin, this indicates that the result
     * code wasn't zero. For a command invocation, this indicates that the result code
     * for one or more plugins wasn't zero. Invocation failures count against the
     * MaxErrors limit of the parent command. This is a terminal state.</p> </li> <li>
     * <p>Cancelled: The command was terminated before it was completed. This is a
     * terminal state.</p> </li> <li> <p>Undeliverable: The command can't be delivered
     * to the managed node. The managed node might not exist, or it might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit, and they don't contribute to whether the parent command status
     * is Success or Incomplete. This is a terminal state.</p> </li> <li>
     * <p>Terminated: The parent command exceeded its MaxErrors limit and subsequent
     * command invocations were canceled by the system. This is a terminal state.</p>
     * </li> </ul>
     */
    inline CommandPlugin& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}


    /**
     * <p>A numeric response code generated after running the plugin. </p>
     */
    inline int GetResponseCode() const{ return m_responseCode; }

    /**
     * <p>A numeric response code generated after running the plugin. </p>
     */
    inline bool ResponseCodeHasBeenSet() const { return m_responseCodeHasBeenSet; }

    /**
     * <p>A numeric response code generated after running the plugin. </p>
     */
    inline void SetResponseCode(int value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }

    /**
     * <p>A numeric response code generated after running the plugin. </p>
     */
    inline CommandPlugin& WithResponseCode(int value) { SetResponseCode(value); return *this;}


    /**
     * <p>The time the plugin started running. </p>
     */
    inline const Aws::Utils::DateTime& GetResponseStartDateTime() const{ return m_responseStartDateTime; }

    /**
     * <p>The time the plugin started running. </p>
     */
    inline bool ResponseStartDateTimeHasBeenSet() const { return m_responseStartDateTimeHasBeenSet; }

    /**
     * <p>The time the plugin started running. </p>
     */
    inline void SetResponseStartDateTime(const Aws::Utils::DateTime& value) { m_responseStartDateTimeHasBeenSet = true; m_responseStartDateTime = value; }

    /**
     * <p>The time the plugin started running. </p>
     */
    inline void SetResponseStartDateTime(Aws::Utils::DateTime&& value) { m_responseStartDateTimeHasBeenSet = true; m_responseStartDateTime = std::move(value); }

    /**
     * <p>The time the plugin started running. </p>
     */
    inline CommandPlugin& WithResponseStartDateTime(const Aws::Utils::DateTime& value) { SetResponseStartDateTime(value); return *this;}

    /**
     * <p>The time the plugin started running. </p>
     */
    inline CommandPlugin& WithResponseStartDateTime(Aws::Utils::DateTime&& value) { SetResponseStartDateTime(std::move(value)); return *this;}


    /**
     * <p>The time the plugin stopped running. Could stop prematurely if, for example,
     * a cancel command was sent. </p>
     */
    inline const Aws::Utils::DateTime& GetResponseFinishDateTime() const{ return m_responseFinishDateTime; }

    /**
     * <p>The time the plugin stopped running. Could stop prematurely if, for example,
     * a cancel command was sent. </p>
     */
    inline bool ResponseFinishDateTimeHasBeenSet() const { return m_responseFinishDateTimeHasBeenSet; }

    /**
     * <p>The time the plugin stopped running. Could stop prematurely if, for example,
     * a cancel command was sent. </p>
     */
    inline void SetResponseFinishDateTime(const Aws::Utils::DateTime& value) { m_responseFinishDateTimeHasBeenSet = true; m_responseFinishDateTime = value; }

    /**
     * <p>The time the plugin stopped running. Could stop prematurely if, for example,
     * a cancel command was sent. </p>
     */
    inline void SetResponseFinishDateTime(Aws::Utils::DateTime&& value) { m_responseFinishDateTimeHasBeenSet = true; m_responseFinishDateTime = std::move(value); }

    /**
     * <p>The time the plugin stopped running. Could stop prematurely if, for example,
     * a cancel command was sent. </p>
     */
    inline CommandPlugin& WithResponseFinishDateTime(const Aws::Utils::DateTime& value) { SetResponseFinishDateTime(value); return *this;}

    /**
     * <p>The time the plugin stopped running. Could stop prematurely if, for example,
     * a cancel command was sent. </p>
     */
    inline CommandPlugin& WithResponseFinishDateTime(Aws::Utils::DateTime&& value) { SetResponseFinishDateTime(std::move(value)); return *this;}


    /**
     * <p>Output of the plugin execution.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

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
    inline CommandPlugin& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}

    /**
     * <p>Output of the plugin execution.</p>
     */
    inline CommandPlugin& WithOutput(const char* value) { SetOutput(value); return *this;}


    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the S3 bucket for the command wasn't specified, then this string is
     * empty.</p>
     */
    inline const Aws::String& GetStandardOutputUrl() const{ return m_standardOutputUrl; }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the S3 bucket for the command wasn't specified, then this string is
     * empty.</p>
     */
    inline bool StandardOutputUrlHasBeenSet() const { return m_standardOutputUrlHasBeenSet; }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the S3 bucket for the command wasn't specified, then this string is
     * empty.</p>
     */
    inline void SetStandardOutputUrl(const Aws::String& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the S3 bucket for the command wasn't specified, then this string is
     * empty.</p>
     */
    inline void SetStandardOutputUrl(Aws::String&& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = std::move(value); }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the S3 bucket for the command wasn't specified, then this string is
     * empty.</p>
     */
    inline void SetStandardOutputUrl(const char* value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl.assign(value); }

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the S3 bucket for the command wasn't specified, then this string is
     * empty.</p>
     */
    inline CommandPlugin& WithStandardOutputUrl(const Aws::String& value) { SetStandardOutputUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the S3 bucket for the command wasn't specified, then this string is
     * empty.</p>
     */
    inline CommandPlugin& WithStandardOutputUrl(Aws::String&& value) { SetStandardOutputUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the S3 bucket for the command wasn't specified, then this string is
     * empty.</p>
     */
    inline CommandPlugin& WithStandardOutputUrl(const char* value) { SetStandardOutputUrl(value); return *this;}


    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * isn't yet complete, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardErrorUrl() const{ return m_standardErrorUrl; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * isn't yet complete, then this string is empty.</p>
     */
    inline bool StandardErrorUrlHasBeenSet() const { return m_standardErrorUrlHasBeenSet; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * isn't yet complete, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(const Aws::String& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = value; }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * isn't yet complete, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(Aws::String&& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = std::move(value); }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * isn't yet complete, then this string is empty.</p>
     */
    inline void SetStandardErrorUrl(const char* value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl.assign(value); }

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * isn't yet complete, then this string is empty.</p>
     */
    inline CommandPlugin& WithStandardErrorUrl(const Aws::String& value) { SetStandardErrorUrl(value); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * isn't yet complete, then this string is empty.</p>
     */
    inline CommandPlugin& WithStandardErrorUrl(Aws::String&& value) { SetStandardErrorUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * isn't yet complete, then this string is empty.</p>
     */
    inline CommandPlugin& WithStandardErrorUrl(const char* value) { SetStandardErrorUrl(value); return *this;}


    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Amazon Web Services Systems Manager automatically determines the S3
     * bucket region.</p>
     */
    inline const Aws::String& GetOutputS3Region() const{ return m_outputS3Region; }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Amazon Web Services Systems Manager automatically determines the S3
     * bucket region.</p>
     */
    inline bool OutputS3RegionHasBeenSet() const { return m_outputS3RegionHasBeenSet; }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Amazon Web Services Systems Manager automatically determines the S3
     * bucket region.</p>
     */
    inline void SetOutputS3Region(const Aws::String& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = value; }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Amazon Web Services Systems Manager automatically determines the S3
     * bucket region.</p>
     */
    inline void SetOutputS3Region(Aws::String&& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = std::move(value); }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Amazon Web Services Systems Manager automatically determines the S3
     * bucket region.</p>
     */
    inline void SetOutputS3Region(const char* value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region.assign(value); }

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Amazon Web Services Systems Manager automatically determines the S3
     * bucket region.</p>
     */
    inline CommandPlugin& WithOutputS3Region(const Aws::String& value) { SetOutputS3Region(value); return *this;}

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Amazon Web Services Systems Manager automatically determines the S3
     * bucket region.</p>
     */
    inline CommandPlugin& WithOutputS3Region(Aws::String&& value) { SetOutputS3Region(std::move(value)); return *this;}

    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Amazon Web Services Systems Manager automatically determines the S3
     * bucket region.</p>
     */
    inline CommandPlugin& WithOutputS3Region(const char* value) { SetOutputS3Region(value); return *this;}


    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::move(value); }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}


    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::move(value); }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>doc-example-bucket/ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>doc-example-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>ab19cb99-a030-46dd-9dfc-8eSAMPLEPre-Fix</code> is the name of the S3
     * prefix;</p> <p> <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline CommandPlugin& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CommandPluginStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    int m_responseCode;
    bool m_responseCodeHasBeenSet = false;

    Aws::Utils::DateTime m_responseStartDateTime;
    bool m_responseStartDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_responseFinishDateTime;
    bool m_responseFinishDateTimeHasBeenSet = false;

    Aws::String m_output;
    bool m_outputHasBeenSet = false;

    Aws::String m_standardOutputUrl;
    bool m_standardOutputUrlHasBeenSet = false;

    Aws::String m_standardErrorUrl;
    bool m_standardErrorUrlHasBeenSet = false;

    Aws::String m_outputS3Region;
    bool m_outputS3RegionHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
