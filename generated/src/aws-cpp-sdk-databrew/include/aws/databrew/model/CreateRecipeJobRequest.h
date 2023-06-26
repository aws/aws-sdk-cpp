/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/EncryptionMode.h>
#include <aws/databrew/model/LogSubscription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/RecipeReference.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/databrew/model/Output.h>
#include <aws/databrew/model/DataCatalogOutput.h>
#include <aws/databrew/model/DatabaseOutput.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class CreateRecipeJobRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API CreateRecipeJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRecipeJob"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the dataset that this job processes.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset that this job processes.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset that this job processes.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset that this job processes.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset that this job processes.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset that this job processes.</p>
     */
    inline CreateRecipeJobRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset that this job processes.</p>
     */
    inline CreateRecipeJobRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset that this job processes.</p>
     */
    inline CreateRecipeJobRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline CreateRecipeJobRequest& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline CreateRecipeJobRequest& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline CreateRecipeJobRequest& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline const EncryptionMode& GetEncryptionMode() const{ return m_encryptionMode; }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline void SetEncryptionMode(const EncryptionMode& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline void SetEncryptionMode(EncryptionMode&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline CreateRecipeJobRequest& WithEncryptionMode(const EncryptionMode& value) { SetEncryptionMode(value); return *this;}

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline CreateRecipeJobRequest& WithEncryptionMode(EncryptionMode&& value) { SetEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>A unique name for the job. Valid characters are alphanumeric (A-Z, a-z, 0-9),
     * hyphen (-), period (.), and space.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique name for the job. Valid characters are alphanumeric (A-Z, a-z, 0-9),
     * hyphen (-), period (.), and space.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique name for the job. Valid characters are alphanumeric (A-Z, a-z, 0-9),
     * hyphen (-), period (.), and space.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique name for the job. Valid characters are alphanumeric (A-Z, a-z, 0-9),
     * hyphen (-), period (.), and space.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique name for the job. Valid characters are alphanumeric (A-Z, a-z, 0-9),
     * hyphen (-), period (.), and space.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique name for the job. Valid characters are alphanumeric (A-Z, a-z, 0-9),
     * hyphen (-), period (.), and space.</p>
     */
    inline CreateRecipeJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique name for the job. Valid characters are alphanumeric (A-Z, a-z, 0-9),
     * hyphen (-), period (.), and space.</p>
     */
    inline CreateRecipeJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the job. Valid characters are alphanumeric (A-Z, a-z, 0-9),
     * hyphen (-), period (.), and space.</p>
     */
    inline CreateRecipeJobRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline const LogSubscription& GetLogSubscription() const{ return m_logSubscription; }

    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline bool LogSubscriptionHasBeenSet() const { return m_logSubscriptionHasBeenSet; }

    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline void SetLogSubscription(const LogSubscription& value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = value; }

    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline void SetLogSubscription(LogSubscription&& value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = std::move(value); }

    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline CreateRecipeJobRequest& WithLogSubscription(const LogSubscription& value) { SetLogSubscription(value); return *this;}

    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline CreateRecipeJobRequest& WithLogSubscription(LogSubscription&& value) { SetLogSubscription(std::move(value)); return *this;}


    /**
     * <p>The maximum number of nodes that DataBrew can consume when the job processes
     * data.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum number of nodes that DataBrew can consume when the job processes
     * data.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The maximum number of nodes that DataBrew can consume when the job processes
     * data.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum number of nodes that DataBrew can consume when the job processes
     * data.</p>
     */
    inline CreateRecipeJobRequest& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }

    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }

    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline CreateRecipeJobRequest& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}


    /**
     * <p>One or more artifacts that represent the output from running the job.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>One or more artifacts that represent the output from running the job.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>One or more artifacts that represent the output from running the job.</p>
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>One or more artifacts that represent the output from running the job.</p>
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>One or more artifacts that represent the output from running the job.</p>
     */
    inline CreateRecipeJobRequest& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * <p>One or more artifacts that represent the output from running the job.</p>
     */
    inline CreateRecipeJobRequest& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>One or more artifacts that represent the output from running the job.</p>
     */
    inline CreateRecipeJobRequest& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>One or more artifacts that represent the output from running the job.</p>
     */
    inline CreateRecipeJobRequest& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


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
    inline CreateRecipeJobRequest& WithDataCatalogOutputs(const Aws::Vector<DataCatalogOutput>& value) { SetDataCatalogOutputs(value); return *this;}

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline CreateRecipeJobRequest& WithDataCatalogOutputs(Aws::Vector<DataCatalogOutput>&& value) { SetDataCatalogOutputs(std::move(value)); return *this;}

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline CreateRecipeJobRequest& AddDataCatalogOutputs(const DataCatalogOutput& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs.push_back(value); return *this; }

    /**
     * <p>One or more artifacts that represent the Glue Data Catalog output from
     * running the job.</p>
     */
    inline CreateRecipeJobRequest& AddDataCatalogOutputs(DataCatalogOutput&& value) { m_dataCatalogOutputsHasBeenSet = true; m_dataCatalogOutputs.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write to. </p>
     */
    inline const Aws::Vector<DatabaseOutput>& GetDatabaseOutputs() const{ return m_databaseOutputs; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write to. </p>
     */
    inline bool DatabaseOutputsHasBeenSet() const { return m_databaseOutputsHasBeenSet; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write to. </p>
     */
    inline void SetDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs = value; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write to. </p>
     */
    inline void SetDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs = std::move(value); }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write to. </p>
     */
    inline CreateRecipeJobRequest& WithDatabaseOutputs(const Aws::Vector<DatabaseOutput>& value) { SetDatabaseOutputs(value); return *this;}

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write to. </p>
     */
    inline CreateRecipeJobRequest& WithDatabaseOutputs(Aws::Vector<DatabaseOutput>&& value) { SetDatabaseOutputs(std::move(value)); return *this;}

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write to. </p>
     */
    inline CreateRecipeJobRequest& AddDatabaseOutputs(const DatabaseOutput& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs.push_back(value); return *this; }

    /**
     * <p>Represents a list of JDBC database output objects which defines the output
     * destination for a DataBrew recipe job to write to. </p>
     */
    inline CreateRecipeJobRequest& AddDatabaseOutputs(DatabaseOutput&& value) { m_databaseOutputsHasBeenSet = true; m_databaseOutputs.push_back(std::move(value)); return *this; }


    /**
     * <p>Either the name of an existing project, or a combination of a recipe and a
     * dataset to associate with the recipe.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>Either the name of an existing project, or a combination of a recipe and a
     * dataset to associate with the recipe.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>Either the name of an existing project, or a combination of a recipe and a
     * dataset to associate with the recipe.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>Either the name of an existing project, or a combination of a recipe and a
     * dataset to associate with the recipe.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>Either the name of an existing project, or a combination of a recipe and a
     * dataset to associate with the recipe.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>Either the name of an existing project, or a combination of a recipe and a
     * dataset to associate with the recipe.</p>
     */
    inline CreateRecipeJobRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>Either the name of an existing project, or a combination of a recipe and a
     * dataset to associate with the recipe.</p>
     */
    inline CreateRecipeJobRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>Either the name of an existing project, or a combination of a recipe and a
     * dataset to associate with the recipe.</p>
     */
    inline CreateRecipeJobRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    
    inline const RecipeReference& GetRecipeReference() const{ return m_recipeReference; }

    
    inline bool RecipeReferenceHasBeenSet() const { return m_recipeReferenceHasBeenSet; }

    
    inline void SetRecipeReference(const RecipeReference& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = value; }

    
    inline void SetRecipeReference(RecipeReference&& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = std::move(value); }

    
    inline CreateRecipeJobRequest& WithRecipeReference(const RecipeReference& value) { SetRecipeReference(value); return *this;}

    
    inline CreateRecipeJobRequest& WithRecipeReference(RecipeReference&& value) { SetRecipeReference(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline CreateRecipeJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline CreateRecipeJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline CreateRecipeJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline CreateRecipeJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline CreateRecipeJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline CreateRecipeJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline CreateRecipeJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline CreateRecipeJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline CreateRecipeJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline CreateRecipeJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline CreateRecipeJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags to apply to this job.</p>
     */
    inline CreateRecipeJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline CreateRecipeJobRequest& WithTimeout(int value) { SetTimeout(value); return *this;}

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    EncryptionMode m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    LogSubscription m_logSubscription;
    bool m_logSubscriptionHasBeenSet = false;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    int m_maxRetries;
    bool m_maxRetriesHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::Vector<DataCatalogOutput> m_dataCatalogOutputs;
    bool m_dataCatalogOutputsHasBeenSet = false;

    Aws::Vector<DatabaseOutput> m_databaseOutputs;
    bool m_databaseOutputsHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    RecipeReference m_recipeReference;
    bool m_recipeReferenceHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
