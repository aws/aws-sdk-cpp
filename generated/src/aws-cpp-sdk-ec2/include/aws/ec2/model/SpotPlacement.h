/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Tenancy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes Spot Instance placement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotPlacement">AWS
 * API Reference</a></p>
 */
class SpotPlacement {
 public:
  AWS_EC2_API SpotPlacement() = default;
  AWS_EC2_API SpotPlacement(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API SpotPlacement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Availability Zone. For example, <code>us-east-2a</code>.</p> <p>[Spot
   * Fleet only] To specify multiple Availability Zones, separate them using commas;
   * for example, "<code>us-east-2a</code>, <code>us-east-2b</code>".</p> <p>Either
   * <code>AvailabilityZone</code> or <code>AvailabilityZoneId</code> must be
   * specified in the request, but not both.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  SpotPlacement& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the placement group.</p>
   */
  inline const Aws::String& GetGroupName() const { return m_groupName; }
  inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
  template <typename GroupNameT = Aws::String>
  void SetGroupName(GroupNameT&& value) {
    m_groupNameHasBeenSet = true;
    m_groupName = std::forward<GroupNameT>(value);
  }
  template <typename GroupNameT = Aws::String>
  SpotPlacement& WithGroupName(GroupNameT&& value) {
    SetGroupName(std::forward<GroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tenancy of the instance (if the instance is running in a VPC). An
   * instance with a tenancy of <code>dedicated</code> runs on single-tenant
   * hardware. The <code>host</code> tenancy is not supported for Spot Instances.</p>
   */
  inline Tenancy GetTenancy() const { return m_tenancy; }
  inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
  inline void SetTenancy(Tenancy value) {
    m_tenancyHasBeenSet = true;
    m_tenancy = value;
  }
  inline SpotPlacement& WithTenancy(Tenancy value) {
    SetTenancy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone. For example, <code>use2-az1</code>.</p>
   * <p>[Spot Fleet only] To specify multiple Availability Zones, separate them using
   * commas; for example, "<code>use2-az1</code>, <code>use2-bz1</code>".</p>
   * <p>Either <code>AvailabilityZone</code> or <code>AvailabilityZoneId</code> must
   * be specified in the request, but not both.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  SpotPlacement& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_availabilityZone;

  Aws::String m_groupName;

  Tenancy m_tenancy{Tenancy::NOT_SET};

  Aws::String m_availabilityZoneId;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_groupNameHasBeenSet = false;
  bool m_tenancyHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
