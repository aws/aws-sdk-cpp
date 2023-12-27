﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/LabelsInputConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/InferenceDataImportStrategy.h>
#include <aws/lookoutequipment/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ImportModelVersionRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ImportModelVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportModelVersion"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the model version to import.</p>
     */
    inline const Aws::String& GetSourceModelVersionArn() const{ return m_sourceModelVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version to import.</p>
     */
    inline bool SourceModelVersionArnHasBeenSet() const { return m_sourceModelVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version to import.</p>
     */
    inline void SetSourceModelVersionArn(const Aws::String& value) { m_sourceModelVersionArnHasBeenSet = true; m_sourceModelVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version to import.</p>
     */
    inline void SetSourceModelVersionArn(Aws::String&& value) { m_sourceModelVersionArnHasBeenSet = true; m_sourceModelVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version to import.</p>
     */
    inline void SetSourceModelVersionArn(const char* value) { m_sourceModelVersionArnHasBeenSet = true; m_sourceModelVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version to import.</p>
     */
    inline ImportModelVersionRequest& WithSourceModelVersionArn(const Aws::String& value) { SetSourceModelVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version to import.</p>
     */
    inline ImportModelVersionRequest& WithSourceModelVersionArn(Aws::String&& value) { SetSourceModelVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version to import.</p>
     */
    inline ImportModelVersionRequest& WithSourceModelVersionArn(const char* value) { SetSourceModelVersionArn(value); return *this;}


    /**
     * <p>The name for the machine learning model to be created. If the model already
     * exists, Amazon Lookout for Equipment creates a new version. If you do not
     * specify this field, it is filled with the name of the source model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name for the machine learning model to be created. If the model already
     * exists, Amazon Lookout for Equipment creates a new version. If you do not
     * specify this field, it is filled with the name of the source model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name for the machine learning model to be created. If the model already
     * exists, Amazon Lookout for Equipment creates a new version. If you do not
     * specify this field, it is filled with the name of the source model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name for the machine learning model to be created. If the model already
     * exists, Amazon Lookout for Equipment creates a new version. If you do not
     * specify this field, it is filled with the name of the source model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name for the machine learning model to be created. If the model already
     * exists, Amazon Lookout for Equipment creates a new version. If you do not
     * specify this field, it is filled with the name of the source model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name for the machine learning model to be created. If the model already
     * exists, Amazon Lookout for Equipment creates a new version. If you do not
     * specify this field, it is filled with the name of the source model.</p>
     */
    inline ImportModelVersionRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name for the machine learning model to be created. If the model already
     * exists, Amazon Lookout for Equipment creates a new version. If you do not
     * specify this field, it is filled with the name of the source model.</p>
     */
    inline ImportModelVersionRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name for the machine learning model to be created. If the model already
     * exists, Amazon Lookout for Equipment creates a new version. If you do not
     * specify this field, it is filled with the name of the source model.</p>
     */
    inline ImportModelVersionRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The name of the dataset for the machine learning model being imported. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset for the machine learning model being imported. </p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset for the machine learning model being imported. </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset for the machine learning model being imported. </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset for the machine learning model being imported. </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset for the machine learning model being imported. </p>
     */
    inline ImportModelVersionRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset for the machine learning model being imported. </p>
     */
    inline ImportModelVersionRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset for the machine learning model being imported. </p>
     */
    inline ImportModelVersionRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    
    inline const LabelsInputConfiguration& GetLabelsInputConfiguration() const{ return m_labelsInputConfiguration; }

    
    inline bool LabelsInputConfigurationHasBeenSet() const { return m_labelsInputConfigurationHasBeenSet; }

    
    inline void SetLabelsInputConfiguration(const LabelsInputConfiguration& value) { m_labelsInputConfigurationHasBeenSet = true; m_labelsInputConfiguration = value; }

    
    inline void SetLabelsInputConfiguration(LabelsInputConfiguration&& value) { m_labelsInputConfigurationHasBeenSet = true; m_labelsInputConfiguration = std::move(value); }

    
    inline ImportModelVersionRequest& WithLabelsInputConfiguration(const LabelsInputConfiguration& value) { SetLabelsInputConfiguration(value); return *this;}

    
    inline ImportModelVersionRequest& WithLabelsInputConfiguration(LabelsInputConfiguration&& value) { SetLabelsInputConfiguration(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline ImportModelVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline ImportModelVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline ImportModelVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the machine learning model. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the machine learning model. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the machine learning model. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the machine learning model. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the machine learning model. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the machine learning model. </p>
     */
    inline ImportModelVersionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the machine learning model. </p>
     */
    inline ImportModelVersionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used to create the machine learning model. </p>
     */
    inline ImportModelVersionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Provides the identifier of the KMS key key used to encrypt model data by
     * Amazon Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const{ return m_serverSideKmsKeyId; }

    /**
     * <p>Provides the identifier of the KMS key key used to encrypt model data by
     * Amazon Lookout for Equipment. </p>
     */
    inline bool ServerSideKmsKeyIdHasBeenSet() const { return m_serverSideKmsKeyIdHasBeenSet; }

    /**
     * <p>Provides the identifier of the KMS key key used to encrypt model data by
     * Amazon Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const Aws::String& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = value; }

    /**
     * <p>Provides the identifier of the KMS key key used to encrypt model data by
     * Amazon Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(Aws::String&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::move(value); }

    /**
     * <p>Provides the identifier of the KMS key key used to encrypt model data by
     * Amazon Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const char* value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId.assign(value); }

    /**
     * <p>Provides the identifier of the KMS key key used to encrypt model data by
     * Amazon Lookout for Equipment. </p>
     */
    inline ImportModelVersionRequest& WithServerSideKmsKeyId(const Aws::String& value) { SetServerSideKmsKeyId(value); return *this;}

    /**
     * <p>Provides the identifier of the KMS key key used to encrypt model data by
     * Amazon Lookout for Equipment. </p>
     */
    inline ImportModelVersionRequest& WithServerSideKmsKeyId(Aws::String&& value) { SetServerSideKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier of the KMS key key used to encrypt model data by
     * Amazon Lookout for Equipment. </p>
     */
    inline ImportModelVersionRequest& WithServerSideKmsKeyId(const char* value) { SetServerSideKmsKeyId(value); return *this;}


    /**
     * <p>The tags associated with the machine learning model to be created. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the machine learning model to be created. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the machine learning model to be created. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the machine learning model to be created. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the machine learning model to be created. </p>
     */
    inline ImportModelVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the machine learning model to be created. </p>
     */
    inline ImportModelVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the machine learning model to be created. </p>
     */
    inline ImportModelVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the machine learning model to be created. </p>
     */
    inline ImportModelVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates how to import the accumulated inference data when a model version
     * is imported. The possible values are as follows:</p> <ul> <li> <p>NO_IMPORT –
     * Don't import the data.</p> </li> <li> <p>ADD_WHEN_EMPTY – Only import the data
     * from the source model if there is no existing data in the target model.</p>
     * </li> <li> <p>OVERWRITE – Import the data from the source model and overwrite
     * the existing data in the target model.</p> </li> </ul>
     */
    inline const InferenceDataImportStrategy& GetInferenceDataImportStrategy() const{ return m_inferenceDataImportStrategy; }

    /**
     * <p>Indicates how to import the accumulated inference data when a model version
     * is imported. The possible values are as follows:</p> <ul> <li> <p>NO_IMPORT –
     * Don't import the data.</p> </li> <li> <p>ADD_WHEN_EMPTY – Only import the data
     * from the source model if there is no existing data in the target model.</p>
     * </li> <li> <p>OVERWRITE – Import the data from the source model and overwrite
     * the existing data in the target model.</p> </li> </ul>
     */
    inline bool InferenceDataImportStrategyHasBeenSet() const { return m_inferenceDataImportStrategyHasBeenSet; }

    /**
     * <p>Indicates how to import the accumulated inference data when a model version
     * is imported. The possible values are as follows:</p> <ul> <li> <p>NO_IMPORT –
     * Don't import the data.</p> </li> <li> <p>ADD_WHEN_EMPTY – Only import the data
     * from the source model if there is no existing data in the target model.</p>
     * </li> <li> <p>OVERWRITE – Import the data from the source model and overwrite
     * the existing data in the target model.</p> </li> </ul>
     */
    inline void SetInferenceDataImportStrategy(const InferenceDataImportStrategy& value) { m_inferenceDataImportStrategyHasBeenSet = true; m_inferenceDataImportStrategy = value; }

    /**
     * <p>Indicates how to import the accumulated inference data when a model version
     * is imported. The possible values are as follows:</p> <ul> <li> <p>NO_IMPORT –
     * Don't import the data.</p> </li> <li> <p>ADD_WHEN_EMPTY – Only import the data
     * from the source model if there is no existing data in the target model.</p>
     * </li> <li> <p>OVERWRITE – Import the data from the source model and overwrite
     * the existing data in the target model.</p> </li> </ul>
     */
    inline void SetInferenceDataImportStrategy(InferenceDataImportStrategy&& value) { m_inferenceDataImportStrategyHasBeenSet = true; m_inferenceDataImportStrategy = std::move(value); }

    /**
     * <p>Indicates how to import the accumulated inference data when a model version
     * is imported. The possible values are as follows:</p> <ul> <li> <p>NO_IMPORT –
     * Don't import the data.</p> </li> <li> <p>ADD_WHEN_EMPTY – Only import the data
     * from the source model if there is no existing data in the target model.</p>
     * </li> <li> <p>OVERWRITE – Import the data from the source model and overwrite
     * the existing data in the target model.</p> </li> </ul>
     */
    inline ImportModelVersionRequest& WithInferenceDataImportStrategy(const InferenceDataImportStrategy& value) { SetInferenceDataImportStrategy(value); return *this;}

    /**
     * <p>Indicates how to import the accumulated inference data when a model version
     * is imported. The possible values are as follows:</p> <ul> <li> <p>NO_IMPORT –
     * Don't import the data.</p> </li> <li> <p>ADD_WHEN_EMPTY – Only import the data
     * from the source model if there is no existing data in the target model.</p>
     * </li> <li> <p>OVERWRITE – Import the data from the source model and overwrite
     * the existing data in the target model.</p> </li> </ul>
     */
    inline ImportModelVersionRequest& WithInferenceDataImportStrategy(InferenceDataImportStrategy&& value) { SetInferenceDataImportStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_sourceModelVersionArn;
    bool m_sourceModelVersionArnHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    LabelsInputConfiguration m_labelsInputConfiguration;
    bool m_labelsInputConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_serverSideKmsKeyId;
    bool m_serverSideKmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    InferenceDataImportStrategy m_inferenceDataImportStrategy;
    bool m_inferenceDataImportStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
