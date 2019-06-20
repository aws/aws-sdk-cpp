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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/NotificationProperty.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API StartJobRunRequest : public GlueRequest
  {
  public:
    StartJobRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJobRun"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job arguments specifically for this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }


    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. The default is 2,880 minutes (48 hours). This
     * overrides the timeout value set in the parent job.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. The default is 2,880 minutes (48 hours). This
     * overrides the timeout value set in the parent job.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. The default is 2,880 minutes (48 hours). This
     * overrides the timeout value set in the parent job.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The <code>JobRun</code> timeout in minutes. This is the maximum time that a
     * job run can consume resources before it is terminated and enters
     * <code>TIMEOUT</code> status. The default is 2,880 minutes (48 hours). This
     * overrides the timeout value set in the parent job.</p>
     */
    inline StartJobRunRequest& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The number of AWS Glue data processing units (DPUs) that can be allocated
     * when this job runs. A DPU is a relative measure of processing power that
     * consists of 4 vCPUs of compute capacity and 16 GB of memory. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/https:/aws.amazon.com/glue/pricing/">AWS Glue
     * pricing page</a>.</p> <p>Do not set <code>Max Capacity</code> if using
     * <code>WorkerType</code> and <code>NumberOfWorkers</code>.</p> <p>The value that
     * can be allocated for <code>MaxCapacity</code> depends on whether you are running
     * a Python shell job, or an Apache Spark ETL job:</p> <ul> <li> <p>When you
     * specify a Python shell job (<code>JobCommand.Name</code>="pythonshell"), you can
     * allocate either 0.0625 or 1 DPU. The default is 0.0625 DPU.</p> </li> <li>
     * <p>When you specify an Apache Spark ETL job
     * (<code>JobCommand.Name</code>="glueetl"), you can allocate from 2 to 100 DPUs.
     * The default is 10 DPUs. This job type cannot have a fractional DPU
     * allocation.</p> </li> </ul>
     */
    inline double GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) that can be allocated
     * when this job runs. A DPU is a relative measure of processing power that
     * consists of 4 vCPUs of compute capacity and 16 GB of memory. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/https:/aws.amazon.com/glue/pricing/">AWS Glue
     * pricing page</a>.</p> <p>Do not set <code>Max Capacity</code> if using
     * <code>WorkerType</code> and <code>NumberOfWorkers</code>.</p> <p>The value that
     * can be allocated for <code>MaxCapacity</code> depends on whether you are running
     * a Python shell job, or an Apache Spark ETL job:</p> <ul> <li> <p>When you
     * specify a Python shell job (<code>JobCommand.Name</code>="pythonshell"), you can
     * allocate either 0.0625 or 1 DPU. The default is 0.0625 DPU.</p> </li> <li>
     * <p>When you specify an Apache Spark ETL job
     * (<code>JobCommand.Name</code>="glueetl"), you can allocate from 2 to 100 DPUs.
     * The default is 10 DPUs. This job type cannot have a fractional DPU
     * allocation.</p> </li> </ul>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) that can be allocated
     * when this job runs. A DPU is a relative measure of processing power that
     * consists of 4 vCPUs of compute capacity and 16 GB of memory. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/https:/aws.amazon.com/glue/pricing/">AWS Glue
     * pricing page</a>.</p> <p>Do not set <code>Max Capacity</code> if using
     * <code>WorkerType</code> and <code>NumberOfWorkers</code>.</p> <p>The value that
     * can be allocated for <code>MaxCapacity</code> depends on whether you are running
     * a Python shell job, or an Apache Spark ETL job:</p> <ul> <li> <p>When you
     * specify a Python shell job (<code>JobCommand.Name</code>="pythonshell"), you can
     * allocate either 0.0625 or 1 DPU. The default is 0.0625 DPU.</p> </li> <li>
     * <p>When you specify an Apache Spark ETL job
     * (<code>JobCommand.Name</code>="glueetl"), you can allocate from 2 to 100 DPUs.
     * The default is 10 DPUs. This job type cannot have a fractional DPU
     * allocation.</p> </li> </ul>
     */
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) that can be allocated
     * when this job runs. A DPU is a relative measure of processing power that
     * consists of 4 vCPUs of compute capacity and 16 GB of memory. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/https:/aws.amazon.com/glue/pricing/">AWS Glue
     * pricing page</a>.</p> <p>Do not set <code>Max Capacity</code> if using
     * <code>WorkerType</code> and <code>NumberOfWorkers</code>.</p> <p>The value that
     * can be allocated for <code>MaxCapacity</code> depends on whether you are running
     * a Python shell job, or an Apache Spark ETL job:</p> <ul> <li> <p>When you
     * specify a Python shell job (<code>JobCommand.Name</code>="pythonshell"), you can
     * allocate either 0.0625 or 1 DPU. The default is 0.0625 DPU.</p> </li> <li>
     * <p>When you specify an Apache Spark ETL job
     * (<code>JobCommand.Name</code>="glueetl"), you can allocate from 2 to 100 DPUs.
     * The default is 10 DPUs. This job type cannot have a fractional DPU
     * allocation.</p> </li> </ul>
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
     * value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the <code>Standard</code>
     * worker type, each worker provides 4 vCPU, 16 GB of memory and a 50GB disk, and 2
     * executors per worker.</p> </li> <li> <p>For the <code>G.1X</code> worker type,
     * each worker provides 4 vCPU, 16 GB of memory and a 64GB disk, and 1 executor per
     * worker.</p> </li> <li> <p>For the <code>G.2X</code> worker type, each worker
     * provides 8 vCPU, 32 GB of memory and a 128GB disk, and 1 executor per
     * worker.</p> </li> </ul>
     */
    inline const Aws::String& GetWorkerType() const{ return m_workerType; }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the <code>Standard</code>
     * worker type, each worker provides 4 vCPU, 16 GB of memory and a 50GB disk, and 2
     * executors per worker.</p> </li> <li> <p>For the <code>G.1X</code> worker type,
     * each worker provides 4 vCPU, 16 GB of memory and a 64GB disk, and 1 executor per
     * worker.</p> </li> <li> <p>For the <code>G.2X</code> worker type, each worker
     * provides 8 vCPU, 32 GB of memory and a 128GB disk, and 1 executor per
     * worker.</p> </li> </ul>
     */
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the <code>Standard</code>
     * worker type, each worker provides 4 vCPU, 16 GB of memory and a 50GB disk, and 2
     * executors per worker.</p> </li> <li> <p>For the <code>G.1X</code> worker type,
     * each worker provides 4 vCPU, 16 GB of memory and a 64GB disk, and 1 executor per
     * worker.</p> </li> <li> <p>For the <code>G.2X</code> worker type, each worker
     * provides 8 vCPU, 32 GB of memory and a 128GB disk, and 1 executor per
     * worker.</p> </li> </ul>
     */
    inline void SetWorkerType(const Aws::String& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the <code>Standard</code>
     * worker type, each worker provides 4 vCPU, 16 GB of memory and a 50GB disk, and 2
     * executors per worker.</p> </li> <li> <p>For the <code>G.1X</code> worker type,
     * each worker provides 4 vCPU, 16 GB of memory and a 64GB disk, and 1 executor per
     * worker.</p> </li> <li> <p>For the <code>G.2X</code> worker type, each worker
     * provides 8 vCPU, 32 GB of memory and a 128GB disk, and 1 executor per
     * worker.</p> </li> </ul>
     */
    inline void SetWorkerType(Aws::String&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the <code>Standard</code>
     * worker type, each worker provides 4 vCPU, 16 GB of memory and a 50GB disk, and 2
     * executors per worker.</p> </li> <li> <p>For the <code>G.1X</code> worker type,
     * each worker provides 4 vCPU, 16 GB of memory and a 64GB disk, and 1 executor per
     * worker.</p> </li> <li> <p>For the <code>G.2X</code> worker type, each worker
     * provides 8 vCPU, 32 GB of memory and a 128GB disk, and 1 executor per
     * worker.</p> </li> </ul>
     */
    inline void SetWorkerType(const char* value) { m_workerTypeHasBeenSet = true; m_workerType.assign(value); }

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the <code>Standard</code>
     * worker type, each worker provides 4 vCPU, 16 GB of memory and a 50GB disk, and 2
     * executors per worker.</p> </li> <li> <p>For the <code>G.1X</code> worker type,
     * each worker provides 4 vCPU, 16 GB of memory and a 64GB disk, and 1 executor per
     * worker.</p> </li> <li> <p>For the <code>G.2X</code> worker type, each worker
     * provides 8 vCPU, 32 GB of memory and a 128GB disk, and 1 executor per
     * worker.</p> </li> </ul>
     */
    inline StartJobRunRequest& WithWorkerType(const Aws::String& value) { SetWorkerType(value); return *this;}

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the <code>Standard</code>
     * worker type, each worker provides 4 vCPU, 16 GB of memory and a 50GB disk, and 2
     * executors per worker.</p> </li> <li> <p>For the <code>G.1X</code> worker type,
     * each worker provides 4 vCPU, 16 GB of memory and a 64GB disk, and 1 executor per
     * worker.</p> </li> <li> <p>For the <code>G.2X</code> worker type, each worker
     * provides 8 vCPU, 32 GB of memory and a 128GB disk, and 1 executor per
     * worker.</p> </li> </ul>
     */
    inline StartJobRunRequest& WithWorkerType(Aws::String&& value) { SetWorkerType(std::move(value)); return *this;}

    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the <code>Standard</code>
     * worker type, each worker provides 4 vCPU, 16 GB of memory and a 50GB disk, and 2
     * executors per worker.</p> </li> <li> <p>For the <code>G.1X</code> worker type,
     * each worker provides 4 vCPU, 16 GB of memory and a 64GB disk, and 1 executor per
     * worker.</p> </li> <li> <p>For the <code>G.2X</code> worker type, each worker
     * provides 8 vCPU, 32 GB of memory and a 128GB disk, and 1 executor per
     * worker.</p> </li> </ul>
     */
    inline StartJobRunRequest& WithWorkerType(const char* value) { SetWorkerType(value); return *this;}


    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p> <p>The maximum number of workers you can define are 299 for
     * <code>G.1X</code>, and 149 for <code>G.2X</code>. </p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p> <p>The maximum number of workers you can define are 299 for
     * <code>G.1X</code>, and 149 for <code>G.2X</code>. </p>
     */
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p> <p>The maximum number of workers you can define are 299 for
     * <code>G.1X</code>, and 149 for <code>G.2X</code>. </p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a job runs.</p> <p>The maximum number of workers you can define are 299 for
     * <code>G.1X</code>, and 149 for <code>G.2X</code>. </p>
     */
    inline StartJobRunRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;

    double m_maxCapacity;
    bool m_maxCapacityHasBeenSet;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet;

    NotificationProperty m_notificationProperty;
    bool m_notificationPropertyHasBeenSet;

    Aws::String m_workerType;
    bool m_workerTypeHasBeenSet;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
