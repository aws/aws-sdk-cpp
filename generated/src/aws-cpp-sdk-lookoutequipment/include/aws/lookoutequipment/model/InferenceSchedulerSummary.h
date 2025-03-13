/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/InferenceSchedulerStatus.h>
#include <aws/lookoutequipment/model/DataUploadFrequency.h>
#include <aws/lookoutequipment/model/LatestInferenceResult.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Contains information about the specific inference scheduler, including data
   * delay offset, model name and ARN, status, and so on. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/InferenceSchedulerSummary">AWS
   * API Reference</a></p>
   */
  class InferenceSchedulerSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API InferenceSchedulerSummary() = default;
    AWS_LOOKOUTEQUIPMENT_API InferenceSchedulerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InferenceSchedulerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the machine learning model used for the inference scheduler. </p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    InferenceSchedulerSummary& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the machine learning model used by the
     * inference scheduler. </p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    InferenceSchedulerSummary& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference scheduler. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const { return m_inferenceSchedulerName; }
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }
    template<typename InferenceSchedulerNameT = Aws::String>
    void SetInferenceSchedulerName(InferenceSchedulerNameT&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::forward<InferenceSchedulerNameT>(value); }
    template<typename InferenceSchedulerNameT = Aws::String>
    InferenceSchedulerSummary& WithInferenceSchedulerName(InferenceSchedulerNameT&& value) { SetInferenceSchedulerName(std::forward<InferenceSchedulerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const { return m_inferenceSchedulerArn; }
    inline bool InferenceSchedulerArnHasBeenSet() const { return m_inferenceSchedulerArnHasBeenSet; }
    template<typename InferenceSchedulerArnT = Aws::String>
    void SetInferenceSchedulerArn(InferenceSchedulerArnT&& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = std::forward<InferenceSchedulerArnT>(value); }
    template<typename InferenceSchedulerArnT = Aws::String>
    InferenceSchedulerSummary& WithInferenceSchedulerArn(InferenceSchedulerArnT&& value) { SetInferenceSchedulerArn(std::forward<InferenceSchedulerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline InferenceSchedulerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InferenceSchedulerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline InferenceSchedulerSummary& WithStatus(InferenceSchedulerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A period of time (in minutes) by which inference on the data is delayed after
     * the data starts. For instance, if an offset delay time of five minutes was
     * selected, inference will not begin on the data until the first data measurement
     * after the five minute mark. For example, if five minutes is selected, the
     * inference scheduler will wake up at the configured frequency with the additional
     * five minute delay time to check the customer S3 bucket. The customer can upload
     * data at the same frequency and they don't need to stop and restart the scheduler
     * when uploading new data. </p>
     */
    inline long long GetDataDelayOffsetInMinutes() const { return m_dataDelayOffsetInMinutes; }
    inline bool DataDelayOffsetInMinutesHasBeenSet() const { return m_dataDelayOffsetInMinutesHasBeenSet; }
    inline void SetDataDelayOffsetInMinutes(long long value) { m_dataDelayOffsetInMinutesHasBeenSet = true; m_dataDelayOffsetInMinutes = value; }
    inline InferenceSchedulerSummary& WithDataDelayOffsetInMinutes(long long value) { SetDataDelayOffsetInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. This
     * value is the length of time between data uploads. For instance, if you select 5
     * minutes, Amazon Lookout for Equipment will upload the real-time data to the
     * source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline DataUploadFrequency GetDataUploadFrequency() const { return m_dataUploadFrequency; }
    inline bool DataUploadFrequencyHasBeenSet() const { return m_dataUploadFrequencyHasBeenSet; }
    inline void SetDataUploadFrequency(DataUploadFrequency value) { m_dataUploadFrequencyHasBeenSet = true; m_dataUploadFrequency = value; }
    inline InferenceSchedulerSummary& WithDataUploadFrequency(DataUploadFrequency value) { SetDataUploadFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline LatestInferenceResult GetLatestInferenceResult() const { return m_latestInferenceResult; }
    inline bool LatestInferenceResultHasBeenSet() const { return m_latestInferenceResultHasBeenSet; }
    inline void SetLatestInferenceResult(LatestInferenceResult value) { m_latestInferenceResultHasBeenSet = true; m_latestInferenceResult = value; }
    inline InferenceSchedulerSummary& WithLatestInferenceResult(LatestInferenceResult value) { SetLatestInferenceResult(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    Aws::String m_inferenceSchedulerArn;
    bool m_inferenceSchedulerArnHasBeenSet = false;

    InferenceSchedulerStatus m_status{InferenceSchedulerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    long long m_dataDelayOffsetInMinutes{0};
    bool m_dataDelayOffsetInMinutesHasBeenSet = false;

    DataUploadFrequency m_dataUploadFrequency{DataUploadFrequency::NOT_SET};
    bool m_dataUploadFrequencyHasBeenSet = false;

    LatestInferenceResult m_latestInferenceResult{LatestInferenceResult::NOT_SET};
    bool m_latestInferenceResultHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
