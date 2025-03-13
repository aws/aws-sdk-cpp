/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/InferenceSchedulerStatus.h>
#include <aws/lookoutequipment/model/ModelQuality.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class CreateInferenceSchedulerResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateInferenceSchedulerResult() = default;
    AWS_LOOKOUTEQUIPMENT_API CreateInferenceSchedulerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API CreateInferenceSchedulerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being created. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const { return m_inferenceSchedulerArn; }
    template<typename InferenceSchedulerArnT = Aws::String>
    void SetInferenceSchedulerArn(InferenceSchedulerArnT&& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = std::forward<InferenceSchedulerArnT>(value); }
    template<typename InferenceSchedulerArnT = Aws::String>
    CreateInferenceSchedulerResult& WithInferenceSchedulerArn(InferenceSchedulerArnT&& value) { SetInferenceSchedulerArn(std::forward<InferenceSchedulerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of inference scheduler being created. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const { return m_inferenceSchedulerName; }
    template<typename InferenceSchedulerNameT = Aws::String>
    void SetInferenceSchedulerName(InferenceSchedulerNameT&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::forward<InferenceSchedulerNameT>(value); }
    template<typename InferenceSchedulerNameT = Aws::String>
    CreateInferenceSchedulerResult& WithInferenceSchedulerName(InferenceSchedulerNameT&& value) { SetInferenceSchedulerName(std::forward<InferenceSchedulerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the <code>CreateInferenceScheduler</code> operation.
     * </p>
     */
    inline InferenceSchedulerStatus GetStatus() const { return m_status; }
    inline void SetStatus(InferenceSchedulerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateInferenceSchedulerResult& WithStatus(InferenceSchedulerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a quality assessment for a model that uses labels. If Lookout for
     * Equipment determines that the model quality is poor based on training metrics,
     * the value is <code>POOR_QUALITY_DETECTED</code>. Otherwise, the value is
     * <code>QUALITY_THRESHOLD_MET</code>. </p> <p>If the model is unlabeled, the model
     * quality can't be assessed and the value of <code>ModelQuality</code> is
     * <code>CANNOT_DETERMINE_QUALITY</code>. In this situation, you can get a model
     * quality assessment by adding labels to the input dataset and retraining the
     * model.</p> <p>For information about using labels with your models, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-labeling.html">Understanding
     * labeling</a>.</p> <p>For information about improving the quality of a model, see
     * <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/best-practices.html">Best
     * practices with Amazon Lookout for Equipment</a>.</p>
     */
    inline ModelQuality GetModelQuality() const { return m_modelQuality; }
    inline void SetModelQuality(ModelQuality value) { m_modelQualityHasBeenSet = true; m_modelQuality = value; }
    inline CreateInferenceSchedulerResult& WithModelQuality(ModelQuality value) { SetModelQuality(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateInferenceSchedulerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceSchedulerArn;
    bool m_inferenceSchedulerArnHasBeenSet = false;

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    InferenceSchedulerStatus m_status{InferenceSchedulerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ModelQuality m_modelQuality{ModelQuality::NOT_SET};
    bool m_modelQualityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
