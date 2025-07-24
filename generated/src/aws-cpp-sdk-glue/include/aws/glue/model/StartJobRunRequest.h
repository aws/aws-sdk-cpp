/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/NotificationProperty.h>
#include <aws/glue/model/WorkerType.h>
#include <aws/glue/model/ExecutionClass.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class StartJobRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API StartJobRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJobRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the job definition to use.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    StartJobRunRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
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
    inline StartJobRunRequest& WithJobRunQueuingEnabled(bool value) { SetJobRunQueuingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a previous <code>JobRun</code> to retry.</p>
     */
    inline const Aws::String& GetJobRunId() const { return m_jobRunId; }
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
    template<typename JobRunIdT = Aws::String>
    void SetJobRunId(JobRunIdT&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::forward<JobRunIdT>(value); }
    template<typename JobRunIdT = Aws::String>
    StartJobRunRequest& WithJobRunId(JobRunIdT&& value) { SetJobRunId(std::forward<JobRunIdT>(value)); return *this;}
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
    StartJobRunRequest& WithArguments(ArgumentsT&& value) { SetArguments(std::forward<ArgumentsT>(value)); return *this;}
    template<typename ArgumentsKeyT = Aws::String, typename ArgumentsValueT = Aws::String>
    StartJobRunRequest& AddArguments(ArgumentsKeyT&& key, ArgumentsValueT&& value) {
      m_argumentsHasBeenSet = true; m_arguments.emplace(std::forward<ArgumentsKeyT>(key), std::forward<ArgumentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. This value overrides the timeout value set in the
     * parent job. </p> <p>Jobs must have timeout values less than 7 days or 10080
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
    inline StartJobRunRequest& WithTimeout(int value) { SetTimeout(value); return *this;}
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
    inline StartJobRunRequest& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
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
    StartJobRunRequest& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
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
    StartJobRunRequest& WithNotificationProperty(NotificationPropertyT&& value) { SetNotificationProperty(std::forward<NotificationPropertyT>(value)); return *this;}
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
    inline StartJobRunRequest& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline StartJobRunRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
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
    inline StartJobRunRequest& WithExecutionClass(ExecutionClass value) { SetExecutionClass(value); return *this;}
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
    StartJobRunRequest& WithExecutionRoleSessionPolicy(ExecutionRoleSessionPolicyT&& value) { SetExecutionRoleSessionPolicy(std::forward<ExecutionRoleSessionPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    bool m_jobRunQueuingEnabled{false};
    bool m_jobRunQueuingEnabledHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    double m_maxCapacity{0.0};
    bool m_maxCapacityHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    NotificationProperty m_notificationProperty;
    bool m_notificationPropertyHasBeenSet = false;

    WorkerType m_workerType{WorkerType::NOT_SET};
    bool m_workerTypeHasBeenSet = false;

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

    ExecutionClass m_executionClass{ExecutionClass::NOT_SET};
    bool m_executionClassHasBeenSet = false;

    Aws::String m_executionRoleSessionPolicy;
    bool m_executionRoleSessionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
