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
    AWS_FRAUDDETECTOR_API CreateModelVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelVersion"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The model ID. </p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    CreateModelVersionRequest& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type.</p>
     */
    inline ModelTypeEnum GetModelType() const { return m_modelType; }
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }
    inline void SetModelType(ModelTypeEnum value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline CreateModelVersionRequest& WithModelType(ModelTypeEnum value) { SetModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline TrainingDataSourceEnum GetTrainingDataSource() const { return m_trainingDataSource; }
    inline bool TrainingDataSourceHasBeenSet() const { return m_trainingDataSourceHasBeenSet; }
    inline void SetTrainingDataSource(TrainingDataSourceEnum value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = value; }
    inline CreateModelVersionRequest& WithTrainingDataSource(TrainingDataSourceEnum value) { SetTrainingDataSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training data schema.</p>
     */
    inline const TrainingDataSchema& GetTrainingDataSchema() const { return m_trainingDataSchema; }
    inline bool TrainingDataSchemaHasBeenSet() const { return m_trainingDataSchemaHasBeenSet; }
    template<typename TrainingDataSchemaT = TrainingDataSchema>
    void SetTrainingDataSchema(TrainingDataSchemaT&& value) { m_trainingDataSchemaHasBeenSet = true; m_trainingDataSchema = std::forward<TrainingDataSchemaT>(value); }
    template<typename TrainingDataSchemaT = TrainingDataSchema>
    CreateModelVersionRequest& WithTrainingDataSchema(TrainingDataSchemaT&& value) { SetTrainingDataSchema(std::forward<TrainingDataSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the external events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline const ExternalEventsDetail& GetExternalEventsDetail() const { return m_externalEventsDetail; }
    inline bool ExternalEventsDetailHasBeenSet() const { return m_externalEventsDetailHasBeenSet; }
    template<typename ExternalEventsDetailT = ExternalEventsDetail>
    void SetExternalEventsDetail(ExternalEventsDetailT&& value) { m_externalEventsDetailHasBeenSet = true; m_externalEventsDetail = std::forward<ExternalEventsDetailT>(value); }
    template<typename ExternalEventsDetailT = ExternalEventsDetail>
    CreateModelVersionRequest& WithExternalEventsDetail(ExternalEventsDetailT&& value) { SetExternalEventsDetail(std::forward<ExternalEventsDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the ingested events data used for model version training. Required
     * if <code>trainingDataSource</code> is <code>INGESTED_EVENTS</code>.</p>
     */
    inline const IngestedEventsDetail& GetIngestedEventsDetail() const { return m_ingestedEventsDetail; }
    inline bool IngestedEventsDetailHasBeenSet() const { return m_ingestedEventsDetailHasBeenSet; }
    template<typename IngestedEventsDetailT = IngestedEventsDetail>
    void SetIngestedEventsDetail(IngestedEventsDetailT&& value) { m_ingestedEventsDetailHasBeenSet = true; m_ingestedEventsDetail = std::forward<IngestedEventsDetailT>(value); }
    template<typename IngestedEventsDetailT = IngestedEventsDetail>
    CreateModelVersionRequest& WithIngestedEventsDetail(IngestedEventsDetailT&& value) { SetIngestedEventsDetail(std::forward<IngestedEventsDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateModelVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateModelVersionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType{ModelTypeEnum::NOT_SET};
    bool m_modelTypeHasBeenSet = false;

    TrainingDataSourceEnum m_trainingDataSource{TrainingDataSourceEnum::NOT_SET};
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
