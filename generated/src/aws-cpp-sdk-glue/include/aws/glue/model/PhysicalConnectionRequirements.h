/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>The OAuth client app in GetConnection response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PhysicalConnectionRequirements">AWS
   * API Reference</a></p>
   */
  class PhysicalConnectionRequirements
  {
  public:
    AWS_GLUE_API PhysicalConnectionRequirements() = default;
    AWS_GLUE_API PhysicalConnectionRequirements(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API PhysicalConnectionRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subnet ID used by the connection.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    PhysicalConnectionRequirements& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group ID list used by the connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdList() const { return m_securityGroupIdList; }
    inline bool SecurityGroupIdListHasBeenSet() const { return m_securityGroupIdListHasBeenSet; }
    template<typename SecurityGroupIdListT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIdList(SecurityGroupIdListT&& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList = std::forward<SecurityGroupIdListT>(value); }
    template<typename SecurityGroupIdListT = Aws::Vector<Aws::String>>
    PhysicalConnectionRequirements& WithSecurityGroupIdList(SecurityGroupIdListT&& value) { SetSecurityGroupIdList(std::forward<SecurityGroupIdListT>(value)); return *this;}
    template<typename SecurityGroupIdListT = Aws::String>
    PhysicalConnectionRequirements& AddSecurityGroupIdList(SecurityGroupIdListT&& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.emplace_back(std::forward<SecurityGroupIdListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection's Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    PhysicalConnectionRequirements& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIdList;
    bool m_securityGroupIdListHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
