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
namespace FraudDetector
{
namespace Model
{
  class GetModelVersionResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetModelVersionResult();
    AWS_FRAUDDETECTOR_API GetModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelId = value; }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelId = std::move(value); }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(const char* value) { m_modelId.assign(value); }

    /**
     * <p>The model ID.</p>
     */
    inline GetModelVersionResult& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline GetModelVersionResult& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline GetModelVersionResult& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The model type.</p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }

    /**
     * <p>The model type.</p>
     */
    inline void SetModelType(const ModelTypeEnum& value) { m_modelType = value; }

    /**
     * <p>The model type.</p>
     */
    inline void SetModelType(ModelTypeEnum&& value) { m_modelType = std::move(value); }

    /**
     * <p>The model type.</p>
     */
    inline GetModelVersionResult& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type.</p>
     */
    inline GetModelVersionResult& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>The model version number.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const{ return m_modelVersionNumber; }

    /**
     * <p>The model version number.</p>
     */
    inline void SetModelVersionNumber(const Aws::String& value) { m_modelVersionNumber = value; }

    /**
     * <p>The model version number.</p>
     */
    inline void SetModelVersionNumber(Aws::String&& value) { m_modelVersionNumber = std::move(value); }

    /**
     * <p>The model version number.</p>
     */
    inline void SetModelVersionNumber(const char* value) { m_modelVersionNumber.assign(value); }

    /**
     * <p>The model version number.</p>
     */
    inline GetModelVersionResult& WithModelVersionNumber(const Aws::String& value) { SetModelVersionNumber(value); return *this;}

    /**
     * <p>The model version number.</p>
     */
    inline GetModelVersionResult& WithModelVersionNumber(Aws::String&& value) { SetModelVersionNumber(std::move(value)); return *this;}

    /**
     * <p>The model version number.</p>
     */
    inline GetModelVersionResult& WithModelVersionNumber(const char* value) { SetModelVersionNumber(value); return *this;}


    /**
     * <p>The training data source.</p>
     */
    inline const TrainingDataSourceEnum& GetTrainingDataSource() const{ return m_trainingDataSource; }

    /**
     * <p>The training data source.</p>
     */
    inline void SetTrainingDataSource(const TrainingDataSourceEnum& value) { m_trainingDataSource = value; }

    /**
     * <p>The training data source.</p>
     */
    inline void SetTrainingDataSource(TrainingDataSourceEnum&& value) { m_trainingDataSource = std::move(value); }

    /**
     * <p>The training data source.</p>
     */
    inline GetModelVersionResult& WithTrainingDataSource(const TrainingDataSourceEnum& value) { SetTrainingDataSource(value); return *this;}

    /**
     * <p>The training data source.</p>
     */
    inline GetModelVersionResult& WithTrainingDataSource(TrainingDataSourceEnum&& value) { SetTrainingDataSource(std::move(value)); return *this;}


    /**
     * <p>The training data schema.</p>
     */
    inline const TrainingDataSchema& GetTrainingDataSchema() const{ return m_trainingDataSchema; }

    /**
     * <p>The training data schema.</p>
     */
    inline void SetTrainingDataSchema(const TrainingDataSchema& value) { m_trainingDataSchema = value; }

    /**
     * <p>The training data schema.</p>
     */
    inline void SetTrainingDataSchema(TrainingDataSchema&& value) { m_trainingDataSchema = std::move(value); }

    /**
     * <p>The training data schema.</p>
     */
    inline GetModelVersionResult& WithTrainingDataSchema(const TrainingDataSchema& value) { SetTrainingDataSchema(value); return *this;}

    /**
     * <p>The training data schema.</p>
     */
    inline GetModelVersionResult& WithTrainingDataSchema(TrainingDataSchema&& value) { SetTrainingDataSchema(std::move(value)); return *this;}


    /**
     * <p>The details of the external events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>EXTERNAL_EVENTS</code> </p>
     */
    inline const ExternalEventsDetail& GetExternalEventsDetail() const{ return m_externalEventsDetail; }

    /**
     * <p>The details of the external events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>EXTERNAL_EVENTS</code> </p>
     */
    inline void SetExternalEventsDetail(const ExternalEventsDetail& value) { m_externalEventsDetail = value; }

    /**
     * <p>The details of the external events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>EXTERNAL_EVENTS</code> </p>
     */
    inline void SetExternalEventsDetail(ExternalEventsDetail&& value) { m_externalEventsDetail = std::move(value); }

    /**
     * <p>The details of the external events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>EXTERNAL_EVENTS</code> </p>
     */
    inline GetModelVersionResult& WithExternalEventsDetail(const ExternalEventsDetail& value) { SetExternalEventsDetail(value); return *this;}

    /**
     * <p>The details of the external events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>EXTERNAL_EVENTS</code> </p>
     */
    inline GetModelVersionResult& WithExternalEventsDetail(ExternalEventsDetail&& value) { SetExternalEventsDetail(std::move(value)); return *this;}


    /**
     * <p>The details of the ingested events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline const IngestedEventsDetail& GetIngestedEventsDetail() const{ return m_ingestedEventsDetail; }

    /**
     * <p>The details of the ingested events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline void SetIngestedEventsDetail(const IngestedEventsDetail& value) { m_ingestedEventsDetail = value; }

    /**
     * <p>The details of the ingested events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline void SetIngestedEventsDetail(IngestedEventsDetail&& value) { m_ingestedEventsDetail = std::move(value); }

    /**
     * <p>The details of the ingested events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline GetModelVersionResult& WithIngestedEventsDetail(const IngestedEventsDetail& value) { SetIngestedEventsDetail(value); return *this;}

    /**
     * <p>The details of the ingested events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline GetModelVersionResult& WithIngestedEventsDetail(IngestedEventsDetail&& value) { SetIngestedEventsDetail(std::move(value)); return *this;}


    /**
     * <p>The model version status.</p> <p>Possible values are:</p> <ul> <li> <p>
     * <code>TRAINING_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>TRAINING_COMPLETE</code> </p> </li> <li> <p>
     * <code>ACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>ACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>ACTIVE</code> </p>
     * </li> <li> <p> <code>INACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>INACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>INACTIVE</code>
     * </p> </li> <li> <p> <code>ERROR</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The model version status.</p> <p>Possible values are:</p> <ul> <li> <p>
     * <code>TRAINING_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>TRAINING_COMPLETE</code> </p> </li> <li> <p>
     * <code>ACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>ACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>ACTIVE</code> </p>
     * </li> <li> <p> <code>INACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>INACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>INACTIVE</code>
     * </p> </li> <li> <p> <code>ERROR</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The model version status.</p> <p>Possible values are:</p> <ul> <li> <p>
     * <code>TRAINING_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>TRAINING_COMPLETE</code> </p> </li> <li> <p>
     * <code>ACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>ACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>ACTIVE</code> </p>
     * </li> <li> <p> <code>INACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>INACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>INACTIVE</code>
     * </p> </li> <li> <p> <code>ERROR</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The model version status.</p> <p>Possible values are:</p> <ul> <li> <p>
     * <code>TRAINING_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>TRAINING_COMPLETE</code> </p> </li> <li> <p>
     * <code>ACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>ACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>ACTIVE</code> </p>
     * </li> <li> <p> <code>INACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>INACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>INACTIVE</code>
     * </p> </li> <li> <p> <code>ERROR</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The model version status.</p> <p>Possible values are:</p> <ul> <li> <p>
     * <code>TRAINING_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>TRAINING_COMPLETE</code> </p> </li> <li> <p>
     * <code>ACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>ACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>ACTIVE</code> </p>
     * </li> <li> <p> <code>INACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>INACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>INACTIVE</code>
     * </p> </li> <li> <p> <code>ERROR</code> </p> </li> </ul>
     */
    inline GetModelVersionResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The model version status.</p> <p>Possible values are:</p> <ul> <li> <p>
     * <code>TRAINING_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>TRAINING_COMPLETE</code> </p> </li> <li> <p>
     * <code>ACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>ACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>ACTIVE</code> </p>
     * </li> <li> <p> <code>INACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>INACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>INACTIVE</code>
     * </p> </li> <li> <p> <code>ERROR</code> </p> </li> </ul>
     */
    inline GetModelVersionResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The model version status.</p> <p>Possible values are:</p> <ul> <li> <p>
     * <code>TRAINING_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>TRAINING_COMPLETE</code> </p> </li> <li> <p>
     * <code>ACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>ACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>ACTIVE</code> </p>
     * </li> <li> <p> <code>INACTIVATE_REQUESTED</code> </p> </li> <li> <p>
     * <code>INACTIVATE_IN_PROGRESS</code> </p> </li> <li> <p> <code>INACTIVE</code>
     * </p> </li> <li> <p> <code>ERROR</code> </p> </li> </ul>
     */
    inline GetModelVersionResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The model version ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The model version ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The model version ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The model version ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The model version ARN.</p>
     */
    inline GetModelVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The model version ARN.</p>
     */
    inline GetModelVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The model version ARN.</p>
     */
    inline GetModelVersionResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_modelId;

    ModelTypeEnum m_modelType;

    Aws::String m_modelVersionNumber;

    TrainingDataSourceEnum m_trainingDataSource;

    TrainingDataSchema m_trainingDataSchema;

    ExternalEventsDetail m_externalEventsDetail;

    IngestedEventsDetail m_ingestedEventsDetail;

    Aws::String m_status;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
