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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a command.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Command">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API Command
  {
  public:
    Command();
    Command(Aws::Utils::Json::JsonView jsonValue);
    Command& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The command ID.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }

    /**
     * <p>The command ID.</p>
     */
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }

    /**
     * <p>The command ID.</p>
     */
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * <p>The command ID.</p>
     */
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = std::move(value); }

    /**
     * <p>The command ID.</p>
     */
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }

    /**
     * <p>The command ID.</p>
     */
    inline Command& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}

    /**
     * <p>The command ID.</p>
     */
    inline Command& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}

    /**
     * <p>The command ID.</p>
     */
    inline Command& WithCommandId(const char* value) { SetCommandId(value); return *this;}


    /**
     * <p>The ID of the instance where the command was executed.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance where the command was executed.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance where the command was executed.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance where the command was executed.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance where the command was executed.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance where the command was executed.</p>
     */
    inline Command& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance where the command was executed.</p>
     */
    inline Command& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance where the command was executed.</p>
     */
    inline Command& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The command deployment ID.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The command deployment ID.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The command deployment ID.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The command deployment ID.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The command deployment ID.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The command deployment ID.</p>
     */
    inline Command& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The command deployment ID.</p>
     */
    inline Command& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The command deployment ID.</p>
     */
    inline Command& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>Date and time when the command was run.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Date and time when the command was run.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Date and time when the command was run.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Date and time when the command was run.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Date and time when the command was run.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>Date and time when the command was run.</p>
     */
    inline Command& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Date and time when the command was run.</p>
     */
    inline Command& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>Date and time when the command was run.</p>
     */
    inline Command& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>Date and time when the command was acknowledged.</p>
     */
    inline const Aws::String& GetAcknowledgedAt() const{ return m_acknowledgedAt; }

    /**
     * <p>Date and time when the command was acknowledged.</p>
     */
    inline bool AcknowledgedAtHasBeenSet() const { return m_acknowledgedAtHasBeenSet; }

    /**
     * <p>Date and time when the command was acknowledged.</p>
     */
    inline void SetAcknowledgedAt(const Aws::String& value) { m_acknowledgedAtHasBeenSet = true; m_acknowledgedAt = value; }

    /**
     * <p>Date and time when the command was acknowledged.</p>
     */
    inline void SetAcknowledgedAt(Aws::String&& value) { m_acknowledgedAtHasBeenSet = true; m_acknowledgedAt = std::move(value); }

    /**
     * <p>Date and time when the command was acknowledged.</p>
     */
    inline void SetAcknowledgedAt(const char* value) { m_acknowledgedAtHasBeenSet = true; m_acknowledgedAt.assign(value); }

    /**
     * <p>Date and time when the command was acknowledged.</p>
     */
    inline Command& WithAcknowledgedAt(const Aws::String& value) { SetAcknowledgedAt(value); return *this;}

    /**
     * <p>Date and time when the command was acknowledged.</p>
     */
    inline Command& WithAcknowledgedAt(Aws::String&& value) { SetAcknowledgedAt(std::move(value)); return *this;}

    /**
     * <p>Date and time when the command was acknowledged.</p>
     */
    inline Command& WithAcknowledgedAt(const char* value) { SetAcknowledgedAt(value); return *this;}


    /**
     * <p>Date when the command completed.</p>
     */
    inline const Aws::String& GetCompletedAt() const{ return m_completedAt; }

    /**
     * <p>Date when the command completed.</p>
     */
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }

    /**
     * <p>Date when the command completed.</p>
     */
    inline void SetCompletedAt(const Aws::String& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }

    /**
     * <p>Date when the command completed.</p>
     */
    inline void SetCompletedAt(Aws::String&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }

    /**
     * <p>Date when the command completed.</p>
     */
    inline void SetCompletedAt(const char* value) { m_completedAtHasBeenSet = true; m_completedAt.assign(value); }

    /**
     * <p>Date when the command completed.</p>
     */
    inline Command& WithCompletedAt(const Aws::String& value) { SetCompletedAt(value); return *this;}

    /**
     * <p>Date when the command completed.</p>
     */
    inline Command& WithCompletedAt(Aws::String&& value) { SetCompletedAt(std::move(value)); return *this;}

    /**
     * <p>Date when the command completed.</p>
     */
    inline Command& WithCompletedAt(const char* value) { SetCompletedAt(value); return *this;}


    /**
     * <p>The command status:</p> <ul> <li> <p>failed</p> </li> <li> <p>successful</p>
     * </li> <li> <p>skipped</p> </li> <li> <p>pending</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The command status:</p> <ul> <li> <p>failed</p> </li> <li> <p>successful</p>
     * </li> <li> <p>skipped</p> </li> <li> <p>pending</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The command status:</p> <ul> <li> <p>failed</p> </li> <li> <p>successful</p>
     * </li> <li> <p>skipped</p> </li> <li> <p>pending</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The command status:</p> <ul> <li> <p>failed</p> </li> <li> <p>successful</p>
     * </li> <li> <p>skipped</p> </li> <li> <p>pending</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The command status:</p> <ul> <li> <p>failed</p> </li> <li> <p>successful</p>
     * </li> <li> <p>skipped</p> </li> <li> <p>pending</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The command status:</p> <ul> <li> <p>failed</p> </li> <li> <p>successful</p>
     * </li> <li> <p>skipped</p> </li> <li> <p>pending</p> </li> </ul>
     */
    inline Command& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The command status:</p> <ul> <li> <p>failed</p> </li> <li> <p>successful</p>
     * </li> <li> <p>skipped</p> </li> <li> <p>pending</p> </li> </ul>
     */
    inline Command& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The command status:</p> <ul> <li> <p>failed</p> </li> <li> <p>successful</p>
     * </li> <li> <p>skipped</p> </li> <li> <p>pending</p> </li> </ul>
     */
    inline Command& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The command exit code.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }

    /**
     * <p>The command exit code.</p>
     */
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }

    /**
     * <p>The command exit code.</p>
     */
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }

    /**
     * <p>The command exit code.</p>
     */
    inline Command& WithExitCode(int value) { SetExitCode(value); return *this;}


    /**
     * <p>The URL of the command log.</p>
     */
    inline const Aws::String& GetLogUrl() const{ return m_logUrl; }

    /**
     * <p>The URL of the command log.</p>
     */
    inline bool LogUrlHasBeenSet() const { return m_logUrlHasBeenSet; }

    /**
     * <p>The URL of the command log.</p>
     */
    inline void SetLogUrl(const Aws::String& value) { m_logUrlHasBeenSet = true; m_logUrl = value; }

    /**
     * <p>The URL of the command log.</p>
     */
    inline void SetLogUrl(Aws::String&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::move(value); }

    /**
     * <p>The URL of the command log.</p>
     */
    inline void SetLogUrl(const char* value) { m_logUrlHasBeenSet = true; m_logUrl.assign(value); }

    /**
     * <p>The URL of the command log.</p>
     */
    inline Command& WithLogUrl(const Aws::String& value) { SetLogUrl(value); return *this;}

    /**
     * <p>The URL of the command log.</p>
     */
    inline Command& WithLogUrl(Aws::String&& value) { SetLogUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the command log.</p>
     */
    inline Command& WithLogUrl(const char* value) { SetLogUrl(value); return *this;}


    /**
     * <p>The command type:</p> <ul> <li> <p> <code>configure</code> </p> </li> <li>
     * <p> <code>deploy</code> </p> </li> <li> <p> <code>execute_recipes</code> </p>
     * </li> <li> <p> <code>install_dependencies</code> </p> </li> <li> <p>
     * <code>restart</code> </p> </li> <li> <p> <code>rollback</code> </p> </li> <li>
     * <p> <code>setup</code> </p> </li> <li> <p> <code>start</code> </p> </li> <li>
     * <p> <code>stop</code> </p> </li> <li> <p> <code>undeploy</code> </p> </li> <li>
     * <p> <code>update_custom_cookbooks</code> </p> </li> <li> <p>
     * <code>update_dependencies</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The command type:</p> <ul> <li> <p> <code>configure</code> </p> </li> <li>
     * <p> <code>deploy</code> </p> </li> <li> <p> <code>execute_recipes</code> </p>
     * </li> <li> <p> <code>install_dependencies</code> </p> </li> <li> <p>
     * <code>restart</code> </p> </li> <li> <p> <code>rollback</code> </p> </li> <li>
     * <p> <code>setup</code> </p> </li> <li> <p> <code>start</code> </p> </li> <li>
     * <p> <code>stop</code> </p> </li> <li> <p> <code>undeploy</code> </p> </li> <li>
     * <p> <code>update_custom_cookbooks</code> </p> </li> <li> <p>
     * <code>update_dependencies</code> </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The command type:</p> <ul> <li> <p> <code>configure</code> </p> </li> <li>
     * <p> <code>deploy</code> </p> </li> <li> <p> <code>execute_recipes</code> </p>
     * </li> <li> <p> <code>install_dependencies</code> </p> </li> <li> <p>
     * <code>restart</code> </p> </li> <li> <p> <code>rollback</code> </p> </li> <li>
     * <p> <code>setup</code> </p> </li> <li> <p> <code>start</code> </p> </li> <li>
     * <p> <code>stop</code> </p> </li> <li> <p> <code>undeploy</code> </p> </li> <li>
     * <p> <code>update_custom_cookbooks</code> </p> </li> <li> <p>
     * <code>update_dependencies</code> </p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The command type:</p> <ul> <li> <p> <code>configure</code> </p> </li> <li>
     * <p> <code>deploy</code> </p> </li> <li> <p> <code>execute_recipes</code> </p>
     * </li> <li> <p> <code>install_dependencies</code> </p> </li> <li> <p>
     * <code>restart</code> </p> </li> <li> <p> <code>rollback</code> </p> </li> <li>
     * <p> <code>setup</code> </p> </li> <li> <p> <code>start</code> </p> </li> <li>
     * <p> <code>stop</code> </p> </li> <li> <p> <code>undeploy</code> </p> </li> <li>
     * <p> <code>update_custom_cookbooks</code> </p> </li> <li> <p>
     * <code>update_dependencies</code> </p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The command type:</p> <ul> <li> <p> <code>configure</code> </p> </li> <li>
     * <p> <code>deploy</code> </p> </li> <li> <p> <code>execute_recipes</code> </p>
     * </li> <li> <p> <code>install_dependencies</code> </p> </li> <li> <p>
     * <code>restart</code> </p> </li> <li> <p> <code>rollback</code> </p> </li> <li>
     * <p> <code>setup</code> </p> </li> <li> <p> <code>start</code> </p> </li> <li>
     * <p> <code>stop</code> </p> </li> <li> <p> <code>undeploy</code> </p> </li> <li>
     * <p> <code>update_custom_cookbooks</code> </p> </li> <li> <p>
     * <code>update_dependencies</code> </p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The command type:</p> <ul> <li> <p> <code>configure</code> </p> </li> <li>
     * <p> <code>deploy</code> </p> </li> <li> <p> <code>execute_recipes</code> </p>
     * </li> <li> <p> <code>install_dependencies</code> </p> </li> <li> <p>
     * <code>restart</code> </p> </li> <li> <p> <code>rollback</code> </p> </li> <li>
     * <p> <code>setup</code> </p> </li> <li> <p> <code>start</code> </p> </li> <li>
     * <p> <code>stop</code> </p> </li> <li> <p> <code>undeploy</code> </p> </li> <li>
     * <p> <code>update_custom_cookbooks</code> </p> </li> <li> <p>
     * <code>update_dependencies</code> </p> </li> </ul>
     */
    inline Command& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The command type:</p> <ul> <li> <p> <code>configure</code> </p> </li> <li>
     * <p> <code>deploy</code> </p> </li> <li> <p> <code>execute_recipes</code> </p>
     * </li> <li> <p> <code>install_dependencies</code> </p> </li> <li> <p>
     * <code>restart</code> </p> </li> <li> <p> <code>rollback</code> </p> </li> <li>
     * <p> <code>setup</code> </p> </li> <li> <p> <code>start</code> </p> </li> <li>
     * <p> <code>stop</code> </p> </li> <li> <p> <code>undeploy</code> </p> </li> <li>
     * <p> <code>update_custom_cookbooks</code> </p> </li> <li> <p>
     * <code>update_dependencies</code> </p> </li> </ul>
     */
    inline Command& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The command type:</p> <ul> <li> <p> <code>configure</code> </p> </li> <li>
     * <p> <code>deploy</code> </p> </li> <li> <p> <code>execute_recipes</code> </p>
     * </li> <li> <p> <code>install_dependencies</code> </p> </li> <li> <p>
     * <code>restart</code> </p> </li> <li> <p> <code>rollback</code> </p> </li> <li>
     * <p> <code>setup</code> </p> </li> <li> <p> <code>start</code> </p> </li> <li>
     * <p> <code>stop</code> </p> </li> <li> <p> <code>undeploy</code> </p> </li> <li>
     * <p> <code>update_custom_cookbooks</code> </p> </li> <li> <p>
     * <code>update_dependencies</code> </p> </li> </ul>
     */
    inline Command& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_acknowledgedAt;
    bool m_acknowledgedAtHasBeenSet;

    Aws::String m_completedAt;
    bool m_completedAtHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    int m_exitCode;
    bool m_exitCodeHasBeenSet;

    Aws::String m_logUrl;
    bool m_logUrlHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
