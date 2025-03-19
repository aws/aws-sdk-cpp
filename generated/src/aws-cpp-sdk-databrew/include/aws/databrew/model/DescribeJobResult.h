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
    AWS_GLUEDATABREW_API DescribeJobResult() = default;
    AWS_GLUEDATABREW_API DescribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DescribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time that the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    DescribeJobResult& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (user name) of the user associated with the creation of the
     * job.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    DescribeJobResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset that the job acts upon.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DescribeJobResult& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    DescribeJobResult& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline EncryptionMode GetEncryptionMode() const { return m_encryptionMode; }
    inline void SetEncryptionMode(EncryptionMode value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }
    inline DescribeJobResult& WithEncryptionMode(EncryptionMode value) { SetEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeJobResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type, which must be one of the following:</p> <ul> <li> <p>
     * <code>PROFILE</code> - The job analyzes the dataset to determine its size, data
     * types, data distribution, and more.</p> </li> <li> <p> <code>RECIPE</code> - The
     * job applies one or more transformations to a dataset.</p> </li> </ul>
     */
    inline JobType GetType() const { return m_type; }
    inline void SetType(JobType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeJobResult& WithType(JobType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (user name) of the user who last modified the job.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    DescribeJobResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    DescribeJobResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon CloudWatch logging is enabled for this job.</p>
     */
    inline LogSubscription GetLogSubscription() const { return m_logSubscription; }
    inline void SetLogSubscription(LogSubscription value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = value; }
    inline DescribeJobResult& WithLogSubscription(LogSubscription value) { SetLogSubscription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of compute nodes that DataBrew can consume when the job
     * processes data.</p>
     */
    inline int GetMaxCapacity() const { return m_maxCapacity; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline DescribeJobResult& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline int GetMaxRetries() const { return m_maxRetries; }
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline DescribeJobResult& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more artifacts that represent the output from running the job.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const { return m_outputs; }
    template<typename OutputsT = Aws::Vector<Output>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<Output>>
    DescribeJobResult& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = Output>
    DescribeJobResult& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
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
    DescribeJobResult& WithDataCatalogOutputs(DataCatalogOutputsT&& value) { SetDataCatalogOutputs(std::forward<DataCatalogOutputsT>(value)); return *this;}
    template<typename DataCatalogOutputsT = DataCatalogOutput>
    DescribeJobResult& AddDataCatalogOutputs(DataCatalogOutputsT&& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs.emplace_back(std::forward<DataCatalogOutputsT>(value)); return *this; }
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
    DescribeJobResult& WithDatabaseOutputs(DatabaseOutputsT&& value) { SetDatabaseOutputs(std::forward<DatabaseOutputsT>(value)); return *this;}
    template<typename DatabaseOutputsT = DatabaseOutput>
    DescribeJobResult& AddDatabaseOutputs(DatabaseOutputsT&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs.emplace_back(std::forward<DatabaseOutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DataBrew project associated with this job.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    DescribeJobResult& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
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
    DescribeJobResult& WithProfileConfiguration(ProfileConfigurationT&& value) { SetProfileConfiguration(std::forward<ProfileConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline const Aws::Vector<ValidationConfiguration>& GetValidationConfigurations() const { return m_validationConfigurations; }
    template<typename ValidationConfigurationsT = Aws::Vector<ValidationConfiguration>>
    void SetValidationConfigurations(ValidationConfigurationsT&& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations = std::forward<ValidationConfigurationsT>(value); }
    template<typename ValidationConfigurationsT = Aws::Vector<ValidationConfiguration>>
    DescribeJobResult& WithValidationConfigurations(ValidationConfigurationsT&& value) { SetValidationConfigurations(std::forward<ValidationConfigurationsT>(value)); return *this;}
    template<typename ValidationConfigurationsT = ValidationConfiguration>
    DescribeJobResult& AddValidationConfigurations(ValidationConfigurationsT&& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations.emplace_back(std::forward<ValidationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const RecipeReference& GetRecipeReference() const { return m_recipeReference; }
    template<typename RecipeReferenceT = RecipeReference>
    void SetRecipeReference(RecipeReferenceT&& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = std::forward<RecipeReferenceT>(value); }
    template<typename RecipeReferenceT = RecipeReference>
    DescribeJobResult& WithRecipeReference(RecipeReferenceT&& value) { SetRecipeReference(std::forward<RecipeReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    DescribeJobResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Identity and Access Management (IAM) role to be assumed when
     * DataBrew runs the job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata tags associated with this job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline DescribeJobResult& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sample configuration for profile jobs only. Determines the number of rows on
     * which the profile job will be executed.</p>
     */
    inline const JobSample& GetJobSample() const { return m_jobSample; }
    template<typename JobSampleT = JobSample>
    void SetJobSample(JobSampleT&& value) { m_jobSampleHasBeenSet = true; m_jobSample = std::forward<JobSampleT>(value); }
    template<typename JobSampleT = JobSample>
    DescribeJobResult& WithJobSample(JobSampleT&& value) { SetJobSample(std::forward<JobSampleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    EncryptionMode m_encryptionMode{EncryptionMode::NOT_SET};
    bool m_encryptionModeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    JobType m_type{JobType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    LogSubscription m_logSubscription{LogSubscription::NOT_SET};
    bool m_logSubscriptionHasBeenSet = false;

    int m_maxCapacity{0};
    bool m_maxCapacityHasBeenSet = false;

    int m_maxRetries{0};
    bool m_maxRetriesHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::Vector<DataCatalogOutput> m_dataCatalogOutputs;
    bool m_dataCatalogOutputsHasBeenSet = false;

    Aws::Vector<DatabaseOutput> m_databaseOutputs;
    bool m_databaseOutputsHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    ProfileConfiguration m_profileConfiguration;
    bool m_profileConfigurationHasBeenSet = false;

    Aws::Vector<ValidationConfiguration> m_validationConfigurations;
    bool m_validationConfigurationsHasBeenSet = false;

    RecipeReference m_recipeReference;
    bool m_recipeReferenceHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    JobSample m_jobSample;
    bool m_jobSampleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
