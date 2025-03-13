/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/ExpectedRoute.h>
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
   * <p>Violation detail for an expected route missing in Network
   * Firewall.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallMissingExpectedRoutesViolation">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallMissingExpectedRoutesViolation
  {
  public:
    AWS_FMS_API NetworkFirewallMissingExpectedRoutesViolation() = default;
    AWS_FMS_API NetworkFirewallMissingExpectedRoutesViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallMissingExpectedRoutesViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target of the violation.</p>
     */
    inline const Aws::String& GetViolationTarget() const { return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    template<typename ViolationTargetT = Aws::String>
    void SetViolationTarget(ViolationTargetT&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::forward<ViolationTargetT>(value); }
    template<typename ViolationTargetT = Aws::String>
    NetworkFirewallMissingExpectedRoutesViolation& WithViolationTarget(ViolationTargetT&& value) { SetViolationTarget(std::forward<ViolationTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected routes.</p>
     */
    inline const Aws::Vector<ExpectedRoute>& GetExpectedRoutes() const { return m_expectedRoutes; }
    inline bool ExpectedRoutesHasBeenSet() const { return m_expectedRoutesHasBeenSet; }
    template<typename ExpectedRoutesT = Aws::Vector<ExpectedRoute>>
    void SetExpectedRoutes(ExpectedRoutesT&& value) { m_expectedRoutesHasBeenSet = true; m_expectedRoutes = std::forward<ExpectedRoutesT>(value); }
    template<typename ExpectedRoutesT = Aws::Vector<ExpectedRoute>>
    NetworkFirewallMissingExpectedRoutesViolation& WithExpectedRoutes(ExpectedRoutesT&& value) { SetExpectedRoutes(std::forward<ExpectedRoutesT>(value)); return *this;}
    template<typename ExpectedRoutesT = ExpectedRoute>
    NetworkFirewallMissingExpectedRoutesViolation& AddExpectedRoutes(ExpectedRoutesT&& value) { m_expectedRoutesHasBeenSet = true; m_expectedRoutes.emplace_back(std::forward<ExpectedRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    NetworkFirewallMissingExpectedRoutesViolation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::Vector<ExpectedRoute> m_expectedRoutes;
    bool m_expectedRoutesHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
