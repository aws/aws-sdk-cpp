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
    AWS_GLUE_API Session() = default;
    AWS_GLUE_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Session& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date when the session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    void SetCreatedOn(CreatedOnT&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::forward<CreatedOnT>(value); }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    Session& WithCreatedOn(CreatedOnT&& value) { SetCreatedOn(std::forward<CreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session status. </p>
     */
    inline SessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Session& WithStatus(SessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message displayed during the session.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    Session& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the session.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Session& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with the
     * Session.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    Session& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command object.See SessionCommand.</p>
     */
    inline const SessionCommand& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = SessionCommand>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = SessionCommand>
    Session& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultArguments() const { return m_defaultArguments; }
    inline bool DefaultArgumentsHasBeenSet() const { return m_defaultArgumentsHasBeenSet; }
    template<typename DefaultArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetDefaultArguments(DefaultArgumentsT&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = std::forward<DefaultArgumentsT>(value); }
    template<typename DefaultArgumentsT = Aws::Map<Aws::String, Aws::String>>
    Session& WithDefaultArguments(DefaultArgumentsT&& value) { SetDefaultArguments(std::forward<DefaultArgumentsT>(value)); return *this;}
    template<typename DefaultArgumentsKeyT = Aws::String, typename DefaultArgumentsValueT = Aws::String>
    Session& AddDefaultArguments(DefaultArgumentsKeyT&& key, DefaultArgumentsValueT&& value) {
      m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::forward<DefaultArgumentsKeyT>(key), std::forward<DefaultArgumentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The number of connections used for the session.</p>
     */
    inline const ConnectionsList& GetConnections() const { return m_connections; }
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
    template<typename ConnectionsT = ConnectionsList>
    void SetConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections = std::forward<ConnectionsT>(value); }
    template<typename ConnectionsT = ConnectionsList>
    Session& WithConnections(ConnectionsT&& value) { SetConnections(std::forward<ConnectionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code execution progress of the session.</p>
     */
    inline double GetProgress() const { return m_progress; }
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
    inline double GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline Session& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SecurityConfiguration structure to be used with the
     * session.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    Session& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0.</p>
     */
    inline const Aws::String& GetGlueVersion() const { return m_glueVersion; }
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    template<typename GlueVersionT = Aws::String>
    void SetGlueVersion(GlueVersionT&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::forward<GlueVersionT>(value); }
    template<typename GlueVersionT = Aws::String>
    Session& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
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
    inline WorkerType GetWorkerType() const { return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    inline void SetWorkerType(WorkerType value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline Session& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this session is completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    void SetCompletedOn(CompletedOnT&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::forward<CompletedOnT>(value); }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    Session& WithCompletedOn(CompletedOnT&& value) { SetCompletedOn(std::forward<CompletedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total time the session ran for.</p>
     */
    inline double GetExecutionTime() const { return m_executionTime; }
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }
    inline void SetExecutionTime(double value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }
    inline Session& WithExecutionTime(double value) { SetExecutionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DPUs consumed by the session (formula: ExecutionTime * MaxCapacity).</p>
     */
    inline double GetDPUSeconds() const { return m_dPUSeconds; }
    inline bool DPUSecondsHasBeenSet() const { return m_dPUSecondsHasBeenSet; }
    inline void SetDPUSeconds(double value) { m_dPUSecondsHasBeenSet = true; m_dPUSeconds = value; }
    inline Session& WithDPUSeconds(double value) { SetDPUSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes when idle before the session times out.</p>
     */
    inline int GetIdleTimeout() const { return m_idleTimeout; }
    inline bool IdleTimeoutHasBeenSet() const { return m_idleTimeoutHasBeenSet; }
    inline void SetIdleTimeout(int value) { m_idleTimeoutHasBeenSet = true; m_idleTimeout = value; }
    inline Session& WithIdleTimeout(int value) { SetIdleTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Glue usage profile associated with the session.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    Session& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn{};
    bool m_createdOnHasBeenSet = false;

    SessionStatus m_status{SessionStatus::NOT_SET};
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

    double m_progress{0.0};
    bool m_progressHasBeenSet = false;

    double m_maxCapacity{0.0};
    bool m_maxCapacityHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

    WorkerType m_workerType{WorkerType::NOT_SET};
    bool m_workerTypeHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn{};
    bool m_completedOnHasBeenSet = false;

    double m_executionTime{0.0};
    bool m_executionTimeHasBeenSet = false;

    double m_dPUSeconds{0.0};
    bool m_dPUSecondsHasBeenSet = false;

    int m_idleTimeout{0};
    bool m_idleTimeoutHasBeenSet = false;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
