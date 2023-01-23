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
    AWS_LOOKOUTEQUIPMENT_API DescribeInferenceSchedulerResult();
    AWS_LOOKOUTEQUIPMENT_API DescribeInferenceSchedulerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeInferenceSchedulerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the ML model of the inference scheduler
     * being described. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model of the inference scheduler
     * being described. </p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model of the inference scheduler
     * being described. </p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model of the inference scheduler
     * being described. </p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model of the inference scheduler
     * being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model of the inference scheduler
     * being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ML model of the inference scheduler
     * being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The name of the ML model of the inference scheduler being described. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the ML model of the inference scheduler being described. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>The name of the ML model of the inference scheduler being described. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>The name of the ML model of the inference scheduler being described. </p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>The name of the ML model of the inference scheduler being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the ML model of the inference scheduler being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the ML model of the inference scheduler being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The name of the inference scheduler being described. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }

    /**
     * <p>The name of the inference scheduler being described. </p>
     */
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerName = value; }

    /**
     * <p>The name of the inference scheduler being described. </p>
     */
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerName = std::move(value); }

    /**
     * <p>The name of the inference scheduler being described. </p>
     */
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerName.assign(value); }

    /**
     * <p>The name of the inference scheduler being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}

    /**
     * <p>The name of the inference scheduler being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference scheduler being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being described.
     * </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const{ return m_inferenceSchedulerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being described.
     * </p>
     */
    inline void SetInferenceSchedulerArn(const Aws::String& value) { m_inferenceSchedulerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being described.
     * </p>
     */
    inline void SetInferenceSchedulerArn(Aws::String&& value) { m_inferenceSchedulerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being described.
     * </p>
     */
    inline void SetInferenceSchedulerArn(const char* value) { m_inferenceSchedulerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being described.
     * </p>
     */
    inline DescribeInferenceSchedulerResult& WithInferenceSchedulerArn(const Aws::String& value) { SetInferenceSchedulerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being described.
     * </p>
     */
    inline DescribeInferenceSchedulerResult& WithInferenceSchedulerArn(Aws::String&& value) { SetInferenceSchedulerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the inference scheduler being described.
     * </p>
     */
    inline DescribeInferenceSchedulerResult& WithInferenceSchedulerArn(const char* value) { SetInferenceSchedulerArn(value); return *this;}


    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline const InferenceSchedulerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline void SetStatus(const InferenceSchedulerStatus& value) { m_status = value; }

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline void SetStatus(InferenceSchedulerStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline DescribeInferenceSchedulerResult& WithStatus(const InferenceSchedulerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the inference scheduler. </p>
     */
    inline DescribeInferenceSchedulerResult& WithStatus(InferenceSchedulerStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline void SetDataDelayOffsetInMinutes(long long value) { m_dataDelayOffsetInMinutes = value; }

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
    inline DescribeInferenceSchedulerResult& WithDataDelayOffsetInMinutes(long long value) { SetDataDelayOffsetInMinutes(value); return *this;}


    /**
     * <p>Specifies how often data is uploaded to the source S3 bucket for the input
     * data. This value is the length of time between data uploads. For instance, if
     * you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment starts a scheduled inference on your
     * data. In this example, it starts once every 5 minutes. </p>
     */
    inline const DataUploadFrequency& GetDataUploadFrequency() const{ return m_dataUploadFrequency; }

    /**
     * <p>Specifies how often data is uploaded to the source S3 bucket for the input
     * data. This value is the length of time between data uploads. For instance, if
     * you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment starts a scheduled inference on your
     * data. In this example, it starts once every 5 minutes. </p>
     */
    inline void SetDataUploadFrequency(const DataUploadFrequency& value) { m_dataUploadFrequency = value; }

    /**
     * <p>Specifies how often data is uploaded to the source S3 bucket for the input
     * data. This value is the length of time between data uploads. For instance, if
     * you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment starts a scheduled inference on your
     * data. In this example, it starts once every 5 minutes. </p>
     */
    inline void SetDataUploadFrequency(DataUploadFrequency&& value) { m_dataUploadFrequency = std::move(value); }

    /**
     * <p>Specifies how often data is uploaded to the source S3 bucket for the input
     * data. This value is the length of time between data uploads. For instance, if
     * you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment starts a scheduled inference on your
     * data. In this example, it starts once every 5 minutes. </p>
     */
    inline DescribeInferenceSchedulerResult& WithDataUploadFrequency(const DataUploadFrequency& value) { SetDataUploadFrequency(value); return *this;}

    /**
     * <p>Specifies how often data is uploaded to the source S3 bucket for the input
     * data. This value is the length of time between data uploads. For instance, if
     * you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment starts a scheduled inference on your
     * data. In this example, it starts once every 5 minutes. </p>
     */
    inline DescribeInferenceSchedulerResult& WithDataUploadFrequency(DataUploadFrequency&& value) { SetDataUploadFrequency(std::move(value)); return *this;}


    /**
     * <p>Specifies the time at which the inference scheduler was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Specifies the time at which the inference scheduler was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Specifies the time at which the inference scheduler was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Specifies the time at which the inference scheduler was created. </p>
     */
    inline DescribeInferenceSchedulerResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Specifies the time at which the inference scheduler was created. </p>
     */
    inline DescribeInferenceSchedulerResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Specifies the time at which the inference scheduler was last updated, if it
     * was. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>Specifies the time at which the inference scheduler was last updated, if it
     * was. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>Specifies the time at which the inference scheduler was last updated, if it
     * was. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>Specifies the time at which the inference scheduler was last updated, if it
     * was. </p>
     */
    inline DescribeInferenceSchedulerResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>Specifies the time at which the inference scheduler was last updated, if it
     * was. </p>
     */
    inline DescribeInferenceSchedulerResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline const InferenceInputConfiguration& GetDataInputConfiguration() const{ return m_dataInputConfiguration; }

    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline void SetDataInputConfiguration(const InferenceInputConfiguration& value) { m_dataInputConfiguration = value; }

    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline void SetDataInputConfiguration(InferenceInputConfiguration&& value) { m_dataInputConfiguration = std::move(value); }

    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline DescribeInferenceSchedulerResult& WithDataInputConfiguration(const InferenceInputConfiguration& value) { SetDataInputConfiguration(value); return *this;}

    /**
     * <p> Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline DescribeInferenceSchedulerResult& WithDataInputConfiguration(InferenceInputConfiguration&& value) { SetDataInputConfiguration(std::move(value)); return *this;}


    /**
     * <p> Specifies information for the output results for the inference scheduler,
     * including the output S3 location. </p>
     */
    inline const InferenceOutputConfiguration& GetDataOutputConfiguration() const{ return m_dataOutputConfiguration; }

    /**
     * <p> Specifies information for the output results for the inference scheduler,
     * including the output S3 location. </p>
     */
    inline void SetDataOutputConfiguration(const InferenceOutputConfiguration& value) { m_dataOutputConfiguration = value; }

    /**
     * <p> Specifies information for the output results for the inference scheduler,
     * including the output S3 location. </p>
     */
    inline void SetDataOutputConfiguration(InferenceOutputConfiguration&& value) { m_dataOutputConfiguration = std::move(value); }

    /**
     * <p> Specifies information for the output results for the inference scheduler,
     * including the output S3 location. </p>
     */
    inline DescribeInferenceSchedulerResult& WithDataOutputConfiguration(const InferenceOutputConfiguration& value) { SetDataOutputConfiguration(value); return *this;}

    /**
     * <p> Specifies information for the output results for the inference scheduler,
     * including the output S3 location. </p>
     */
    inline DescribeInferenceSchedulerResult& WithDataOutputConfiguration(InferenceOutputConfiguration&& value) { SetDataOutputConfiguration(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler being described. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler being described. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler being described. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler being described. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the inference scheduler being described. </p>
     */
    inline DescribeInferenceSchedulerResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const{ return m_serverSideKmsKeyId; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const Aws::String& value) { m_serverSideKmsKeyId = value; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(Aws::String&& value) { m_serverSideKmsKeyId = std::move(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const char* value) { m_serverSideKmsKeyId.assign(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline DescribeInferenceSchedulerResult& WithServerSideKmsKeyId(const Aws::String& value) { SetServerSideKmsKeyId(value); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline DescribeInferenceSchedulerResult& WithServerSideKmsKeyId(Aws::String&& value) { SetServerSideKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline DescribeInferenceSchedulerResult& WithServerSideKmsKeyId(const char* value) { SetServerSideKmsKeyId(value); return *this;}


    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline const LatestInferenceResult& GetLatestInferenceResult() const{ return m_latestInferenceResult; }

    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline void SetLatestInferenceResult(const LatestInferenceResult& value) { m_latestInferenceResult = value; }

    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline void SetLatestInferenceResult(LatestInferenceResult&& value) { m_latestInferenceResult = std::move(value); }

    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline DescribeInferenceSchedulerResult& WithLatestInferenceResult(const LatestInferenceResult& value) { SetLatestInferenceResult(value); return *this;}

    /**
     * <p>Indicates whether the latest execution for the inference scheduler was
     * Anomalous (anomalous events found) or Normal (no anomalous events found).</p>
     */
    inline DescribeInferenceSchedulerResult& WithLatestInferenceResult(LatestInferenceResult&& value) { SetLatestInferenceResult(std::move(value)); return *this;}

  private:

    Aws::String m_modelArn;

    Aws::String m_modelName;

    Aws::String m_inferenceSchedulerName;

    Aws::String m_inferenceSchedulerArn;

    InferenceSchedulerStatus m_status;

    long long m_dataDelayOffsetInMinutes;

    DataUploadFrequency m_dataUploadFrequency;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    InferenceInputConfiguration m_dataInputConfiguration;

    InferenceOutputConfiguration m_dataOutputConfiguration;

    Aws::String m_roleArn;

    Aws::String m_serverSideKmsKeyId;

    LatestInferenceResult m_latestInferenceResult;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
