/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/JobMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies information used to update an existing job definition. The previous
   * job definition is completely overwritten by this information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JobUpdate">AWS API
   * Reference</a></p>
   */
  class JobUpdate
  {
  public:
    AWS_GLUE_API JobUpdate();
    AWS_GLUE_API JobUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JobUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const JobMode& GetJobMode() const{ return m_jobMode; }
    inline bool JobModeHasBeenSet() const { return m_jobModeHasBeenSet; }
    inline void SetJobMode(const JobMode& value) { m_jobModeHasBeenSet = true; m_jobMode = value; }
    inline void SetJobMode(JobMode&& value) { m_jobModeHasBeenSet = true; m_jobMode = std::move(value); }
    inline JobUpdate& WithJobMode(const JobMode& value) { SetJobMode(value); return *this;}
    inline JobUpdate& WithJobMode(JobMode&& value) { SetJobMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether job run queuing is enabled for the job runs for this
     * job.</p> <p>A value of true means job run queuing is enabled for the job runs.
     * If false or not populated, the job runs will not be considered for queueing.</p>
     * <p>If this field does not match the value set in the job run, then the value
     * from the job run field will be used.</p>
     */
    inline bool GetJobRunQueuingEnabled() const{ return m_jobRunQueuingEnabled; }
    inline bool JobRunQueuingEnabledHasBeenSet() const { return m_jobRunQueuingEnabledHasBeenSet; }
    inline void SetJobRunQueuingEnabled(bool value) { m_jobRunQueuingEnabledHasBeenSet = true; m_jobRunQueuingEnabled = value; }
    inline JobUpdate& WithJobRunQueuingEnabled(bool value) { SetJobRunQueuingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the job being defined.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline JobUpdate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline JobUpdate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline JobUpdate& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is reserved for future use.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }
    inline JobUpdate& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}
    inline JobUpdate& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}
    inline JobUpdate& WithLogUri(const char* value) { SetLogUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role associated with this
     * job (required).</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline JobUpdate& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline JobUpdate& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline JobUpdate& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>ExecutionProperty</code> specifying the maximum number of concurrent
     * runs allowed for this job.</p>
     */
    inline const ExecutionProperty& GetExecutionProperty() const{ return m_executionProperty; }
    inline bool ExecutionPropertyHasBeenSet() const { return m_executionPropertyHasBeenSet; }
    inline void SetExecutionProperty(const ExecutionProperty& value) { m_executionPropertyHasBeenSet = true; m_executionProperty = value; }
    inline void SetExecutionProperty(ExecutionProperty&& value) { m_executionPropertyHasBeenSet = true; m_executionProperty = std::move(value); }
    inline JobUpdate& WithExecutionProperty(const ExecutionProperty& value) { SetExecutionProperty(value); return *this;}
    inline JobUpdate& WithExecutionProperty(ExecutionProperty&& value) { SetExecutionProperty(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>JobCommand</code> that runs this job (required).</p>
     */
    inline const JobCommand& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const JobCommand& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(JobCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline JobUpdate& WithCommand(const JobCommand& value) { SetCommand(value); return *this;}
    inline JobUpdate& WithCommand(JobCommand&& value) { SetCommand(std::move(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultArguments() const{ return m_defaultArguments; }
    inline bool DefaultArgumentsHasBeenSet() const { return m_defaultArgumentsHasBeenSet; }
    inline void SetDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = value; }
    inline void SetDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = std::move(value); }
    inline JobUpdate& WithDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultArguments(value); return *this;}
    inline JobUpdate& WithDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultArguments(std::move(value)); return *this;}
    inline JobUpdate& AddDefaultArguments(const Aws::String& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }
    inline JobUpdate& AddDefaultArguments(Aws::String&& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }
    inline JobUpdate& AddDefaultArguments(const Aws::String& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }
    inline JobUpdate& AddDefaultArguments(Aws::String&& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), std::move(value)); return *this; }
    inline JobUpdate& AddDefaultArguments(const char* key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }
    inline JobUpdate& AddDefaultArguments(Aws::String&& key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }
    inline JobUpdate& AddDefaultArguments(const char* key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Arguments for this job that are not overridden when providing job arguments
     * in a job run, specified as name-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetNonOverridableArguments() const{ return m_nonOverridableArguments; }
    inline bool NonOverridableArgumentsHasBeenSet() const { return m_nonOverridableArgumentsHasBeenSet; }
    inline void SetNonOverridableArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments = value; }
    inline void SetNonOverridableArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments = std::move(value); }
    inline JobUpdate& WithNonOverridableArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetNonOverridableArguments(value); return *this;}
    inline JobUpdate& WithNonOverridableArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetNonOverridableArguments(std::move(value)); return *this;}
    inline JobUpdate& AddNonOverridableArguments(const Aws::String& key, const Aws::String& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(key, value); return *this; }
    inline JobUpdate& AddNonOverridableArguments(Aws::String&& key, const Aws::String& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(std::move(key), value); return *this; }
    inline JobUpdate& AddNonOverridableArguments(const Aws::String& key, Aws::String&& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(key, std::move(value)); return *this; }
    inline JobUpdate& AddNonOverridableArguments(Aws::String&& key, Aws::String&& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(std::move(key), std::move(value)); return *this; }
    inline JobUpdate& AddNonOverridableArguments(const char* key, Aws::String&& value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(key, std::move(value)); return *this; }
    inline JobUpdate& AddNonOverridableArguments(Aws::String&& key, const char* value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(std::move(key), value); return *this; }
    inline JobUpdate& AddNonOverridableArguments(const char* key, const char* value) { m_nonOverridableArgumentsHasBeenSet = true; m_nonOverridableArguments.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connections used for this job.</p>
     */
    inline const ConnectionsList& GetConnections() const{ return m_connections; }
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
    inline void SetConnections(const ConnectionsList& value) { m_connectionsHasBeenSet = true; m_connections = value; }
    inline void SetConnections(ConnectionsList&& value) { m_connectionsHasBeenSet = true; m_connections = std::move(value); }
    inline JobUpdate& WithConnections(const ConnectionsList& value) { SetConnections(value); return *this;}
    inline JobUpdate& WithConnections(ConnectionsList&& value) { SetConnections(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times to retry this job if it fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline JobUpdate& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job timeout in minutes. This is the maximum time that a job run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours) for batch jobs.</p> <p>Streaming
     * jobs must have timeout values less than 7 days or 10080 minutes. When the value
     * is left blank, the job will be restarted after 7 days based if you have not
     * setup a maintenance window. If you have setup maintenance window, it will be
     * restarted during the maintenance window after 7 days.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline JobUpdate& WithTimeout(int value) { SetTimeout(value); return *this;}
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
    inline double GetMaxCapacity() const{ return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline JobUpdate& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
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
    inline const WorkerType& GetWorkerType() const{ return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    inline void SetWorkerType(const WorkerType& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline void SetWorkerType(WorkerType&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }
    inline JobUpdate& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}
    inline JobUpdate& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline JobUpdate& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }
    inline JobUpdate& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}
    inline JobUpdate& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}
    inline JobUpdate& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration properties of a job notification.</p>
     */
    inline const NotificationProperty& GetNotificationProperty() const{ return m_notificationProperty; }
    inline bool NotificationPropertyHasBeenSet() const { return m_notificationPropertyHasBeenSet; }
    inline void SetNotificationProperty(const NotificationProperty& value) { m_notificationPropertyHasBeenSet = true; m_notificationProperty = value; }
    inline void SetNotificationProperty(NotificationProperty&& value) { m_notificationPropertyHasBeenSet = true; m_notificationProperty = std::move(value); }
    inline JobUpdate& WithNotificationProperty(const NotificationProperty& value) { SetNotificationProperty(value); return *this;}
    inline JobUpdate& WithNotificationProperty(NotificationProperty&& value) { SetNotificationProperty(std::move(value)); return *this;}
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
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }
    inline JobUpdate& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}
    inline JobUpdate& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}
    inline JobUpdate& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The representation of a directed acyclic graph on which both the Glue Studio
     * visual component and Glue Studio code generation is based.</p>
     */
    inline const Aws::Map<Aws::String, CodeGenConfigurationNode>& GetCodeGenConfigurationNodes() const{ return m_codeGenConfigurationNodes; }
    inline bool CodeGenConfigurationNodesHasBeenSet() const { return m_codeGenConfigurationNodesHasBeenSet; }
    inline void SetCodeGenConfigurationNodes(const Aws::Map<Aws::String, CodeGenConfigurationNode>& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes = value; }
    inline void SetCodeGenConfigurationNodes(Aws::Map<Aws::String, CodeGenConfigurationNode>&& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes = std::move(value); }
    inline JobUpdate& WithCodeGenConfigurationNodes(const Aws::Map<Aws::String, CodeGenConfigurationNode>& value) { SetCodeGenConfigurationNodes(value); return *this;}
    inline JobUpdate& WithCodeGenConfigurationNodes(Aws::Map<Aws::String, CodeGenConfigurationNode>&& value) { SetCodeGenConfigurationNodes(std::move(value)); return *this;}
    inline JobUpdate& AddCodeGenConfigurationNodes(const Aws::String& key, const CodeGenConfigurationNode& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(key, value); return *this; }
    inline JobUpdate& AddCodeGenConfigurationNodes(Aws::String&& key, const CodeGenConfigurationNode& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(std::move(key), value); return *this; }
    inline JobUpdate& AddCodeGenConfigurationNodes(const Aws::String& key, CodeGenConfigurationNode&& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(key, std::move(value)); return *this; }
    inline JobUpdate& AddCodeGenConfigurationNodes(Aws::String&& key, CodeGenConfigurationNode&& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(std::move(key), std::move(value)); return *this; }
    inline JobUpdate& AddCodeGenConfigurationNodes(const char* key, CodeGenConfigurationNode&& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(key, std::move(value)); return *this; }
    inline JobUpdate& AddCodeGenConfigurationNodes(const char* key, const CodeGenConfigurationNode& value) { m_codeGenConfigurationNodesHasBeenSet = true; m_codeGenConfigurationNodes.emplace(key, value); return *this; }
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
    inline const ExecutionClass& GetExecutionClass() const{ return m_executionClass; }
    inline bool ExecutionClassHasBeenSet() const { return m_executionClassHasBeenSet; }
    inline void SetExecutionClass(const ExecutionClass& value) { m_executionClassHasBeenSet = true; m_executionClass = value; }
    inline void SetExecutionClass(ExecutionClass&& value) { m_executionClassHasBeenSet = true; m_executionClass = std::move(value); }
    inline JobUpdate& WithExecutionClass(const ExecutionClass& value) { SetExecutionClass(value); return *this;}
    inline JobUpdate& WithExecutionClass(ExecutionClass&& value) { SetExecutionClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for a source control configuration for a job, allowing
     * synchronization of job artifacts to or from a remote repository.</p>
     */
    inline const SourceControlDetails& GetSourceControlDetails() const{ return m_sourceControlDetails; }
    inline bool SourceControlDetailsHasBeenSet() const { return m_sourceControlDetailsHasBeenSet; }
    inline void SetSourceControlDetails(const SourceControlDetails& value) { m_sourceControlDetailsHasBeenSet = true; m_sourceControlDetails = value; }
    inline void SetSourceControlDetails(SourceControlDetails&& value) { m_sourceControlDetailsHasBeenSet = true; m_sourceControlDetails = std::move(value); }
    inline JobUpdate& WithSourceControlDetails(const SourceControlDetails& value) { SetSourceControlDetails(value); return *this;}
    inline JobUpdate& WithSourceControlDetails(SourceControlDetails&& value) { SetSourceControlDetails(std::move(value)); return *this;}
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
    inline const Aws::String& GetMaintenanceWindow() const{ return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    inline void SetMaintenanceWindow(const Aws::String& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = value; }
    inline void SetMaintenanceWindow(Aws::String&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::move(value); }
    inline void SetMaintenanceWindow(const char* value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow.assign(value); }
    inline JobUpdate& WithMaintenanceWindow(const Aws::String& value) { SetMaintenanceWindow(value); return *this;}
    inline JobUpdate& WithMaintenanceWindow(Aws::String&& value) { SetMaintenanceWindow(std::move(value)); return *this;}
    inline JobUpdate& WithMaintenanceWindow(const char* value) { SetMaintenanceWindow(value); return *this;}
    ///@}
  private:

    JobMode m_jobMode;
    bool m_jobModeHasBeenSet = false;

    bool m_jobRunQueuingEnabled;
    bool m_jobRunQueuingEnabledHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

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

    int m_maxRetries;
    bool m_maxRetriesHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    double m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    WorkerType m_workerType;
    bool m_workerTypeHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    NotificationProperty m_notificationProperty;
    bool m_notificationPropertyHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    Aws::Map<Aws::String, CodeGenConfigurationNode> m_codeGenConfigurationNodes;
    bool m_codeGenConfigurationNodesHasBeenSet = false;

    ExecutionClass m_executionClass;
    bool m_executionClassHasBeenSet = false;

    SourceControlDetails m_sourceControlDetails;
    bool m_sourceControlDetailsHasBeenSet = false;

    Aws::String m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
