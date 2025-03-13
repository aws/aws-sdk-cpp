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
  class EnableFastLaunchResponse
  {
  public:
    AWS_EC2_API EnableFastLaunchResponse() = default;
    AWS_EC2_API EnableFastLaunchResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableFastLaunchResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The image ID that identifies the AMI for which Windows fast launch was
     * enabled.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    EnableFastLaunchResponse& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource that was defined for pre-provisioning the AMI for
     * Windows fast launch.</p>
     */
    inline FastLaunchResourceType GetResourceType() const { return m_resourceType; }
    inline void SetResourceType(FastLaunchResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline EnableFastLaunchResponse& WithResourceType(FastLaunchResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to create and manage the pre-provisioned snapshots that Amazon EC2
     * uses for faster launches from the Windows AMI. This property is returned when
     * the associated <code>resourceType</code> is <code>snapshot</code>.</p>
     */
    inline const FastLaunchSnapshotConfigurationResponse& GetSnapshotConfiguration() const { return m_snapshotConfiguration; }
    template<typename SnapshotConfigurationT = FastLaunchSnapshotConfigurationResponse>
    void SetSnapshotConfiguration(SnapshotConfigurationT&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::forward<SnapshotConfigurationT>(value); }
    template<typename SnapshotConfigurationT = FastLaunchSnapshotConfigurationResponse>
    EnableFastLaunchResponse& WithSnapshotConfiguration(SnapshotConfigurationT&& value) { SetSnapshotConfiguration(std::forward<SnapshotConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template that is used when launching Windows instances from
     * pre-provisioned snapshots.</p>
     */
    inline const FastLaunchLaunchTemplateSpecificationResponse& GetLaunchTemplate() const { return m_launchTemplate; }
    template<typename LaunchTemplateT = FastLaunchLaunchTemplateSpecificationResponse>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = FastLaunchLaunchTemplateSpecificationResponse>
    EnableFastLaunchResponse& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that Amazon EC2 can launch at the same time
     * to create pre-provisioned snapshots for Windows fast launch.</p>
     */
    inline int GetMaxParallelLaunches() const { return m_maxParallelLaunches; }
    inline void SetMaxParallelLaunches(int value) { m_maxParallelLaunchesHasBeenSet = true; m_maxParallelLaunches = value; }
    inline EnableFastLaunchResponse& WithMaxParallelLaunches(int value) { SetMaxParallelLaunches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner ID for the AMI for which Windows fast launch was enabled.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    EnableFastLaunchResponse& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of Windows fast launch for the specified AMI.</p>
     */
    inline FastLaunchStateCode GetState() const { return m_state; }
    inline void SetState(FastLaunchStateCode value) { m_stateHasBeenSet = true; m_state = value; }
    inline EnableFastLaunchResponse& WithState(FastLaunchStateCode value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the state changed for Windows fast launch for the AMI.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const { return m_stateTransitionReason; }
    template<typename StateTransitionReasonT = Aws::String>
    void SetStateTransitionReason(StateTransitionReasonT&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::forward<StateTransitionReasonT>(value); }
    template<typename StateTransitionReasonT = Aws::String>
    EnableFastLaunchResponse& WithStateTransitionReason(StateTransitionReasonT&& value) { SetStateTransitionReason(std::forward<StateTransitionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the state changed for Windows fast launch for the AMI.</p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionTime() const { return m_stateTransitionTime; }
    template<typename StateTransitionTimeT = Aws::Utils::DateTime>
    void SetStateTransitionTime(StateTransitionTimeT&& value) { m_stateTransitionTimeHasBeenSet = true; m_stateTransitionTime = std::forward<StateTransitionTimeT>(value); }
    template<typename StateTransitionTimeT = Aws::Utils::DateTime>
    EnableFastLaunchResponse& WithStateTransitionTime(StateTransitionTimeT&& value) { SetStateTransitionTime(std::forward<StateTransitionTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    EnableFastLaunchResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
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
