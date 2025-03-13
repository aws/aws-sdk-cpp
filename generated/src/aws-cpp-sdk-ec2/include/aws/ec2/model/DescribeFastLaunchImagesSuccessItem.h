/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FastLaunchResourceType.h>
#include <aws/ec2/model/FastLaunchSnapshotConfigurationResponse.h>
#include <aws/ec2/model/FastLaunchLaunchTemplateSpecificationResponse.h>
#include <aws/ec2/model/FastLaunchStateCode.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describe details about a Windows image with Windows fast launch enabled that
   * meets the requested criteria. Criteria are defined by the
   * <code>DescribeFastLaunchImages</code> action filters.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFastLaunchImagesSuccessItem">AWS
   * API Reference</a></p>
   */
  class DescribeFastLaunchImagesSuccessItem
  {
  public:
    AWS_EC2_API DescribeFastLaunchImagesSuccessItem() = default;
    AWS_EC2_API DescribeFastLaunchImagesSuccessItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DescribeFastLaunchImagesSuccessItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The image ID that identifies the Windows fast launch enabled image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    DescribeFastLaunchImagesSuccessItem& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type that Amazon EC2 uses for pre-provisioning the Windows AMI.
     * Supported values include: <code>snapshot</code>.</p>
     */
    inline FastLaunchResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(FastLaunchResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline DescribeFastLaunchImagesSuccessItem& WithResourceType(FastLaunchResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of parameters that are used for pre-provisioning the associated
     * Windows AMI using snapshots.</p>
     */
    inline const FastLaunchSnapshotConfigurationResponse& GetSnapshotConfiguration() const { return m_snapshotConfiguration; }
    inline bool SnapshotConfigurationHasBeenSet() const { return m_snapshotConfigurationHasBeenSet; }
    template<typename SnapshotConfigurationT = FastLaunchSnapshotConfigurationResponse>
    void SetSnapshotConfiguration(SnapshotConfigurationT&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::forward<SnapshotConfigurationT>(value); }
    template<typename SnapshotConfigurationT = FastLaunchSnapshotConfigurationResponse>
    DescribeFastLaunchImagesSuccessItem& WithSnapshotConfiguration(SnapshotConfigurationT&& value) { SetSnapshotConfiguration(std::forward<SnapshotConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template that the Windows fast launch enabled AMI uses when it
     * launches Windows instances from pre-provisioned snapshots.</p>
     */
    inline const FastLaunchLaunchTemplateSpecificationResponse& GetLaunchTemplate() const { return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    template<typename LaunchTemplateT = FastLaunchLaunchTemplateSpecificationResponse>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = FastLaunchLaunchTemplateSpecificationResponse>
    DescribeFastLaunchImagesSuccessItem& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that Amazon EC2 can launch at the same time
     * to create pre-provisioned snapshots for Windows fast launch.</p>
     */
    inline int GetMaxParallelLaunches() const { return m_maxParallelLaunches; }
    inline bool MaxParallelLaunchesHasBeenSet() const { return m_maxParallelLaunchesHasBeenSet; }
    inline void SetMaxParallelLaunches(int value) { m_maxParallelLaunchesHasBeenSet = true; m_maxParallelLaunches = value; }
    inline DescribeFastLaunchImagesSuccessItem& WithMaxParallelLaunches(int value) { SetMaxParallelLaunches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner ID for the Windows fast launch enabled AMI.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    DescribeFastLaunchImagesSuccessItem& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of Windows fast launch for the specified Windows AMI.</p>
     */
    inline FastLaunchStateCode GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(FastLaunchStateCode value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeFastLaunchImagesSuccessItem& WithState(FastLaunchStateCode value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that Windows fast launch for the AMI changed to the current
     * state.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const { return m_stateTransitionReason; }
    inline bool StateTransitionReasonHasBeenSet() const { return m_stateTransitionReasonHasBeenSet; }
    template<typename StateTransitionReasonT = Aws::String>
    void SetStateTransitionReason(StateTransitionReasonT&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::forward<StateTransitionReasonT>(value); }
    template<typename StateTransitionReasonT = Aws::String>
    DescribeFastLaunchImagesSuccessItem& WithStateTransitionReason(StateTransitionReasonT&& value) { SetStateTransitionReason(std::forward<StateTransitionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that Windows fast launch for the AMI changed to the current
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionTime() const { return m_stateTransitionTime; }
    inline bool StateTransitionTimeHasBeenSet() const { return m_stateTransitionTimeHasBeenSet; }
    template<typename StateTransitionTimeT = Aws::Utils::DateTime>
    void SetStateTransitionTime(StateTransitionTimeT&& value) { m_stateTransitionTimeHasBeenSet = true; m_stateTransitionTime = std::forward<StateTransitionTimeT>(value); }
    template<typename StateTransitionTimeT = Aws::Utils::DateTime>
    DescribeFastLaunchImagesSuccessItem& WithStateTransitionTime(StateTransitionTimeT&& value) { SetStateTransitionTime(std::forward<StateTransitionTimeT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
