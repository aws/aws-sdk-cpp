/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/JobMode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/JobRunState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/WorkerType.h>
#include <aws/glue/model/NotificationProperty.h>
#include <aws/glue/model/ExecutionClass.h>
#include <aws/glue/model/Predecessor.h>
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
   * <p>Contains information about a job run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JobRun">AWS API
   * Reference</a></p>
   */
  class JobRun
  {
  public:
    AWS_GLUE_API JobRun() = default;
    AWS_GLUE_API JobRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JobRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of this job run.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    JobRun& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the attempt to run this job.</p>
     */
    inline int GetAttempt() const { return m_attempt; }
    inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }
    inline JobRun& WithAttempt(int value) { SetAttempt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the previous run of this job. For example, the
     * <code>JobRunId</code> specified in the <code>StartJobRun</code> action.</p>
     */
    inline const Aws::String& GetPreviousRunId() const { return m_previousRunId; }
    inline bool PreviousRunIdHasBeenSet() const { return m_previousRunIdHasBeenSet; }
    template<typename PreviousRunIdT = Aws::String>
    void SetPreviousRunId(PreviousRunIdT&& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = std::forward<PreviousRunIdT>(value); }
    template<typename PreviousRunIdT = Aws::String>
    JobRun& WithPreviousRunId(PreviousRunIdT&& value) { SetPreviousRunId(std::forward<PreviousRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trigger that started this job run.</p>
     */
    inline const Aws::String& GetTriggerName() const { return m_triggerName; }
    inline bool TriggerNameHasBeenSet() const { return m_triggerNameHasBeenSet; }
    template<typename TriggerNameT = Aws::String>
    void SetTriggerName(TriggerNameT&& value) { m_triggerNameHasBeenSet = true; m_triggerName = std::forward<TriggerNameT>(value); }
    template<typename TriggerNameT = Aws::String>
    JobRun& WithTriggerName(TriggerNameT&& value) { SetTriggerName(std::forward<TriggerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job definition being used in this run.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    JobRun& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
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
    inline JobRun& WithJobMode(JobMode value) { SetJobMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether job run queuing is enabled for the job run.</p> <p>A value
     * of true means job run queuing is enabled for the job run. If false or not
     * populated, the job run will not be considered for queueing.</p>
     */
    inline bool GetJobRunQueuingEnabled() const { return m_jobRunQueuingEnabled; }
    inline bool JobRunQueuingEnabledHasBeenSet() const { return m_jobRunQueuingEnabledHasBeenSet; }
    inline void SetJobRunQueuingEnabled(bool value) { m_jobRunQueuingEnabledHasBeenSet = true; m_jobRunQueuingEnabled = value; }
    inline JobRun& WithJobRunQueuingEnabled(bool value) { SetJobRunQueuingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which this job run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    template<typename StartedOnT = Aws::Utils::DateTime>
    void SetStartedOn(StartedOnT&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::forward<StartedOnT>(value); }
    template<typename StartedOnT = Aws::Utils::DateTime>
    JobRun& WithStartedOn(StartedOnT&& value) { SetStartedOn(std::forward<StartedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that this job run was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    JobRun& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this job run completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    void SetCompletedOn(CompletedOnT&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::forward<CompletedOnT>(value); }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    JobRun& WithCompletedOn(CompletedOnT&& value) { SetCompletedOn(std::forward<CompletedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the job run. For more information about the statuses of
     * jobs that have terminated abnormally, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/job-run-statuses.html">Glue Job
     * Run Statuses</a>.</p>
     */
    inline JobRunState GetJobRunState() const { return m_jobRunState; }
    inline bool JobRunStateHasBeenSet() const { return m_jobRunStateHasBeenSet; }
    inline void SetJobRunState(JobRunState value) { m_jobRunStateHasBeenSet = true; m_jobRunState = value; }
    inline JobRun& WithJobRunState(JobRunState value) { SetJobRunState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
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
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const { return m_arguments; }
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
    template<typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetArguments(ArgumentsT&& value) { m_argumentsHasBeenSet = true; m_arguments = std::forward<ArgumentsT>(value); }
    template<typename ArgumentsT = Aws::Map<Aws::String, Aws::String>>
    JobRun& WithArguments(ArgumentsT&& value) { SetArguments(std::forward<ArgumentsT>(value)); return *this;}
    template<typename ArgumentsKeyT = Aws::String, typename ArgumentsValueT = Aws::String>
    JobRun& AddArguments(ArgumentsKeyT&& key, ArgumentsValueT&& value) {
      m_argumentsHasBeenSet = true; m_arguments.emplace(std::forward<ArgumentsKeyT>(key), std::forward<ArgumentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An error message associated with this job run.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    JobRun& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of predecessors to this job run.</p>
     */
    inline const Aws::Vector<Predecessor>& GetPredecessorRuns() const { return m_predecessorRuns; }
    inline bool PredecessorRunsHasBeenSet() const { return m_predecessorRunsHasBeenSet; }
    template<typename PredecessorRunsT = Aws::Vector<Predecessor>>
    void SetPredecessorRuns(PredecessorRunsT&& value) { m_predecessorRunsHasBeenSet = true; m_predecessorRuns = std::forward<PredecessorRunsT>(value); }
    template<typename PredecessorRunsT = Aws::Vector<Predecessor>>
    JobRun& WithPredecessorRuns(PredecessorRunsT&& value) { SetPredecessorRuns(std::forward<PredecessorRunsT>(value)); return *this;}
    template<typename PredecessorRunsT = Predecessor>
    JobRun& AddPredecessorRuns(PredecessorRunsT&& value) { m_predecessorRunsHasBeenSet = true; m_predecessorRuns.emplace_back(std::forward<PredecessorRunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The amount of time (in seconds) that the job run consumed resources.</p>
     */
    inline int GetExecutionTime() const { return m_executionTime; }
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }
    inline void SetExecutionTime(int value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }
    inline JobRun& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. This value overrides the timeout value set in the
     * parent job.</p> <p>Jobs must have timeout values less than 7 days or 10080
     * minutes. Otherwise, the jobs will throw an exception.</p> <p>When the value is
     * left blank, the timeout is defaulted to 2880 minutes.</p> <p>Any existing Glue
     * jobs that had a timeout value greater than 7 days will be defaulted to 7 days.
     * For instance if you have specified a timeout of 20 days for a batch job, it will
     * be stopped on the 7th day.</p> <p>For streaming jobs, if you have set up a
     * maintenance window, it will be restarted during the maintenance window after 7
     * days.</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline JobRun& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Glue version 1.0 or earlier jobs, using the standard worker type, the
     * number of Glue data processing units (DPUs) that can be allocated when this job
     * runs. A DPU is a relative measure of processing power that consists of 4 vCPUs
     * of compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/"> Glue pricing page</a>.</p> <p>For
     * Glue version 2.0+ jobs, you cannot specify a <code>Maximum capacity</code>.
     * Instead, you should specify a <code>Worker type</code> and the <code>Number of
     * workers</code>.</p> <p>Do not set <code>MaxCapacity</code> if using
     * <code>WorkerType</code> and <code>NumberOfWorkers</code>.</p> <p>The value that
     * can be allocated for <code>MaxCapacity</code> depends on whether you are running
     * a Python shell job, an Apache Spark ETL job, or an Apache Spark streaming ETL
     * job:</p> <ul> <li> <p>When you specify a Python shell job
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
    inline JobRun& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of G.1X, G.2X, G.4X, G.8X or G.025X for Spark jobs. Accepts the value Z.2X
     * for Ray jobs.</p> <ul> <li> <p>For the <code>G.1X</code> worker type, each
     * worker maps to 1 DPU (4 vCPUs, 16 GB of memory) with 94GB disk, and provides 1
     * executor per worker. We recommend this worker type for workloads such as data
     * transforms, joins, and queries, to offers a scalable and cost effective way to
     * run most jobs.</p> </li> <li> <p>For the <code>G.2X</code> worker type, each
     * worker maps to 2 DPU (8 vCPUs, 32 GB of memory) with 138GB disk, and provides 1
     * executor per worker. We recommend this worker type for workloads such as data
     * transforms, joins, and queries, to offers a scalable and cost effective way to
     * run most jobs.</p> </li> <li> <p>For the <code>G.4X</code> worker type, each
     * worker maps to 4 DPU (16 vCPUs, 64 GB of memory) with 256GB disk, and provides 1
     * executor per worker. We recommend this worker type for jobs whose workloads
     * contain your most demanding transforms, aggregations, joins, and queries. This
     * worker type is available only for Glue version 3.0 or later Spark ETL jobs in
     * the following Amazon Web Services Regions: US East (Ohio), US East (N.
     * Virginia), US West (Oregon), Asia Pacific (Singapore), Asia Pacific (Sydney),
     * Asia Pacific (Tokyo), Canada (Central), Europe (Frankfurt), Europe (Ireland),
     * and Europe (Stockholm).</p> </li> <li> <p>For the <code>G.8X</code> worker type,
     * each worker maps to 8 DPU (32 vCPUs, 128 GB of memory) with 512GB disk, and
     * provides 1 executor per worker. We recommend this worker type for jobs whose
     * workloads contain your most demanding transforms, aggregations, joins, and
     * queries. This worker type is available only for Glue version 3.0 or later Spark
     * ETL jobs, in the same Amazon Web Services Regions as supported for the
     * <code>G.4X</code> worker type.</p> </li> <li> <p>For the <code>G.025X</code>
     * worker type, each worker maps to 0.25 DPU (2 vCPUs, 4 GB of memory) with 84GB
     * disk, and provides 1 executor per worker. We recommend this worker type for low
     * volume streaming jobs. This worker type is only available for Glue version 3.0
     * or later streaming jobs.</p> </li> <li> <p>For the <code>Z.2X</code> worker
     * type, each worker maps to 2 M-DPU (8vCPUs, 64 GB of memory) with 128 GB disk,
     * and provides up to 8 Ray workers based on the autoscaler.</p> </li> </ul>
     */
    inline WorkerType GetWorkerType() const { return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    inline void SetWorkerType(WorkerType value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline JobRun& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline JobRun& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    JobRun& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group for secure logging that can be server-side
     * encrypted in Amazon CloudWatch using KMS. This name can be
     * <code>/aws-glue/jobs/</code>, in which case the default encryption is
     * <code>NONE</code>. If you add a role name and <code>SecurityConfiguration</code>
     * name (in other words,
     * <code>/aws-glue/jobs-yourRoleName-yourSecurityConfigurationName/</code>), then
     * that security configuration is used to encrypt the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    JobRun& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration properties of a job run notification.</p>
     */
    inline const NotificationProperty& GetNotificationProperty() const { return m_notificationProperty; }
    inline bool NotificationPropertyHasBeenSet() const { return m_notificationPropertyHasBeenSet; }
    template<typename NotificationPropertyT = NotificationProperty>
    void SetNotificationProperty(NotificationPropertyT&& value) { m_notificationPropertyHasBeenSet = true; m_notificationProperty = std::forward<NotificationPropertyT>(value); }
    template<typename NotificationPropertyT = NotificationProperty>
    JobRun& WithNotificationProperty(NotificationPropertyT&& value) { SetNotificationProperty(std::forward<NotificationPropertyT>(value)); return *this;}
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
    JobRun& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field can be set for either job runs with execution class
     * <code>FLEX</code> or when Auto Scaling is enabled, and represents the total time
     * each executor ran during the lifecycle of a job run in seconds, multiplied by a
     * DPU factor (1 for <code>G.1X</code>, 2 for <code>G.2X</code>, or 0.25 for
     * <code>G.025X</code> workers). This value may be different than the
     * <code>executionEngineRuntime</code> * <code>MaxCapacity</code> as in the case of
     * Auto Scaling jobs, as the number of executors running at a given time may be
     * less than the <code>MaxCapacity</code>. Therefore, it is possible that the value
     * of <code>DPUSeconds</code> is less than <code>executionEngineRuntime</code> *
     * <code>MaxCapacity</code>.</p>
     */
    inline double GetDPUSeconds() const { return m_dPUSeconds; }
    inline bool DPUSecondsHasBeenSet() const { return m_dPUSecondsHasBeenSet; }
    inline void SetDPUSeconds(double value) { m_dPUSecondsHasBeenSet = true; m_dPUSeconds = value; }
    inline JobRun& WithDPUSeconds(double value) { SetDPUSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline ExecutionClass GetExecutionClass() const { return m_executionClass; }
    inline bool ExecutionClassHasBeenSet() const { return m_executionClassHasBeenSet; }
    inline void SetExecutionClass(ExecutionClass value) { m_executionClassHasBeenSet = true; m_executionClass = value; }
    inline JobRun& WithExecutionClass(ExecutionClass value) { SetExecutionClass(value); return *this;}
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
    JobRun& WithMaintenanceWindow(MaintenanceWindowT&& value) { SetMaintenanceWindow(std::forward<MaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Glue usage profile associated with the job run.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    JobRun& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field holds details that pertain to the state of a job run. The field is
     * nullable.</p> <p>For example, when a job run is in a WAITING state as a result
     * of job run queuing, the field has the reason why the job run is in that
     * state.</p>
     */
    inline const Aws::String& GetStateDetail() const { return m_stateDetail; }
    inline bool StateDetailHasBeenSet() const { return m_stateDetailHasBeenSet; }
    template<typename StateDetailT = Aws::String>
    void SetStateDetail(StateDetailT&& value) { m_stateDetailHasBeenSet = true; m_stateDetail = std::forward<StateDetailT>(value); }
    template<typename StateDetailT = Aws::String>
    JobRun& WithStateDetail(StateDetailT&& value) { SetStateDetail(std::forward<StateDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This inline session policy to the StartJobRun API allows you to dynamically
     * restrict the permissions of the specified execution role for the scope of the
     * job, without requiring the creation of additional IAM roles.</p>
     */
    inline const Aws::String& GetExecutionRoleSessionPolicy() const { return m_executionRoleSessionPolicy; }
    inline bool ExecutionRoleSessionPolicyHasBeenSet() const { return m_executionRoleSessionPolicyHasBeenSet; }
    template<typename ExecutionRoleSessionPolicyT = Aws::String>
    void SetExecutionRoleSessionPolicy(ExecutionRoleSessionPolicyT&& value) { m_executionRoleSessionPolicyHasBeenSet = true; m_executionRoleSessionPolicy = std::forward<ExecutionRoleSessionPolicyT>(value); }
    template<typename ExecutionRoleSessionPolicyT = Aws::String>
    JobRun& WithExecutionRoleSessionPolicy(ExecutionRoleSessionPolicyT&& value) { SetExecutionRoleSessionPolicy(std::forward<ExecutionRoleSessionPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_attempt{0};
    bool m_attemptHasBeenSet = false;

    Aws::String m_previousRunId;
    bool m_previousRunIdHasBeenSet = false;

    Aws::String m_triggerName;
    bool m_triggerNameHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobMode m_jobMode{JobMode::NOT_SET};
    bool m_jobModeHasBeenSet = false;

    bool m_jobRunQueuingEnabled{false};
    bool m_jobRunQueuingEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn{};
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn{};
    bool m_completedOnHasBeenSet = false;

    JobRunState m_jobRunState{JobRunState::NOT_SET};
    bool m_jobRunStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Vector<Predecessor> m_predecessorRuns;
    bool m_predecessorRunsHasBeenSet = false;

    int m_executionTime{0};
    bool m_executionTimeHasBeenSet = false;

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

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    NotificationProperty m_notificationProperty;
    bool m_notificationPropertyHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    double m_dPUSeconds{0.0};
    bool m_dPUSecondsHasBeenSet = false;

    ExecutionClass m_executionClass{ExecutionClass::NOT_SET};
    bool m_executionClassHasBeenSet = false;

    Aws::String m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_stateDetail;
    bool m_stateDetailHasBeenSet = false;

    Aws::String m_executionRoleSessionPolicy;
    bool m_executionRoleSessionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
