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
    AWS_GLUE_API StartJobRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJobRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the job definition to use.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job definition to use.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job definition to use.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job definition to use.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job definition to use.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job definition to use.</p>
     */
    inline StartJobRunRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job definition to use.</p>
     */
    inline StartJobRunRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition to use.</p>
     */
    inline StartJobRunRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The ID of a previous <code>JobRun</code> to retry.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The ID of a previous <code>JobRun</code> to retry.</p>
     */
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }

    /**
     * <p>The ID of a previous <code>JobRun</code> to retry.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }

    /**
     * <p>The ID of a previous <code>JobRun</code> to retry.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }

    /**
     * <p>The ID of a previous <code>JobRun</code> to retry.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }

    /**
     * <p>The ID of a previous <code>JobRun</code> to retry.</p>
     */
    inline StartJobRunRequest& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The ID of a previous <code>JobRun</code> to retry.</p>
     */
    inline StartJobRunRequest& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of a previous <code>JobRun</code> to retry.</p>
     */
    inline StartJobRunRequest& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}


    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>Job arguments may be logged. Do not pass
     * plaintext secrets as arguments. Retrieve secrets from a Glue Connection, Secrets
     * Manager or other secret management mechanism if you intend to keep them within
     * the Job. </p> <p>For information about how to specify and consume your own Job
     * arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }


    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. This value overrides the timeout value set in the
     * parent job.</p> <p>Streaming jobs do not have a timeout. The default for
     * non-streaming jobs is 2,880 minutes (48 hours).</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. This value overrides the timeout value set in the
     * parent job.</p> <p>Streaming jobs do not have a timeout. The default for
     * non-streaming jobs is 2,880 minutes (48 hours).</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. This value overrides the timeout value set in the
     * parent job.</p> <p>Streaming jobs do not have a timeout. The default for
     * non-streaming jobs is 2,880 minutes (48 hours).</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. This value overrides the timeout value set in the
     * parent job.</p> <p>Streaming jobs do not have a timeout. The default for
     * non-streaming jobs is 2,880 minutes (48 hours).</p>
     */
    inline StartJobRunRequest& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * this job runs. A DPU is a relative measure of processing power that consists of
     * 4 vCPUs of compute capacity and 16 GB of memory. For more information, see the
     * <a href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>.</p> <p>Do
     * not set <code>Max Capacity</code> if using <code>WorkerType</code> and
     * <code>NumberOfWorkers</code>.</p> <p>The value that can be allocated for
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job,
     * or an Apache Spark ETL job:</p> <ul> <li> <p>When you specify a Python shell job
     * (<code>JobCommand.Name</code>="pythonshell"), you can allocate either 0.0625 or
     * 1 DPU. The default is 0.0625 DPU.</p> </li> <li> <p>When you specify an Apache
     * Spark ETL job (<code>JobCommand.Name</code>="glueetl"), you can allocate a
     * minimum of 2 DPUs. The default is 10 DPUs. This job type cannot have a
     * fractional DPU allocation.</p> </li> </ul>
     */
    inline double GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * this job runs. A DPU is a relative measure of processing power that consists of
     * 4 vCPUs of compute capacity and 16 GB of memory. For more information, see the
     * <a href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>.</p> <p>Do
     * not set <code>Max Capacity</code> if using <code>WorkerType</code> and
     * <code>NumberOfWorkers</code>.</p> <p>The value that can be allocated for
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job,
     * or an Apache Spark ETL job:</p> <ul> <li> <p>When you specify a Python shell job
     * (<code>JobCommand.Name</code>="pythonshell"), you can allocate either 0.0625 or
     * 1 DPU. The default is 0.0625 DPU.</p> </li> <li> <p>When you specify an Apache
     * Spark ETL job (<code>JobCommand.Name</code>="glueetl"), you can allocate a
     * minimum of 2 DPUs. The default is 10 DPUs. This job type cannot have a
     * fractional DPU allocation.</p> </li> </ul>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * this job runs. A DPU is a relative measure of processing power that consists of
     * 4 vCPUs of compute capacity and 16 GB of memory. For more information, see the
     * <a href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>.</p> <p>Do
     * not set <code>Max Capacity</code> if using <code>WorkerType</code> and
     * <code>NumberOfWorkers</code>.</p> <p>The value that can be allocated for
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job,
     * or an Apache Spark ETL job:</p> <ul> <li> <p>When you specify a Python shell job
     * (<code>JobCommand.Name</code>="pythonshell"), you can allocate either 0.0625 or
     * 1 DPU. The default is 0.0625 DPU.</p> </li> <li> <p>When you specify an Apache
     * Spark ETL job (<code>JobCommand.Name</code>="glueetl"), you can allocate a
     * minimum of 2 DPUs. The default is 10 DPUs. This job type cannot have a
     * fractional DPU allocation.</p> </li> </ul>
     */
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * this job runs. A DPU is a relative measure of processing power that consists of
     * 4 vCPUs of compute capacity and 16 GB of memory. For more information, see the
     * <a href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>.</p> <p>Do
     * not set <code>Max Capacity</code> if using <code>WorkerType</code> and
     * <code>NumberOfWorkers</code>.</p> <p>The value that can be allocated for
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job,
     * or an Apache Spark ETL job:</p> <ul> <li> <p>When you specify a Python shell job
     * (<code>JobCommand.Name</code>="pythonshell"), you can allocate either 0.0625 or
     * 1 DPU. The default is 0.0625 DPU.</p> </li> <li> <p>When you specify an Apache
     * Spark ETL job (<code>JobCommand.Name</code>="glueetl"), you can allocate a
     * minimum of 2 DPUs. The default is 10 DPUs. This job type cannot have a
     * fractional DPU allocation.</p> </li> </ul>
     */
    inline StartJobRunRequest& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline StartJobRunRequest& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline StartJobRunRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline StartJobRunRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


    /**
     * <p>Specifies configuration properties of a job run notification.</p>
     */
    inline const NotificationProperty& GetNotificationProperty() const{ return m_notificationProperty; }

    /**
     * <p>Specifies configuration properties of a job run notification.</p>
     */
    inline bool NotificationPropertyHasBeenSet() const { return m_notificationPropertyHasBeenSet; }

    /**
     * <p>Specifies configuration properties of a job run notification.</p>
     */
    inline void SetNotificationProperty(const NotificationProperty& value) { m_notificationPropertyHasBeenSet = true; m_notificationProperty = value; }

    /**
     * <p>Specifies configuration properties of a job run notification.</p>
     */
    inline void SetNotificationProperty(NotificationProperty&& value) { m_notificationPropertyHasBeenSet = true; m_notificationProperty = std::move(value); }

    /**
     * <p>Specifies configuration properties of a job run notification.</p>
     */
    inline StartJobRunRequest& WithNotificationProperty(const NotificationProperty& value) { SetNotificationProperty(value); return *this;}

    /**
     * <p>Specifies configuration properties of a job run notification.</p>
     */
    inline StartJobRunRequest& WithNotificationProperty(NotificationProperty&& value) { SetNotificationProperty(std::move(value)); return *this;}


    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline const WorkerType& GetWorkerType() const{ return m_workerType; }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline void SetWorkerType(const WorkerType& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline void SetWorkerType(WorkerType&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline StartJobRunRequest& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline StartJobRunRequest& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}


    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p>
     */
    inline StartJobRunRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


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

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline bool ExecutionClassHasBeenSet() const { return m_executionClassHasBeenSet; }

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline void SetExecutionClass(const ExecutionClass& value) { m_executionClassHasBeenSet = true; m_executionClass = value; }

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline void SetExecutionClass(ExecutionClass&& value) { m_executionClassHasBeenSet = true; m_executionClass = std::move(value); }

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline StartJobRunRequest& WithExecutionClass(const ExecutionClass& value) { SetExecutionClass(value); return *this;}

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline StartJobRunRequest& WithExecutionClass(ExecutionClass&& value) { SetExecutionClass(std::move(value)); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    double m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    NotificationProperty m_notificationProperty;
    bool m_notificationPropertyHasBeenSet = false;

    WorkerType m_workerType;
    bool m_workerTypeHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    ExecutionClass m_executionClass;
    bool m_executionClassHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
