/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerStatus.h>
#include <aws/lookoutequipment/model/ModelPromoteMode.h>
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
  class DescribeRetrainingSchedulerResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeRetrainingSchedulerResult() = default;
    AWS_LOOKOUTEQUIPMENT_API DescribeRetrainingSchedulerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeRetrainingSchedulerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the model that the retraining scheduler is attached to. </p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    DescribeRetrainingSchedulerResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model that the retraining scheduler is attached to. </p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    DescribeRetrainingSchedulerResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline const Aws::Utils::DateTime& GetRetrainingStartDate() const { return m_retrainingStartDate; }
    template<typename RetrainingStartDateT = Aws::Utils::DateTime>
    void SetRetrainingStartDate(RetrainingStartDateT&& value) { m_retrainingStartDateHasBeenSet = true; m_retrainingStartDate = std::forward<RetrainingStartDateT>(value); }
    template<typename RetrainingStartDateT = Aws::Utils::DateTime>
    DescribeRetrainingSchedulerResult& WithRetrainingStartDate(RetrainingStartDateT&& value) { SetRetrainingStartDate(std::forward<RetrainingStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency at which the model retraining is set. This follows the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a>
     * guidelines.</p>
     */
    inline const Aws::String& GetRetrainingFrequency() const { return m_retrainingFrequency; }
    template<typename RetrainingFrequencyT = Aws::String>
    void SetRetrainingFrequency(RetrainingFrequencyT&& value) { m_retrainingFrequencyHasBeenSet = true; m_retrainingFrequency = std::forward<RetrainingFrequencyT>(value); }
    template<typename RetrainingFrequencyT = Aws::String>
    DescribeRetrainingSchedulerResult& WithRetrainingFrequency(RetrainingFrequencyT&& value) { SetRetrainingFrequency(std::forward<RetrainingFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of past days of data used for retraining.</p>
     */
    inline const Aws::String& GetLookbackWindow() const { return m_lookbackWindow; }
    template<typename LookbackWindowT = Aws::String>
    void SetLookbackWindow(LookbackWindowT&& value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow = std::forward<LookbackWindowT>(value); }
    template<typename LookbackWindowT = Aws::String>
    DescribeRetrainingSchedulerResult& WithLookbackWindow(LookbackWindowT&& value) { SetLookbackWindow(std::forward<LookbackWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the retraining scheduler. </p>
     */
    inline RetrainingSchedulerStatus GetStatus() const { return m_status; }
    inline void SetStatus(RetrainingSchedulerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeRetrainingSchedulerResult& WithStatus(RetrainingSchedulerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the service uses new models. In <code>MANAGED</code> mode, new
     * models are used for inference if they have better performance than the current
     * model. In <code>MANUAL</code> mode, the new models are not used until they are
     * <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/versioning-model.html#model-activation">manually
     * activated</a>.</p>
     */
    inline ModelPromoteMode GetPromoteMode() const { return m_promoteMode; }
    inline void SetPromoteMode(ModelPromoteMode value) { m_promoteModeHasBeenSet = true; m_promoteMode = value; }
    inline DescribeRetrainingSchedulerResult& WithPromoteMode(ModelPromoteMode value) { SetPromoteMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time and date at which the retraining scheduler was created.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeRetrainingSchedulerResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time and date at which the retraining scheduler was updated.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DescribeRetrainingSchedulerResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRetrainingSchedulerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::Utils::DateTime m_retrainingStartDate{};
    bool m_retrainingStartDateHasBeenSet = false;

    Aws::String m_retrainingFrequency;
    bool m_retrainingFrequencyHasBeenSet = false;

    Aws::String m_lookbackWindow;
    bool m_lookbackWindowHasBeenSet = false;

    RetrainingSchedulerStatus m_status{RetrainingSchedulerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ModelPromoteMode m_promoteMode{ModelPromoteMode::NOT_SET};
    bool m_promoteModeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
