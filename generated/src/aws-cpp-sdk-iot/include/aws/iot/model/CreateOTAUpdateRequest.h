/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/TargetSelection.h>
#include <aws/iot/model/AwsJobExecutionsRolloutConfig.h>
#include <aws/iot/model/AwsJobPresignedUrlConfig.h>
#include <aws/iot/model/AwsJobAbortConfig.h>
#include <aws/iot/model/AwsJobTimeoutConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/Protocol.h>
#include <aws/iot/model/OTAUpdateFile.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateOTAUpdateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateOTAUpdateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOTAUpdate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the OTA update to be created.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const { return m_otaUpdateId; }
    inline bool OtaUpdateIdHasBeenSet() const { return m_otaUpdateIdHasBeenSet; }
    template<typename OtaUpdateIdT = Aws::String>
    void SetOtaUpdateId(OtaUpdateIdT&& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = std::forward<OtaUpdateIdT>(value); }
    template<typename OtaUpdateIdT = Aws::String>
    CreateOTAUpdateRequest& WithOtaUpdateId(OtaUpdateIdT&& value) { SetOtaUpdateId(std::forward<OtaUpdateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the OTA update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateOTAUpdateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The devices targeted to receive OTA updates.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    CreateOTAUpdateRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Aws::String>
    CreateOTAUpdateRequest& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    CreateOTAUpdateRequest& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    inline CreateOTAUpdateRequest& AddProtocols(Protocol value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the update will continue to run (CONTINUOUS), or will be
     * complete after all the things specified as targets have completed the update
     * (SNAPSHOT). If continuous, the update may also be run on a thing when a change
     * is detected in a target. For example, an update will run on a thing when the
     * thing is added to a target group, even after the update was completed by all
     * things originally in the group. Valid values: CONTINUOUS | SNAPSHOT.</p>
     */
    inline TargetSelection GetTargetSelection() const { return m_targetSelection; }
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }
    inline void SetTargetSelection(TargetSelection value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }
    inline CreateOTAUpdateRequest& WithTargetSelection(TargetSelection value) { SetTargetSelection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for the rollout of OTA updates.</p>
     */
    inline const AwsJobExecutionsRolloutConfig& GetAwsJobExecutionsRolloutConfig() const { return m_awsJobExecutionsRolloutConfig; }
    inline bool AwsJobExecutionsRolloutConfigHasBeenSet() const { return m_awsJobExecutionsRolloutConfigHasBeenSet; }
    template<typename AwsJobExecutionsRolloutConfigT = AwsJobExecutionsRolloutConfig>
    void SetAwsJobExecutionsRolloutConfig(AwsJobExecutionsRolloutConfigT&& value) { m_awsJobExecutionsRolloutConfigHasBeenSet = true; m_awsJobExecutionsRolloutConfig = std::forward<AwsJobExecutionsRolloutConfigT>(value); }
    template<typename AwsJobExecutionsRolloutConfigT = AwsJobExecutionsRolloutConfig>
    CreateOTAUpdateRequest& WithAwsJobExecutionsRolloutConfig(AwsJobExecutionsRolloutConfigT&& value) { SetAwsJobExecutionsRolloutConfig(std::forward<AwsJobExecutionsRolloutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for pre-signed URLs.</p>
     */
    inline const AwsJobPresignedUrlConfig& GetAwsJobPresignedUrlConfig() const { return m_awsJobPresignedUrlConfig; }
    inline bool AwsJobPresignedUrlConfigHasBeenSet() const { return m_awsJobPresignedUrlConfigHasBeenSet; }
    template<typename AwsJobPresignedUrlConfigT = AwsJobPresignedUrlConfig>
    void SetAwsJobPresignedUrlConfig(AwsJobPresignedUrlConfigT&& value) { m_awsJobPresignedUrlConfigHasBeenSet = true; m_awsJobPresignedUrlConfig = std::forward<AwsJobPresignedUrlConfigT>(value); }
    template<typename AwsJobPresignedUrlConfigT = AwsJobPresignedUrlConfig>
    CreateOTAUpdateRequest& WithAwsJobPresignedUrlConfig(AwsJobPresignedUrlConfigT&& value) { SetAwsJobPresignedUrlConfig(std::forward<AwsJobPresignedUrlConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria that determine when and how a job abort takes place.</p>
     */
    inline const AwsJobAbortConfig& GetAwsJobAbortConfig() const { return m_awsJobAbortConfig; }
    inline bool AwsJobAbortConfigHasBeenSet() const { return m_awsJobAbortConfigHasBeenSet; }
    template<typename AwsJobAbortConfigT = AwsJobAbortConfig>
    void SetAwsJobAbortConfig(AwsJobAbortConfigT&& value) { m_awsJobAbortConfigHasBeenSet = true; m_awsJobAbortConfig = std::forward<AwsJobAbortConfigT>(value); }
    template<typename AwsJobAbortConfigT = AwsJobAbortConfig>
    CreateOTAUpdateRequest& WithAwsJobAbortConfig(AwsJobAbortConfigT&& value) { SetAwsJobAbortConfig(std::forward<AwsJobAbortConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline const AwsJobTimeoutConfig& GetAwsJobTimeoutConfig() const { return m_awsJobTimeoutConfig; }
    inline bool AwsJobTimeoutConfigHasBeenSet() const { return m_awsJobTimeoutConfigHasBeenSet; }
    template<typename AwsJobTimeoutConfigT = AwsJobTimeoutConfig>
    void SetAwsJobTimeoutConfig(AwsJobTimeoutConfigT&& value) { m_awsJobTimeoutConfigHasBeenSet = true; m_awsJobTimeoutConfig = std::forward<AwsJobTimeoutConfigT>(value); }
    template<typename AwsJobTimeoutConfigT = AwsJobTimeoutConfig>
    CreateOTAUpdateRequest& WithAwsJobTimeoutConfig(AwsJobTimeoutConfigT&& value) { SetAwsJobTimeoutConfig(std::forward<AwsJobTimeoutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files to be streamed by the OTA update.</p>
     */
    inline const Aws::Vector<OTAUpdateFile>& GetFiles() const { return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    template<typename FilesT = Aws::Vector<OTAUpdateFile>>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = Aws::Vector<OTAUpdateFile>>
    CreateOTAUpdateRequest& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    template<typename FilesT = OTAUpdateFile>
    CreateOTAUpdateRequest& AddFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files.emplace_back(std::forward<FilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that grants Amazon Web Services IoT Core access to the Amazon
     * S3, IoT jobs and Amazon Web Services Code Signing resources to create an OTA
     * update job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateOTAUpdateRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of additional OTA update parameters, which are name-value pairs. They
     * won't be sent to devices as a part of the Job document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalParameters() const { return m_additionalParameters; }
    inline bool AdditionalParametersHasBeenSet() const { return m_additionalParametersHasBeenSet; }
    template<typename AdditionalParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalParameters(AdditionalParametersT&& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters = std::forward<AdditionalParametersT>(value); }
    template<typename AdditionalParametersT = Aws::Map<Aws::String, Aws::String>>
    CreateOTAUpdateRequest& WithAdditionalParameters(AdditionalParametersT&& value) { SetAdditionalParameters(std::forward<AdditionalParametersT>(value)); return *this;}
    template<typename AdditionalParametersKeyT = Aws::String, typename AdditionalParametersValueT = Aws::String>
    CreateOTAUpdateRequest& AddAdditionalParameters(AdditionalParametersKeyT&& key, AdditionalParametersValueT&& value) {
      m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(std::forward<AdditionalParametersKeyT>(key), std::forward<AdditionalParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage updates.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateOTAUpdateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateOTAUpdateRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_otaUpdateId;
    bool m_otaUpdateIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;

    TargetSelection m_targetSelection{TargetSelection::NOT_SET};
    bool m_targetSelectionHasBeenSet = false;

    AwsJobExecutionsRolloutConfig m_awsJobExecutionsRolloutConfig;
    bool m_awsJobExecutionsRolloutConfigHasBeenSet = false;

    AwsJobPresignedUrlConfig m_awsJobPresignedUrlConfig;
    bool m_awsJobPresignedUrlConfigHasBeenSet = false;

    AwsJobAbortConfig m_awsJobAbortConfig;
    bool m_awsJobAbortConfigHasBeenSet = false;

    AwsJobTimeoutConfig m_awsJobTimeoutConfig;
    bool m_awsJobTimeoutConfigHasBeenSet = false;

    Aws::Vector<OTAUpdateFile> m_files;
    bool m_filesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalParameters;
    bool m_additionalParametersHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
