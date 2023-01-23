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
    AWS_FRAUDDETECTOR_API ModelVersionDetail();
    AWS_FRAUDDETECTOR_API ModelVersionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelVersionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The model ID.</p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>The model ID.</p>
     */
    inline ModelVersionDetail& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline ModelVersionDetail& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline ModelVersionDetail& WithModelId(const char* value) { SetModelId(value); return *this;}


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
    inline ModelVersionDetail& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type.</p>
     */
    inline ModelVersionDetail& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>The model version number.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const{ return m_modelVersionNumber; }

    /**
     * <p>The model version number.</p>
     */
    inline bool ModelVersionNumberHasBeenSet() const { return m_modelVersionNumberHasBeenSet; }

    /**
     * <p>The model version number.</p>
     */
    inline void SetModelVersionNumber(const Aws::String& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = value; }

    /**
     * <p>The model version number.</p>
     */
    inline void SetModelVersionNumber(Aws::String&& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = std::move(value); }

    /**
     * <p>The model version number.</p>
     */
    inline void SetModelVersionNumber(const char* value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber.assign(value); }

    /**
     * <p>The model version number.</p>
     */
    inline ModelVersionDetail& WithModelVersionNumber(const Aws::String& value) { SetModelVersionNumber(value); return *this;}

    /**
     * <p>The model version number.</p>
     */
    inline ModelVersionDetail& WithModelVersionNumber(Aws::String&& value) { SetModelVersionNumber(std::move(value)); return *this;}

    /**
     * <p>The model version number.</p>
     */
    inline ModelVersionDetail& WithModelVersionNumber(const char* value) { SetModelVersionNumber(value); return *this;}


    /**
     * <p>The status of the model version.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the model version.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the model version.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the model version.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the model version.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the model version.</p>
     */
    inline ModelVersionDetail& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the model version.</p>
     */
    inline ModelVersionDetail& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the model version.</p>
     */
    inline ModelVersionDetail& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The model version training data source.</p>
     */
    inline const TrainingDataSourceEnum& GetTrainingDataSource() const{ return m_trainingDataSource; }

    /**
     * <p>The model version training data source.</p>
     */
    inline bool TrainingDataSourceHasBeenSet() const { return m_trainingDataSourceHasBeenSet; }

    /**
     * <p>The model version training data source.</p>
     */
    inline void SetTrainingDataSource(const TrainingDataSourceEnum& value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = value; }

    /**
     * <p>The model version training data source.</p>
     */
    inline void SetTrainingDataSource(TrainingDataSourceEnum&& value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = std::move(value); }

    /**
     * <p>The model version training data source.</p>
     */
    inline ModelVersionDetail& WithTrainingDataSource(const TrainingDataSourceEnum& value) { SetTrainingDataSource(value); return *this;}

    /**
     * <p>The model version training data source.</p>
     */
    inline ModelVersionDetail& WithTrainingDataSource(TrainingDataSourceEnum&& value) { SetTrainingDataSource(std::move(value)); return *this;}


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
    inline ModelVersionDetail& WithTrainingDataSchema(const TrainingDataSchema& value) { SetTrainingDataSchema(value); return *this;}

    /**
     * <p>The training data schema.</p>
     */
    inline ModelVersionDetail& WithTrainingDataSchema(TrainingDataSchema&& value) { SetTrainingDataSchema(std::move(value)); return *this;}


    /**
     * <p>The external events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline const ExternalEventsDetail& GetExternalEventsDetail() const{ return m_externalEventsDetail; }

    /**
     * <p>The external events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline bool ExternalEventsDetailHasBeenSet() const { return m_externalEventsDetailHasBeenSet; }

    /**
     * <p>The external events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline void SetExternalEventsDetail(const ExternalEventsDetail& value) { m_externalEventsDetailHasBeenSet = true; m_externalEventsDetail = value; }

    /**
     * <p>The external events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline void SetExternalEventsDetail(ExternalEventsDetail&& value) { m_externalEventsDetailHasBeenSet = true; m_externalEventsDetail = std::move(value); }

    /**
     * <p>The external events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline ModelVersionDetail& WithExternalEventsDetail(const ExternalEventsDetail& value) { SetExternalEventsDetail(value); return *this;}

    /**
     * <p>The external events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline ModelVersionDetail& WithExternalEventsDetail(ExternalEventsDetail&& value) { SetExternalEventsDetail(std::move(value)); return *this;}


    /**
     * <p>The ingested events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline const IngestedEventsDetail& GetIngestedEventsDetail() const{ return m_ingestedEventsDetail; }

    /**
     * <p>The ingested events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline bool IngestedEventsDetailHasBeenSet() const { return m_ingestedEventsDetailHasBeenSet; }

    /**
     * <p>The ingested events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline void SetIngestedEventsDetail(const IngestedEventsDetail& value) { m_ingestedEventsDetailHasBeenSet = true; m_ingestedEventsDetail = value; }

    /**
     * <p>The ingested events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline void SetIngestedEventsDetail(IngestedEventsDetail&& value) { m_ingestedEventsDetailHasBeenSet = true; m_ingestedEventsDetail = std::move(value); }

    /**
     * <p>The ingested events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline ModelVersionDetail& WithIngestedEventsDetail(const IngestedEventsDetail& value) { SetIngestedEventsDetail(value); return *this;}

    /**
     * <p>The ingested events data details. This will be populated if the
     * <code>trainingDataSource</code> for the model version is specified as
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline ModelVersionDetail& WithIngestedEventsDetail(IngestedEventsDetail&& value) { SetIngestedEventsDetail(std::move(value)); return *this;}


    /**
     * <p>The training results.</p>
     */
    inline const TrainingResult& GetTrainingResult() const{ return m_trainingResult; }

    /**
     * <p>The training results.</p>
     */
    inline bool TrainingResultHasBeenSet() const { return m_trainingResultHasBeenSet; }

    /**
     * <p>The training results.</p>
     */
    inline void SetTrainingResult(const TrainingResult& value) { m_trainingResultHasBeenSet = true; m_trainingResult = value; }

    /**
     * <p>The training results.</p>
     */
    inline void SetTrainingResult(TrainingResult&& value) { m_trainingResultHasBeenSet = true; m_trainingResult = std::move(value); }

    /**
     * <p>The training results.</p>
     */
    inline ModelVersionDetail& WithTrainingResult(const TrainingResult& value) { SetTrainingResult(value); return *this;}

    /**
     * <p>The training results.</p>
     */
    inline ModelVersionDetail& WithTrainingResult(TrainingResult&& value) { SetTrainingResult(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline ModelVersionDetail& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline ModelVersionDetail& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline ModelVersionDetail& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline ModelVersionDetail& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline ModelVersionDetail& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline ModelVersionDetail& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p>The model version ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The model version ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The model version ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The model version ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The model version ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The model version ARN.</p>
     */
    inline ModelVersionDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The model version ARN.</p>
     */
    inline ModelVersionDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The model version ARN.</p>
     */
    inline ModelVersionDetail& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The training result details. The details include the relative importance of
     * the variables. </p>
     */
    inline const TrainingResultV2& GetTrainingResultV2() const{ return m_trainingResultV2; }

    /**
     * <p> The training result details. The details include the relative importance of
     * the variables. </p>
     */
    inline bool TrainingResultV2HasBeenSet() const { return m_trainingResultV2HasBeenSet; }

    /**
     * <p> The training result details. The details include the relative importance of
     * the variables. </p>
     */
    inline void SetTrainingResultV2(const TrainingResultV2& value) { m_trainingResultV2HasBeenSet = true; m_trainingResultV2 = value; }

    /**
     * <p> The training result details. The details include the relative importance of
     * the variables. </p>
     */
    inline void SetTrainingResultV2(TrainingResultV2&& value) { m_trainingResultV2HasBeenSet = true; m_trainingResultV2 = std::move(value); }

    /**
     * <p> The training result details. The details include the relative importance of
     * the variables. </p>
     */
    inline ModelVersionDetail& WithTrainingResultV2(const TrainingResultV2& value) { SetTrainingResultV2(value); return *this;}

    /**
     * <p> The training result details. The details include the relative importance of
     * the variables. </p>
     */
    inline ModelVersionDetail& WithTrainingResultV2(TrainingResultV2&& value) { SetTrainingResultV2(std::move(value)); return *this;}

  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType;
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_modelVersionNumber;
    bool m_modelVersionNumberHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    TrainingDataSourceEnum m_trainingDataSource;
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
