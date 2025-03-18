/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelTypeEnum.h>
#include <aws/frauddetector/model/TrainingDataSourceEnum.h>
#include <aws/frauddetector/model/TrainingDataSchema.h>
#include <aws/frauddetector/model/ExternalEventsDetail.h>
#include <aws/frauddetector/model/IngestedEventsDetail.h>
#include <aws/frauddetector/model/TrainingResult.h>
#include <aws/frauddetector/model/TrainingResultV2.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The details of the model version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelVersionDetail">AWS
   * API Reference</a></p>
   */
  class ModelVersionDetail
  {
  public:
    AWS_FRAUDDETECTOR_API ModelVersionDetail() = default;
    AWS_FRAUDDETECTOR_API ModelVersionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelVersionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    ModelVersionDetail& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type.</p>
     */
    inline ModelTypeEnum GetModelType() const { return m_modelType; }
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }
    inline void SetModelType(ModelTypeEnum value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline ModelVersionDetail& WithModelType(ModelTypeEnum value) { SetModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version number.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const { return m_modelVersionNumber; }
    inline bool ModelVersionNumberHasBeenSet() const { return m_modelVersionNumberHasBeenSet; }
    template<typename ModelVersionNumberT = Aws::String>
    void SetModelVersionNumber(ModelVersionNumberT&& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = std::forward<ModelVersionNumberT>(value); }
    template<typename ModelVersionNumberT = Aws::String>
    ModelVersionDetail& WithModelVersionNumber(ModelVersionNumberT&& value) { SetModelVersionNumber(std::forward<ModelVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model version.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ModelVersionDetail& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version training data source.</p>
     */
    inline TrainingDataSourceEnum GetTrainingDataSource() const { return m_trainingDataSource; }
    inline bool TrainingDataSourceHasBeenSet() const { return m_trainingDataSourceHasBeenSet; }
    inline void SetTrainingDataSource(TrainingDataSourceEnum value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = value; }
    inline ModelVersionDetail& WithTrainingDataSource(TrainingDataSourceEnum value) { SetTrainingDataSource(value); return *this;}
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
    ModelVersionDetail& WithTrainingDataSchema(TrainingDataSchemaT&& value) { SetTrainingDataSchema(std::forward<TrainingDataSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline const ExternalEventsDetail& GetExternalEventsDetail() const { return m_externalEventsDetail; }
    inline bool ExternalEventsDetailHasBeenSet() const { return m_externalEventsDetailHasBeenSet; }
    template<typename ExternalEventsDetailT = ExternalEventsDetail>
    void SetExternalEventsDetail(ExternalEventsDetailT&& value) { m_externalEventsDetailHasBeenSet = true; m_externalEventsDetail = std::forward<ExternalEventsDetailT>(value); }
    template<typename ExternalEventsDetailT = ExternalEventsDetail>
    ModelVersionDetail& WithExternalEventsDetail(ExternalEventsDetailT&& value) { SetExternalEventsDetail(std::forward<ExternalEventsDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ingested events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline const IngestedEventsDetail& GetIngestedEventsDetail() const { return m_ingestedEventsDetail; }
    inline bool IngestedEventsDetailHasBeenSet() const { return m_ingestedEventsDetailHasBeenSet; }
    template<typename IngestedEventsDetailT = IngestedEventsDetail>
    void SetIngestedEventsDetail(IngestedEventsDetailT&& value) { m_ingestedEventsDetailHasBeenSet = true; m_ingestedEventsDetail = std::forward<IngestedEventsDetailT>(value); }
    template<typename IngestedEventsDetailT = IngestedEventsDetail>
    ModelVersionDetail& WithIngestedEventsDetail(IngestedEventsDetailT&& value) { SetIngestedEventsDetail(std::forward<IngestedEventsDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training results.</p>
     */
    inline const TrainingResult& GetTrainingResult() const { return m_trainingResult; }
    inline bool TrainingResultHasBeenSet() const { return m_trainingResultHasBeenSet; }
    template<typename TrainingResultT = TrainingResult>
    void SetTrainingResult(TrainingResultT&& value) { m_trainingResultHasBeenSet = true; m_trainingResult = std::forward<TrainingResultT>(value); }
    template<typename TrainingResultT = TrainingResult>
    ModelVersionDetail& WithTrainingResult(TrainingResultT&& value) { SetTrainingResult(std::forward<TrainingResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::String>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::String>
    ModelVersionDetail& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::String>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::String>
    ModelVersionDetail& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ModelVersionDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The training result details. The details include the relative importance of
     * the variables. </p>
     */
    inline const TrainingResultV2& GetTrainingResultV2() const { return m_trainingResultV2; }
    inline bool TrainingResultV2HasBeenSet() const { return m_trainingResultV2HasBeenSet; }
    template<typename TrainingResultV2T = TrainingResultV2>
    void SetTrainingResultV2(TrainingResultV2T&& value) { m_trainingResultV2HasBeenSet = true; m_trainingResultV2 = std::forward<TrainingResultV2T>(value); }
    template<typename TrainingResultV2T = TrainingResultV2>
    ModelVersionDetail& WithTrainingResultV2(TrainingResultV2T&& value) { SetTrainingResultV2(std::forward<TrainingResultV2T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType{ModelTypeEnum::NOT_SET};
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_modelVersionNumber;
    bool m_modelVersionNumberHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    TrainingDataSourceEnum m_trainingDataSource{TrainingDataSourceEnum::NOT_SET};
    bool m_trainingDataSourceHasBeenSet = false;

    TrainingDataSchema m_trainingDataSchema;
    bool m_trainingDataSchemaHasBeenSet = false;

    ExternalEventsDetail m_externalEventsDetail;
    bool m_externalEventsDetailHasBeenSet = false;

    IngestedEventsDetail m_ingestedEventsDetail;
    bool m_ingestedEventsDetailHasBeenSet = false;

    TrainingResult m_trainingResult;
    bool m_trainingResultHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    TrainingResultV2 m_trainingResultV2;
    bool m_trainingResultV2HasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
