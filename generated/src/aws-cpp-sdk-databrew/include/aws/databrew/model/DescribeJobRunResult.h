/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/ProfileConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/JobRunState.h>
#include <aws/databrew/model/LogSubscription.h>
#include <aws/databrew/model/RecipeReference.h>
#include <aws/databrew/model/JobSample.h>
#include <aws/databrew/model/ValidationConfiguration.h>
#include <aws/databrew/model/Output.h>
#include <aws/databrew/model/DataCatalogOutput.h>
#include <aws/databrew/model/DatabaseOutput.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GlueDataBrew
{
namespace Model
{
  class DescribeJobRunResult
  {
  public:
    AWS_GLUEDATABREW_API DescribeJobRunResult() = default;
    AWS_GLUEDATABREW_API DescribeJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DescribeJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of times that DataBrew has attempted to run the job.</p>
     */
    inline int GetAttempt() const { return m_attempt; }
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }
    inline DescribeJobRunResult& WithAttempt(int value) { SetAttempt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    void SetCompletedOn(CompletedOnT&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::forward<CompletedOnT>(value); }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    DescribeJobRunResult& WithCompletedOn(CompletedOnT&& value) { SetCompletedOn(std::forward<CompletedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DescribeJobRunResult& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeJobRunResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, during which the job run consumed
     * resources.</p>
     */
    inline int GetExecutionTime() const { return m_executionTime; }
    inline void SetExecutionTime(int value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }
    inline DescribeJobRunResult& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    DescribeJobRunResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline const ProfileConfiguration& GetProfileConfiguration() const { return m_profileConfiguration; }
    template<typename ProfileConfigurationT = ProfileConfiguration>
    void SetProfileConfiguration(ProfileConfigurationT&& value) { m_profileConfigurationHasBeenSet = true; m_profileConfiguration = std::forward<ProfileConfigurationT>(value); }
    template<typename ProfileConfigurationT = ProfileConfiguration>
    DescribeJobRunResult& WithProfileConfiguration(ProfileConfigurationT&& value) { SetProfileConfiguration(std::forward<ProfileConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline const Aws::Vector<ValidationConfiguration>& GetValidationConfigurations() const { return m_validationConfigurations; }
    template<typename ValidationConfigurationsT = Aws::Vector<ValidationConfiguration>>
    void SetValidationConfigurations(ValidationConfigurationsT&& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations = std::forward<ValidationConfigurationsT>(value); }
    template<typename ValidationConfigurationsT = Aws::Vector<ValidationConfiguration>>
    DescribeJobRunResult& WithValidationConfigurations(ValidationConfigurationsT&& value) { SetValidationConfigurations(std::forward<ValidationConfigurationsT>(value)); return *this;}
    template<typename ValidationConfigurationsT = ValidationConfiguration>
    DescribeJobRunResult& AddValidationConfigurations(ValidationConfigurationsT&& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations.emplace_back(std::forward<ValidationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    DescribeJobRunResult& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline JobRunState GetState() const { return m_state; }
    inline void SetState(JobRunState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeJobRunResult& WithState(JobRunState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline LogSubscription GetLogSubscription() const { return m_logSubscription; }
    inline void SetLogSubscription(LogSubscription value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = value; }
    inline DescribeJobRunResult& WithLogSubscription(LogSubscription value) { SetLogSubscription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    DescribeJobRunResult& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const { return m_outputs; }
    template<typename OutputsT = Aws::Vector<Output>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<Output>>
    DescribeJobRunResult& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = Output>
    DescribeJobRunResult& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline const Aws::Vector<DataCatalogOutput>& GetDataCatalogOutputs() const { return m_dataCatalogOutputs; }
    template<typename DataCatalogOutputsT = Aws::Vector<DataCatalogOutput>>
    void SetDataCatalogOutputs(DataCatalogOutputsT&& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs = std::forward<DataCatalogOutputsT>(value); }
    template<typename DataCatalogOutputsT = Aws::Vector<DataCatalogOutput>>
    DescribeJobRunResult& WithDataCatalogOutputs(DataCatalogOutputsT&& value) { SetDataCatalogOutputs(std::forward<DataCatalogOutputsT>(value)); return *this;}
    template<typename DataCatalogOutputsT = DataCatalogOutput>
    DescribeJobRunResult& AddDataCatalogOutputs(DataCatalogOutputsT&& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs.emplace_back(std::forward<DataCatalogOutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline const Aws::Vector<DatabaseOutput>& GetDatabaseOutputs() const { return m_databaseOutputs; }
    template<typename DatabaseOutputsT = Aws::Vector<DatabaseOutput>>
    void SetDatabaseOutputs(DatabaseOutputsT&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs = std::forward<DatabaseOutputsT>(value); }
    template<typename DatabaseOutputsT = Aws::Vector<DatabaseOutput>>
    DescribeJobRunResult& WithDatabaseOutputs(DatabaseOutputsT&& value) { SetDatabaseOutputs(std::forward<DatabaseOutputsT>(value)); return *this;}
    template<typename DatabaseOutputsT = DatabaseOutput>
    DescribeJobRunResult& AddDatabaseOutputs(DatabaseOutputsT&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs.emplace_back(std::forward<DatabaseOutputsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const RecipeReference& GetRecipeReference() const { return m_recipeReference; }
    template<typename RecipeReferenceT = RecipeReference>
    void SetRecipeReference(RecipeReferenceT&& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = std::forward<RecipeReferenceT>(value); }
    template<typename RecipeReferenceT = RecipeReference>
    DescribeJobRunResult& WithRecipeReference(RecipeReferenceT&& value) { SetRecipeReference(std::forward<RecipeReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who started the job run.</p>
     */
    inline const Aws::String& GetStartedBy() const { return m_startedBy; }
    template<typename StartedByT = Aws::String>
    void SetStartedBy(StartedByT&& value) { m_startedByHasBeenSet = true; m_startedBy = std::forward<StartedByT>(value); }
    template<typename StartedByT = Aws::String>
    DescribeJobRunResult& WithStartedBy(StartedByT&& value) { SetStartedBy(std::forward<StartedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job run began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
    template<typename StartedOnT = Aws::Utils::DateTime>
    void SetStartedOn(StartedOnT&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::forward<StartedOnT>(value); }
    template<typename StartedOnT = Aws::Utils::DateTime>
    DescribeJobRunResult& WithStartedOn(StartedOnT&& value) { SetStartedOn(std::forward<StartedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sample configuration for profile jobs only. Determines the number of rows on
     * which the profile job will be executed. If a JobSample value is not provided,
     * the default value will be used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20000 for the size parameter.</p>
     */
    inline const JobSample& GetJobSample() const { return m_jobSample; }
    template<typename JobSampleT = JobSample>
    void SetJobSample(JobSampleT&& value) { m_jobSampleHasBeenSet = true; m_jobSample = std::forward<JobSampleT>(value); }
    template<typename JobSampleT = JobSample>
    DescribeJobRunResult& WithJobSample(JobSampleT&& value) { SetJobSample(std::forward<JobSampleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJobRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_attempt{0};
    bool m_attemptHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn{};
    bool m_completedOnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    int m_executionTime{0};
    bool m_executionTimeHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    ProfileConfiguration m_profileConfiguration;
    bool m_profileConfigurationHasBeenSet = false;

    Aws::Vector<ValidationConfiguration> m_validationConfigurations;
    bool m_validationConfigurationsHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    JobRunState m_state{JobRunState::NOT_SET};
    bool m_stateHasBeenSet = false;

    LogSubscription m_logSubscription{LogSubscription::NOT_SET};
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

    Aws::Utils::DateTime m_startedOn{};
    bool m_startedOnHasBeenSet = false;

    JobSample m_jobSample;
    bool m_jobSampleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
