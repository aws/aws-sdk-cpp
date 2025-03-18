/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FastLaunchResourceType.h>
#include <aws/ec2/model/FastLaunchSnapshotConfigurationResponse.h>
#include <aws/ec2/model/FastLaunchLaunchTemplateSpecificationResponse.h>
#include <aws/ec2/model/FastLaunchStateCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class DisableFastLaunchResponse
  {
  public:
    AWS_EC2_API DisableFastLaunchResponse() = default;
    AWS_EC2_API DisableFastLaunchResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableFastLaunchResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the image for which Windows fast launch was disabled.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    DisableFastLaunchResponse& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-provisioning resource type that must be cleaned after turning off
     * Windows fast launch for the Windows AMI. Supported values include:
     * <code>snapshot</code>.</p>
     */
    inline FastLaunchResourceType GetResourceType() const { return m_resourceType; }
    inline void SetResourceType(FastLaunchResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline DisableFastLaunchResponse& WithResourceType(FastLaunchResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that were used for Windows fast launch for the Windows AMI before
     * Windows fast launch was disabled. This informs the clean-up process.</p>
     */
    inline const FastLaunchSnapshotConfigurationResponse& GetSnapshotConfiguration() const { return m_snapshotConfiguration; }
    template<typename SnapshotConfigurationT = FastLaunchSnapshotConfigurationResponse>
    void SetSnapshotConfiguration(SnapshotConfigurationT&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::forward<SnapshotConfigurationT>(value); }
    template<typename SnapshotConfigurationT = FastLaunchSnapshotConfigurationResponse>
    DisableFastLaunchResponse& WithSnapshotConfiguration(SnapshotConfigurationT&& value) { SetSnapshotConfiguration(std::forward<SnapshotConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template that was used to launch Windows instances from
     * pre-provisioned snapshots.</p>
     */
    inline const FastLaunchLaunchTemplateSpecificationResponse& GetLaunchTemplate() const { return m_launchTemplate; }
    template<typename LaunchTemplateT = FastLaunchLaunchTemplateSpecificationResponse>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = FastLaunchLaunchTemplateSpecificationResponse>
    DisableFastLaunchResponse& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that Amazon EC2 can launch at the same time
     * to create pre-provisioned snapshots for Windows fast launch.</p>
     */
    inline int GetMaxParallelLaunches() const { return m_maxParallelLaunches; }
    inline void SetMaxParallelLaunches(int value) { m_maxParallelLaunchesHasBeenSet = true; m_maxParallelLaunches = value; }
    inline DisableFastLaunchResponse& WithMaxParallelLaunches(int value) { SetMaxParallelLaunches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the Windows AMI for which Windows fast launch was disabled.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    DisableFastLaunchResponse& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of Windows fast launch for the specified Windows AMI.</p>
     */
    inline FastLaunchStateCode GetState() const { return m_state; }
    inline void SetState(FastLaunchStateCode value) { m_stateHasBeenSet = true; m_state = value; }
    inline DisableFastLaunchResponse& WithState(FastLaunchStateCode value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the state changed for Windows fast launch for the Windows
     * AMI.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const { return m_stateTransitionReason; }
    template<typename StateTransitionReasonT = Aws::String>
    void SetStateTransitionReason(StateTransitionReasonT&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::forward<StateTransitionReasonT>(value); }
    template<typename StateTransitionReasonT = Aws::String>
    DisableFastLaunchResponse& WithStateTransitionReason(StateTransitionReasonT&& value) { SetStateTransitionReason(std::forward<StateTransitionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the state changed for Windows fast launch for the Windows
     * AMI.</p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionTime() const { return m_stateTransitionTime; }
    template<typename StateTransitionTimeT = Aws::Utils::DateTime>
    void SetStateTransitionTime(StateTransitionTimeT&& value) { m_stateTransitionTimeHasBeenSet = true; m_stateTransitionTime = std::forward<StateTransitionTimeT>(value); }
    template<typename StateTransitionTimeT = Aws::Utils::DateTime>
    DisableFastLaunchResponse& WithStateTransitionTime(StateTransitionTimeT&& value) { SetStateTransitionTime(std::forward<StateTransitionTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisableFastLaunchResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    FastLaunchResourceType m_resourceType{FastLaunchResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    FastLaunchSnapshotConfigurationResponse m_snapshotConfiguration;
    bool m_snapshotConfigurationHasBeenSet = false;

    FastLaunchLaunchTemplateSpecificationResponse m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    int m_maxParallelLaunches{0};
    bool m_maxParallelLaunchesHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    FastLaunchStateCode m_state{FastLaunchStateCode::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateTransitionReason;
    bool m_stateTransitionReasonHasBeenSet = false;

    Aws::Utils::DateTime m_stateTransitionTime{};
    bool m_stateTransitionTimeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
