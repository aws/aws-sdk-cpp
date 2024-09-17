/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/SessionStatus.h>
#include <aws/glue/model/SessionCommand.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/ConnectionsList.h>
#include <aws/glue/model/WorkerType.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The period in which a remote Spark runtime environment is
   * running.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Session">AWS API
   * Reference</a></p>
   */
  class Session
  {
  public:
    AWS_GLUE_API Session();
    AWS_GLUE_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Session& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Session& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Session& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date when the session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::move(value); }
    inline Session& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}
    inline Session& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session status. </p>
     */
    inline const SessionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Session& WithStatus(const SessionStatus& value) { SetStatus(value); return *this;}
    inline Session& WithStatus(SessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message displayed during the session.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline Session& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline Session& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline Session& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the session.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Session& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Session& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Session& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with the
     * Session.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline Session& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline Session& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline Session& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command object.See SessionCommand.</p>
     */
    inline const SessionCommand& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const SessionCommand& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(SessionCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline Session& WithCommand(const SessionCommand& value) { SetCommand(value); return *this;}
    inline Session& WithCommand(SessionCommand&& value) { SetCommand(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultArguments() const{ return m_defaultArguments; }
    inline bool DefaultArgumentsHasBeenSet() const { return m_defaultArgumentsHasBeenSet; }
    inline void SetDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = value; }
    inline void SetDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = std::move(value); }
    inline Session& WithDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultArguments(value); return *this;}
    inline Session& WithDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultArguments(std::move(value)); return *this;}
    inline Session& AddDefaultArguments(const Aws::String& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }
    inline Session& AddDefaultArguments(Aws::String&& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }
    inline Session& AddDefaultArguments(const Aws::String& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }
    inline Session& AddDefaultArguments(Aws::String&& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), std::move(value)); return *this; }
    inline Session& AddDefaultArguments(const char* key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }
    inline Session& AddDefaultArguments(Aws::String&& key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }
    inline Session& AddDefaultArguments(const char* key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of connections used for the session.</p>
     */
    inline const ConnectionsList& GetConnections() const{ return m_connections; }
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
    inline void SetConnections(const ConnectionsList& value) { m_connectionsHasBeenSet = true; m_connections = value; }
    inline void SetConnections(ConnectionsList&& value) { m_connectionsHasBeenSet = true; m_connections = std::move(value); }
    inline Session& WithConnections(const ConnectionsList& value) { SetConnections(value); return *this;}
    inline Session& WithConnections(ConnectionsList&& value) { SetConnections(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code execution progress of the session.</p>
     */
    inline double GetProgress() const{ return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(double value) { m_progressHasBeenSet = true; m_progress = value; }
    inline Session& WithProgress(double value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * the job runs. A DPU is a relative measure of processing power that consists of 4
     * vCPUs of compute capacity and 16 GB memory. </p>
     */
    inline double GetMaxCapacity() const{ return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline Session& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SecurityConfiguration structure to be used with the
     * session.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }
    inline Session& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}
    inline Session& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}
    inline Session& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0.</p>
     */
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }
    inline Session& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}
    inline Session& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}
    inline Session& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline Session& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of predefined worker that is allocated when a session runs. Accepts
     * a value of <code>G.1X</code>, <code>G.2X</code>, <code>G.4X</code>, or
     * <code>G.8X</code> for Spark sessions. Accepts the value <code>Z.2X</code> for
     * Ray sessions.</p>
     */
    inline const WorkerType& GetWorkerType() const{ return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    inline void SetWorkerType(const WorkerType& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline void SetWorkerType(WorkerType&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }
    inline Session& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}
    inline Session& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this session is completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }
    inline Session& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}
    inline Session& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total time the session ran for.</p>
     */
    inline double GetExecutionTime() const{ return m_executionTime; }
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }
    inline void SetExecutionTime(double value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }
    inline Session& WithExecutionTime(double value) { SetExecutionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DPUs consumed by the session (formula: ExecutionTime * MaxCapacity).</p>
     */
    inline double GetDPUSeconds() const{ return m_dPUSeconds; }
    inline bool DPUSecondsHasBeenSet() const { return m_dPUSecondsHasBeenSet; }
    inline void SetDPUSeconds(double value) { m_dPUSecondsHasBeenSet = true; m_dPUSeconds = value; }
    inline Session& WithDPUSeconds(double value) { SetDPUSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes when idle before the session times out.</p>
     */
    inline int GetIdleTimeout() const{ return m_idleTimeout; }
    inline bool IdleTimeoutHasBeenSet() const { return m_idleTimeoutHasBeenSet; }
    inline void SetIdleTimeout(int value) { m_idleTimeoutHasBeenSet = true; m_idleTimeout = value; }
    inline Session& WithIdleTimeout(int value) { SetIdleTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Glue usage profile associated with the session.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }
    inline Session& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}
    inline Session& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}
    inline Session& WithProfileName(const char* value) { SetProfileName(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn;
    bool m_createdOnHasBeenSet = false;

    SessionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    SessionCommand m_command;
    bool m_commandHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultArguments;
    bool m_defaultArgumentsHasBeenSet = false;

    ConnectionsList m_connections;
    bool m_connectionsHasBeenSet = false;

    double m_progress;
    bool m_progressHasBeenSet = false;

    double m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    WorkerType m_workerType;
    bool m_workerTypeHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn;
    bool m_completedOnHasBeenSet = false;

    double m_executionTime;
    bool m_executionTimeHasBeenSet = false;

    double m_dPUSeconds;
    bool m_dPUSecondsHasBeenSet = false;

    int m_idleTimeout;
    bool m_idleTimeoutHasBeenSet = false;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
