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
    AWS_LOOKOUTEQUIPMENT_API InferenceSchedulerSummary();
    AWS_LOOKOUTEQUIPMENT_API InferenceSchedulerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InferenceSchedulerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the ML model used for the inference scheduler. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the ML model used for the inference scheduler. </p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the ML model used for the inference scheduler. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the ML model used for the inference scheduler. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the ML model used for the inference scheduler. </p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the ML model used for the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the ML model used for the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the ML model used for the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the ML model used by the inference
     * scheduler. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model used by the inference
     * scheduler. </p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model used by the inference
     * scheduler. </p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model used by the inference
     * scheduler. </p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model used by the inference
     * scheduler. </p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model used by the inference
     * scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model used by the inference
     * scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the ML model used by the inference
     * scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The name of the inference scheduler. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }

    /**
     * <p>The name of the inference scheduler. </p>
     */
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }

    /**
     * <p>The name of the inference scheduler. </p>
     */
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = value; }

    /**
     * <p>The name of the inference scheduler. </p>
     */
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::move(value); }

    /**
     * <p>The name of the inference scheduler. </p>
     */
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName.assign(value); }

    /**
     * <p>The name of the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}

    /**
     * <p>The name of the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const{ return m_inferenceSchedulerArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler. </p>
     */
    inline bool InferenceSchedulerArnHasBeenSet() const { return m_inferenceSchedulerArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler. </p>
     */
    inline void SetInferenceSchedulerArn(const Aws::String& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler. </p>
     */
    inline void SetInferenceSchedulerArn(Aws::String&& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler. </p>
     */
    inline void SetInferenceSchedulerArn(const char* value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithInferenceSchedulerArn(const Aws::String& value) { SetInferenceSchedulerArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithInferenceSchedulerArn(Aws::String&& value) { SetInferenceSchedulerArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithInferenceSchedulerArn(const char* value) { SetInferenceSchedulerArn(value); return *this;}


    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline const InferenceSchedulerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline void SetStatus(const InferenceSchedulerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline void SetStatus(InferenceSchedulerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithStatus(const InferenceSchedulerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline InferenceSchedulerSummary& WithStatus(InferenceSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline long long GetDataDelayOffsetInMinutes() const{ return m_dataDelayOffsetInMinutes; }

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
    inline bool DataDelayOffsetInMinutesHasBeenSet() const { return m_dataDelayOffsetInMinutesHasBeenSet; }

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
    inline void SetDataDelayOffsetInMinutes(long long value) { m_dataDelayOffsetInMinutesHasBeenSet = true; m_dataDelayOffsetInMinutes = value; }

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
    inline InferenceSchedulerSummary& WithDataDelayOffsetInMinutes(long long value) { SetDataDelayOffsetInMinutes(value); return *this;}


    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. This
     * value is the length of time between data uploads. For instance, if you select 5
     * minutes, Amazon Lookout for Equipment will upload the real-time data to the
     * source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline const DataUploadFrequency& GetDataUploadFrequency() const{ return m_dataUploadFrequency; }

    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. This
     * value is the length of time between data uploads. For instance, if you select 5
     * minutes, Amazon Lookout for Equipment will upload the real-time data to the
     * source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline bool DataUploadFrequencyHasBeenSet() const { return m_dataUploadFrequencyHasBeenSet; }

    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. This
     * value is the length of time between data uploads. For instance, if you select 5
     * minutes, Amazon Lookout for Equipment will upload the real-time data to the
     * source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline void SetDataUploadFrequency(const DataUploadFrequency& value) { m_dataUploadFrequencyHasBeenSet = true; m_dataUploadFrequency = value; }

    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. This
     * value is the length of time between data uploads. For instance, if you select 5
     * minutes, Amazon Lookout for Equipment will upload the real-time data to the
     * source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline void SetDataUploadFrequency(DataUploadFrequency&& value) { m_dataUploadFrequencyHasBeenSet = true; m_dataUploadFrequency = std::move(value); }

    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. This
     * value is the length of time between data uploads. For instance, if you select 5
     * minutes, Amazon Lookout for Equipment will upload the real-time data to the
     * source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline InferenceSchedulerSummary& WithDataUploadFrequency(const DataUploadFrequency& value) { SetDataUploadFrequency(value); return *this;}

    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. This
     * value is the length of time between data uploads. For instance, if you select 5
     * minutes, Amazon Lookout for Equipment will upload the real-time data to the
     * source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline InferenceSchedulerSummary& WithDataUploadFrequency(DataUploadFrequency&& value) { SetDataUploadFrequency(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline const LatestInferenceResult& GetLatestInferenceResult() const{ return m_latestInferenceResult; }

    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline bool LatestInferenceResultHasBeenSet() const { return m_latestInferenceResultHasBeenSet; }

    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline void SetLatestInferenceResult(const LatestInferenceResult& value) { m_latestInferenceResultHasBeenSet = true; m_latestInferenceResult = value; }

    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline void SetLatestInferenceResult(LatestInferenceResult&& value) { m_latestInferenceResultHasBeenSet = true; m_latestInferenceResult = std::move(value); }

    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline InferenceSchedulerSummary& WithLatestInferenceResult(const LatestInferenceResult& value) { SetLatestInferenceResult(value); return *this;}

    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline InferenceSchedulerSummary& WithLatestInferenceResult(LatestInferenceResult&& value) { SetLatestInferenceResult(std::move(value)); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    Aws::String m_inferenceSchedulerArn;
    bool m_inferenceSchedulerArnHasBeenSet = false;

    InferenceSchedulerStatus m_status;
    bool m_statusHasBeenSet = false;

    long long m_dataDelayOffsetInMinutes;
    bool m_dataDelayOffsetInMinutesHasBeenSet = false;

    DataUploadFrequency m_dataUploadFrequency;
    bool m_dataUploadFrequencyHasBeenSet = false;

    LatestInferenceResult m_latestInferenceResult;
    bool m_latestInferenceResultHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
