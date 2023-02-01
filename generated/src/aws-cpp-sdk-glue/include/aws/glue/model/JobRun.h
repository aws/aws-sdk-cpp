/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_GLUE_API JobRun();
    AWS_GLUE_API JobRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JobRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of this job run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of this job run.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

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
    inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }

    /**
     * <p>The number of the attempt to run this job.</p>
     */
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }

    /**
     * <p>The number of the attempt to run this job.</p>
     */
    inline JobRun& WithAttempt(int value) { SetAttempt(value); return *this;}


    /**
     * <p>The ID of the previous run of this job. For example, the
     * <code>JobRunId</code> specified in the <code>StartJobRun</code> action.</p>
     */
    inline const Aws::String& GetPreviousRunId() const{ return m_previousRunId; }

    /**
     * <p>The ID of the previous run of this job. For example, the
     * <code>JobRunId</code> specified in the <code>StartJobRun</code> action.</p>
     */
    inline bool PreviousRunIdHasBeenSet() const { return m_previousRunIdHasBeenSet; }

    /**
     * <p>The ID of the previous run of this job. For example, the
     * <code>JobRunId</code> specified in the <code>StartJobRun</code> action.</p>
     */
    inline void SetPreviousRunId(const Aws::String& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = value; }

    /**
     * <p>The ID of the previous run of this job. For example, the
     * <code>JobRunId</code> specified in the <code>StartJobRun</code> action.</p>
     */
    inline void SetPreviousRunId(Aws::String&& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = std::move(value); }

    /**
     * <p>The ID of the previous run of this job. For example, the
     * <code>JobRunId</code> specified in the <code>StartJobRun</code> action.</p>
     */
    inline void SetPreviousRunId(const char* value) { m_previousRunIdHasBeenSet = true; m_previousRunId.assign(value); }

    /**
     * <p>The ID of the previous run of this job. For example, the
     * <code>JobRunId</code> specified in the <code>StartJobRun</code> action.</p>
     */
    inline JobRun& WithPreviousRunId(const Aws::String& value) { SetPreviousRunId(value); return *this;}

    /**
     * <p>The ID of the previous run of this job. For example, the
     * <code>JobRunId</code> specified in the <code>StartJobRun</code> action.</p>
     */
    inline JobRun& WithPreviousRunId(Aws::String&& value) { SetPreviousRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the previous run of this job. For example, the
     * <code>JobRunId</code> specified in the <code>StartJobRun</code> action.</p>
     */
    inline JobRun& WithPreviousRunId(const char* value) { SetPreviousRunId(value); return *this;}


    /**
     * <p>The name of the trigger that started this job run.</p>
     */
    inline const Aws::String& GetTriggerName() const{ return m_triggerName; }

    /**
     * <p>The name of the trigger that started this job run.</p>
     */
    inline bool TriggerNameHasBeenSet() const { return m_triggerNameHasBeenSet; }

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
     * <p>The name of the job definition being used in this run.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job definition being used in this run.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job definition being used in this run.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job definition being used in this run.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job definition being used in this run.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job definition being used in this run.</p>
     */
    inline JobRun& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job definition being used in this run.</p>
     */
    inline JobRun& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition being used in this run.</p>
     */
    inline JobRun& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The date and time at which this job run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time at which this job run was started.</p>
     */
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }

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
     * <p>The last time that this job run was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>The last time that this job run was modified.</p>
     */
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }

    /**
     * <p>The last time that this job run was modified.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = value; }

    /**
     * <p>The last time that this job run was modified.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::move(value); }

    /**
     * <p>The last time that this job run was modified.</p>
     */
    inline JobRun& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>The last time that this job run was modified.</p>
     */
    inline JobRun& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time that this job run completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The date and time that this job run completed.</p>
     */
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }

    /**
     * <p>The date and time that this job run completed.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }

    /**
     * <p>The date and time that this job run completed.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }

    /**
     * <p>The date and time that this job run completed.</p>
     */
    inline JobRun& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The date and time that this job run completed.</p>
     */
    inline JobRun& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The current state of the job run. For more information about the statuses of
     * jobs that have terminated abnormally, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/job-run-statuses.html">Glue Job
     * Run Statuses</a>.</p>
     */
    inline const JobRunState& GetJobRunState() const{ return m_jobRunState; }

    /**
     * <p>The current state of the job run. For more information about the statuses of
     * jobs that have terminated abnormally, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/job-run-statuses.html">Glue Job
     * Run Statuses</a>.</p>
     */
    inline bool JobRunStateHasBeenSet() const { return m_jobRunStateHasBeenSet; }

    /**
     * <p>The current state of the job run. For more information about the statuses of
     * jobs that have terminated abnormally, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/job-run-statuses.html">Glue Job
     * Run Statuses</a>.</p>
     */
    inline void SetJobRunState(const JobRunState& value) { m_jobRunStateHasBeenSet = true; m_jobRunState = value; }

    /**
     * <p>The current state of the job run. For more information about the statuses of
     * jobs that have terminated abnormally, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/job-run-statuses.html">Glue Job
     * Run Statuses</a>.</p>
     */
    inline void SetJobRunState(JobRunState&& value) { m_jobRunStateHasBeenSet = true; m_jobRunState = std::move(value); }

    /**
     * <p>The current state of the job run. For more information about the statuses of
     * jobs that have terminated abnormally, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/job-run-statuses.html">Glue Job
     * Run Statuses</a>.</p>
     */
    inline JobRun& WithJobRunState(const JobRunState& value) { SetJobRunState(value); return *this;}

    /**
     * <p>The current state of the job run. For more information about the statuses of
     * jobs that have terminated abnormally, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/job-run-statuses.html">Glue Job
     * Run Statuses</a>.</p>
     */
    inline JobRun& WithJobRunState(JobRunState&& value) { SetJobRunState(std::move(value)); return *this;}


    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job arguments associated with this run. For this job run, they replace
     * the default arguments set in the job definition itself.</p> <p>You can specify
     * arguments here that your own job-execution script consumes, as well as arguments
     * that Glue itself consumes.</p> <p>For information about how to specify and
     * consume your own job arguments, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-python-calling.html">Calling
     * Glue APIs in Python</a> topic in the developer guide.</p> <p>For information
     * about the key-value pairs that Glue consumes to set up your job, see the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Special
     * Parameters Used by Glue</a> topic in the developer guide.</p>
     */
    inline JobRun& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }


    /**
     * <p>An error message associated with this job run.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message associated with this job run.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

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
    inline bool PredecessorRunsHasBeenSet() const { return m_predecessorRunsHasBeenSet; }

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
     * <p>The amount of time (in seconds) that the job run consumed resources.</p>
     */
    inline int GetExecutionTime() const{ return m_executionTime; }

    /**
     * <p>The amount of time (in seconds) that the job run consumed resources.</p>
     */
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }

    /**
     * <p>The amount of time (in seconds) that the job run consumed resources.</p>
     */
    inline void SetExecutionTime(int value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }

    /**
     * <p>The amount of time (in seconds) that the job run consumed resources.</p>
     */
    inline JobRun& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}


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
    inline JobRun& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * this job runs. A DPU is a relative measure of processing power that consists of
     * 4 vCPUs of compute capacity and 16 GB of memory. For more information, see the
     * <a href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>.</p> <p>Do
     * not set <code>Max Capacity</code> if using <code>WorkerType</code> and
     * <code>NumberOfWorkers</code>.</p> <p>The value that can be allocated for
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job
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
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job
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
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job
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
     * <code>MaxCapacity</code> depends on whether you are running a Python shell job
     * or an Apache Spark ETL job:</p> <ul> <li> <p>When you specify a Python shell job
     * (<code>JobCommand.Name</code>="pythonshell"), you can allocate either 0.0625 or
     * 1 DPU. The default is 0.0625 DPU.</p> </li> <li> <p>When you specify an Apache
     * Spark ETL job (<code>JobCommand.Name</code>="glueetl"), you can allocate a
     * minimum of 2 DPUs. The default is 10 DPUs. This job type cannot have a
     * fractional DPU allocation.</p> </li> </ul>
     */
    inline JobRun& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}


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
    inline JobRun& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}

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
    inline JobRun& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}


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
    inline JobRun& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


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
    inline JobRun& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline JobRun& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>SecurityConfiguration</code> structure to be used with
     * this job run.</p>
     */
    inline JobRun& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


    /**
     * <p>The name of the log group for secure logging that can be server-side
     * encrypted in Amazon CloudWatch using KMS. This name can be
     * <code>/aws-glue/jobs/</code>, in which case the default encryption is
     * <code>NONE</code>. If you add a role name and <code>SecurityConfiguration</code>
     * name (in other words,
     * <code>/aws-glue/jobs-yourRoleName-yourSecurityConfigurationName/</code>), then
     * that security configuration is used to encrypt the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group for secure logging that can be server-side
     * encrypted in Amazon CloudWatch using KMS. This name can be
     * <code>/aws-glue/jobs/</code>, in which case the default encryption is
     * <code>NONE</code>. If you add a role name and <code>SecurityConfiguration</code>
     * name (in other words,
     * <code>/aws-glue/jobs-yourRoleName-yourSecurityConfigurationName/</code>), then
     * that security configuration is used to encrypt the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group for secure logging that can be server-side
     * encrypted in Amazon CloudWatch using KMS. This name can be
     * <code>/aws-glue/jobs/</code>, in which case the default encryption is
     * <code>NONE</code>. If you add a role name and <code>SecurityConfiguration</code>
     * name (in other words,
     * <code>/aws-glue/jobs-yourRoleName-yourSecurityConfigurationName/</code>), then
     * that security configuration is used to encrypt the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group for secure logging that can be server-side
     * encrypted in Amazon CloudWatch using KMS. This name can be
     * <code>/aws-glue/jobs/</code>, in which case the default encryption is
     * <code>NONE</code>. If you add a role name and <code>SecurityConfiguration</code>
     * name (in other words,
     * <code>/aws-glue/jobs-yourRoleName-yourSecurityConfigurationName/</code>), then
     * that security configuration is used to encrypt the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group for secure logging that can be server-side
     * encrypted in Amazon CloudWatch using KMS. This name can be
     * <code>/aws-glue/jobs/</code>, in which case the default encryption is
     * <code>NONE</code>. If you add a role name and <code>SecurityConfiguration</code>
     * name (in other words,
     * <code>/aws-glue/jobs-yourRoleName-yourSecurityConfigurationName/</code>), then
     * that security configuration is used to encrypt the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group for secure logging that can be server-side
     * encrypted in Amazon CloudWatch using KMS. This name can be
     * <code>/aws-glue/jobs/</code>, in which case the default encryption is
     * <code>NONE</code>. If you add a role name and <code>SecurityConfiguration</code>
     * name (in other words,
     * <code>/aws-glue/jobs-yourRoleName-yourSecurityConfigurationName/</code>), then
     * that security configuration is used to encrypt the log group.</p>
     */
    inline JobRun& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group for secure logging that can be server-side
     * encrypted in Amazon CloudWatch using KMS. This name can be
     * <code>/aws-glue/jobs/</code>, in which case the default encryption is
     * <code>NONE</code>. If you add a role name and <code>SecurityConfiguration</code>
     * name (in other words,
     * <code>/aws-glue/jobs-yourRoleName-yourSecurityConfigurationName/</code>), then
     * that security configuration is used to encrypt the log group.</p>
     */
    inline JobRun& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group for secure logging that can be server-side
     * encrypted in Amazon CloudWatch using KMS. This name can be
     * <code>/aws-glue/jobs/</code>, in which case the default encryption is
     * <code>NONE</code>. If you add a role name and <code>SecurityConfiguration</code>
     * name (in other words,
     * <code>/aws-glue/jobs-yourRoleName-yourSecurityConfigurationName/</code>), then
     * that security configuration is used to encrypt the log group.</p>
     */
    inline JobRun& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


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
    inline JobRun& WithNotificationProperty(const NotificationProperty& value) { SetNotificationProperty(value); return *this;}

    /**
     * <p>Specifies configuration properties of a job run notification.</p>
     */
    inline JobRun& WithNotificationProperty(NotificationProperty&& value) { SetNotificationProperty(std::move(value)); return *this;}


    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline JobRun& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline JobRun& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}

    /**
     * <p>Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The Python version indicates the version supported for jobs of type
     * Spark. </p> <p>For more information about the available Glue versions and
     * corresponding Spark and Python versions, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-job.html">Glue version</a>
     * in the developer guide.</p> <p>Jobs that are created without specifying a Glue
     * version default to Glue 0.9.</p>
     */
    inline JobRun& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}


    /**
     * <p>This field populates only for Auto Scaling job runs, and represents the total
     * time each executor ran during the lifecycle of a job run in seconds, multiplied
     * by a DPU factor (1 for <code>G.1X</code>, 2 for <code>G.2X</code>, or 0.25 for
     * <code>G.025X</code> workers). This value may be different than the
     * <code>executionEngineRuntime</code> * <code>MaxCapacity</code> as in the case of
     * Auto Scaling jobs, as the number of executors running at a given time may be
     * less than the <code>MaxCapacity</code>. Therefore, it is possible that the value
     * of <code>DPUSeconds</code> is less than <code>executionEngineRuntime</code> *
     * <code>MaxCapacity</code>.</p>
     */
    inline double GetDPUSeconds() const{ return m_dPUSeconds; }

    /**
     * <p>This field populates only for Auto Scaling job runs, and represents the total
     * time each executor ran during the lifecycle of a job run in seconds, multiplied
     * by a DPU factor (1 for <code>G.1X</code>, 2 for <code>G.2X</code>, or 0.25 for
     * <code>G.025X</code> workers). This value may be different than the
     * <code>executionEngineRuntime</code> * <code>MaxCapacity</code> as in the case of
     * Auto Scaling jobs, as the number of executors running at a given time may be
     * less than the <code>MaxCapacity</code>. Therefore, it is possible that the value
     * of <code>DPUSeconds</code> is less than <code>executionEngineRuntime</code> *
     * <code>MaxCapacity</code>.</p>
     */
    inline bool DPUSecondsHasBeenSet() const { return m_dPUSecondsHasBeenSet; }

    /**
     * <p>This field populates only for Auto Scaling job runs, and represents the total
     * time each executor ran during the lifecycle of a job run in seconds, multiplied
     * by a DPU factor (1 for <code>G.1X</code>, 2 for <code>G.2X</code>, or 0.25 for
     * <code>G.025X</code> workers). This value may be different than the
     * <code>executionEngineRuntime</code> * <code>MaxCapacity</code> as in the case of
     * Auto Scaling jobs, as the number of executors running at a given time may be
     * less than the <code>MaxCapacity</code>. Therefore, it is possible that the value
     * of <code>DPUSeconds</code> is less than <code>executionEngineRuntime</code> *
     * <code>MaxCapacity</code>.</p>
     */
    inline void SetDPUSeconds(double value) { m_dPUSecondsHasBeenSet = true; m_dPUSeconds = value; }

    /**
     * <p>This field populates only for Auto Scaling job runs, and represents the total
     * time each executor ran during the lifecycle of a job run in seconds, multiplied
     * by a DPU factor (1 for <code>G.1X</code>, 2 for <code>G.2X</code>, or 0.25 for
     * <code>G.025X</code> workers). This value may be different than the
     * <code>executionEngineRuntime</code> * <code>MaxCapacity</code> as in the case of
     * Auto Scaling jobs, as the number of executors running at a given time may be
     * less than the <code>MaxCapacity</code>. Therefore, it is possible that the value
     * of <code>DPUSeconds</code> is less than <code>executionEngineRuntime</code> *
     * <code>MaxCapacity</code>.</p>
     */
    inline JobRun& WithDPUSeconds(double value) { SetDPUSeconds(value); return *this;}


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
    inline JobRun& WithExecutionClass(const ExecutionClass& value) { SetExecutionClass(value); return *this;}

    /**
     * <p>Indicates whether the job is run with a standard or flexible execution class.
     * The standard execution-class is ideal for time-sensitive workloads that require
     * fast job startup and dedicated resources.</p> <p>The flexible execution class is
     * appropriate for time-insensitive jobs whose start and completion times may vary.
     * </p> <p>Only jobs with Glue version 3.0 and above and command type
     * <code>glueetl</code> will be allowed to set <code>ExecutionClass</code> to
     * <code>FLEX</code>. The flexible execution class is available for Spark jobs.</p>
     */
    inline JobRun& WithExecutionClass(ExecutionClass&& value) { SetExecutionClass(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_attempt;
    bool m_attemptHasBeenSet = false;

    Aws::String m_previousRunId;
    bool m_previousRunIdHasBeenSet = false;

    Aws::String m_triggerName;
    bool m_triggerNameHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn;
    bool m_lastModifiedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn;
    bool m_completedOnHasBeenSet = false;

    JobRunState m_jobRunState;
    bool m_jobRunStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Vector<Predecessor> m_predecessorRuns;
    bool m_predecessorRunsHasBeenSet = false;

    int m_executionTime;
    bool m_executionTimeHasBeenSet = false;

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

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    NotificationProperty m_notificationProperty;
    bool m_notificationPropertyHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    double m_dPUSeconds;
    bool m_dPUSecondsHasBeenSet = false;

    ExecutionClass m_executionClass;
    bool m_executionClassHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
