/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Violation detail for network interfaces associated with an EC2
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AwsEc2NetworkInterfaceViolation">AWS
   * API Reference</a></p>
   */
  class AwsEc2NetworkInterfaceViolation
  {
  public:
    AWS_FMS_API AwsEc2NetworkInterfaceViolation() = default;
    AWS_FMS_API AwsEc2NetworkInterfaceViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AwsEc2NetworkInterfaceViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource ID of the network interface.</p>
     */
    inline const Aws::String& GetViolationTarget() const { return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    template<typename ViolationTargetT = Aws::String>
    void SetViolationTarget(ViolationTargetT&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::forward<ViolationTargetT>(value); }
    template<typename ViolationTargetT = Aws::String>
    AwsEc2NetworkInterfaceViolation& WithViolationTarget(ViolationTargetT&& value) { SetViolationTarget(std::forward<ViolationTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of security groups that violate the rules specified in the primary
     * security group of the Firewall Manager policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetViolatingSecurityGroups() const { return m_violatingSecurityGroups; }
    inline bool ViolatingSecurityGroupsHasBeenSet() const { return m_violatingSecurityGroupsHasBeenSet; }
    template<typename ViolatingSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetViolatingSecurityGroups(ViolatingSecurityGroupsT&& value) { m_violatingSecurityGroupsHasBeenSet = true; m_violatingSecurityGroups = std::forward<ViolatingSecurityGroupsT>(value); }
    template<typename ViolatingSecurityGroupsT = Aws::Vector<Aws::String>>
    AwsEc2NetworkInterfaceViolation& WithViolatingSecurityGroups(ViolatingSecurityGroupsT&& value) { SetViolatingSecurityGroups(std::forward<ViolatingSecurityGroupsT>(value)); return *this;}
    template<typename ViolatingSecurityGroupsT = Aws::String>
    AwsEc2NetworkInterfaceViolation& AddViolatingSecurityGroups(ViolatingSecurityGroupsT&& value) { m_violatingSecurityGroupsHasBeenSet = true; m_violatingSecurityGroups.emplace_back(std::forward<ViolatingSecurityGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::Vector<Aws::String> m_violatingSecurityGroups;
    bool m_violatingSecurityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
