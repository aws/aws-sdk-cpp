/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/JobRunState.h>
#include <aws/databrew/model/LogSubscription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/RecipeReference.h>
#include <aws/databrew/model/JobSample.h>
#include <aws/databrew/model/Output.h>
#include <aws/databrew/model/DataCatalogOutput.h>
#include <aws/databrew/model/DatabaseOutput.h>
#include <aws/databrew/model/ValidationConfiguration.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents one run of a DataBrew job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/JobRun">AWS API
   * Reference</a></p>
   */
  class JobRun
  {
  public:
    AWS_GLUEDATABREW_API JobRun();
    AWS_GLUEDATABREW_API JobRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API JobRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of times that DataBrew has attempted to run the job.</p>
     */
    inline int GetAttempt() const{ return m_attempt; }

    /**
     * <p>The number of times that DataBrew has attempted to run the job.</p>
     */
    inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }

    /**
     * <p>The number of times that DataBrew has attempted to run the job.</p>
     */
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }

    /**
     * <p>The number of times that DataBrew has attempted to run the job.</p>
     */
    inline JobRun& WithAttempt(int value) { SetAttempt(value); return *this;}


    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }

    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }

    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }

    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline JobRun& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline JobRun& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline JobRun& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline JobRun& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline JobRun& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline JobRun& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline JobRun& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline JobRun& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The amount of time, in seconds, during which a job run consumed
     * resources.</p>
     */
    inline int GetExecutionTime() const{ return m_executionTime; }

    /**
     * <p>The amount of time, in seconds, during which a job run consumed
     * resources.</p>
     */
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, during which a job run consumed
     * resources.</p>
     */
    inline void SetExecutionTime(int value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }

    /**
     * <p>The amount of time, in seconds, during which a job run consumed
     * resources.</p>
     */
    inline JobRun& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}


    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline JobRun& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline JobRun& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline JobRun& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline JobRun& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline JobRun& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline JobRun& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline const JobRunState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline void SetState(const JobRunState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline void SetState(JobRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline JobRun& WithState(const JobRunState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline JobRun& WithState(JobRunState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline const LogSubscription& GetLogSubscription() const{ return m_logSubscription; }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline bool LogSubscriptionHasBeenSet() const { return m_logSubscriptionHasBeenSet; }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline void SetLogSubscription(const LogSubscription& value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = value; }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline void SetLogSubscription(LogSubscription&& value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = std::move(value); }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline JobRun& WithLogSubscription(const LogSubscription& value) { SetLogSubscription(value); return *this;}

    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline JobRun& WithLogSubscription(LogSubscription&& value) { SetLogSubscription(std::move(value)); return *this;}


    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline JobRun& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline JobRun& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline JobRun& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline JobRun& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline JobRun& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline JobRun& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline JobRun& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline const Aws::Vector<DataCatalogOutput>& GetDataCatalogOutputs() const{ return m_dataCatalogOutputs; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline bool DataCatalogOutputsHasBeenSet() const { return m_dataCatalogOutputsHasBeenSet; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline void SetDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs = value; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline void SetDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs = std::move(value); }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline JobRun& WithDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { SetDataCatalogOutputs(value); return *this;}

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline JobRun& WithDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { SetDataCatalogOutputs(std::move(value)); return *this;}

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline JobRun& AddDataCatalogOutputs(const DataCatalogOutput& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs.push_back(value); return *this; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline JobRun& AddDataCatalogOutputs(DataCatalogOutput&& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline const Aws::Vector<DatabaseOutput>& GetDatabaseOutputs() const{ return m_databaseOutputs; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline bool DatabaseOutputsHasBeenSet() const { return m_databaseOutputsHasBeenSet; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline void SetDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs = value; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline void SetDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs = std::move(value); }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline JobRun& WithDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { SetDatabaseOutputs(value); return *this;}

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline JobRun& WithDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { SetDatabaseOutputs(std::move(value)); return *this;}

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline JobRun& AddDatabaseOutputs(const DatabaseOutput& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs.push_back(value); return *this; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline JobRun& AddDatabaseOutputs(DatabaseOutput&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The set of steps processed by the job.</p>
     */
    inline const RecipeReference& GetRecipeReference() const{ return m_recipeReference; }

    /**
     * <p>The set of steps processed by the job.</p>
     */
    inline bool RecipeReferenceHasBeenSet() const { return m_recipeReferenceHasBeenSet; }

    /**
     * <p>The set of steps processed by the job.</p>
     */
    inline void SetRecipeReference(const RecipeReference& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = value; }

    /**
     * <p>The set of steps processed by the job.</p>
     */
    inline void SetRecipeReference(RecipeReference&& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = std::move(value); }

    /**
     * <p>The set of steps processed by the job.</p>
     */
    inline JobRun& WithRecipeReference(const RecipeReference& value) { SetRecipeReference(value); return *this;}

    /**
     * <p>The set of steps processed by the job.</p>
     */
    inline JobRun& WithRecipeReference(RecipeReference&& value) { SetRecipeReference(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who initiated the job run. </p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who initiated the job run. </p>
     */
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who initiated the job run. </p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who initiated the job run. </p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who initiated the job run. </p>
     */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who initiated the job run. </p>
     */
    inline JobRun& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who initiated the job run. </p>
     */
    inline JobRun& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who initiated the job run. </p>
     */
    inline JobRun& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The date and time when the job run began. </p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time when the job run began. </p>
     */
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }

    /**
     * <p>The date and time when the job run began. </p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }

    /**
     * <p>The date and time when the job run began. </p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }

    /**
     * <p>The date and time when the job run began. </p>
     */
    inline JobRun& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The date and time when the job run began. </p>
     */
    inline JobRun& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default is used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20,000 for the size parameter.</p>
     */
    inline const JobSample& GetJobSample() const{ return m_jobSample; }

    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default is used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20,000 for the size parameter.</p>
     */
    inline bool JobSampleHasBeenSet() const { return m_jobSampleHasBeenSet; }

    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default is used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20,000 for the size parameter.</p>
     */
    inline void SetJobSample(const JobSample& value) { m_jobSampleHasBeenSet = true; m_jobSample = value; }

    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default is used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20,000 for the size parameter.</p>
     */
    inline void SetJobSample(JobSample&& value) { m_jobSampleHasBeenSet = true; m_jobSample = std::move(value); }

    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default is used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20,000 for the size parameter.</p>
     */
    inline JobRun& WithJobSample(const JobSample& value) { SetJobSample(value); return *this;}

    /**
     * <p>A sample configuration for profile jobs only, which determines the number of
     * rows on which the profile job is run. If a <code>JobSample</code> value isn't
     * provided, the default is used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20,000 for the size parameter.</p>
     */
    inline JobRun& WithJobSample(JobSample&& value) { SetJobSample(std::move(value)); return *this;}


    /**
     * <p>List of validation configurations that are applied to the profile job
     * run.</p>
     */
    inline const Aws::Vector<ValidationConfiguration>& GetValidationConfigurations() const{ return m_validationConfigurations; }

    /**
     * <p>List of validation configurations that are applied to the profile job
     * run.</p>
     */
    inline bool ValidationConfigurationsHasBeenSet() const { return m_validationConfigurationsHasBeenSet; }

    /**
     * <p>List of validation configurations that are applied to the profile job
     * run.</p>
     */
    inline void SetValidationConfigurations(const Aws::Vector<ValidationConfiguration>& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations = value; }

    /**
     * <p>List of validation configurations that are applied to the profile job
     * run.</p>
     */
    inline void SetValidationConfigurations(Aws::Vector<ValidationConfiguration>&& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations = std::move(value); }

    /**
     * <p>List of validation configurations that are applied to the profile job
     * run.</p>
     */
    inline JobRun& WithValidationConfigurations(const Aws::Vector<ValidationConfiguration>& value) { SetValidationConfigurations(value); return *this;}

    /**
     * <p>List of validation configurations that are applied to the profile job
     * run.</p>
     */
    inline JobRun& WithValidationConfigurations(Aws::Vector<ValidationConfiguration>&& value) { SetValidationConfigurations(std::move(value)); return *this;}

    /**
     * <p>List of validation configurations that are applied to the profile job
     * run.</p>
     */
    inline JobRun& AddValidationConfigurations(const ValidationConfiguration& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations.push_back(value); return *this; }

    /**
     * <p>List of validation configurations that are applied to the profile job
     * run.</p>
     */
    inline JobRun& AddValidationConfigurations(ValidationConfiguration&& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations.push_back(std::move(value)); return *this; }

  private:

    int m_attempt;
    bool m_attemptHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn;
    bool m_completedOnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    int m_executionTime;
    bool m_executionTimeHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    JobRunState m_state;
    bool m_stateHasBeenSet = false;

    LogSubscription m_logSubscription;
    bool m_logSubscriptionHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::Vector<DataCatalogOutput> m_dataCatalogOutputs;
    bool m_dataCatalogOutputsHasBeenSet = false;

    Aws::Vector<DatabaseOutput> m_databaseOutputs;
    bool m_databaseOutputsHasBeenSet = false;

    RecipeReference m_recipeReference;
    bool m_recipeReferenceHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet = false;

    JobSample m_jobSample;
    bool m_jobSampleHasBeenSet = false;

    Aws::Vector<ValidationConfiguration> m_validationConfigurations;
    bool m_validationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
