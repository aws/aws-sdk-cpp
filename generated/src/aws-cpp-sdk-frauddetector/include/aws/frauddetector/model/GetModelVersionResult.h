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


    ///@{
    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline void SetModelId(const Aws::String& value) { m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelId.assign(value); }
    inline GetModelVersionResult& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline GetModelVersionResult& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline GetModelVersionResult& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type.</p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }
    inline void SetModelType(const ModelTypeEnum& value) { m_modelType = value; }
    inline void SetModelType(ModelTypeEnum&& value) { m_modelType = std::move(value); }
    inline GetModelVersionResult& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}
    inline GetModelVersionResult& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version number.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const{ return m_modelVersionNumber; }
    inline void SetModelVersionNumber(const Aws::String& value) { m_modelVersionNumber = value; }
    inline void SetModelVersionNumber(Aws::String&& value) { m_modelVersionNumber = std::move(value); }
    inline void SetModelVersionNumber(const char* value) { m_modelVersionNumber.assign(value); }
    inline GetModelVersionResult& WithModelVersionNumber(const Aws::String& value) { SetModelVersionNumber(value); return *this;}
    inline GetModelVersionResult& WithModelVersionNumber(Aws::String&& value) { SetModelVersionNumber(std::move(value)); return *this;}
    inline GetModelVersionResult& WithModelVersionNumber(const char* value) { SetModelVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training data source.</p>
     */
    inline const TrainingDataSourceEnum& GetTrainingDataSource() const{ return m_trainingDataSource; }
    inline void SetTrainingDataSource(const TrainingDataSourceEnum& value) { m_trainingDataSource = value; }
    inline void SetTrainingDataSource(TrainingDataSourceEnum&& value) { m_trainingDataSource = std::move(value); }
    inline GetModelVersionResult& WithTrainingDataSource(const TrainingDataSourceEnum& value) { SetTrainingDataSource(value); return *this;}
    inline GetModelVersionResult& WithTrainingDataSource(TrainingDataSourceEnum&& value) { SetTrainingDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training data schema.</p>
     */
    inline const TrainingDataSchema& GetTrainingDataSchema() const{ return m_trainingDataSchema; }
    inline void SetTrainingDataSchema(const TrainingDataSchema& value) { m_trainingDataSchema = value; }
    inline void SetTrainingDataSchema(TrainingDataSchema&& value) { m_trainingDataSchema = std::move(value); }
    inline GetModelVersionResult& WithTrainingDataSchema(const TrainingDataSchema& value) { SetTrainingDataSchema(value); return *this;}
    inline GetModelVersionResult& WithTrainingDataSchema(TrainingDataSchema&& value) { SetTrainingDataSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the external events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>EXTERNAL_EVENTS</code> </p>
     */
    inline const ExternalEventsDetail& GetExternalEventsDetail() const{ return m_externalEventsDetail; }
    inline void SetExternalEventsDetail(const ExternalEventsDetail& value) { m_externalEventsDetail = value; }
    inline void SetExternalEventsDetail(ExternalEventsDetail&& value) { m_externalEventsDetail = std::move(value); }
    inline GetModelVersionResult& WithExternalEventsDetail(const ExternalEventsDetail& value) { SetExternalEventsDetail(value); return *this;}
    inline GetModelVersionResult& WithExternalEventsDetail(ExternalEventsDetail&& value) { SetExternalEventsDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the ingested events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline const IngestedEventsDetail& GetIngestedEventsDetail() const{ return m_ingestedEventsDetail; }
    inline void SetIngestedEventsDetail(const IngestedEventsDetail& value) { m_ingestedEventsDetail = value; }
    inline void SetIngestedEventsDetail(IngestedEventsDetail&& value) { m_ingestedEventsDetail = std::move(value); }
    inline GetModelVersionResult& WithIngestedEventsDetail(const IngestedEventsDetail& value) { SetIngestedEventsDetail(value); return *this;}
    inline GetModelVersionResult& WithIngestedEventsDetail(IngestedEventsDetail&& value) { SetIngestedEventsDetail(std::move(value)); return *this;}
    ///@}

    ///@{
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
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline GetModelVersionResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GetModelVersionResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GetModelVersionResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetModelVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetModelVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetModelVersionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetModelVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetModelVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetModelVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
