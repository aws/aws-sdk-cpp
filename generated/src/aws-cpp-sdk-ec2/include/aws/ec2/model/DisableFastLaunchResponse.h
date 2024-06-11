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
    AWS_EC2_API DisableFastLaunchResponse();
    AWS_EC2_API DisableFastLaunchResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableFastLaunchResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the image for which Windows fast launch was disabled.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline void SetImageId(const Aws::String& value) { m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageId.assign(value); }
    inline DisableFastLaunchResponse& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline DisableFastLaunchResponse& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline DisableFastLaunchResponse& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-provisioning resource type that must be cleaned after turning off
     * Windows fast launch for the Windows AMI. Supported values include:
     * <code>snapshot</code>.</p>
     */
    inline const FastLaunchResourceType& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const FastLaunchResourceType& value) { m_resourceType = value; }
    inline void SetResourceType(FastLaunchResourceType&& value) { m_resourceType = std::move(value); }
    inline DisableFastLaunchResponse& WithResourceType(const FastLaunchResourceType& value) { SetResourceType(value); return *this;}
    inline DisableFastLaunchResponse& WithResourceType(FastLaunchResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that were used for Windows fast launch for the Windows AMI before
     * Windows fast launch was disabled. This informs the clean-up process.</p>
     */
    inline const FastLaunchSnapshotConfigurationResponse& GetSnapshotConfiguration() const{ return m_snapshotConfiguration; }
    inline void SetSnapshotConfiguration(const FastLaunchSnapshotConfigurationResponse& value) { m_snapshotConfiguration = value; }
    inline void SetSnapshotConfiguration(FastLaunchSnapshotConfigurationResponse&& value) { m_snapshotConfiguration = std::move(value); }
    inline DisableFastLaunchResponse& WithSnapshotConfiguration(const FastLaunchSnapshotConfigurationResponse& value) { SetSnapshotConfiguration(value); return *this;}
    inline DisableFastLaunchResponse& WithSnapshotConfiguration(FastLaunchSnapshotConfigurationResponse&& value) { SetSnapshotConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template that was used to launch Windows instances from
     * pre-provisioned snapshots.</p>
     */
    inline const FastLaunchLaunchTemplateSpecificationResponse& GetLaunchTemplate() const{ return m_launchTemplate; }
    inline void SetLaunchTemplate(const FastLaunchLaunchTemplateSpecificationResponse& value) { m_launchTemplate = value; }
    inline void SetLaunchTemplate(FastLaunchLaunchTemplateSpecificationResponse&& value) { m_launchTemplate = std::move(value); }
    inline DisableFastLaunchResponse& WithLaunchTemplate(const FastLaunchLaunchTemplateSpecificationResponse& value) { SetLaunchTemplate(value); return *this;}
    inline DisableFastLaunchResponse& WithLaunchTemplate(FastLaunchLaunchTemplateSpecificationResponse&& value) { SetLaunchTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that Amazon EC2 can launch at the same time
     * to create pre-provisioned snapshots for Windows fast launch.</p>
     */
    inline int GetMaxParallelLaunches() const{ return m_maxParallelLaunches; }
    inline void SetMaxParallelLaunches(int value) { m_maxParallelLaunches = value; }
    inline DisableFastLaunchResponse& WithMaxParallelLaunches(int value) { SetMaxParallelLaunches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the Windows AMI for which Windows fast launch was disabled.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }
    inline DisableFastLaunchResponse& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline DisableFastLaunchResponse& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline DisableFastLaunchResponse& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of Windows fast launch for the specified Windows AMI.</p>
     */
    inline const FastLaunchStateCode& GetState() const{ return m_state; }
    inline void SetState(const FastLaunchStateCode& value) { m_state = value; }
    inline void SetState(FastLaunchStateCode&& value) { m_state = std::move(value); }
    inline DisableFastLaunchResponse& WithState(const FastLaunchStateCode& value) { SetState(value); return *this;}
    inline DisableFastLaunchResponse& WithState(FastLaunchStateCode&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the state changed for Windows fast launch for the Windows
     * AMI.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReason = value; }
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReason = std::move(value); }
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReason.assign(value); }
    inline DisableFastLaunchResponse& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}
    inline DisableFastLaunchResponse& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}
    inline DisableFastLaunchResponse& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the state changed for Windows fast launch for the Windows
     * AMI.</p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionTime() const{ return m_stateTransitionTime; }
    inline void SetStateTransitionTime(const Aws::Utils::DateTime& value) { m_stateTransitionTime = value; }
    inline void SetStateTransitionTime(Aws::Utils::DateTime&& value) { m_stateTransitionTime = std::move(value); }
    inline DisableFastLaunchResponse& WithStateTransitionTime(const Aws::Utils::DateTime& value) { SetStateTransitionTime(value); return *this;}
    inline DisableFastLaunchResponse& WithStateTransitionTime(Aws::Utils::DateTime&& value) { SetStateTransitionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DisableFastLaunchResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DisableFastLaunchResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageId;

    FastLaunchResourceType m_resourceType;

    FastLaunchSnapshotConfigurationResponse m_snapshotConfiguration;

    FastLaunchLaunchTemplateSpecificationResponse m_launchTemplate;

    int m_maxParallelLaunches;

    Aws::String m_ownerId;

    FastLaunchStateCode m_state;

    Aws::String m_stateTransitionReason;

    Aws::Utils::DateTime m_stateTransitionTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
