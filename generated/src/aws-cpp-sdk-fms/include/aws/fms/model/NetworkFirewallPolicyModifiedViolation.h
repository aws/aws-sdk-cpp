/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/NetworkFirewallPolicyDescription.h>
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
   * <p>Violation detail for Network Firewall for a firewall policy that has a
   * different <a>NetworkFirewallPolicyDescription</a> than is required by the
   * Firewall Manager policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallPolicyModifiedViolation">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallPolicyModifiedViolation
  {
  public:
    AWS_FMS_API NetworkFirewallPolicyModifiedViolation() = default;
    AWS_FMS_API NetworkFirewallPolicyModifiedViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallPolicyModifiedViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline const Aws::String& GetViolationTarget() const { return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    template<typename ViolationTargetT = Aws::String>
    void SetViolationTarget(ViolationTargetT&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::forward<ViolationTargetT>(value); }
    template<typename ViolationTargetT = Aws::String>
    NetworkFirewallPolicyModifiedViolation& WithViolationTarget(ViolationTargetT&& value) { SetViolationTarget(std::forward<ViolationTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy that's currently in use in the individual account. </p>
     */
    inline const NetworkFirewallPolicyDescription& GetCurrentPolicyDescription() const { return m_currentPolicyDescription; }
    inline bool CurrentPolicyDescriptionHasBeenSet() const { return m_currentPolicyDescriptionHasBeenSet; }
    template<typename CurrentPolicyDescriptionT = NetworkFirewallPolicyDescription>
    void SetCurrentPolicyDescription(CurrentPolicyDescriptionT&& value) { m_currentPolicyDescriptionHasBeenSet = true; m_currentPolicyDescription = std::forward<CurrentPolicyDescriptionT>(value); }
    template<typename CurrentPolicyDescriptionT = NetworkFirewallPolicyDescription>
    NetworkFirewallPolicyModifiedViolation& WithCurrentPolicyDescription(CurrentPolicyDescriptionT&& value) { SetCurrentPolicyDescription(std::forward<CurrentPolicyDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy that should be in use in the individual account in order to be
     * compliant. </p>
     */
    inline const NetworkFirewallPolicyDescription& GetExpectedPolicyDescription() const { return m_expectedPolicyDescription; }
    inline bool ExpectedPolicyDescriptionHasBeenSet() const { return m_expectedPolicyDescriptionHasBeenSet; }
    template<typename ExpectedPolicyDescriptionT = NetworkFirewallPolicyDescription>
    void SetExpectedPolicyDescription(ExpectedPolicyDescriptionT&& value) { m_expectedPolicyDescriptionHasBeenSet = true; m_expectedPolicyDescription = std::forward<ExpectedPolicyDescriptionT>(value); }
    template<typename ExpectedPolicyDescriptionT = NetworkFirewallPolicyDescription>
    NetworkFirewallPolicyModifiedViolation& WithExpectedPolicyDescription(ExpectedPolicyDescriptionT&& value) { SetExpectedPolicyDescription(std::forward<ExpectedPolicyDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    NetworkFirewallPolicyDescription m_currentPolicyDescription;
    bool m_currentPolicyDescriptionHasBeenSet = false;

    NetworkFirewallPolicyDescription m_expectedPolicyDescription;
    bool m_expectedPolicyDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
