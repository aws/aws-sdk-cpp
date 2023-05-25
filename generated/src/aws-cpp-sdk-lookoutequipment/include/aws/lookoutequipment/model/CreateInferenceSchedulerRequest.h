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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class CreateInferenceSchedulerRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateInferenceSchedulerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInferenceScheduler"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the previously trained ML model being used to create the
     * inference scheduler. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the previously trained ML model being used to create the
     * inference scheduler. </p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the previously trained ML model being used to create the
     * inference scheduler. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the previously trained ML model being used to create the
     * inference scheduler. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the previously trained ML model being used to create the
     * inference scheduler. </p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the previously trained ML model being used to create the
     * inference scheduler. </p>
     */
    inline CreateInferenceSchedulerRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the previously trained ML model being used to create the
     * inference scheduler. </p>
     */
    inline CreateInferenceSchedulerRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the previously trained ML model being used to create the
     * inference scheduler. </p>
     */
    inline CreateInferenceSchedulerRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The name of the inference scheduler being created. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }

    /**
     * <p>The name of the inference scheduler being created. </p>
     */
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }

    /**
     * <p>The name of the inference scheduler being created. </p>
     */
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = value; }

    /**
     * <p>The name of the inference scheduler being created. </p>
     */
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::move(value); }

    /**
     * <p>The name of the inference scheduler being created. </p>
     */
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName.assign(value); }

    /**
     * <p>The name of the inference scheduler being created. </p>
     */
    inline CreateInferenceSchedulerRequest& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}

    /**
     * <p>The name of the inference scheduler being created. </p>
     */
    inline CreateInferenceSchedulerRequest& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference scheduler being created. </p>
     */
    inline CreateInferenceSchedulerRequest& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}


    /**
     * <p>The interval (in minutes) of planned delay at the start of each inference
     * segment. For example, if inference is set to run every ten minutes, the delay is
     * set to five minutes and the time is 09:08. The inference scheduler will wake up
     * at the configured interval (which, without a delay configured, would be 09:10)
     * plus the additional five minute delay time (so 09:15) to check your Amazon S3
     * bucket. The delay provides a buffer for you to upload data at the same
     * frequency, so that you don't have to stop and restart the scheduler when
     * uploading new data.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-inference-process.html">Understanding
     * the inference process</a>.</p>
     */
    inline long long GetDataDelayOffsetInMinutes() const{ return m_dataDelayOffsetInMinutes; }

    /**
     * <p>The interval (in minutes) of planned delay at the start of each inference
     * segment. For example, if inference is set to run every ten minutes, the delay is
     * set to five minutes and the time is 09:08. The inference scheduler will wake up
     * at the configured interval (which, without a delay configured, would be 09:10)
     * plus the additional five minute delay time (so 09:15) to check your Amazon S3
     * bucket. The delay provides a buffer for you to upload data at the same
     * frequency, so that you don't have to stop and restart the scheduler when
     * uploading new data.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-inference-process.html">Understanding
     * the inference process</a>.</p>
     */
    inline bool DataDelayOffsetInMinutesHasBeenSet() const { return m_dataDelayOffsetInMinutesHasBeenSet; }

    /**
     * <p>The interval (in minutes) of planned delay at the start of each inference
     * segment. For example, if inference is set to run every ten minutes, the delay is
     * set to five minutes and the time is 09:08. The inference scheduler will wake up
     * at the configured interval (which, without a delay configured, would be 09:10)
     * plus the additional five minute delay time (so 09:15) to check your Amazon S3
     * bucket. The delay provides a buffer for you to upload data at the same
     * frequency, so that you don't have to stop and restart the scheduler when
     * uploading new data.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-inference-process.html">Understanding
     * the inference process</a>.</p>
     */
    inline void SetDataDelayOffsetInMinutes(long long value) { m_dataDelayOffsetInMinutesHasBeenSet = true; m_dataDelayOffsetInMinutes = value; }

    /**
     * <p>The interval (in minutes) of planned delay at the start of each inference
     * segment. For example, if inference is set to run every ten minutes, the delay is
     * set to five minutes and the time is 09:08. The inference scheduler will wake up
     * at the configured interval (which, without a delay configured, would be 09:10)
     * plus the additional five minute delay time (so 09:15) to check your Amazon S3
     * bucket. The delay provides a buffer for you to upload data at the same
     * frequency, so that you don't have to stop and restart the scheduler when
     * uploading new data.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-inference-process.html">Understanding
     * the inference process</a>.</p>
     */
    inline CreateInferenceSchedulerRequest& WithDataDelayOffsetInMinutes(long long value) { SetDataDelayOffsetInMinutes(value); return *this;}


    /**
     * <p> How often data is uploaded to the source Amazon S3 bucket for the input
     * data. The value chosen is the length of time between data uploads. For instance,
     * if you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment runs inference on your data.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-inference-process.html">Understanding
     * the inference process</a>.</p>
     */
    inline const DataUploadFrequency& GetDataUploadFrequency() const{ return m_dataUploadFrequency; }

    /**
     * <p> How often data is uploaded to the source Amazon S3 bucket for the input
     * data. The value chosen is the length of time between data uploads. For instance,
     * if you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment runs inference on your data.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-inference-process.html">Understanding
     * the inference process</a>.</p>
     */
    inline bool DataUploadFrequencyHasBeenSet() const { return m_dataUploadFrequencyHasBeenSet; }

    /**
     * <p> How often data is uploaded to the source Amazon S3 bucket for the input
     * data. The value chosen is the length of time between data uploads. For instance,
     * if you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment runs inference on your data.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-inference-process.html">Understanding
     * the inference process</a>.</p>
     */
    inline void SetDataUploadFrequency(const DataUploadFrequency& value) { m_dataUploadFrequencyHasBeenSet = true; m_dataUploadFrequency = value; }

    /**
     * <p> How often data is uploaded to the source Amazon S3 bucket for the input
     * data. The value chosen is the length of time between data uploads. For instance,
     * if you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment runs inference on your data.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-inference-process.html">Understanding
     * the inference process</a>.</p>
     */
    inline void SetDataUploadFrequency(DataUploadFrequency&& value) { m_dataUploadFrequencyHasBeenSet = true; m_dataUploadFrequency = std::move(value); }

    /**
     * <p> How often data is uploaded to the source Amazon S3 bucket for the input
     * data. The value chosen is the length of time between data uploads. For instance,
     * if you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment runs inference on your data.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-inference-process.html">Understanding
     * the inference process</a>.</p>
     */
    inline CreateInferenceSchedulerRequest& WithDataUploadFrequency(const DataUploadFrequency& value) { SetDataUploadFrequency(value); return *this;}

    /**
     * <p> How often data is uploaded to the source Amazon S3 bucket for the input
     * data. The value chosen is the length of time between data uploads. For instance,
     * if you select 5 minutes, Amazon Lookout for Equipment will upload the real-time
     * data to the source bucket once every 5 minutes. This frequency also determines
     * how often Amazon Lookout for Equipment runs inference on your data.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-inference-process.html">Understanding
     * the inference process</a>.</p>
     */
    inline CreateInferenceSchedulerRequest& WithDataUploadFrequency(DataUploadFrequency&& value) { SetDataUploadFrequency(std::move(value)); return *this;}


    /**
     * <p>Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline const InferenceInputConfiguration& GetDataInputConfiguration() const{ return m_dataInputConfiguration; }

    /**
     * <p>Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline bool DataInputConfigurationHasBeenSet() const { return m_dataInputConfigurationHasBeenSet; }

    /**
     * <p>Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline void SetDataInputConfiguration(const InferenceInputConfiguration& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = value; }

    /**
     * <p>Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline void SetDataInputConfiguration(InferenceInputConfiguration&& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = std::move(value); }

    /**
     * <p>Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline CreateInferenceSchedulerRequest& WithDataInputConfiguration(const InferenceInputConfiguration& value) { SetDataInputConfiguration(value); return *this;}

    /**
     * <p>Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline CreateInferenceSchedulerRequest& WithDataInputConfiguration(InferenceInputConfiguration&& value) { SetDataInputConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies configuration information for the output results for the inference
     * scheduler, including the S3 location for the output. </p>
     */
    inline const InferenceOutputConfiguration& GetDataOutputConfiguration() const{ return m_dataOutputConfiguration; }

    /**
     * <p>Specifies configuration information for the output results for the inference
     * scheduler, including the S3 location for the output. </p>
     */
    inline bool DataOutputConfigurationHasBeenSet() const { return m_dataOutputConfigurationHasBeenSet; }

    /**
     * <p>Specifies configuration information for the output results for the inference
     * scheduler, including the S3 location for the output. </p>
     */
    inline void SetDataOutputConfiguration(const InferenceOutputConfiguration& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = value; }

    /**
     * <p>Specifies configuration information for the output results for the inference
     * scheduler, including the S3 location for the output. </p>
     */
    inline void SetDataOutputConfiguration(InferenceOutputConfiguration&& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = std::move(value); }

    /**
     * <p>Specifies configuration information for the output results for the inference
     * scheduler, including the S3 location for the output. </p>
     */
    inline CreateInferenceSchedulerRequest& WithDataOutputConfiguration(const InferenceOutputConfiguration& value) { SetDataOutputConfiguration(value); return *this;}

    /**
     * <p>Specifies configuration information for the output results for the inference
     * scheduler, including the S3 location for the output. </p>
     */
    inline CreateInferenceSchedulerRequest& WithDataOutputConfiguration(InferenceOutputConfiguration&& value) { SetDataOutputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used for the inference. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used for the inference. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used for the inference. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used for the inference. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used for the inference. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used for the inference. </p>
     */
    inline CreateInferenceSchedulerRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used for the inference. </p>
     */
    inline CreateInferenceSchedulerRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used for the inference. </p>
     */
    inline CreateInferenceSchedulerRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const{ return m_serverSideKmsKeyId; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline bool ServerSideKmsKeyIdHasBeenSet() const { return m_serverSideKmsKeyIdHasBeenSet; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const Aws::String& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = value; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(Aws::String&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::move(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const char* value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId.assign(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline CreateInferenceSchedulerRequest& WithServerSideKmsKeyId(const Aws::String& value) { SetServerSideKmsKeyId(value); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline CreateInferenceSchedulerRequest& WithServerSideKmsKeyId(Aws::String&& value) { SetServerSideKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline CreateInferenceSchedulerRequest& WithServerSideKmsKeyId(const char* value) { SetServerSideKmsKeyId(value); return *this;}


    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateInferenceSchedulerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateInferenceSchedulerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateInferenceSchedulerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Any tags associated with the inference scheduler. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags associated with the inference scheduler. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags associated with the inference scheduler. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags associated with the inference scheduler. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags associated with the inference scheduler. </p>
     */
    inline CreateInferenceSchedulerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags associated with the inference scheduler. </p>
     */
    inline CreateInferenceSchedulerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags associated with the inference scheduler. </p>
     */
    inline CreateInferenceSchedulerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags associated with the inference scheduler. </p>
     */
    inline CreateInferenceSchedulerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

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

    Aws::String m_serverSideKmsKeyId;
    bool m_serverSideKmsKeyIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
