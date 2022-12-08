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
    AWS_EC2_API EnableFastLaunchResponse();
    AWS_EC2_API EnableFastLaunchResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableFastLaunchResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The image ID that identifies the Windows AMI for which faster launching was
     * enabled.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The image ID that identifies the Windows AMI for which faster launching was
     * enabled.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageId = value; }

    /**
     * <p>The image ID that identifies the Windows AMI for which faster launching was
     * enabled.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageId = std::move(value); }

    /**
     * <p>The image ID that identifies the Windows AMI for which faster launching was
     * enabled.</p>
     */
    inline void SetImageId(const char* value) { m_imageId.assign(value); }

    /**
     * <p>The image ID that identifies the Windows AMI for which faster launching was
     * enabled.</p>
     */
    inline EnableFastLaunchResponse& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The image ID that identifies the Windows AMI for which faster launching was
     * enabled.</p>
     */
    inline EnableFastLaunchResponse& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The image ID that identifies the Windows AMI for which faster launching was
     * enabled.</p>
     */
    inline EnableFastLaunchResponse& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The type of resource that was defined for pre-provisioning the Windows AMI
     * for faster launching.</p>
     */
    inline const FastLaunchResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource that was defined for pre-provisioning the Windows AMI
     * for faster launching.</p>
     */
    inline void SetResourceType(const FastLaunchResourceType& value) { m_resourceType = value; }

    /**
     * <p>The type of resource that was defined for pre-provisioning the Windows AMI
     * for faster launching.</p>
     */
    inline void SetResourceType(FastLaunchResourceType&& value) { m_resourceType = std::move(value); }

    /**
     * <p>The type of resource that was defined for pre-provisioning the Windows AMI
     * for faster launching.</p>
     */
    inline EnableFastLaunchResponse& WithResourceType(const FastLaunchResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource that was defined for pre-provisioning the Windows AMI
     * for faster launching.</p>
     */
    inline EnableFastLaunchResponse& WithResourceType(FastLaunchResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The configuration settings that were defined for creating and managing the
     * pre-provisioned snapshots for faster launching of the Windows AMI. This property
     * is returned when the associated <code>resourceType</code> is
     * <code>snapshot</code>.</p>
     */
    inline const FastLaunchSnapshotConfigurationResponse& GetSnapshotConfiguration() const{ return m_snapshotConfiguration; }

    /**
     * <p>The configuration settings that were defined for creating and managing the
     * pre-provisioned snapshots for faster launching of the Windows AMI. This property
     * is returned when the associated <code>resourceType</code> is
     * <code>snapshot</code>.</p>
     */
    inline void SetSnapshotConfiguration(const FastLaunchSnapshotConfigurationResponse& value) { m_snapshotConfiguration = value; }

    /**
     * <p>The configuration settings that were defined for creating and managing the
     * pre-provisioned snapshots for faster launching of the Windows AMI. This property
     * is returned when the associated <code>resourceType</code> is
     * <code>snapshot</code>.</p>
     */
    inline void SetSnapshotConfiguration(FastLaunchSnapshotConfigurationResponse&& value) { m_snapshotConfiguration = std::move(value); }

    /**
     * <p>The configuration settings that were defined for creating and managing the
     * pre-provisioned snapshots for faster launching of the Windows AMI. This property
     * is returned when the associated <code>resourceType</code> is
     * <code>snapshot</code>.</p>
     */
    inline EnableFastLaunchResponse& WithSnapshotConfiguration(const FastLaunchSnapshotConfigurationResponse& value) { SetSnapshotConfiguration(value); return *this;}

    /**
     * <p>The configuration settings that were defined for creating and managing the
     * pre-provisioned snapshots for faster launching of the Windows AMI. This property
     * is returned when the associated <code>resourceType</code> is
     * <code>snapshot</code>.</p>
     */
    inline EnableFastLaunchResponse& WithSnapshotConfiguration(FastLaunchSnapshotConfigurationResponse&& value) { SetSnapshotConfiguration(std::move(value)); return *this;}


    /**
     * <p>The launch template that is used when launching Windows instances from
     * pre-provisioned snapshots.</p>
     */
    inline const FastLaunchLaunchTemplateSpecificationResponse& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The launch template that is used when launching Windows instances from
     * pre-provisioned snapshots.</p>
     */
    inline void SetLaunchTemplate(const FastLaunchLaunchTemplateSpecificationResponse& value) { m_launchTemplate = value; }

    /**
     * <p>The launch template that is used when launching Windows instances from
     * pre-provisioned snapshots.</p>
     */
    inline void SetLaunchTemplate(FastLaunchLaunchTemplateSpecificationResponse&& value) { m_launchTemplate = std::move(value); }

    /**
     * <p>The launch template that is used when launching Windows instances from
     * pre-provisioned snapshots.</p>
     */
    inline EnableFastLaunchResponse& WithLaunchTemplate(const FastLaunchLaunchTemplateSpecificationResponse& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The launch template that is used when launching Windows instances from
     * pre-provisioned snapshots.</p>
     */
    inline EnableFastLaunchResponse& WithLaunchTemplate(FastLaunchLaunchTemplateSpecificationResponse&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>The maximum number of parallel instances to launch for creating
     * resources.</p>
     */
    inline int GetMaxParallelLaunches() const{ return m_maxParallelLaunches; }

    /**
     * <p>The maximum number of parallel instances to launch for creating
     * resources.</p>
     */
    inline void SetMaxParallelLaunches(int value) { m_maxParallelLaunches = value; }

    /**
     * <p>The maximum number of parallel instances to launch for creating
     * resources.</p>
     */
    inline EnableFastLaunchResponse& WithMaxParallelLaunches(int value) { SetMaxParallelLaunches(value); return *this;}


    /**
     * <p>The owner ID for the Windows AMI for which faster launching was enabled.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The owner ID for the Windows AMI for which faster launching was enabled.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>The owner ID for the Windows AMI for which faster launching was enabled.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }

    /**
     * <p>The owner ID for the Windows AMI for which faster launching was enabled.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>The owner ID for the Windows AMI for which faster launching was enabled.</p>
     */
    inline EnableFastLaunchResponse& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The owner ID for the Windows AMI for which faster launching was enabled.</p>
     */
    inline EnableFastLaunchResponse& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The owner ID for the Windows AMI for which faster launching was enabled.</p>
     */
    inline EnableFastLaunchResponse& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The current state of faster launching for the specified Windows AMI.</p>
     */
    inline const FastLaunchStateCode& GetState() const{ return m_state; }

    /**
     * <p>The current state of faster launching for the specified Windows AMI.</p>
     */
    inline void SetState(const FastLaunchStateCode& value) { m_state = value; }

    /**
     * <p>The current state of faster launching for the specified Windows AMI.</p>
     */
    inline void SetState(FastLaunchStateCode&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of faster launching for the specified Windows AMI.</p>
     */
    inline EnableFastLaunchResponse& WithState(const FastLaunchStateCode& value) { SetState(value); return *this;}

    /**
     * <p>The current state of faster launching for the specified Windows AMI.</p>
     */
    inline EnableFastLaunchResponse& WithState(FastLaunchStateCode&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason that the state changed for faster launching for the Windows
     * AMI.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }

    /**
     * <p>The reason that the state changed for faster launching for the Windows
     * AMI.</p>
     */
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReason = value; }

    /**
     * <p>The reason that the state changed for faster launching for the Windows
     * AMI.</p>
     */
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReason = std::move(value); }

    /**
     * <p>The reason that the state changed for faster launching for the Windows
     * AMI.</p>
     */
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReason.assign(value); }

    /**
     * <p>The reason that the state changed for faster launching for the Windows
     * AMI.</p>
     */
    inline EnableFastLaunchResponse& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}

    /**
     * <p>The reason that the state changed for faster launching for the Windows
     * AMI.</p>
     */
    inline EnableFastLaunchResponse& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the state changed for faster launching for the Windows
     * AMI.</p>
     */
    inline EnableFastLaunchResponse& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}


    /**
     * <p>The time that the state changed for faster launching for the Windows AMI.</p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionTime() const{ return m_stateTransitionTime; }

    /**
     * <p>The time that the state changed for faster launching for the Windows AMI.</p>
     */
    inline void SetStateTransitionTime(const Aws::Utils::DateTime& value) { m_stateTransitionTime = value; }

    /**
     * <p>The time that the state changed for faster launching for the Windows AMI.</p>
     */
    inline void SetStateTransitionTime(Aws::Utils::DateTime&& value) { m_stateTransitionTime = std::move(value); }

    /**
     * <p>The time that the state changed for faster launching for the Windows AMI.</p>
     */
    inline EnableFastLaunchResponse& WithStateTransitionTime(const Aws::Utils::DateTime& value) { SetStateTransitionTime(value); return *this;}

    /**
     * <p>The time that the state changed for faster launching for the Windows AMI.</p>
     */
    inline EnableFastLaunchResponse& WithStateTransitionTime(Aws::Utils::DateTime&& value) { SetStateTransitionTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline EnableFastLaunchResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnableFastLaunchResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

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
