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
    AWS_LOOKOUTEQUIPMENT_API CreateInferenceSchedulerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInferenceScheduler"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the previously trained machine learning model being used to
     * create the inference scheduler. </p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    CreateInferenceSchedulerRequest& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference scheduler being created. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const { return m_inferenceSchedulerName; }
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }
    template<typename InferenceSchedulerNameT = Aws::String>
    void SetInferenceSchedulerName(InferenceSchedulerNameT&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::forward<InferenceSchedulerNameT>(value); }
    template<typename InferenceSchedulerNameT = Aws::String>
    CreateInferenceSchedulerRequest& WithInferenceSchedulerName(InferenceSchedulerNameT&& value) { SetInferenceSchedulerName(std::forward<InferenceSchedulerNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline long long GetDataDelayOffsetInMinutes() const { return m_dataDelayOffsetInMinutes; }
    inline bool DataDelayOffsetInMinutesHasBeenSet() const { return m_dataDelayOffsetInMinutesHasBeenSet; }
    inline void SetDataDelayOffsetInMinutes(long long value) { m_dataDelayOffsetInMinutesHasBeenSet = true; m_dataDelayOffsetInMinutes = value; }
    inline CreateInferenceSchedulerRequest& WithDataDelayOffsetInMinutes(long long value) { SetDataDelayOffsetInMinutes(value); return *this;}
    ///@}

    ///@{
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
    inline DataUploadFrequency GetDataUploadFrequency() const { return m_dataUploadFrequency; }
    inline bool DataUploadFrequencyHasBeenSet() const { return m_dataUploadFrequencyHasBeenSet; }
    inline void SetDataUploadFrequency(DataUploadFrequency value) { m_dataUploadFrequencyHasBeenSet = true; m_dataUploadFrequency = value; }
    inline CreateInferenceSchedulerRequest& WithDataUploadFrequency(DataUploadFrequency value) { SetDataUploadFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration information for the input data for the inference
     * scheduler, including delimiter, format, and dataset location. </p>
     */
    inline const InferenceInputConfiguration& GetDataInputConfiguration() const { return m_dataInputConfiguration; }
    inline bool DataInputConfigurationHasBeenSet() const { return m_dataInputConfigurationHasBeenSet; }
    template<typename DataInputConfigurationT = InferenceInputConfiguration>
    void SetDataInputConfiguration(DataInputConfigurationT&& value) { m_dataInputConfigurationHasBeenSet = true; m_dataInputConfiguration = std::forward<DataInputConfigurationT>(value); }
    template<typename DataInputConfigurationT = InferenceInputConfiguration>
    CreateInferenceSchedulerRequest& WithDataInputConfiguration(DataInputConfigurationT&& value) { SetDataInputConfiguration(std::forward<DataInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration information for the output results for the inference
     * scheduler, including the S3 location for the output. </p>
     */
    inline const InferenceOutputConfiguration& GetDataOutputConfiguration() const { return m_dataOutputConfiguration; }
    inline bool DataOutputConfigurationHasBeenSet() const { return m_dataOutputConfigurationHasBeenSet; }
    template<typename DataOutputConfigurationT = InferenceOutputConfiguration>
    void SetDataOutputConfiguration(DataOutputConfigurationT&& value) { m_dataOutputConfigurationHasBeenSet = true; m_dataOutputConfiguration = std::forward<DataOutputConfigurationT>(value); }
    template<typename DataOutputConfigurationT = InferenceOutputConfiguration>
    CreateInferenceSchedulerRequest& WithDataOutputConfiguration(DataOutputConfigurationT&& value) { SetDataOutputConfiguration(std::forward<DataOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access the data
     * source being used for the inference. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateInferenceSchedulerRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the identifier of the KMS key used to encrypt inference scheduler
     * data by Amazon Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const { return m_serverSideKmsKeyId; }
    inline bool ServerSideKmsKeyIdHasBeenSet() const { return m_serverSideKmsKeyIdHasBeenSet; }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    void SetServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::forward<ServerSideKmsKeyIdT>(value); }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    CreateInferenceSchedulerRequest& WithServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { SetServerSideKmsKeyId(std::forward<ServerSideKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateInferenceSchedulerRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags associated with the inference scheduler. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateInferenceSchedulerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateInferenceSchedulerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

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

    Aws::String m_serverSideKmsKeyId;
    bool m_serverSideKmsKeyIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
