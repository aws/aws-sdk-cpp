/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/EncryptionMode.h>
#include <aws/databrew/model/JobType.h>
#include <aws/databrew/model/LogSubscription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/ProfileConfiguration.h>
#include <aws/databrew/model/RecipeReference.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/databrew/model/JobSample.h>
#include <aws/databrew/model/Output.h>
#include <aws/databrew/model/DataCatalogOutput.h>
#include <aws/databrew/model/DatabaseOutput.h>
#include <aws/databrew/model/ValidationConfiguration.h>
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
  class DescribeJobResult
  {
  public:
    AWS_GLUEDATABREW_API DescribeJobResult();
    AWS_GLUEDATABREW_API DescribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DescribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time that the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDate = value; }
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDate = std::move(value); }
    inline DescribeJobResult& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}
    inline DescribeJobResult& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (user name) of the user associated with the creation of the
     * job.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline DescribeJobResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline DescribeJobResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline DescribeJobResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset that the job acts upon.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetName.assign(value); }
    inline DescribeJobResult& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline DescribeJobResult& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline DescribeJobResult& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArn.assign(value); }
    inline DescribeJobResult& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline DescribeJobResult& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline DescribeJobResult& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline const EncryptionMode& GetEncryptionMode() const{ return m_encryptionMode; }
    inline void SetEncryptionMode(const EncryptionMode& value) { m_encryptionMode = value; }
    inline void SetEncryptionMode(EncryptionMode&& value) { m_encryptionMode = std::move(value); }
    inline DescribeJobResult& WithEncryptionMode(const EncryptionMode& value) { SetEncryptionMode(value); return *this;}
    inline DescribeJobResult& WithEncryptionMode(EncryptionMode&& value) { SetEncryptionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeJobResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type, which must be one of the following:</p> <ul> <li> <p>
     * <code>PROFILE</code> - The job analyzes the dataset to determine its size, data
     * types, data distribution, and more.</p> </li> <li> <p> <code>RECIPE</code> - The
     * job applies one or more transformations to a dataset.</p> </li> </ul>
     */
    inline const JobType& GetType() const{ return m_type; }
    inline void SetType(const JobType& value) { m_type = value; }
    inline void SetType(JobType&& value) { m_type = std::move(value); }
    inline DescribeJobResult& WithType(const JobType& value) { SetType(value); return *this;}
    inline DescribeJobResult& WithType(JobType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (user name) of the user who last modified the job.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedBy = std::move(value); }
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedBy.assign(value); }
    inline DescribeJobResult& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeJobResult& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline DescribeJobResult& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline DescribeJobResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline DescribeJobResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon CloudWatch logging is enabled for this job.</p>
     */
    inline const LogSubscription& GetLogSubscription() const{ return m_logSubscription; }
    inline void SetLogSubscription(const LogSubscription& value) { m_logSubscription = value; }
    inline void SetLogSubscription(LogSubscription&& value) { m_logSubscription = std::move(value); }
    inline DescribeJobResult& WithLogSubscription(const LogSubscription& value) { SetLogSubscription(value); return *this;}
    inline DescribeJobResult& WithLogSubscription(LogSubscription&& value) { SetLogSubscription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of compute nodes that DataBrew can consume when the job
     * processes data.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }
    inline void SetMaxCapacity(int value) { m_maxCapacity = value; }
    inline DescribeJobResult& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }
    inline void SetMaxRetries(int value) { m_maxRetries = value; }
    inline DescribeJobResult& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more artifacts that represent the output from running the job.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputs = value; }
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputs = std::move(value); }
    inline DescribeJobResult& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}
    inline DescribeJobResult& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}
    inline DescribeJobResult& AddOutputs(const Output& value) { m_outputs.push_back(value); return *this; }
    inline DescribeJobResult& AddOutputs(Output&& value) { m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline const Aws::Vector<DataCatalogOutput>& GetDataCatalogOutputs() const{ return m_dataCatalogOutputs; }
    inline void SetDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { m_dataCatalogOutputs = value; }
    inline void SetDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { m_dataCatalogOutputs = std::move(value); }
    inline DescribeJobResult& WithDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { SetDataCatalogOutputs(value); return *this;}
    inline DescribeJobResult& WithDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { SetDataCatalogOutputs(std::move(value)); return *this;}
    inline DescribeJobResult& AddDataCatalogOutputs(const DataCatalogOutput& value) { m_dataCatalogOutputs.push_back(value); return *this; }
    inline DescribeJobResult& AddDataCatalogOutputs(DataCatalogOutput&& value) { m_dataCatalogOutputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write into.</p>
     */
    inline const Aws::Vector<DatabaseOutput>& GetDatabaseOutputs() const{ return m_databaseOutputs; }
    inline void SetDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { m_databaseOutputs = value; }
    inline void SetDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { m_databaseOutputs = std::move(value); }
    inline DescribeJobResult& WithDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { SetDatabaseOutputs(value); return *this;}
    inline DescribeJobResult& WithDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { SetDatabaseOutputs(std::move(value)); return *this;}
    inline DescribeJobResult& AddDatabaseOutputs(const DatabaseOutput& value) { m_databaseOutputs.push_back(value); return *this; }
    inline DescribeJobResult& AddDatabaseOutputs(DatabaseOutput&& value) { m_databaseOutputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DataBrew project associated with this job.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }
    inline DescribeJobResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DescribeJobResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DescribeJobResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline const ProfileConfiguration& GetProfileConfiguration() const{ return m_profileConfiguration; }
    inline void SetProfileConfiguration(const ProfileConfiguration& value) { m_profileConfiguration = value; }
    inline void SetProfileConfiguration(ProfileConfiguration&& value) { m_profileConfiguration = std::move(value); }
    inline DescribeJobResult& WithProfileConfiguration(const ProfileConfiguration& value) { SetProfileConfiguration(value); return *this;}
    inline DescribeJobResult& WithProfileConfiguration(ProfileConfiguration&& value) { SetProfileConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline const Aws::Vector<ValidationConfiguration>& GetValidationConfigurations() const{ return m_validationConfigurations; }
    inline void SetValidationConfigurations(const Aws::Vector<ValidationConfiguration>& value) { m_validationConfigurations = value; }
    inline void SetValidationConfigurations(Aws::Vector<ValidationConfiguration>&& value) { m_validationConfigurations = std::move(value); }
    inline DescribeJobResult& WithValidationConfigurations(const Aws::Vector<ValidationConfiguration>& value) { SetValidationConfigurations(value); return *this;}
    inline DescribeJobResult& WithValidationConfigurations(Aws::Vector<ValidationConfiguration>&& value) { SetValidationConfigurations(std::move(value)); return *this;}
    inline DescribeJobResult& AddValidationConfigurations(const ValidationConfiguration& value) { m_validationConfigurations.push_back(value); return *this; }
    inline DescribeJobResult& AddValidationConfigurations(ValidationConfiguration&& value) { m_validationConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const RecipeReference& GetRecipeReference() const{ return m_recipeReference; }
    inline void SetRecipeReference(const RecipeReference& value) { m_recipeReference = value; }
    inline void SetRecipeReference(RecipeReference&& value) { m_recipeReference = std::move(value); }
    inline DescribeJobResult& WithRecipeReference(const RecipeReference& value) { SetRecipeReference(value); return *this;}
    inline DescribeJobResult& WithRecipeReference(RecipeReference&& value) { SetRecipeReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline DescribeJobResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline DescribeJobResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline DescribeJobResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Identity and Access Management (IAM) role to be assumed when
     * DataBrew runs the job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata tags associated with this job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }
    inline void SetTimeout(int value) { m_timeout = value; }
    inline DescribeJobResult& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sample configuration for profile jobs only. Determines the number of rows on
     * which the profile job will be executed.</p>
     */
    inline const JobSample& GetJobSample() const{ return m_jobSample; }
    inline void SetJobSample(const JobSample& value) { m_jobSample = value; }
    inline void SetJobSample(JobSample&& value) { m_jobSample = std::move(value); }
    inline DescribeJobResult& WithJobSample(const JobSample& value) { SetJobSample(value); return *this;}
    inline DescribeJobResult& WithJobSample(JobSample&& value) { SetJobSample(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createDate;

    Aws::String m_createdBy;

    Aws::String m_datasetName;

    Aws::String m_encryptionKeyArn;

    EncryptionMode m_encryptionMode;

    Aws::String m_name;

    JobType m_type;

    Aws::String m_lastModifiedBy;

    Aws::Utils::DateTime m_lastModifiedDate;

    LogSubscription m_logSubscription;

    int m_maxCapacity;

    int m_maxRetries;

    Aws::Vector<Output> m_outputs;

    Aws::Vector<DataCatalogOutput> m_dataCatalogOutputs;

    Aws::Vector<DatabaseOutput> m_databaseOutputs;

    Aws::String m_projectName;

    ProfileConfiguration m_profileConfiguration;

    Aws::Vector<ValidationConfiguration> m_validationConfigurations;

    RecipeReference m_recipeReference;

    Aws::String m_resourceArn;

    Aws::String m_roleArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    int m_timeout;

    JobSample m_jobSample;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
