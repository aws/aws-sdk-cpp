/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/Association.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Braket
{
namespace Model
{

  /**
   */
  class CreateQuantumTaskRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API CreateQuantumTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQuantumTask"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The client token associated with the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateQuantumTaskRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device to run the quantum task on.</p>
     */
    inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
    template<typename DeviceArnT = Aws::String>
    void SetDeviceArn(DeviceArnT&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::forward<DeviceArnT>(value); }
    template<typename DeviceArnT = Aws::String>
    CreateQuantumTaskRequest& WithDeviceArn(DeviceArnT&& value) { SetDeviceArn(std::forward<DeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the device to run the quantum task on.</p>
     */
    inline const Aws::String& GetDeviceParameters() const { return m_deviceParameters; }
    inline bool DeviceParametersHasBeenSet() const { return m_deviceParametersHasBeenSet; }
    template<typename DeviceParametersT = Aws::String>
    void SetDeviceParameters(DeviceParametersT&& value) { m_deviceParametersHasBeenSet = true; m_deviceParameters = std::forward<DeviceParametersT>(value); }
    template<typename DeviceParametersT = Aws::String>
    CreateQuantumTaskRequest& WithDeviceParameters(DeviceParametersT&& value) { SetDeviceParameters(std::forward<DeviceParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shots to use for the quantum task.</p>
     */
    inline long long GetShots() const { return m_shots; }
    inline bool ShotsHasBeenSet() const { return m_shotsHasBeenSet; }
    inline void SetShots(long long value) { m_shotsHasBeenSet = true; m_shots = value; }
    inline CreateQuantumTaskRequest& WithShots(long long value) { SetShots(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket to store quantum task result files in.</p>
     */
    inline const Aws::String& GetOutputS3Bucket() const { return m_outputS3Bucket; }
    inline bool OutputS3BucketHasBeenSet() const { return m_outputS3BucketHasBeenSet; }
    template<typename OutputS3BucketT = Aws::String>
    void SetOutputS3Bucket(OutputS3BucketT&& value) { m_outputS3BucketHasBeenSet = true; m_outputS3Bucket = std::forward<OutputS3BucketT>(value); }
    template<typename OutputS3BucketT = Aws::String>
    CreateQuantumTaskRequest& WithOutputS3Bucket(OutputS3BucketT&& value) { SetOutputS3Bucket(std::forward<OutputS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key prefix for the location in the S3 bucket to store quantum task
     * results in.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const { return m_outputS3KeyPrefix; }
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }
    template<typename OutputS3KeyPrefixT = Aws::String>
    void SetOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::forward<OutputS3KeyPrefixT>(value); }
    template<typename OutputS3KeyPrefixT = Aws::String>
    CreateQuantumTaskRequest& WithOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { SetOutputS3KeyPrefix(std::forward<OutputS3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action associated with the quantum task.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    CreateQuantumTaskRequest& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to be added to the quantum task you're creating.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateQuantumTaskRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateQuantumTaskRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The token for an Amazon Braket hybrid job that associates it with the quantum
     * task.</p>
     */
    inline const Aws::String& GetJobToken() const { return m_jobToken; }
    inline bool JobTokenHasBeenSet() const { return m_jobTokenHasBeenSet; }
    template<typename JobTokenT = Aws::String>
    void SetJobToken(JobTokenT&& value) { m_jobTokenHasBeenSet = true; m_jobToken = std::forward<JobTokenT>(value); }
    template<typename JobTokenT = Aws::String>
    CreateQuantumTaskRequest& WithJobToken(JobTokenT&& value) { SetJobToken(std::forward<JobTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Braket resources associated with the quantum task.</p>
     */
    inline const Aws::Vector<Association>& GetAssociations() const { return m_associations; }
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }
    template<typename AssociationsT = Aws::Vector<Association>>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = Aws::Vector<Association>>
    CreateQuantumTaskRequest& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    template<typename AssociationsT = Association>
    CreateQuantumTaskRequest& AddAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations.emplace_back(std::forward<AssociationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_deviceParameters;
    bool m_deviceParametersHasBeenSet = false;

    long long m_shots{0};
    bool m_shotsHasBeenSet = false;

    Aws::String m_outputS3Bucket;
    bool m_outputS3BucketHasBeenSet = false;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_jobToken;
    bool m_jobTokenHasBeenSet = false;

    Aws::Vector<Association> m_associations;
    bool m_associationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
