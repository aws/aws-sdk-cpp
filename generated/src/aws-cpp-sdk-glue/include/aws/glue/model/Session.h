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


    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the session.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the session.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the session.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the session.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the session.</p>
     */
    inline Session& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the session.</p>
     */
    inline Session& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the session.</p>
     */
    inline Session& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The time and date when the session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }

    /**
     * <p>The time and date when the session was created.</p>
     */
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }

    /**
     * <p>The time and date when the session was created.</p>
     */
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }

    /**
     * <p>The time and date when the session was created.</p>
     */
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::move(value); }

    /**
     * <p>The time and date when the session was created.</p>
     */
    inline Session& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}

    /**
     * <p>The time and date when the session was created.</p>
     */
    inline Session& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}


    /**
     * <p>The session status. </p>
     */
    inline const SessionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The session status. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The session status. </p>
     */
    inline void SetStatus(const SessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The session status. </p>
     */
    inline void SetStatus(SessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The session status. </p>
     */
    inline Session& WithStatus(const SessionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The session status. </p>
     */
    inline Session& WithStatus(SessionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The error message displayed during the session.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message displayed during the session.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message displayed during the session.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message displayed during the session.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message displayed during the session.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message displayed during the session.</p>
     */
    inline Session& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message displayed during the session.</p>
     */
    inline Session& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message displayed during the session.</p>
     */
    inline Session& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The description of the session.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the session.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the session.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the session.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the session.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the session.</p>
     */
    inline Session& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the session.</p>
     */
    inline Session& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the session.</p>
     */
    inline Session& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with the
     * Session.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with the
     * Session.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with the
     * Session.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with the
     * Session.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with the
     * Session.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with the
     * Session.</p>
     */
    inline Session& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with the
     * Session.</p>
     */
    inline Session& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with the
     * Session.</p>
     */
    inline Session& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The command object.See SessionCommand.</p>
     */
    inline const SessionCommand& GetCommand() const{ return m_command; }

    /**
     * <p>The command object.See SessionCommand.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command object.See SessionCommand.</p>
     */
    inline void SetCommand(const SessionCommand& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command object.See SessionCommand.</p>
     */
    inline void SetCommand(SessionCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command object.See SessionCommand.</p>
     */
    inline Session& WithCommand(const SessionCommand& value) { SetCommand(value); return *this;}

    /**
     * <p>The command object.See SessionCommand.</p>
     */
    inline Session& WithCommand(SessionCommand&& value) { SetCommand(std::move(value)); return *this;}


    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultArguments() const{ return m_defaultArguments; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline bool DefaultArgumentsHasBeenSet() const { return m_defaultArgumentsHasBeenSet; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline void SetDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = value; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline void SetDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = std::move(value); }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline Session& WithDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultArguments(value); return *this;}

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline Session& WithDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultArguments(std::move(value)); return *this;}

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline Session& AddDefaultArguments(const Aws::String& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline Session& AddDefaultArguments(Aws::String&& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline Session& AddDefaultArguments(const Aws::String& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline Session& AddDefaultArguments(Aws::String&& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline Session& AddDefaultArguments(const char* key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline Session& AddDefaultArguments(Aws::String&& key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline Session& AddDefaultArguments(const char* key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }


    /**
     * <p>The number of connections used for the session.</p>
     */
    inline const ConnectionsList& GetConnections() const{ return m_connections; }

    /**
     * <p>The number of connections used for the session.</p>
     */
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }

    /**
     * <p>The number of connections used for the session.</p>
     */
    inline void SetConnections(const ConnectionsList& value) { m_connectionsHasBeenSet = true; m_connections = value; }

    /**
     * <p>The number of connections used for the session.</p>
     */
    inline void SetConnections(ConnectionsList&& value) { m_connectionsHasBeenSet = true; m_connections = std::move(value); }

    /**
     * <p>The number of connections used for the session.</p>
     */
    inline Session& WithConnections(const ConnectionsList& value) { SetConnections(value); return *this;}

    /**
     * <p>The number of connections used for the session.</p>
     */
    inline Session& WithConnections(ConnectionsList&& value) { SetConnections(std::move(value)); return *this;}


    /**
     * <p>The code execution progress of the session.</p>
     */
    inline double GetProgress() const{ return m_progress; }

    /**
     * <p>The code execution progress of the session.</p>
     */
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }

    /**
     * <p>The code execution progress of the session.</p>
     */
    inline void SetProgress(double value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The code execution progress of the session.</p>
     */
    inline Session& WithProgress(double value) { SetProgress(value); return *this;}


    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * the job runs. A DPU is a relative measure of processing power that consists of 4
     * vCPUs of compute capacity and 16 GB memory. </p>
     */
    inline double GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * the job runs. A DPU is a relative measure of processing power that consists of 4
     * vCPUs of compute capacity and 16 GB memory. </p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * the job runs. A DPU is a relative measure of processing power that consists of 4
     * vCPUs of compute capacity and 16 GB memory. </p>
     */
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * the job runs. A DPU is a relative measure of processing power that consists of 4
     * vCPUs of compute capacity and 16 GB memory. </p>
     */
    inline Session& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The name of the SecurityConfiguration structure to be used with the
     * session.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the
     * session.</p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the
     * session.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the
     * session.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the
     * session.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the
     * session.</p>
     */
    inline Session& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the
     * session.</p>
     */
    inline Session& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the
     * session.</p>
     */
    inline Session& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0.</p>
     */
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0.</p>
     */
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0.</p>
     */
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0.</p>
     */
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0.</p>
     */
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0.</p>
     */
    inline Session& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0.</p>
     */
    inline Session& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0.</p>
     */
    inline Session& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}


    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session.</p>
     */
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }

    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session.</p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }

    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session.</p>
     */
    inline Session& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


    /**
     * <p>The type of predefined worker that is allocated when a session runs. Accepts
     * a value of <code>G.1X</code>, <code>G.2X</code>, <code>G.4X</code>, or
     * <code>G.8X</code> for Spark sessions. Accepts the value <code>Z.2X</code> for
     * Ray sessions.</p>
     */
    inline const WorkerType& GetWorkerType() const{ return m_workerType; }

    /**
     * <p>The type of predefined worker that is allocated when a session runs. Accepts
     * a value of <code>G.1X</code>, <code>G.2X</code>, <code>G.4X</code>, or
     * <code>G.8X</code> for Spark sessions. Accepts the value <code>Z.2X</code> for
     * Ray sessions.</p>
     */
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }

    /**
     * <p>The type of predefined worker that is allocated when a session runs. Accepts
     * a value of <code>G.1X</code>, <code>G.2X</code>, <code>G.4X</code>, or
     * <code>G.8X</code> for Spark sessions. Accepts the value <code>Z.2X</code> for
     * Ray sessions.</p>
     */
    inline void SetWorkerType(const WorkerType& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }

    /**
     * <p>The type of predefined worker that is allocated when a session runs. Accepts
     * a value of <code>G.1X</code>, <code>G.2X</code>, <code>G.4X</code>, or
     * <code>G.8X</code> for Spark sessions. Accepts the value <code>Z.2X</code> for
     * Ray sessions.</p>
     */
    inline void SetWorkerType(WorkerType&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }

    /**
     * <p>The type of predefined worker that is allocated when a session runs. Accepts
     * a value of <code>G.1X</code>, <code>G.2X</code>, <code>G.4X</code>, or
     * <code>G.8X</code> for Spark sessions. Accepts the value <code>Z.2X</code> for
     * Ray sessions.</p>
     */
    inline Session& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}

    /**
     * <p>The type of predefined worker that is allocated when a session runs. Accepts
     * a value of <code>G.1X</code>, <code>G.2X</code>, <code>G.4X</code>, or
     * <code>G.8X</code> for Spark sessions. Accepts the value <code>Z.2X</code> for
     * Ray sessions.</p>
     */
    inline Session& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}


    /**
     * <p>The date and time that this session is completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The date and time that this session is completed.</p>
     */
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }

    /**
     * <p>The date and time that this session is completed.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }

    /**
     * <p>The date and time that this session is completed.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }

    /**
     * <p>The date and time that this session is completed.</p>
     */
    inline Session& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The date and time that this session is completed.</p>
     */
    inline Session& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The total time the session ran for.</p>
     */
    inline double GetExecutionTime() const{ return m_executionTime; }

    /**
     * <p>The total time the session ran for.</p>
     */
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }

    /**
     * <p>The total time the session ran for.</p>
     */
    inline void SetExecutionTime(double value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }

    /**
     * <p>The total time the session ran for.</p>
     */
    inline Session& WithExecutionTime(double value) { SetExecutionTime(value); return *this;}


    /**
     * <p>The DPUs consumed by the session (formula: ExecutionTime * MaxCapacity).</p>
     */
    inline double GetDPUSeconds() const{ return m_dPUSeconds; }

    /**
     * <p>The DPUs consumed by the session (formula: ExecutionTime * MaxCapacity).</p>
     */
    inline bool DPUSecondsHasBeenSet() const { return m_dPUSecondsHasBeenSet; }

    /**
     * <p>The DPUs consumed by the session (formula: ExecutionTime * MaxCapacity).</p>
     */
    inline void SetDPUSeconds(double value) { m_dPUSecondsHasBeenSet = true; m_dPUSeconds = value; }

    /**
     * <p>The DPUs consumed by the session (formula: ExecutionTime * MaxCapacity).</p>
     */
    inline Session& WithDPUSeconds(double value) { SetDPUSeconds(value); return *this;}


    /**
     * <p>The number of minutes when idle before the session times out.</p>
     */
    inline int GetIdleTimeout() const{ return m_idleTimeout; }

    /**
     * <p>The number of minutes when idle before the session times out.</p>
     */
    inline bool IdleTimeoutHasBeenSet() const { return m_idleTimeoutHasBeenSet; }

    /**
     * <p>The number of minutes when idle before the session times out.</p>
     */
    inline void SetIdleTimeout(int value) { m_idleTimeoutHasBeenSet = true; m_idleTimeout = value; }

    /**
     * <p>The number of minutes when idle before the session times out.</p>
     */
    inline Session& WithIdleTimeout(int value) { SetIdleTimeout(value); return *this;}

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
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
