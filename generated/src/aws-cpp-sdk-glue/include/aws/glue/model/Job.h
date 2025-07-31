/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/JobMode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/ExecutionProperty.h>
#include <aws/glue/model/JobCommand.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/ConnectionsList.h>
#include <aws/glue/model/WorkerType.h>
#include <aws/glue/model/NotificationProperty.h>
#include <aws/glue/model/ExecutionClass.h>
#include <aws/glue/model/SourceControlDetails.h>
#include <aws/glue/model/CodeGenConfigurationNode.h>
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
   * <p>Specifies a job definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Job">AWS API
   * Reference</a></p>
   */
  class Job
  {
  public:
    AWS_GLUE_API Job() = default;
    AWS_GLUE_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name you assign to this job definition.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Job& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mode that describes how a job was created. Valid values are:</p> <ul> <li>
     * <p> <code>SCRIPT</code> - The job was created using the Glue Studio script
     * editor.</p> </li> <li> <p> <code>VISUAL</code> - The job was created using the
     * Glue Studio visual editor.</p> </li> <li> <p> <code>NOTEBOOK</code> - The job
     * was created using an interactive sessions notebook.</p> </li> </ul> <p>When the
     * <code>JobMode</code> field is missing or null, <code>SCRIPT</code> is assigned
     * as the default value.</p>
     */
    inline JobMode GetJobMode() const { return m_jobMode; }
    inline bool JobModeHasBeenSet() const { return m_jobModeHasBeenSet; }
    inline void SetJobMode(JobMode value) { m_jobModeHasBeenSet = true; m_jobMode = value; }
    inline Job& WithJobMode(JobMode value) { SetJobMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether job run queuing is enabled for the job runs for this
     * job.</p> <p>A value of true means job run queuing is enabled for the job runs.
     * If false or not populated, the job runs will not be considered for queueing.</p>
     * <p>If this field does not match the value set in the job run, then the value
     * from the job run field will be used.</p>
     */
    inline bool GetJobRunQueuingEnabled() const { return m_jobRunQueuingEnabled; }
    inline bool JobRunQueuingEnabledHasBeenSet() const { return m_jobRunQueuingEnabledHasBeenSet; }
    inline void SetJobRunQueuingEnabled(bool value) { m_jobRunQueuingEnabledHasBeenSet = true; m_jobRunQueuingEnabled = value; }
    inline Job& WithJobRunQueuingEnabled(bool value) { SetJobRunQueuingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Job& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is reserved for future use.</p>
     */
    inline const Aws::String& GetLogUri() const { return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    template<typename LogUriT = Aws::String>
    void SetLogUri(LogUriT&& value) { m_logUriHasBeenSet = true; m_logUri = std::forward<LogUriT>(value); }
    template<typename LogUriT = Aws::String>
    Job& WithLogUri(LogUriT&& value) { SetLogUri(std::forward<LogUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with this
     * job.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    Job& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date that this job definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    void SetCreatedOn(CreatedOnT&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::forward<CreatedOnT>(value); }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    Job& WithCreatedOn(CreatedOnT&& value) { SetCreatedOn(std::forward<CreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last point in time when this job definition was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    Job& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>ExecutionProperty</code> specifying the maximum number of concurrent
     * runs allowed for this job.</p>
     */
    inline const ExecutionProperty& GetExecutionProperty() const { return m_executionProperty; }
    inline bool ExecutionPropertyHasBeenSet() const { return m_executionPropertyHasBeenSet; }
    template<typename ExecutionPropertyT = ExecutionProperty>
    void SetExecutionProperty(ExecutionPropertyT&& value) { m_executionPropertyHasBeenSet = true; m_executionProperty = std::forward<ExecutionPropertyT>(value); }
    template<typename ExecutionPropertyT = ExecutionProperty>
    Job& WithExecutionProperty(ExecutionPropertyT&& value) { SetExecutionProperty(std::forward<ExecutionPropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>JobCommand</code> that runs this job.</p>
     */
    inline const JobCommand& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = JobCommand>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = JobCommand>
    Job& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default arguments for every run of this job, specified as name-value
     * pairs.</p> <p>You can specify arguments here that your own job-execution script
     * consumes, as well as arguments that Glue itself consumes.</p> <p>Job arguments
     * may be logged. Do not pass plaintext secrets as arguments. Retrieve secrets from
     * a Glue Connection, Secrets Manager or other secret management mechanism if you
     * intend to keep them within the Job. </p> <p>For information about how to specify
     * and consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the arguments you can provide to this field when configuring Spark jobs,
     * see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p> <p>For information
     * about the arguments you can provide to this field when configuring Ray jobs, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/author-job-ray-job-parameters.html">Using
     * job parameters in Ray jobs</a> in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultArguments() const { return m_defaultArguments; }
    inline bool DefaultArgumentsHasBeenSet() const { return m_defaultArgumentsHasBeenSet; }
    template<typename DefaultArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetDefaultArguments(DefaultArgumentsT&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = std::forward<DefaultArgumentsT>(value); }
    template<typename DefaultArgumentsT = Aws::Map<Aws::String, Aws::String>>
    Job& WithDefaultArguments(DefaultArgumentsT&& value) { SetDefaultArguments(std::forward<DefaultArgumentsT>(value)); return *this;}
    template<typename DefaultArgumentsKeyT = Aws::String, typename DefaultArgumentsValueT = Aws::String>
    Job& AddDefaultArguments(DefaultArgumentsKeyT&& key, DefaultArgumentsValueT&& value) {
      m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::forward<DefaultArgumentsKeyT>(key), std::forward<DefaultArgumentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Arguments for this job that are not overridden when providing job arguments
     * in a job run, specified as name-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetNonOverridableArguments() const { return m_nonOverridableArguments; }
    inline bool NonOverridableArgumentsHasBeenSet() const { return m_nonOverridableArgumentsHasBeenSet; }
    template<typename NonOverridableArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetNonOverridableArguments(NonOverridableArgumentsT&& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments = std::forward<NonOverridableArgumentsT>(value); }
    template<typename NonOverridableArgumentsT = Aws::Map<Aws::String, Aws::String>>
    Job& WithNonOverridableArguments(NonOverridableArgumentsT&& value) { SetNonOverridableArguments(std::forward<NonOverridableArgumentsT>(value)); return *this;}
    template<typename NonOverridableArgumentsKeyT = Aws::String, typename NonOverridableArgumentsValueT = Aws::String>
    Job& AddNonOverridableArguments(NonOverridableArgumentsKeyT&& key, NonOverridableArgumentsValueT&& value) {
      m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(std::forward<NonOverridableArgumentsKeyT>(key), std::forward<NonOverridableArgumentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The connections used for this job.</p>
     */
    inline const ConnectionsList& GetConnections() const { return m_connections; }
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
    template<typename ConnectionsT = ConnectionsList>
    void SetConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections = std::forward<ConnectionsT>(value); }
    template<typename ConnectionsT = ConnectionsList>
    Job& WithConnections(ConnectionsT&& value) { SetConnections(std::forward<ConnectionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times to retry this job after a JobRun fails.</p>
     */
    inline int GetMaxRetries() const { return m_maxRetries; }
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline Job& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job timeout in minutes. This is the maximum time that a job run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status.</p> <p>Jobs must have timeout values less than 7 days or 10080 minutes.
     * Otherwise, the jobs will throw an exception.</p> <p>When the value is left
     * blank, the timeout is defaulted to 2880 minutes.</p> <p>Any existing Glue jobs
     * that had a timeout value greater than 7 days will be defaulted to 7 days. For
     * instance if you have specified a timeout of 20 days for a batch job, it will be
     * stopped on the 7th day.</p> <p>For streaming jobs, if you have set up a
     * maintenance window, it will be restarted during the maintenance window after 7
     * days.</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline Job& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Glue version 1.0 or earlier jobs, using the standard worker type, the
     * number of Glue data processing units (DPUs) that can be allocated when this job
     * runs. A DPU is a relative measure of processing power that consists of 4 vCPUs
     * of compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/"> Glue pricing page</a>.</p> <p>For
     * Glue version 2.0 or later jobs, you cannot specify a <code>Maximum
     * capacity</code>. Instead, you should specify a <code>Worker type</code> and the
     * <code>Number of workers</code>.</p> <p>Do not set <code>MaxCapacity</code> if
     * using <code>WorkerType</code> and <code>NumberOfWorkers</code>.</p> <p>The value
     * that can be allocated for <code>MaxCapacity</code> depends on whether you are
     * running a Python shell job, an Apache Spark ETL job, or an Apache Spark
     * streaming ETL job:</p> <ul> <li> <p>When you specify a Python shell job
     * (<code>JobCommand.Name</code>="pythonshell"), you can allocate either 0.0625 or
     * 1 DPU. The default is 0.0625 DPU.</p> </li> <li> <p>When you specify an Apache
     * Spark ETL job (<code>JobCommand.Name</code>="glueetl") or Apache Spark streaming
     * ETL job (<code>JobCommand.Name</code>="gluestreaming"), you can allocate from 2
     * to 100 DPUs. The default is 10 DPUs. This job type cannot have a fractional DPU
     * allocation.</p> </li> </ul>
     */
    inline double GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline Job& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of predefined worker that is allocated when a job runs.</p> <p>Glue
     * provides multiple worker types to accommodate different workload
     * requirements:</p> <p>G Worker Types (General-purpose compute workers):</p> <ul>
     * <li> <p>G.1X: 1 DPU (4 vCPUs, 16 GB memory, 94GB disk)</p> </li> <li> <p>G.2X: 2
     * DPU (8 vCPUs, 32 GB memory, 138GB disk)</p> </li> <li> <p>G.4X: 4 DPU (16 vCPUs,
     * 64 GB memory, 256GB disk)</p> </li> <li> <p>G.8X: 8 DPU (32 vCPUs, 128 GB
     * memory, 512GB disk)</p> </li> <li> <p>G.12X: 12 DPU (48 vCPUs, 192 GB memory,
     * 768GB disk)</p> </li> <li> <p>G.16X: 16 DPU (64 vCPUs, 256 GB memory, 1024GB
     * disk)</p> </li> </ul> <p>R Worker Types (Memory-optimized workers):</p> <ul>
     * <li> <p>R.1X: 1 M-DPU (4 vCPUs, 32 GB memory)</p> </li> <li> <p>R.2X: 2 M-DPU (8
     * vCPUs, 64 GB memory)</p> </li> <li> <p>R.4X: 4 M-DPU (16 vCPUs, 128 GB
     * memory)</p> </li> <li> <p>R.8X: 8 M-DPU (32 vCPUs, 256 GB memory)</p> </li>
     * </ul>
     */
    inline WorkerType GetWorkerType() const { return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    inline void SetWorkerType(WorkerType value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline Job& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline Job& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    Job& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration properties of a job notification.</p>
     */
    inline const NotificationProperty& GetNotificationProperty() const { return m_notificationProperty; }
    inline bool NotificationPropertyHasBeenSet() const { return m_notificationPropertyHasBeenSet; }
    template<typename NotificationPropertyT = NotificationProperty>
    void SetNotificationProperty(NotificationPropertyT&& value) { m_notificationPropertyHasBeenSet = true; m_notificationProperty = std::forward<NotificationPropertyT>(value); }
    template<typename NotificationPropertyT = NotificationProperty>
    Job& WithNotificationProperty(NotificationPropertyT&& value) { SetNotificationProperty(std::forward<NotificationPropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In Spark jobs, <code>GlueVersion</code> determines the versions of Apache
     * Spark and Python that Glue available in a job. The Python version indicates the
     * version supported for jobs of type Spark. </p> <p>Ray jobs should set
     * <code>GlueVersion</code> to <code>4.0</code> or greater. However, the versions
     * of Ray, Python and additional libraries available in your Ray job are determined
     * by the <code>Runtime</code> parameter of the Job command.</p> <p>For more
     * information about the available Glue versions and corresponding Spark and Python
     * versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline const Aws::String& GetGlueVersion() const { return m_glueVersion; }
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    template<typename GlueVersionT = Aws::String>
    void SetGlueVersion(GlueVersionT&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::forward<GlueVersionT>(value); }
    template<typename GlueVersionT = Aws::String>
    Job& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline const Aws::Map<Aws::String, CodeGenConfigurationNode>& GetCodeGenConfigurationNodes() const { return m_codeGenConfigurationNodes; }
    inline bool CodeGenConfigurationNodesHasBeenSet() const { return m_codeGenConfigurationNodesHasBeenSet; }
    template<typename CodeGenConfigurationNodesT = Aws::Map<Aws::String, CodeGenConfigurationNode>>
    void SetCodeGenConfigurationNodes(CodeGenConfigurationNodesT&& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes = std::forward<CodeGenConfigurationNodesT>(value); }
    template<typename CodeGenConfigurationNodesT = Aws::Map<Aws::String, CodeGenConfigurationNode>>
    Job& WithCodeGenConfigurationNodes(CodeGenConfigurationNodesT&& value) { SetCodeGenConfigurationNodes(std::forward<CodeGenConfigurationNodesT>(value)); return *this;}
    template<typename CodeGenConfigurationNodesKeyT = Aws::String, typename CodeGenConfigurationNodesValueT = CodeGenConfigurationNode>
    Job& AddCodeGenConfigurationNodes(CodeGenConfigurationNodesKeyT&& key, CodeGenConfigurationNodesValueT&& value) {
      m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(std::forward<CodeGenConfigurationNodesKeyT>(key), std::forward<CodeGenConfigurationNodesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline ExecutionClass GetExecutionClass() const { return m_executionClass; }
    inline bool ExecutionClassHasBeenSet() const { return m_executionClassHasBeenSet; }
    inline void SetExecutionClass(ExecutionClass value) { m_executionClassHasBeenSet = true; m_executionClass = value; }
    inline Job& WithExecutionClass(ExecutionClass value) { SetExecutionClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for a source control configuration for a job, allowing
     * synchronization of job artifacts to or from a remote repository.</p>
     */
    inline const SourceControlDetails& GetSourceControlDetails() const { return m_sourceControlDetails; }
    inline bool SourceControlDetailsHasBeenSet() const { return m_sourceControlDetailsHasBeenSet; }
    template<typename SourceControlDetailsT = SourceControlDetails>
    void SetSourceControlDetails(SourceControlDetailsT&& value) { m_sourceControlDetailsHasBeenSet = true; m_sourceControlDetails = std::forward<SourceControlDetailsT>(value); }
    template<typename SourceControlDetailsT = SourceControlDetails>
    Job& WithSourceControlDetails(SourceControlDetailsT&& value) { SetSourceControlDetails(std::forward<SourceControlDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field specifies a day of the week and hour for a maintenance window for
     * streaming jobs. Glue periodically performs maintenance activities. During these
     * maintenance windows, Glue will need to restart your streaming jobs.</p> <p>Glue
     * will restart the job within 3 hours of the specified maintenance window. For
     * instance, if you set up the maintenance window for Monday at 10:00AM GMT, your
     * jobs will be restarted between 10:00AM GMT to 1:00PM GMT.</p>
     */
    inline const Aws::String& GetMaintenanceWindow() const { return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    template<typename MaintenanceWindowT = Aws::String>
    void SetMaintenanceWindow(MaintenanceWindowT&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::forward<MaintenanceWindowT>(value); }
    template<typename MaintenanceWindowT = Aws::String>
    Job& WithMaintenanceWindow(MaintenanceWindowT&& value) { SetMaintenanceWindow(std::forward<MaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Glue usage profile associated with the job.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    Job& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    JobMode m_jobMode{JobMode::NOT_SET};
    bool m_jobModeHasBeenSet = false;

    bool m_jobRunQueuingEnabled{false};
    bool m_jobRunQueuingEnabledHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn{};
    bool m_createdOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;

    ExecutionProperty m_executionProperty;
    bool m_executionPropertyHasBeenSet = false;

    JobCommand m_command;
    bool m_commandHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultArguments;
    bool m_defaultArgumentsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_nonOverridableArguments;
    bool m_nonOverridableArgumentsHasBeenSet = false;

    ConnectionsList m_connections;
    bool m_connectionsHasBeenSet = false;

    int m_maxRetries{0};
    bool m_maxRetriesHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    double m_maxCapacity{0.0};
    bool m_maxCapacityHasBeenSet = false;

    WorkerType m_workerType{WorkerType::NOT_SET};
    bool m_workerTypeHasBeenSet = false;

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    NotificationProperty m_notificationProperty;
    bool m_notificationPropertyHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    Aws::Map<Aws::String, CodeGenConfigurationNode> m_codeGenConfigurationNodes;
    bool m_codeGenConfigurationNodesHasBeenSet = false;

    ExecutionClass m_executionClass{ExecutionClass::NOT_SET};
    bool m_executionClassHasBeenSet = false;

    SourceControlDetails m_sourceControlDetails;
    bool m_sourceControlDetailsHasBeenSet = false;

    Aws::String m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
