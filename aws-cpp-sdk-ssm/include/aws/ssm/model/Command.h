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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/CommandStatus.h>
#include <aws/ssm/model/NotificationConfig.h>
#include <aws/ssm/model/Target.h>

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
   * <p>Describes a command request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Command">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API Command
  {
  public:
    Command();
    Command(const Aws::Utils::Json::JsonValue& jsonValue);
    Command& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline Command& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline Command& WithCommandId(Aws::String&& value) { SetCommandId(value); return *this;}

    /**
     * <p>A unique identifier for this command.</p>
     */
    inline Command& WithCommandId(const char* value) { SetCommandId(value); return *this;}

    /**
     * <p>The name of the document requested for execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the document requested for execution.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the document requested for execution.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the document requested for execution.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the document requested for execution.</p>
     */
    inline Command& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the document requested for execution.</p>
     */
    inline Command& WithDocumentName(Aws::String&& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the document requested for execution.</p>
     */
    inline Command& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}

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
    inline Command& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline Command& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline Command& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAfter() const{ return m_expiresAfter; }

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.</p>
     */
    inline void SetExpiresAfter(const Aws::Utils::DateTime& value) { m_expiresAfterHasBeenSet = true; m_expiresAfter = value; }

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.</p>
     */
    inline void SetExpiresAfter(Aws::Utils::DateTime&& value) { m_expiresAfterHasBeenSet = true; m_expiresAfter = value; }

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.</p>
     */
    inline Command& WithExpiresAfter(const Aws::Utils::DateTime& value) { SetExpiresAfter(value); return *this;}

    /**
     * <p>If this time is reached and the command has not already started executing, it
     * will not execute. Calculated based on the ExpiresAfter user input provided as
     * part of the SendCommand API.</p>
     */
    inline Command& WithExpiresAfter(Aws::Utils::DateTime&& value) { SetExpiresAfter(value); return *this;}

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline Command& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline Command& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline Command& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline Command& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline Command& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline Command& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline Command& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The parameter values to be inserted in the document when executing the
     * command.</p>
     */
    inline Command& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline Command& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline Command& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline Command& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline Command& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The instance IDs against which this command was requested.</p>
     */
    inline Command& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>An array of search criteria that targets instances using a
     * <code>Key</code>,<code>Value</code> combination that you specify.
     * <code>Targets</code> is required if you don't provide one or more instance IDs
     * in the call.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>An array of search criteria that targets instances using a
     * <code>Key</code>,<code>Value</code> combination that you specify.
     * <code>Targets</code> is required if you don't provide one or more instance IDs
     * in the call.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>An array of search criteria that targets instances using a
     * <code>Key</code>,<code>Value</code> combination that you specify.
     * <code>Targets</code> is required if you don't provide one or more instance IDs
     * in the call.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>An array of search criteria that targets instances using a
     * <code>Key</code>,<code>Value</code> combination that you specify.
     * <code>Targets</code> is required if you don't provide one or more instance IDs
     * in the call.</p>
     */
    inline Command& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>An array of search criteria that targets instances using a
     * <code>Key</code>,<code>Value</code> combination that you specify.
     * <code>Targets</code> is required if you don't provide one or more instance IDs
     * in the call.</p>
     */
    inline Command& WithTargets(Aws::Vector<Target>&& value) { SetTargets(value); return *this;}

    /**
     * <p>An array of search criteria that targets instances using a
     * <code>Key</code>,<code>Value</code> combination that you specify.
     * <code>Targets</code> is required if you don't provide one or more instance IDs
     * in the call.</p>
     */
    inline Command& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>An array of search criteria that targets instances using a
     * <code>Key</code>,<code>Value</code> combination that you specify.
     * <code>Targets</code> is required if you don't provide one or more instance IDs
     * in the call.</p>
     */
    inline Command& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The date and time the command was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedDateTime() const{ return m_requestedDateTime; }

    /**
     * <p>The date and time the command was requested.</p>
     */
    inline void SetRequestedDateTime(const Aws::Utils::DateTime& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = value; }

    /**
     * <p>The date and time the command was requested.</p>
     */
    inline void SetRequestedDateTime(Aws::Utils::DateTime&& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = value; }

    /**
     * <p>The date and time the command was requested.</p>
     */
    inline Command& WithRequestedDateTime(const Aws::Utils::DateTime& value) { SetRequestedDateTime(value); return *this;}

    /**
     * <p>The date and time the command was requested.</p>
     */
    inline Command& WithRequestedDateTime(Aws::Utils::DateTime&& value) { SetRequestedDateTime(value); return *this;}

    /**
     * <p>The status of the command.</p>
     */
    inline const CommandStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the command.</p>
     */
    inline void SetStatus(const CommandStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the command.</p>
     */
    inline void SetStatus(CommandStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the command.</p>
     */
    inline Command& WithStatus(const CommandStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the command.</p>
     */
    inline Command& WithStatus(CommandStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>A detailed status of the command execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to any
     * instances.</p> </li> <li> <p>In Progress – The command has been sent to at least
     * one instance but has not reached a final state on all instances.</p> </li> <li>
     * <p>Success – The command successfully executed on all invocations. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The value of
     * <code>MaxErrors</code> or more command invocations shows a status of
     * <code>Delivery Timed Out</code>. This is a terminal state.</p> </li> <li>
     * <p>Execution Timed Out – The value of <code>MaxErrors</code> or more command
     * invocations shows a status of <code>Execution Timed Out</code>. This is a
     * terminal state.</p> </li> <li> <p>Failed – The value of <code>MaxErrors</code>
     * or more command invocations shows a status of <code>Failed</code>. This is a
     * terminal state.</p> </li> <li> <p>Incomplete – The command was attempted on all
     * instances and one or more invocations does not have a value of
     * <code>Success</code> but not enough invocations failed for the status to be
     * <code>Failed</code>. This is a terminal state.</p> </li> <li> <p>Canceled – The
     * command was terminated before it was completed. This is a terminal state.</p>
     * </li> <li> <p>Rate Exceeded – The number of instances targeted by the command
     * exceeded the account limit for pending invocations. The system has canceled the
     * command before executing it on any instance. This is a terminal state.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A detailed status of the command execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to any
     * instances.</p> </li> <li> <p>In Progress – The command has been sent to at least
     * one instance but has not reached a final state on all instances.</p> </li> <li>
     * <p>Success – The command successfully executed on all invocations. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The value of
     * <code>MaxErrors</code> or more command invocations shows a status of
     * <code>Delivery Timed Out</code>. This is a terminal state.</p> </li> <li>
     * <p>Execution Timed Out – The value of <code>MaxErrors</code> or more command
     * invocations shows a status of <code>Execution Timed Out</code>. This is a
     * terminal state.</p> </li> <li> <p>Failed – The value of <code>MaxErrors</code>
     * or more command invocations shows a status of <code>Failed</code>. This is a
     * terminal state.</p> </li> <li> <p>Incomplete – The command was attempted on all
     * instances and one or more invocations does not have a value of
     * <code>Success</code> but not enough invocations failed for the status to be
     * <code>Failed</code>. This is a terminal state.</p> </li> <li> <p>Canceled – The
     * command was terminated before it was completed. This is a terminal state.</p>
     * </li> <li> <p>Rate Exceeded – The number of instances targeted by the command
     * exceeded the account limit for pending invocations. The system has canceled the
     * command before executing it on any instance. This is a terminal state.</p> </li>
     * </ul>
     */
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A detailed status of the command execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to any
     * instances.</p> </li> <li> <p>In Progress – The command has been sent to at least
     * one instance but has not reached a final state on all instances.</p> </li> <li>
     * <p>Success – The command successfully executed on all invocations. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The value of
     * <code>MaxErrors</code> or more command invocations shows a status of
     * <code>Delivery Timed Out</code>. This is a terminal state.</p> </li> <li>
     * <p>Execution Timed Out – The value of <code>MaxErrors</code> or more command
     * invocations shows a status of <code>Execution Timed Out</code>. This is a
     * terminal state.</p> </li> <li> <p>Failed – The value of <code>MaxErrors</code>
     * or more command invocations shows a status of <code>Failed</code>. This is a
     * terminal state.</p> </li> <li> <p>Incomplete – The command was attempted on all
     * instances and one or more invocations does not have a value of
     * <code>Success</code> but not enough invocations failed for the status to be
     * <code>Failed</code>. This is a terminal state.</p> </li> <li> <p>Canceled – The
     * command was terminated before it was completed. This is a terminal state.</p>
     * </li> <li> <p>Rate Exceeded – The number of instances targeted by the command
     * exceeded the account limit for pending invocations. The system has canceled the
     * command before executing it on any instance. This is a terminal state.</p> </li>
     * </ul>
     */
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A detailed status of the command execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to any
     * instances.</p> </li> <li> <p>In Progress – The command has been sent to at least
     * one instance but has not reached a final state on all instances.</p> </li> <li>
     * <p>Success – The command successfully executed on all invocations. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The value of
     * <code>MaxErrors</code> or more command invocations shows a status of
     * <code>Delivery Timed Out</code>. This is a terminal state.</p> </li> <li>
     * <p>Execution Timed Out – The value of <code>MaxErrors</code> or more command
     * invocations shows a status of <code>Execution Timed Out</code>. This is a
     * terminal state.</p> </li> <li> <p>Failed – The value of <code>MaxErrors</code>
     * or more command invocations shows a status of <code>Failed</code>. This is a
     * terminal state.</p> </li> <li> <p>Incomplete – The command was attempted on all
     * instances and one or more invocations does not have a value of
     * <code>Success</code> but not enough invocations failed for the status to be
     * <code>Failed</code>. This is a terminal state.</p> </li> <li> <p>Canceled – The
     * command was terminated before it was completed. This is a terminal state.</p>
     * </li> <li> <p>Rate Exceeded – The number of instances targeted by the command
     * exceeded the account limit for pending invocations. The system has canceled the
     * command before executing it on any instance. This is a terminal state.</p> </li>
     * </ul>
     */
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }

    /**
     * <p>A detailed status of the command execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to any
     * instances.</p> </li> <li> <p>In Progress – The command has been sent to at least
     * one instance but has not reached a final state on all instances.</p> </li> <li>
     * <p>Success – The command successfully executed on all invocations. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The value of
     * <code>MaxErrors</code> or more command invocations shows a status of
     * <code>Delivery Timed Out</code>. This is a terminal state.</p> </li> <li>
     * <p>Execution Timed Out – The value of <code>MaxErrors</code> or more command
     * invocations shows a status of <code>Execution Timed Out</code>. This is a
     * terminal state.</p> </li> <li> <p>Failed – The value of <code>MaxErrors</code>
     * or more command invocations shows a status of <code>Failed</code>. This is a
     * terminal state.</p> </li> <li> <p>Incomplete – The command was attempted on all
     * instances and one or more invocations does not have a value of
     * <code>Success</code> but not enough invocations failed for the status to be
     * <code>Failed</code>. This is a terminal state.</p> </li> <li> <p>Canceled – The
     * command was terminated before it was completed. This is a terminal state.</p>
     * </li> <li> <p>Rate Exceeded – The number of instances targeted by the command
     * exceeded the account limit for pending invocations. The system has canceled the
     * command before executing it on any instance. This is a terminal state.</p> </li>
     * </ul>
     */
    inline Command& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A detailed status of the command execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to any
     * instances.</p> </li> <li> <p>In Progress – The command has been sent to at least
     * one instance but has not reached a final state on all instances.</p> </li> <li>
     * <p>Success – The command successfully executed on all invocations. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The value of
     * <code>MaxErrors</code> or more command invocations shows a status of
     * <code>Delivery Timed Out</code>. This is a terminal state.</p> </li> <li>
     * <p>Execution Timed Out – The value of <code>MaxErrors</code> or more command
     * invocations shows a status of <code>Execution Timed Out</code>. This is a
     * terminal state.</p> </li> <li> <p>Failed – The value of <code>MaxErrors</code>
     * or more command invocations shows a status of <code>Failed</code>. This is a
     * terminal state.</p> </li> <li> <p>Incomplete – The command was attempted on all
     * instances and one or more invocations does not have a value of
     * <code>Success</code> but not enough invocations failed for the status to be
     * <code>Failed</code>. This is a terminal state.</p> </li> <li> <p>Canceled – The
     * command was terminated before it was completed. This is a terminal state.</p>
     * </li> <li> <p>Rate Exceeded – The number of instances targeted by the command
     * exceeded the account limit for pending invocations. The system has canceled the
     * command before executing it on any instance. This is a terminal state.</p> </li>
     * </ul>
     */
    inline Command& WithStatusDetails(Aws::String&& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A detailed status of the command execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than <code>Status</code>.
     * For more information about these statuses, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-about-status.html">Run
     * Command Status</a>. <code>StatusDetails</code> can be one of the following
     * values:</p> <ul> <li> <p>Pending – The command has not been sent to any
     * instances.</p> </li> <li> <p>In Progress – The command has been sent to at least
     * one instance but has not reached a final state on all instances.</p> </li> <li>
     * <p>Success – The command successfully executed on all invocations. This is a
     * terminal state.</p> </li> <li> <p>Delivery Timed Out – The value of
     * <code>MaxErrors</code> or more command invocations shows a status of
     * <code>Delivery Timed Out</code>. This is a terminal state.</p> </li> <li>
     * <p>Execution Timed Out – The value of <code>MaxErrors</code> or more command
     * invocations shows a status of <code>Execution Timed Out</code>. This is a
     * terminal state.</p> </li> <li> <p>Failed – The value of <code>MaxErrors</code>
     * or more command invocations shows a status of <code>Failed</code>. This is a
     * terminal state.</p> </li> <li> <p>Incomplete – The command was attempted on all
     * instances and one or more invocations does not have a value of
     * <code>Success</code> but not enough invocations failed for the status to be
     * <code>Failed</code>. This is a terminal state.</p> </li> <li> <p>Canceled – The
     * command was terminated before it was completed. This is a terminal state.</p>
     * </li> <li> <p>Rate Exceeded – The number of instances targeted by the command
     * exceeded the account limit for pending invocations. The system has canceled the
     * command before executing it on any instance. This is a terminal state.</p> </li>
     * </ul>
     */
    inline Command& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}

    /**
     * <p>The region where the Amazon Simple Storage Service (Amazon S3) output bucket
     * is located. The default value is the region where Run Command is being
     * called.</p>
     */
    inline const Aws::String& GetOutputS3Region() const{ return m_outputS3Region; }

    /**
     * <p>The region where the Amazon Simple Storage Service (Amazon S3) output bucket
     * is located. The default value is the region where Run Command is being
     * called.</p>
     */
    inline void SetOutputS3Region(const Aws::String& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = value; }

    /**
     * <p>The region where the Amazon Simple Storage Service (Amazon S3) output bucket
     * is located. The default value is the region where Run Command is being
     * called.</p>
     */
    inline void SetOutputS3Region(Aws::String&& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = value; }

    /**
     * <p>The region where the Amazon Simple Storage Service (Amazon S3) output bucket
     * is located. The default value is the region where Run Command is being
     * called.</p>
     */
    inline void SetOutputS3Region(const char* value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region.assign(value); }

    /**
     * <p>The region where the Amazon Simple Storage Service (Amazon S3) output bucket
     * is located. The default value is the region where Run Command is being
     * called.</p>
     */
    inline Command& WithOutputS3Region(const Aws::String& value) { SetOutputS3Region(value); return *this;}

    /**
     * <p>The region where the Amazon Simple Storage Service (Amazon S3) output bucket
     * is located. The default value is the region where Run Command is being
     * called.</p>
     */
    inline Command& WithOutputS3Region(Aws::String&& value) { SetOutputS3Region(value); return *this;}

    /**
     * <p>The region where the Amazon Simple Storage Service (Amazon S3) output bucket
     * is located. The default value is the region where Run Command is being
     * called.</p>
     */
    inline Command& WithOutputS3Region(const char* value) { SetOutputS3Region(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline Command& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}

    /**
     * <p>The maximum number of instances that are allowed to execute the command at
     * the same time. You can specify a number of instances, such as 10, or a
     * percentage of instances, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxConcurrency</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of instances that are allowed to execute the command at
     * the same time. You can specify a number of instances, such as 10, or a
     * percentage of instances, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxConcurrency</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of instances that are allowed to execute the command at
     * the same time. You can specify a number of instances, such as 10, or a
     * percentage of instances, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxConcurrency</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of instances that are allowed to execute the command at
     * the same time. You can specify a number of instances, such as 10, or a
     * percentage of instances, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxConcurrency</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>The maximum number of instances that are allowed to execute the command at
     * the same time. You can specify a number of instances, such as 10, or a
     * percentage of instances, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxConcurrency</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline Command& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The maximum number of instances that are allowed to execute the command at
     * the same time. You can specify a number of instances, such as 10, or a
     * percentage of instances, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxConcurrency</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline Command& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The maximum number of instances that are allowed to execute the command at
     * the same time. You can specify a number of instances, such as 10, or a
     * percentage of instances, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxConcurrency</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline Command& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The maximum number of errors allowed before the system stops sending the
     * command to additional targets. You can specify a number of errors, such as 10,
     * or a percentage or errors, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxErrors</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The maximum number of errors allowed before the system stops sending the
     * command to additional targets. You can specify a number of errors, such as 10,
     * or a percentage or errors, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxErrors</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The maximum number of errors allowed before the system stops sending the
     * command to additional targets. You can specify a number of errors, such as 10,
     * or a percentage or errors, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxErrors</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The maximum number of errors allowed before the system stops sending the
     * command to additional targets. You can specify a number of errors, such as 10,
     * or a percentage or errors, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxErrors</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The maximum number of errors allowed before the system stops sending the
     * command to additional targets. You can specify a number of errors, such as 10,
     * or a percentage or errors, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxErrors</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline Command& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The maximum number of errors allowed before the system stops sending the
     * command to additional targets. You can specify a number of errors, such as 10,
     * or a percentage or errors, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxErrors</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline Command& WithMaxErrors(Aws::String&& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The maximum number of errors allowed before the system stops sending the
     * command to additional targets. You can specify a number of errors, such as 10,
     * or a percentage or errors, such as 10%. The default value is 50. For more
     * information about how to use <code>MaxErrors</code>, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Executing
     * a Command Using Systems Manager Run Command</a>.</p>
     */
    inline Command& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The number of targets for the command.</p>
     */
    inline int GetTargetCount() const{ return m_targetCount; }

    /**
     * <p>The number of targets for the command.</p>
     */
    inline void SetTargetCount(int value) { m_targetCountHasBeenSet = true; m_targetCount = value; }

    /**
     * <p>The number of targets for the command.</p>
     */
    inline Command& WithTargetCount(int value) { SetTargetCount(value); return *this;}

    /**
     * <p>The number of targets for which the command invocation reached a terminal
     * state. Terminal states include the following: <code>Success</code>,
     * <code>Failed</code>, <code>Execution Timed Out</code>, <code>Delivery Timed
     * Out</code>, <code>Canceled</code>, <code>Terminated</code>, or
     * <code>Undeliverable</code>.</p>
     */
    inline int GetCompletedCount() const{ return m_completedCount; }

    /**
     * <p>The number of targets for which the command invocation reached a terminal
     * state. Terminal states include the following: <code>Success</code>,
     * <code>Failed</code>, <code>Execution Timed Out</code>, <code>Delivery Timed
     * Out</code>, <code>Canceled</code>, <code>Terminated</code>, or
     * <code>Undeliverable</code>.</p>
     */
    inline void SetCompletedCount(int value) { m_completedCountHasBeenSet = true; m_completedCount = value; }

    /**
     * <p>The number of targets for which the command invocation reached a terminal
     * state. Terminal states include the following: <code>Success</code>,
     * <code>Failed</code>, <code>Execution Timed Out</code>, <code>Delivery Timed
     * Out</code>, <code>Canceled</code>, <code>Terminated</code>, or
     * <code>Undeliverable</code>.</p>
     */
    inline Command& WithCompletedCount(int value) { SetCompletedCount(value); return *this;}

    /**
     * <p>The number of targets for which the status is <code>Failed</code> or
     * <code>Execution Timed Out</code>.</p>
     */
    inline int GetErrorCount() const{ return m_errorCount; }

    /**
     * <p>The number of targets for which the status is <code>Failed</code> or
     * <code>Execution Timed Out</code>.</p>
     */
    inline void SetErrorCount(int value) { m_errorCountHasBeenSet = true; m_errorCount = value; }

    /**
     * <p>The number of targets for which the status is <code>Failed</code> or
     * <code>Execution Timed Out</code>.</p>
     */
    inline Command& WithErrorCount(int value) { SetErrorCount(value); return *this;}

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline Command& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline Command& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM service role that Run Command uses to act on your behalf when sending
     * notifications about command status changes. </p>
     */
    inline Command& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline const NotificationConfig& GetNotificationConfig() const{ return m_notificationConfig; }

    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline void SetNotificationConfig(const NotificationConfig& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }

    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline void SetNotificationConfig(NotificationConfig&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }

    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline Command& WithNotificationConfig(const NotificationConfig& value) { SetNotificationConfig(value); return *this;}

    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline Command& WithNotificationConfig(NotificationConfig&& value) { SetNotificationConfig(value); return *this;}

  private:
    Aws::String m_commandId;
    bool m_commandIdHasBeenSet;
    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;
    Aws::String m_comment;
    bool m_commentHasBeenSet;
    Aws::Utils::DateTime m_expiresAfter;
    bool m_expiresAfterHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;
    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;
    Aws::Utils::DateTime m_requestedDateTime;
    bool m_requestedDateTimeHasBeenSet;
    CommandStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet;
    Aws::String m_outputS3Region;
    bool m_outputS3RegionHasBeenSet;
    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet;
    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet;
    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet;
    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet;
    int m_targetCount;
    bool m_targetCountHasBeenSet;
    int m_completedCount;
    bool m_completedCountHasBeenSet;
    int m_errorCount;
    bool m_errorCountHasBeenSet;
    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;
    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
