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
     * <p>The ID of a previous JobRun to retry.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The ID of a previous JobRun to retry.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }

    /**
     * <p>The ID of a previous JobRun to retry.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }

    /**
     * <p>The ID of a previous JobRun to retry.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }

    /**
     * <p>The ID of a previous JobRun to retry.</p>
     */
    inline StartJobRunRequest& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The ID of a previous JobRun to retry.</p>
     */
    inline StartJobRunRequest& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of a previous JobRun to retry.</p>
     */
    inline StartJobRunRequest& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}


    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job arguments specifically for this run. They override the equivalent
     * default arguments set for in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that AWS Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own Job arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline StartJobRunRequest& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }


    /**
     * <p>The number of AWS Glue data processing units (DPUs) to allocate to this
     * JobRun. From 2 to 100 DPUs can be allocated; the default is 10. A DPU is a
     * relative measure of processing power that consists of 4 vCPUs of compute
     * capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>.</p>
     */
    inline int GetAllocatedCapacity() const{ return m_allocatedCapacity; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) to allocate to this
     * JobRun. From 2 to 100 DPUs can be allocated; the default is 10. A DPU is a
     * relative measure of processing power that consists of 4 vCPUs of compute
     * capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>.</p>
     */
    inline void SetAllocatedCapacity(int value) { m_allocatedCapacityHasBeenSet = true; m_allocatedCapacity = value; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) to allocate to this
     * JobRun. From 2 to 100 DPUs can be allocated; the default is 10. A DPU is a
     * relative measure of processing power that consists of 4 vCPUs of compute
     * capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>.</p>
     */
    inline StartJobRunRequest& WithAllocatedCapacity(int value) { SetAllocatedCapacity(value); return *this;}


    /**
     * <p>The job run timeout in minutes. It overrides the timeout value of the
     * job.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The job run timeout in minutes. It overrides the timeout value of the
     * job.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The job run timeout in minutes. It overrides the timeout value of the
     * job.</p>
     */
    inline StartJobRunRequest& WithTimeout(int value) { SetTimeout(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet;

    int m_allocatedCapacity;
    bool m_allocatedCapacityHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
