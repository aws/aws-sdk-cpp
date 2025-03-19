/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/InferenceSchedulerStatus.h>
#include <aws/lookoutequipment/model/DataUploadFrequency.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/InferenceInputConfiguration.h>
#include <aws/lookoutequipment/model/InferenceOutputConfiguration.h>
#include <aws/lookoutequipment/model/LatestInferenceResult.h>
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
  class DescribeInferenceSchedulerResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeInferenceSchedulerResult() = default;
    AWS_LOOKOUTEQUIPMENT_API DescribeInferenceSchedulerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeInferenceSchedulerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the machine learning model of the inference
     * scheduler being described. </p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    DescribeInferenceSchedulerResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the machine learning model of the inference scheduler being
     * described. </p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    DescribeInferenceSchedulerResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference scheduler being described. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const { return m_inferenceSchedulerName; }
    template<typename InferenceSchedulerNameT = Aws::String>
    void SetInferenceSchedulerName(InferenceSchedulerNameT&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::forward<InferenceSchedulerNameT>(value); }
    template<typename InferenceSchedulerNameT = Aws::String>
    DescribeInferenceSchedulerResult& WithInferenceSchedulerName(InferenceSchedulerNameT&& value) { SetInferenceSchedulerName(std::forward<InferenceSchedulerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being described.
     * </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const { return m_inferenceSchedulerArn; }
    template<typename InferenceSchedulerArnT = Aws::String>
    void SetInferenceSchedulerArn(InferenceSchedulerArnT&& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = std::forward<InferenceSchedulerArnT>(value); }
    template<typename InferenceSchedulerArnT = Aws::String>
    DescribeInferenceSchedulerResult& WithInferenceSchedulerArn(InferenceSchedulerArnT&& value) { SetInferenceSchedulerArn(std::forward<InferenceSchedulerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline InferenceSchedulerStatus GetStatus() const { return m_status; }
    inline void SetStatus(InferenceSchedulerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeInferenceSchedulerResult& WithStatus(InferenceSchedulerStatus value) { SetStatus(value); return *this;}
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
    inline void SetDataDelayOffsetInMinutes(long long value) { m_dataDelayOffsetInMinutesHasBeenSet = true; m_dataDelayOffsetInMinutes = value; }
    inline DescribeInferenceSchedulerResult& WithDataDelayOffsetInMinutes(long long value) { SetDataDelayOffsetInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how often data is uploaded to the source S3 bucket for the input
     * data. This value is the length of time between data uploads. For instance, if
     * you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment starts a scheduled inference on your
     * data. In this example, it starts once every 5 minutes. </p>
     */
    inline DataUploadFrequency GetDataUploadFrequency() const { return m_dataUploadFrequency; }
    inline void SetDataUploadFrequency(DataUploadFrequency value) { m_dataUploadFrequencyHasBeenSet = true; m_dataUploadFrequency = value; }
    inline DescribeInferenceSchedulerResult& WithDataUploadFrequency(DataUploadFrequency value) { SetDataUploadFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time at which the inference scheduler was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeInferenceSchedulerResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time at which the inference scheduler was last updated, if it
     * was. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DescribeInferenceSchedulerResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline const InferenceInputConfiguration& GetDataInputConfiguration() const { return m_dataInputConfiguration; }
    template<typename DataInputConfigurationT = InferenceInputConfiguration>
    void SetDataInputConfiguration(DataInputConfigurationT&& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = std::forward<DataInputConfigurationT>(value); }
    template<typename DataInputConfigurationT = InferenceInputConfiguration>
    DescribeInferenceSchedulerResult& WithDataInputConfiguration(DataInputConfigurationT&& value) { SetDataInputConfiguration(std::forward<DataInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies information for the output results for the inference scheduler,
     * including the output S3 location. </p>
     */
    inline const InferenceOutputConfiguration& GetDataOutputConfiguration() const { return m_dataOutputConfiguration; }
    template<typename DataOutputConfigurationT = InferenceOutputConfiguration>
    void SetDataOutputConfiguration(DataOutputConfigurationT&& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = std::forward<DataOutputConfigurationT>(value); }
    template<typename DataOutputConfigurationT = InferenceOutputConfiguration>
    DescribeInferenceSchedulerResult& WithDataOutputConfiguration(DataOutputConfigurationT&& value) { SetDataOutputConfiguration(std::forward<DataOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler being described. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeInferenceSchedulerResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const { return m_serverSideKmsKeyId; }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    void SetServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::forward<ServerSideKmsKeyIdT>(value); }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    DescribeInferenceSchedulerResult& WithServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { SetServerSideKmsKeyId(std::forward<ServerSideKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline LatestInferenceResult GetLatestInferenceResult() const { return m_latestInferenceResult; }
    inline void SetLatestInferenceResult(LatestInferenceResult value) { m_latestInferenceResultHasBeenSet = true; m_latestInferenceResult = value; }
    inline DescribeInferenceSchedulerResult& WithLatestInferenceResult(LatestInferenceResult value) { SetLatestInferenceResult(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInferenceSchedulerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    InferenceInputConfiguration m_dataInputConfiguration;
    bool m_dataInputConfigurationHasBeenSet = false;

    InferenceOutputConfiguration m_dataOutputConfiguration;
    bool m_dataOutputConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_serverSideKmsKeyId;
    bool m_serverSideKmsKeyIdHasBeenSet = false;

    LatestInferenceResult m_latestInferenceResult{LatestInferenceResult::NOT_SET};
    bool m_latestInferenceResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
