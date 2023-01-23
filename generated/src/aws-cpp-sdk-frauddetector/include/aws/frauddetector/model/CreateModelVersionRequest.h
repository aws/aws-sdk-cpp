/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelTypeEnum.h>
#include <aws/frauddetector/model/TrainingDataSourceEnum.h>
#include <aws/frauddetector/model/TrainingDataSchema.h>
#include <aws/frauddetector/model/ExternalEventsDetail.h>
#include <aws/frauddetector/model/IngestedEventsDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class CreateModelVersionRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API CreateModelVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelVersion"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The model ID. </p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The model ID. </p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>The model ID. </p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>The model ID. </p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>The model ID. </p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>The model ID. </p>
     */
    inline CreateModelVersionRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model ID. </p>
     */
    inline CreateModelVersionRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model ID. </p>
     */
    inline CreateModelVersionRequest& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The model type.</p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }

    /**
     * <p>The model type.</p>
     */
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }

    /**
     * <p>The model type.</p>
     */
    inline void SetModelType(const ModelTypeEnum& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }

    /**
     * <p>The model type.</p>
     */
    inline void SetModelType(ModelTypeEnum&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }

    /**
     * <p>The model type.</p>
     */
    inline CreateModelVersionRequest& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type.</p>
     */
    inline CreateModelVersionRequest& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline const TrainingDataSourceEnum& GetTrainingDataSource() const{ return m_trainingDataSource; }

    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline bool TrainingDataSourceHasBeenSet() const { return m_trainingDataSourceHasBeenSet; }

    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline void SetTrainingDataSource(const TrainingDataSourceEnum& value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = value; }

    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline void SetTrainingDataSource(TrainingDataSourceEnum&& value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = std::move(value); }

    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline CreateModelVersionRequest& WithTrainingDataSource(const TrainingDataSourceEnum& value) { SetTrainingDataSource(value); return *this;}

    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline CreateModelVersionRequest& WithTrainingDataSource(TrainingDataSourceEnum&& value) { SetTrainingDataSource(std::move(value)); return *this;}


    /**
     * <p>The training data schema.</p>
     */
    inline const TrainingDataSchema& GetTrainingDataSchema() const{ return m_trainingDataSchema; }

    /**
     * <p>The training data schema.</p>
     */
    inline bool TrainingDataSchemaHasBeenSet() const { return m_trainingDataSchemaHasBeenSet; }

    /**
     * <p>The training data schema.</p>
     */
    inline void SetTrainingDataSchema(const TrainingDataSchema& value) { m_trainingDataSchemaHasBeenSet = true; m_trainingDataSchema = value; }

    /**
     * <p>The training data schema.</p>
     */
    inline void SetTrainingDataSchema(TrainingDataSchema&& value) { m_trainingDataSchemaHasBeenSet = true; m_trainingDataSchema = std::move(value); }

    /**
     * <p>The training data schema.</p>
     */
    inline CreateModelVersionRequest& WithTrainingDataSchema(const TrainingDataSchema& value) { SetTrainingDataSchema(value); return *this;}

    /**
     * <p>The training data schema.</p>
     */
    inline CreateModelVersionRequest& WithTrainingDataSchema(TrainingDataSchema&& value) { SetTrainingDataSchema(std::move(value)); return *this;}


    /**
     * <p>Details of the external events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline const ExternalEventsDetail& GetExternalEventsDetail() const{ return m_externalEventsDetail; }

    /**
     * <p>Details of the external events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline bool ExternalEventsDetailHasBeenSet() const { return m_externalEventsDetailHasBeenSet; }

    /**
     * <p>Details of the external events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline void SetExternalEventsDetail(const ExternalEventsDetail& value) { m_externalEventsDetailHasBeenSet = true; m_externalEventsDetail = value; }

    /**
     * <p>Details of the external events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline void SetExternalEventsDetail(ExternalEventsDetail&& value) { m_externalEventsDetailHasBeenSet = true; m_externalEventsDetail = std::move(value); }

    /**
     * <p>Details of the external events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline CreateModelVersionRequest& WithExternalEventsDetail(const ExternalEventsDetail& value) { SetExternalEventsDetail(value); return *this;}

    /**
     * <p>Details of the external events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline CreateModelVersionRequest& WithExternalEventsDetail(ExternalEventsDetail&& value) { SetExternalEventsDetail(std::move(value)); return *this;}


    /**
     * <p>Details of the ingested events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>INGESTED_EVENTS</code>.</p>
     */
    inline const IngestedEventsDetail& GetIngestedEventsDetail() const{ return m_ingestedEventsDetail; }

    /**
     * <p>Details of the ingested events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>INGESTED_EVENTS</code>.</p>
     */
    inline bool IngestedEventsDetailHasBeenSet() const { return m_ingestedEventsDetailHasBeenSet; }

    /**
     * <p>Details of the ingested events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>INGESTED_EVENTS</code>.</p>
     */
    inline void SetIngestedEventsDetail(const IngestedEventsDetail& value) { m_ingestedEventsDetailHasBeenSet = true; m_ingestedEventsDetail = value; }

    /**
     * <p>Details of the ingested events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>INGESTED_EVENTS</code>.</p>
     */
    inline void SetIngestedEventsDetail(IngestedEventsDetail&& value) { m_ingestedEventsDetailHasBeenSet = true; m_ingestedEventsDetail = std::move(value); }

    /**
     * <p>Details of the ingested events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>INGESTED_EVENTS</code>.</p>
     */
    inline CreateModelVersionRequest& WithIngestedEventsDetail(const IngestedEventsDetail& value) { SetIngestedEventsDetail(value); return *this;}

    /**
     * <p>Details of the ingested events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>INGESTED_EVENTS</code>.</p>
     */
    inline CreateModelVersionRequest& WithIngestedEventsDetail(IngestedEventsDetail&& value) { SetIngestedEventsDetail(std::move(value)); return *this;}


    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateModelVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateModelVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateModelVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline CreateModelVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType;
    bool m_modelTypeHasBeenSet = false;

    TrainingDataSourceEnum m_trainingDataSource;
    bool m_trainingDataSourceHasBeenSet = false;

    TrainingDataSchema m_trainingDataSchema;
    bool m_trainingDataSchemaHasBeenSet = false;

    ExternalEventsDetail m_externalEventsDetail;
    bool m_externalEventsDetailHasBeenSet = false;

    IngestedEventsDetail m_ingestedEventsDetail;
    bool m_ingestedEventsDetailHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
