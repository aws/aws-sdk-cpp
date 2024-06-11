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
    AWS_EC2_API DescribeFastLaunchImagesSuccessItem();
    AWS_EC2_API DescribeFastLaunchImagesSuccessItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DescribeFastLaunchImagesSuccessItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The image ID that identifies the Windows fast launch enabled image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline DescribeFastLaunchImagesSuccessItem& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type that Amazon EC2 uses for pre-provisioning the Windows AMI.
     * Supported values include: <code>snapshot</code>.</p>
     */
    inline const FastLaunchResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const FastLaunchResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(FastLaunchResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline DescribeFastLaunchImagesSuccessItem& WithResourceType(const FastLaunchResourceType& value) { SetResourceType(value); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithResourceType(FastLaunchResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of parameters that are used for pre-provisioning the associated
     * Windows AMI using snapshots.</p>
     */
    inline const FastLaunchSnapshotConfigurationResponse& GetSnapshotConfiguration() const{ return m_snapshotConfiguration; }
    inline bool SnapshotConfigurationHasBeenSet() const { return m_snapshotConfigurationHasBeenSet; }
    inline void SetSnapshotConfiguration(const FastLaunchSnapshotConfigurationResponse& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = value; }
    inline void SetSnapshotConfiguration(FastLaunchSnapshotConfigurationResponse&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::move(value); }
    inline DescribeFastLaunchImagesSuccessItem& WithSnapshotConfiguration(const FastLaunchSnapshotConfigurationResponse& value) { SetSnapshotConfiguration(value); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithSnapshotConfiguration(FastLaunchSnapshotConfigurationResponse&& value) { SetSnapshotConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template that the Windows fast launch enabled AMI uses when it
     * launches Windows instances from pre-provisioned snapshots.</p>
     */
    inline const FastLaunchLaunchTemplateSpecificationResponse& GetLaunchTemplate() const{ return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    inline void SetLaunchTemplate(const FastLaunchLaunchTemplateSpecificationResponse& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }
    inline void SetLaunchTemplate(FastLaunchLaunchTemplateSpecificationResponse&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }
    inline DescribeFastLaunchImagesSuccessItem& WithLaunchTemplate(const FastLaunchLaunchTemplateSpecificationResponse& value) { SetLaunchTemplate(value); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithLaunchTemplate(FastLaunchLaunchTemplateSpecificationResponse&& value) { SetLaunchTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that Amazon EC2 can launch at the same time
     * to create pre-provisioned snapshots for Windows fast launch.</p>
     */
    inline int GetMaxParallelLaunches() const{ return m_maxParallelLaunches; }
    inline bool MaxParallelLaunchesHasBeenSet() const { return m_maxParallelLaunchesHasBeenSet; }
    inline void SetMaxParallelLaunches(int value) { m_maxParallelLaunchesHasBeenSet = true; m_maxParallelLaunches = value; }
    inline DescribeFastLaunchImagesSuccessItem& WithMaxParallelLaunches(int value) { SetMaxParallelLaunches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner ID for the Windows fast launch enabled AMI.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline DescribeFastLaunchImagesSuccessItem& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of Windows fast launch for the specified Windows AMI.</p>
     */
    inline const FastLaunchStateCode& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const FastLaunchStateCode& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(FastLaunchStateCode&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline DescribeFastLaunchImagesSuccessItem& WithState(const FastLaunchStateCode& value) { SetState(value); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithState(FastLaunchStateCode&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that Windows fast launch for the AMI changed to the current
     * state.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }
    inline bool StateTransitionReasonHasBeenSet() const { return m_stateTransitionReasonHasBeenSet; }
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = value; }
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::move(value); }
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason.assign(value); }
    inline DescribeFastLaunchImagesSuccessItem& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that Windows fast launch for the AMI changed to the current
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionTime() const{ return m_stateTransitionTime; }
    inline bool StateTransitionTimeHasBeenSet() const { return m_stateTransitionTimeHasBeenSet; }
    inline void SetStateTransitionTime(const Aws::Utils::DateTime& value) { m_stateTransitionTimeHasBeenSet = true; m_stateTransitionTime = value; }
    inline void SetStateTransitionTime(Aws::Utils::DateTime&& value) { m_stateTransitionTimeHasBeenSet = true; m_stateTransitionTime = std::move(value); }
    inline DescribeFastLaunchImagesSuccessItem& WithStateTransitionTime(const Aws::Utils::DateTime& value) { SetStateTransitionTime(value); return *this;}
    inline DescribeFastLaunchImagesSuccessItem& WithStateTransitionTime(Aws::Utils::DateTime&& value) { SetStateTransitionTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    FastLaunchResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    FastLaunchSnapshotConfigurationResponse m_snapshotConfiguration;
    bool m_snapshotConfigurationHasBeenSet = false;

    FastLaunchLaunchTemplateSpecificationResponse m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    int m_maxParallelLaunches;
    bool m_maxParallelLaunchesHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    FastLaunchStateCode m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateTransitionReason;
    bool m_stateTransitionReasonHasBeenSet = false;

    Aws::Utils::DateTime m_stateTransitionTime;
    bool m_stateTransitionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
