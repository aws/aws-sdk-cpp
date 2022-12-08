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
    AWS_GLUEDATABREW_API DescribeJobRunResult();
    AWS_GLUEDATABREW_API DescribeJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DescribeJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of times that DataBrew has attempted to run the job.</p>
     */
    inline int GetAttempt() const{ return m_attempt; }

    /**
     * <p>The number of times that DataBrew has attempted to run the job.</p>
     */
    inline void SetAttempt(int value) { m_attempt = value; }

    /**
     * <p>The number of times that DataBrew has attempted to run the job.</p>
     */
    inline DescribeJobRunResult& WithAttempt(int value) { SetAttempt(value); return *this;}


    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOn = value; }

    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOn = std::move(value); }

    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline DescribeJobRunResult& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The date and time when the job completed processing.</p>
     */
    inline DescribeJobRunResult& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetName = value; }

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline DescribeJobRunResult& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline DescribeJobRunResult& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset for the job to process.</p>
     */
    inline DescribeJobRunResult& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline DescribeJobRunResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline DescribeJobRunResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message indicating an error (if any) that was encountered when the job
     * ran.</p>
     */
    inline DescribeJobRunResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The amount of time, in seconds, during which the job run consumed
     * resources.</p>
     */
    inline int GetExecutionTime() const{ return m_executionTime; }

    /**
     * <p>The amount of time, in seconds, during which the job run consumed
     * resources.</p>
     */
    inline void SetExecutionTime(int value) { m_executionTime = value; }

    /**
     * <p>The amount of time, in seconds, during which the job run consumed
     * resources.</p>
     */
    inline DescribeJobRunResult& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}


    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline DescribeJobRunResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline DescribeJobRunResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job being processed during this run.</p>
     */
    inline DescribeJobRunResult& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline const ProfileConfiguration& GetProfileConfiguration() const{ return m_profileConfiguration; }

    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline void SetProfileConfiguration(const ProfileConfiguration& value) { m_profileConfiguration = value; }

    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline void SetProfileConfiguration(ProfileConfiguration&& value) { m_profileConfiguration = std::move(value); }

    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline DescribeJobRunResult& WithProfileConfiguration(const ProfileConfiguration& value) { SetProfileConfiguration(value); return *this;}

    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline DescribeJobRunResult& WithProfileConfiguration(ProfileConfiguration&& value) { SetProfileConfiguration(std::move(value)); return *this;}


    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline const Aws::Vector<ValidationConfiguration>& GetValidationConfigurations() const{ return m_validationConfigurations; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline void SetValidationConfigurations(const Aws::Vector<ValidationConfiguration>& value) { m_validationConfigurations = value; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline void SetValidationConfigurations(Aws::Vector<ValidationConfiguration>&& value) { m_validationConfigurations = std::move(value); }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline DescribeJobRunResult& WithValidationConfigurations(const Aws::Vector<ValidationConfiguration>& value) { SetValidationConfigurations(value); return *this;}

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline DescribeJobRunResult& WithValidationConfigurations(Aws::Vector<ValidationConfiguration>&& value) { SetValidationConfigurations(std::move(value)); return *this;}

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline DescribeJobRunResult& AddValidationConfigurations(const ValidationConfiguration& value) { m_validationConfigurations.push_back(value); return *this; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline DescribeJobRunResult& AddValidationConfigurations(ValidationConfiguration&& value) { m_validationConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runId = value; }

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline void SetRunId(const char* value) { m_runId.assign(value); }

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline DescribeJobRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline DescribeJobRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the job run.</p>
     */
    inline DescribeJobRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline const JobRunState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline void SetState(const JobRunState& value) { m_state = value; }

    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline void SetState(JobRunState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline DescribeJobRunResult& WithState(const JobRunState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the job run entity itself.</p>
     */
    inline DescribeJobRunResult& WithState(JobRunState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline const LogSubscription& GetLogSubscription() const{ return m_logSubscription; }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline void SetLogSubscription(const LogSubscription& value) { m_logSubscription = value; }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline void SetLogSubscription(LogSubscription&& value) { m_logSubscription = std::move(value); }

    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline DescribeJobRunResult& WithLogSubscription(const LogSubscription& value) { SetLogSubscription(value); return *this;}

    /**
     * <p>The current status of Amazon CloudWatch logging for the job run.</p>
     */
    inline DescribeJobRunResult& WithLogSubscription(LogSubscription&& value) { SetLogSubscription(std::move(value)); return *this;}


    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupName = value; }

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupName = std::move(value); }

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupName.assign(value); }

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline DescribeJobRunResult& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline DescribeJobRunResult& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon CloudWatch log group, where the job writes diagnostic
     * messages when it runs.</p>
     */
    inline DescribeJobRunResult& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputs = value; }

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputs = std::move(value); }

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline DescribeJobRunResult& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline DescribeJobRunResult& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline DescribeJobRunResult& AddOutputs(const Output& value) { m_outputs.push_back(value); return *this; }

    /**
     * <p>One or more output artifacts from a job run.</p>
     */
    inline DescribeJobRunResult& AddOutputs(Output&& value) { m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline const Aws::Vector<DataCatalogOutput>& GetDataCatalogOutputs() const{ return m_dataCatalogOutputs; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline void SetDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { m_dataCatalogOutputs = value; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline void SetDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { m_dataCatalogOutputs = std::move(value); }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline DescribeJobRunResult& WithDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { SetDataCatalogOutputs(value); return *this;}

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline DescribeJobRunResult& WithDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { SetDataCatalogOutputs(std::move(value)); return *this;}

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline DescribeJobRunResult& AddDataCatalogOutputs(const DataCatalogOutput& value) { m_dataCatalogOutputs.push_back(value); return *this; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline DescribeJobRunResult& AddDataCatalogOutputs(DataCatalogOutput&& value) { m_dataCatalogOutputs.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline const Aws::Vector<DatabaseOutput>& GetDatabaseOutputs() const{ return m_databaseOutputs; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline void SetDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { m_databaseOutputs = value; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline void SetDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { m_databaseOutputs = std::move(value); }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline DescribeJobRunResult& WithDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { SetDatabaseOutputs(value); return *this;}

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline DescribeJobRunResult& WithDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { SetDatabaseOutputs(std::move(value)); return *this;}

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline DescribeJobRunResult& AddDatabaseOutputs(const DatabaseOutput& value) { m_databaseOutputs.push_back(value); return *this; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline DescribeJobRunResult& AddDatabaseOutputs(DatabaseOutput&& value) { m_databaseOutputs.push_back(std::move(value)); return *this; }


    
    inline const RecipeReference& GetRecipeReference() const{ return m_recipeReference; }

    
    inline void SetRecipeReference(const RecipeReference& value) { m_recipeReference = value; }

    
    inline void SetRecipeReference(RecipeReference&& value) { m_recipeReference = std::move(value); }

    
    inline DescribeJobRunResult& WithRecipeReference(const RecipeReference& value) { SetRecipeReference(value); return *this;}

    
    inline DescribeJobRunResult& WithRecipeReference(RecipeReference&& value) { SetRecipeReference(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who started the job run.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who started the job run.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who started the job run.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who started the job run.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who started the job run.</p>
     */
    inline DescribeJobRunResult& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who started the job run.</p>
     */
    inline DescribeJobRunResult& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who started the job run.</p>
     */
    inline DescribeJobRunResult& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The date and time when the job run began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time when the job run began.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOn = value; }

    /**
     * <p>The date and time when the job run began.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOn = std::move(value); }

    /**
     * <p>The date and time when the job run began.</p>
     */
    inline DescribeJobRunResult& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The date and time when the job run began.</p>
     */
    inline DescribeJobRunResult& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>Sample configuration for profile jobs only. Determines the number of rows on
     * which the profile job will be executed. If a JobSample value is not provided,
     * the default value will be used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20000 for the size parameter.</p>
     */
    inline const JobSample& GetJobSample() const{ return m_jobSample; }

    /**
     * <p>Sample configuration for profile jobs only. Determines the number of rows on
     * which the profile job will be executed. If a JobSample value is not provided,
     * the default value will be used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20000 for the size parameter.</p>
     */
    inline void SetJobSample(const JobSample& value) { m_jobSample = value; }

    /**
     * <p>Sample configuration for profile jobs only. Determines the number of rows on
     * which the profile job will be executed. If a JobSample value is not provided,
     * the default value will be used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20000 for the size parameter.</p>
     */
    inline void SetJobSample(JobSample&& value) { m_jobSample = std::move(value); }

    /**
     * <p>Sample configuration for profile jobs only. Determines the number of rows on
     * which the profile job will be executed. If a JobSample value is not provided,
     * the default value will be used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20000 for the size parameter.</p>
     */
    inline DescribeJobRunResult& WithJobSample(const JobSample& value) { SetJobSample(value); return *this;}

    /**
     * <p>Sample configuration for profile jobs only. Determines the number of rows on
     * which the profile job will be executed. If a JobSample value is not provided,
     * the default value will be used. The default value is CUSTOM_ROWS for the mode
     * parameter and 20000 for the size parameter.</p>
     */
    inline DescribeJobRunResult& WithJobSample(JobSample&& value) { SetJobSample(std::move(value)); return *this;}

  private:

    int m_attempt;

    Aws::Utils::DateTime m_completedOn;

    Aws::String m_datasetName;

    Aws::String m_errorMessage;

    int m_executionTime;

    Aws::String m_jobName;

    ProfileConfiguration m_profileConfiguration;

    Aws::Vector<ValidationConfiguration> m_validationConfigurations;

    Aws::String m_runId;

    JobRunState m_state;

    LogSubscription m_logSubscription;

    Aws::String m_logGroupName;

    Aws::Vector<Output> m_outputs;

    Aws::Vector<DataCatalogOutput> m_dataCatalogOutputs;

    Aws::Vector<DatabaseOutput> m_databaseOutputs;

    RecipeReference m_recipeReference;

    Aws::String m_startedBy;

    Aws::Utils::DateTime m_startedOn;

    JobSample m_jobSample;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
