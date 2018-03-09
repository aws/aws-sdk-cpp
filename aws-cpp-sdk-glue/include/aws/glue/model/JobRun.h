﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/JobRunState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Predecessor.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class AWS_GLUE_API JobRun
  {
  public:
    JobRun();
    JobRun(const Aws::Utils::Json::JsonValue& jsonValue);
    JobRun& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of this job run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of this job run.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of this job run.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of this job run.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of this job run.</p>
     */
    inline JobRun& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of this job run.</p>
     */
    inline JobRun& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of this job run.</p>
     */
    inline JobRun& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The number of the attempt to run this job.</p>
     */
    inline int GetAttempt() const{ return m_attempt; }

    /**
     * <p>The number of the attempt to run this job.</p>
     */
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }

    /**
     * <p>The number of the attempt to run this job.</p>
     */
    inline JobRun& WithAttempt(int value) { SetAttempt(value); return *this;}


    /**
     * <p>The ID of the previous run of this job. For example, the JobRunId specified
     * in the StartJobRun action.</p>
     */
    inline const Aws::String& GetPreviousRunId() const{ return m_previousRunId; }

    /**
     * <p>The ID of the previous run of this job. For example, the JobRunId specified
     * in the StartJobRun action.</p>
     */
    inline void SetPreviousRunId(const Aws::String& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = value; }

    /**
     * <p>The ID of the previous run of this job. For example, the JobRunId specified
     * in the StartJobRun action.</p>
     */
    inline void SetPreviousRunId(Aws::String&& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = std::move(value); }

    /**
     * <p>The ID of the previous run of this job. For example, the JobRunId specified
     * in the StartJobRun action.</p>
     */
    inline void SetPreviousRunId(const char* value) { m_previousRunIdHasBeenSet = true; m_previousRunId.assign(value); }

    /**
     * <p>The ID of the previous run of this job. For example, the JobRunId specified
     * in the StartJobRun action.</p>
     */
    inline JobRun& WithPreviousRunId(const Aws::String& value) { SetPreviousRunId(value); return *this;}

    /**
     * <p>The ID of the previous run of this job. For example, the JobRunId specified
     * in the StartJobRun action.</p>
     */
    inline JobRun& WithPreviousRunId(Aws::String&& value) { SetPreviousRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the previous run of this job. For example, the JobRunId specified
     * in the StartJobRun action.</p>
     */
    inline JobRun& WithPreviousRunId(const char* value) { SetPreviousRunId(value); return *this;}


    /**
     * <p>The name of the trigger that started this job run.</p>
     */
    inline const Aws::String& GetTriggerName() const{ return m_triggerName; }

    /**
     * <p>The name of the trigger that started this job run.</p>
     */
    inline void SetTriggerName(const Aws::String& value) { m_triggerNameHasBeenSet = true; m_triggerName = value; }

    /**
     * <p>The name of the trigger that started this job run.</p>
     */
    inline void SetTriggerName(Aws::String&& value) { m_triggerNameHasBeenSet = true; m_triggerName = std::move(value); }

    /**
     * <p>The name of the trigger that started this job run.</p>
     */
    inline void SetTriggerName(const char* value) { m_triggerNameHasBeenSet = true; m_triggerName.assign(value); }

    /**
     * <p>The name of the trigger that started this job run.</p>
     */
    inline JobRun& WithTriggerName(const Aws::String& value) { SetTriggerName(value); return *this;}

    /**
     * <p>The name of the trigger that started this job run.</p>
     */
    inline JobRun& WithTriggerName(Aws::String&& value) { SetTriggerName(std::move(value)); return *this;}

    /**
     * <p>The name of the trigger that started this job run.</p>
     */
    inline JobRun& WithTriggerName(const char* value) { SetTriggerName(value); return *this;}


    /**
     * <p>The name of the job being run.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job being run.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job being run.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job being run.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job being run.</p>
     */
    inline JobRun& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job being run.</p>
     */
    inline JobRun& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job being run.</p>
     */
    inline JobRun& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The date and time at which this job run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time at which this job run was started.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }

    /**
     * <p>The date and time at which this job run was started.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }

    /**
     * <p>The date and time at which this job run was started.</p>
     */
    inline JobRun& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The date and time at which this job run was started.</p>
     */
    inline JobRun& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>The last time this job run was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>The last time this job run was modified.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = value; }

    /**
     * <p>The last time this job run was modified.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::move(value); }

    /**
     * <p>The last time this job run was modified.</p>
     */
    inline JobRun& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>The last time this job run was modified.</p>
     */
    inline JobRun& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time this job run completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The date and time this job run completed.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }

    /**
     * <p>The date and time this job run completed.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }

    /**
     * <p>The date and time this job run completed.</p>
     */
    inline JobRun& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The date and time this job run completed.</p>
     */
    inline JobRun& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The current state of the job run.</p>
     */
    inline const JobRunState& GetJobRunState() const{ return m_jobRunState; }

    /**
     * <p>The current state of the job run.</p>
     */
    inline void SetJobRunState(const JobRunState& value) { m_jobRunStateHasBeenSet = true; m_jobRunState = value; }

    /**
     * <p>The current state of the job run.</p>
     */
    inline void SetJobRunState(JobRunState&& value) { m_jobRunStateHasBeenSet = true; m_jobRunState = std::move(value); }

    /**
     * <p>The current state of the job run.</p>
     */
    inline JobRun& WithJobRunState(const JobRunState& value) { SetJobRunState(value); return *this;}

    /**
     * <p>The current state of the job run.</p>
     */
    inline JobRun& WithJobRunState(JobRunState&& value) { SetJobRunState(std::move(value)); return *this;}


    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job arguments associated with this run. These override equivalent default
     * arguments set for the job.</p> <p>You can specify arguments here that your own
     * job-execution script consumes, as well as arguments that AWS Glue itself
     * consumes.</p> <p>For information about how to specify and consume your own job
     * arguments, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * AWS Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that AWS Glue consumes to set up your job, see the <a
     * href="http://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-glue-arguments.html">Special
     * Parameters Used by AWS Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }


    /**
     * <p>An error message associated with this job run.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message associated with this job run.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An error message associated with this job run.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An error message associated with this job run.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An error message associated with this job run.</p>
     */
    inline JobRun& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message associated with this job run.</p>
     */
    inline JobRun& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message associated with this job run.</p>
     */
    inline JobRun& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>A list of predecessors to this job run.</p>
     */
    inline const Aws::Vector<Predecessor>& GetPredecessorRuns() const{ return m_predecessorRuns; }

    /**
     * <p>A list of predecessors to this job run.</p>
     */
    inline void SetPredecessorRuns(const Aws::Vector<Predecessor>& value) { m_predecessorRunsHasBeenSet = true; m_predecessorRuns = value; }

    /**
     * <p>A list of predecessors to this job run.</p>
     */
    inline void SetPredecessorRuns(Aws::Vector<Predecessor>&& value) { m_predecessorRunsHasBeenSet = true; m_predecessorRuns = std::move(value); }

    /**
     * <p>A list of predecessors to this job run.</p>
     */
    inline JobRun& WithPredecessorRuns(const Aws::Vector<Predecessor>& value) { SetPredecessorRuns(value); return *this;}

    /**
     * <p>A list of predecessors to this job run.</p>
     */
    inline JobRun& WithPredecessorRuns(Aws::Vector<Predecessor>&& value) { SetPredecessorRuns(std::move(value)); return *this;}

    /**
     * <p>A list of predecessors to this job run.</p>
     */
    inline JobRun& AddPredecessorRuns(const Predecessor& value) { m_predecessorRunsHasBeenSet = true; m_predecessorRuns.push_back(value); return *this; }

    /**
     * <p>A list of predecessors to this job run.</p>
     */
    inline JobRun& AddPredecessorRuns(Predecessor&& value) { m_predecessorRunsHasBeenSet = true; m_predecessorRuns.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of AWS Glue data processing units (DPUs) allocated to this JobRun.
     * From 2 to 100 DPUs can be allocated; the default is 10. A DPU is a relative
     * measure of processing power that consists of 4 vCPUs of compute capacity and 16
     * GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>.</p>
     */
    inline int GetAllocatedCapacity() const{ return m_allocatedCapacity; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) allocated to this JobRun.
     * From 2 to 100 DPUs can be allocated; the default is 10. A DPU is a relative
     * measure of processing power that consists of 4 vCPUs of compute capacity and 16
     * GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>.</p>
     */
    inline void SetAllocatedCapacity(int value) { m_allocatedCapacityHasBeenSet = true; m_allocatedCapacity = value; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) allocated to this JobRun.
     * From 2 to 100 DPUs can be allocated; the default is 10. A DPU is a relative
     * measure of processing power that consists of 4 vCPUs of compute capacity and 16
     * GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>.</p>
     */
    inline JobRun& WithAllocatedCapacity(int value) { SetAllocatedCapacity(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    int m_attempt;
    bool m_attemptHasBeenSet;

    Aws::String m_previousRunId;
    bool m_previousRunIdHasBeenSet;

    Aws::String m_triggerName;
    bool m_triggerNameHasBeenSet;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedOn;
    bool m_lastModifiedOnHasBeenSet;

    Aws::Utils::DateTime m_completedOn;
    bool m_completedOnHasBeenSet;

    JobRunState m_jobRunState;
    bool m_jobRunStateHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::Vector<Predecessor> m_predecessorRuns;
    bool m_predecessorRunsHasBeenSet;

    int m_allocatedCapacity;
    bool m_allocatedCapacityHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
