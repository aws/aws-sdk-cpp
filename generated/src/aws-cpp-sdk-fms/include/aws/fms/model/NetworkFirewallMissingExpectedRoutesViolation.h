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
    AWS_FMS_API NetworkFirewallMissingExpectedRoutesViolation();
    AWS_FMS_API NetworkFirewallMissingExpectedRoutesViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallMissingExpectedRoutesViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target of the violation.</p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }
    inline NetworkFirewallMissingExpectedRoutesViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}
    inline NetworkFirewallMissingExpectedRoutesViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}
    inline NetworkFirewallMissingExpectedRoutesViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected routes.</p>
     */
    inline const Aws::Vector<ExpectedRoute>& GetExpectedRoutes() const{ return m_expectedRoutes; }
    inline bool ExpectedRoutesHasBeenSet() const { return m_expectedRoutesHasBeenSet; }
    inline void SetExpectedRoutes(const Aws::Vector<ExpectedRoute>& value) { m_expectedRoutesHasBeenSet = true; m_expectedRoutes = value; }
    inline void SetExpectedRoutes(Aws::Vector<ExpectedRoute>&& value) { m_expectedRoutesHasBeenSet = true; m_expectedRoutes = std::move(value); }
    inline NetworkFirewallMissingExpectedRoutesViolation& WithExpectedRoutes(const Aws::Vector<ExpectedRoute>& value) { SetExpectedRoutes(value); return *this;}
    inline NetworkFirewallMissingExpectedRoutesViolation& WithExpectedRoutes(Aws::Vector<ExpectedRoute>&& value) { SetExpectedRoutes(std::move(value)); return *this;}
    inline NetworkFirewallMissingExpectedRoutesViolation& AddExpectedRoutes(const ExpectedRoute& value) { m_expectedRoutesHasBeenSet = true; m_expectedRoutes.push_back(value); return *this; }
    inline NetworkFirewallMissingExpectedRoutesViolation& AddExpectedRoutes(ExpectedRoute&& value) { m_expectedRoutesHasBeenSet = true; m_expectedRoutes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline NetworkFirewallMissingExpectedRoutesViolation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline NetworkFirewallMissingExpectedRoutesViolation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline NetworkFirewallMissingExpectedRoutesViolation& WithVpcId(const char* value) { SetVpcId(value); return *this;}
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
