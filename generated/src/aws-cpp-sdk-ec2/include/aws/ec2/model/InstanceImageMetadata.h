/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/InstanceState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ImageMetadata.h>
#include <aws/ec2/model/OperatorResponse.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Information about the instance and the AMI used to launch the
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceImageMetadata">AWS
   * API Reference</a></p>
   */
  class InstanceImageMetadata
  {
  public:
    AWS_EC2_API InstanceImageMetadata();
    AWS_EC2_API InstanceImageMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceImageMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline InstanceImageMetadata& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline InstanceImageMetadata& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline InstanceImageMetadata& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline InstanceImageMetadata& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline InstanceImageMetadata& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the instance was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const{ return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    inline void SetLaunchTime(const Aws::Utils::DateTime& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }
    inline void SetLaunchTime(Aws::Utils::DateTime&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }
    inline InstanceImageMetadata& WithLaunchTime(const Aws::Utils::DateTime& value) { SetLaunchTime(value); return *this;}
    inline InstanceImageMetadata& WithLaunchTime(Aws::Utils::DateTime&& value) { SetLaunchTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone or Local Zone of the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline InstanceImageMetadata& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline InstanceImageMetadata& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline InstanceImageMetadata& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone or Local Zone of the instance.</p>
     */
    inline const Aws::String& GetZoneId() const{ return m_zoneId; }
    inline bool ZoneIdHasBeenSet() const { return m_zoneIdHasBeenSet; }
    inline void SetZoneId(const Aws::String& value) { m_zoneIdHasBeenSet = true; m_zoneId = value; }
    inline void SetZoneId(Aws::String&& value) { m_zoneIdHasBeenSet = true; m_zoneId = std::move(value); }
    inline void SetZoneId(const char* value) { m_zoneIdHasBeenSet = true; m_zoneId.assign(value); }
    inline InstanceImageMetadata& WithZoneId(const Aws::String& value) { SetZoneId(value); return *this;}
    inline InstanceImageMetadata& WithZoneId(Aws::String&& value) { SetZoneId(std::move(value)); return *this;}
    inline InstanceImageMetadata& WithZoneId(const char* value) { SetZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the instance.</p>
     */
    inline const InstanceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const InstanceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(InstanceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline InstanceImageMetadata& WithState(const InstanceState& value) { SetState(value); return *this;}
    inline InstanceImageMetadata& WithState(InstanceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the instance.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline InstanceImageMetadata& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline InstanceImageMetadata& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline InstanceImageMetadata& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline InstanceImageMetadata& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline InstanceImageMetadata& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline InstanceImageMetadata& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline InstanceImageMetadata& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the AMI used to launch the instance.</p>
     */
    inline const ImageMetadata& GetImageMetadata() const{ return m_imageMetadata; }
    inline bool ImageMetadataHasBeenSet() const { return m_imageMetadataHasBeenSet; }
    inline void SetImageMetadata(const ImageMetadata& value) { m_imageMetadataHasBeenSet = true; m_imageMetadata = value; }
    inline void SetImageMetadata(ImageMetadata&& value) { m_imageMetadataHasBeenSet = true; m_imageMetadata = std::move(value); }
    inline InstanceImageMetadata& WithImageMetadata(const ImageMetadata& value) { SetImageMetadata(value); return *this;}
    inline InstanceImageMetadata& WithImageMetadata(ImageMetadata&& value) { SetImageMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages the instance.</p>
     */
    inline const OperatorResponse& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const OperatorResponse& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(OperatorResponse&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline InstanceImageMetadata& WithOperator(const OperatorResponse& value) { SetOperator(value); return *this;}
    inline InstanceImageMetadata& WithOperator(OperatorResponse&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime;
    bool m_launchTimeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_zoneId;
    bool m_zoneIdHasBeenSet = false;

    InstanceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ImageMetadata m_imageMetadata;
    bool m_imageMetadataHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
