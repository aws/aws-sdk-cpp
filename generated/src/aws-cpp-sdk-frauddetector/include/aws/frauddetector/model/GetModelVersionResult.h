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
    AWS_FRAUDDETECTOR_API GetModelVersionResult() = default;
    AWS_FRAUDDETECTOR_API GetModelVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetModelVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    GetModelVersionResult& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type.</p>
     */
    inline ModelTypeEnum GetModelType() const { return m_modelType; }
    inline void SetModelType(ModelTypeEnum value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline GetModelVersionResult& WithModelType(ModelTypeEnum value) { SetModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version number.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const { return m_modelVersionNumber; }
    template<typename ModelVersionNumberT = Aws::String>
    void SetModelVersionNumber(ModelVersionNumberT&& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = std::forward<ModelVersionNumberT>(value); }
    template<typename ModelVersionNumberT = Aws::String>
    GetModelVersionResult& WithModelVersionNumber(ModelVersionNumberT&& value) { SetModelVersionNumber(std::forward<ModelVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training data source.</p>
     */
    inline TrainingDataSourceEnum GetTrainingDataSource() const { return m_trainingDataSource; }
    inline void SetTrainingDataSource(TrainingDataSourceEnum value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = value; }
    inline GetModelVersionResult& WithTrainingDataSource(TrainingDataSourceEnum value) { SetTrainingDataSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training data schema.</p>
     */
    inline const TrainingDataSchema& GetTrainingDataSchema() const { return m_trainingDataSchema; }
    template<typename TrainingDataSchemaT = TrainingDataSchema>
    void SetTrainingDataSchema(TrainingDataSchemaT&& value) { m_trainingDataSchemaHasBeenSet = true; m_trainingDataSchema = std::forward<TrainingDataSchemaT>(value); }
    template<typename TrainingDataSchemaT = TrainingDataSchema>
    GetModelVersionResult& WithTrainingDataSchema(TrainingDataSchemaT&& value) { SetTrainingDataSchema(std::forward<TrainingDataSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the external events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>EXTERNAL_EVENTS</code> </p>
     */
    inline const ExternalEventsDetail& GetExternalEventsDetail() const { return m_externalEventsDetail; }
    template<typename ExternalEventsDetailT = ExternalEventsDetail>
    void SetExternalEventsDetail(ExternalEventsDetailT&& value) { m_externalEventsDetailHasBeenSet = true; m_externalEventsDetail = std::forward<ExternalEventsDetailT>(value); }
    template<typename ExternalEventsDetailT = ExternalEventsDetail>
    GetModelVersionResult& WithExternalEventsDetail(ExternalEventsDetailT&& value) { SetExternalEventsDetail(std::forward<ExternalEventsDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the ingested events data used for training the model version.
     * This will be populated if the <code>trainingDataSource</code> is
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline const IngestedEventsDetail& GetIngestedEventsDetail() const { return m_ingestedEventsDetail; }
    template<typename IngestedEventsDetailT = IngestedEventsDetail>
    void SetIngestedEventsDetail(IngestedEventsDetailT&& value) { m_ingestedEventsDetailHasBeenSet = true; m_ingestedEventsDetail = std::forward<IngestedEventsDetailT>(value); }
    template<typename IngestedEventsDetailT = IngestedEventsDetail>
    GetModelVersionResult& WithIngestedEventsDetail(IngestedEventsDetailT&& value) { SetIngestedEventsDetail(std::forward<IngestedEventsDetailT>(value)); return *this;}
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
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GetModelVersionResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetModelVersionResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetModelVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType{ModelTypeEnum::NOT_SET};
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_modelVersionNumber;
    bool m_modelVersionNumberHasBeenSet = false;

    TrainingDataSourceEnum m_trainingDataSource{TrainingDataSourceEnum::NOT_SET};
    bool m_trainingDataSourceHasBeenSet = false;

    TrainingDataSchema m_trainingDataSchema;
    bool m_trainingDataSchemaHasBeenSet = false;

    ExternalEventsDetail m_externalEventsDetail;
    bool m_externalEventsDetailHasBeenSet = false;

    IngestedEventsDetail m_ingestedEventsDetail;
    bool m_ingestedEventsDetailHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
