/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/DataUploadFrequency.h>
#include <aws/lookoutequipment/model/InferenceInputConfiguration.h>
#include <aws/lookoutequipment/model/InferenceOutputConfiguration.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class UpdateInferenceSchedulerRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API UpdateInferenceSchedulerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInferenceScheduler"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the inference scheduler to be updated. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }

    /**
     * <p>The name of the inference scheduler to be updated. </p>
     */
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }

    /**
     * <p>The name of the inference scheduler to be updated. </p>
     */
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = value; }

    /**
     * <p>The name of the inference scheduler to be updated. </p>
     */
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::move(value); }

    /**
     * <p>The name of the inference scheduler to be updated. </p>
     */
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName.assign(value); }

    /**
     * <p>The name of the inference scheduler to be updated. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}

    /**
     * <p>The name of the inference scheduler to be updated. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference scheduler to be updated. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}


    /**
     * <p> A period of time (in minutes) by which inference on the data is delayed
     * after the data starts. For instance, if you select an offset delay time of five
     * minutes, inference will not begin on the data until the first data measurement
     * after the five minute mark. For example, if five minutes is selected, the
     * inference scheduler will wake up at the configured frequency with the additional
     * five minute delay time to check the customer S3 bucket. The customer can upload
     * data at the same frequency and they don't need to stop and restart the scheduler
     * when uploading new data.</p>
     */
    inline long long GetDataDelayOffsetInMinutes() const{ return m_dataDelayOffsetInMinutes; }

    /**
     * <p> A period of time (in minutes) by which inference on the data is delayed
     * after the data starts. For instance, if you select an offset delay time of five
     * minutes, inference will not begin on the data until the first data measurement
     * after the five minute mark. For example, if five minutes is selected, the
     * inference scheduler will wake up at the configured frequency with the additional
     * five minute delay time to check the customer S3 bucket. The customer can upload
     * data at the same frequency and they don't need to stop and restart the scheduler
     * when uploading new data.</p>
     */
    inline bool DataDelayOffsetInMinutesHasBeenSet() const { return m_dataDelayOffsetInMinutesHasBeenSet; }

    /**
     * <p> A period of time (in minutes) by which inference on the data is delayed
     * after the data starts. For instance, if you select an offset delay time of five
     * minutes, inference will not begin on the data until the first data measurement
     * after the five minute mark. For example, if five minutes is selected, the
     * inference scheduler will wake up at the configured frequency with the additional
     * five minute delay time to check the customer S3 bucket. The customer can upload
     * data at the same frequency and they don't need to stop and restart the scheduler
     * when uploading new data.</p>
     */
    inline void SetDataDelayOffsetInMinutes(long long value) { m_dataDelayOffsetInMinutesHasBeenSet = true; m_dataDelayOffsetInMinutes = value; }

    /**
     * <p> A period of time (in minutes) by which inference on the data is delayed
     * after the data starts. For instance, if you select an offset delay time of five
     * minutes, inference will not begin on the data until the first data measurement
     * after the five minute mark. For example, if five minutes is selected, the
     * inference scheduler will wake up at the configured frequency with the additional
     * five minute delay time to check the customer S3 bucket. The customer can upload
     * data at the same frequency and they don't need to stop and restart the scheduler
     * when uploading new data.</p>
     */
    inline UpdateInferenceSchedulerRequest& WithDataDelayOffsetInMinutes(long long value) { SetDataDelayOffsetInMinutes(value); return *this;}


    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. The
     * value chosen is the length of time between data uploads. For instance, if you
     * select 5 minutes, Amazon Lookout for Equipment will upload the real-time data to
     * the source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline const DataUploadFrequency& GetDataUploadFrequency() const{ return m_dataUploadFrequency; }

    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. The
     * value chosen is the length of time between data uploads. For instance, if you
     * select 5 minutes, Amazon Lookout for Equipment will upload the real-time data to
     * the source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline bool DataUploadFrequencyHasBeenSet() const { return m_dataUploadFrequencyHasBeenSet; }

    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. The
     * value chosen is the length of time between data uploads. For instance, if you
     * select 5 minutes, Amazon Lookout for Equipment will upload the real-time data to
     * the source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline void SetDataUploadFrequency(const DataUploadFrequency& value) { m_dataUploadFrequencyHasBeenSet = true; m_dataUploadFrequency = value; }

    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. The
     * value chosen is the length of time between data uploads. For instance, if you
     * select 5 minutes, Amazon Lookout for Equipment will upload the real-time data to
     * the source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline void SetDataUploadFrequency(DataUploadFrequency&& value) { m_dataUploadFrequencyHasBeenSet = true; m_dataUploadFrequency = std::move(value); }

    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. The
     * value chosen is the length of time between data uploads. For instance, if you
     * select 5 minutes, Amazon Lookout for Equipment will upload the real-time data to
     * the source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithDataUploadFrequency(const DataUploadFrequency& value) { SetDataUploadFrequency(value); return *this;}

    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. The
     * value chosen is the length of time between data uploads. For instance, if you
     * select 5 minutes, Amazon Lookout for Equipment will upload the real-time data to
     * the source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithDataUploadFrequency(DataUploadFrequency&& value) { SetDataUploadFrequency(std::move(value)); return *this;}


    /**
     * <p> Specifies information for the input data for the inference scheduler,
     * including delimiter, format, and dataset location. </p>
     */
    inline const InferenceInputConfiguration& GetDataInputConfiguration() const{ return m_dataInputConfiguration; }

    /**
     * <p> Specifies information for the input data for the inference scheduler,
     * including delimiter, format, and dataset location. </p>
     */
    inline bool DataInputConfigurationHasBeenSet() const { return m_dataInputConfigurationHasBeenSet; }

    /**
     * <p> Specifies information for the input data for the inference scheduler,
     * including delimiter, format, and dataset location. </p>
     */
    inline void SetDataInputConfiguration(const InferenceInputConfiguration& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = value; }

    /**
     * <p> Specifies information for the input data for the inference scheduler,
     * including delimiter, format, and dataset location. </p>
     */
    inline void SetDataInputConfiguration(InferenceInputConfiguration&& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = std::move(value); }

    /**
     * <p> Specifies information for the input data for the inference scheduler,
     * including delimiter, format, and dataset location. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithDataInputConfiguration(const InferenceInputConfiguration& value) { SetDataInputConfiguration(value); return *this;}

    /**
     * <p> Specifies information for the input data for the inference scheduler,
     * including delimiter, format, and dataset location. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithDataInputConfiguration(InferenceInputConfiguration&& value) { SetDataInputConfiguration(std::move(value)); return *this;}


    /**
     * <p> Specifies information for the output results from the inference scheduler,
     * including the output S3 location. </p>
     */
    inline const InferenceOutputConfiguration& GetDataOutputConfiguration() const{ return m_dataOutputConfiguration; }

    /**
     * <p> Specifies information for the output results from the inference scheduler,
     * including the output S3 location. </p>
     */
    inline bool DataOutputConfigurationHasBeenSet() const { return m_dataOutputConfigurationHasBeenSet; }

    /**
     * <p> Specifies information for the output results from the inference scheduler,
     * including the output S3 location. </p>
     */
    inline void SetDataOutputConfiguration(const InferenceOutputConfiguration& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = value; }

    /**
     * <p> Specifies information for the output results from the inference scheduler,
     * including the output S3 location. </p>
     */
    inline void SetDataOutputConfiguration(InferenceOutputConfiguration&& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = std::move(value); }

    /**
     * <p> Specifies information for the output results from the inference scheduler,
     * including the output S3 location. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithDataOutputConfiguration(const InferenceOutputConfiguration& value) { SetDataOutputConfiguration(value); return *this;}

    /**
     * <p> Specifies information for the output results from the inference scheduler,
     * including the output S3 location. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithDataOutputConfiguration(InferenceOutputConfiguration&& value) { SetDataOutputConfiguration(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler. </p>
     */
    inline UpdateInferenceSchedulerRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    long long m_dataDelayOffsetInMinutes;
    bool m_dataDelayOffsetInMinutesHasBeenSet = false;

    DataUploadFrequency m_dataUploadFrequency;
    bool m_dataUploadFrequencyHasBeenSet = false;

    InferenceInputConfiguration m_dataInputConfiguration;
    bool m_dataInputConfigurationHasBeenSet = false;

    InferenceOutputConfiguration m_dataOutputConfiguration;
    bool m_dataOutputConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
