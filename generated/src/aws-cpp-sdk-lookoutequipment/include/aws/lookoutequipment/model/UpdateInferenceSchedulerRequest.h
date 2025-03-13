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
    AWS_LOOKOUTEQUIPMENT_API UpdateInferenceSchedulerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInferenceScheduler"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the inference scheduler to be updated. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const { return m_inferenceSchedulerName; }
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }
    template<typename InferenceSchedulerNameT = Aws::String>
    void SetInferenceSchedulerName(InferenceSchedulerNameT&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::forward<InferenceSchedulerNameT>(value); }
    template<typename InferenceSchedulerNameT = Aws::String>
    UpdateInferenceSchedulerRequest& WithInferenceSchedulerName(InferenceSchedulerNameT&& value) { SetInferenceSchedulerName(std::forward<InferenceSchedulerNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline long long GetDataDelayOffsetInMinutes() const { return m_dataDelayOffsetInMinutes; }
    inline bool DataDelayOffsetInMinutesHasBeenSet() const { return m_dataDelayOffsetInMinutesHasBeenSet; }
    inline void SetDataDelayOffsetInMinutes(long long value) { m_dataDelayOffsetInMinutesHasBeenSet = true; m_dataDelayOffsetInMinutes = value; }
    inline UpdateInferenceSchedulerRequest& WithDataDelayOffsetInMinutes(long long value) { SetDataDelayOffsetInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How often data is uploaded to the source S3 bucket for the input data. The
     * value chosen is the length of time between data uploads. For instance, if you
     * select 5 minutes, Amazon Lookout for Equipment will upload the real-time data to
     * the source bucket once every 5 minutes. This frequency also determines how often
     * Amazon Lookout for Equipment starts a scheduled inference on your data. In this
     * example, it starts once every 5 minutes. </p>
     */
    inline DataUploadFrequency GetDataUploadFrequency() const { return m_dataUploadFrequency; }
    inline bool DataUploadFrequencyHasBeenSet() const { return m_dataUploadFrequencyHasBeenSet; }
    inline void SetDataUploadFrequency(DataUploadFrequency value) { m_dataUploadFrequencyHasBeenSet = true; m_dataUploadFrequency = value; }
    inline UpdateInferenceSchedulerRequest& WithDataUploadFrequency(DataUploadFrequency value) { SetDataUploadFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies information for the input data for the inference scheduler,
     * including delimiter, format, and dataset location. </p>
     */
    inline const InferenceInputConfiguration& GetDataInputConfiguration() const { return m_dataInputConfiguration; }
    inline bool DataInputConfigurationHasBeenSet() const { return m_dataInputConfigurationHasBeenSet; }
    template<typename DataInputConfigurationT = InferenceInputConfiguration>
    void SetDataInputConfiguration(DataInputConfigurationT&& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = std::forward<DataInputConfigurationT>(value); }
    template<typename DataInputConfigurationT = InferenceInputConfiguration>
    UpdateInferenceSchedulerRequest& WithDataInputConfiguration(DataInputConfigurationT&& value) { SetDataInputConfiguration(std::forward<DataInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies information for the output results from the inference scheduler,
     * including the output S3 location. </p>
     */
    inline const InferenceOutputConfiguration& GetDataOutputConfiguration() const { return m_dataOutputConfiguration; }
    inline bool DataOutputConfigurationHasBeenSet() const { return m_dataOutputConfigurationHasBeenSet; }
    template<typename DataOutputConfigurationT = InferenceOutputConfiguration>
    void SetDataOutputConfiguration(DataOutputConfigurationT&& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = std::forward<DataOutputConfigurationT>(value); }
    template<typename DataOutputConfigurationT = InferenceOutputConfiguration>
    UpdateInferenceSchedulerRequest& WithDataOutputConfiguration(DataOutputConfigurationT&& value) { SetDataOutputConfiguration(std::forward<DataOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateInferenceSchedulerRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    long long m_dataDelayOffsetInMinutes{0};
    bool m_dataDelayOffsetInMinutesHasBeenSet = false;

    DataUploadFrequency m_dataUploadFrequency{DataUploadFrequency::NOT_SET};
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
