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
    AWS_FMS_API NetworkFirewallPolicyModifiedViolation();
    AWS_FMS_API NetworkFirewallPolicyModifiedViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallPolicyModifiedViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline NetworkFirewallPolicyModifiedViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline NetworkFirewallPolicyModifiedViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline NetworkFirewallPolicyModifiedViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}


    /**
     * <p>The policy that's currently in use in the individual account. </p>
     */
    inline const NetworkFirewallPolicyDescription& GetCurrentPolicyDescription() const{ return m_currentPolicyDescription; }

    /**
     * <p>The policy that's currently in use in the individual account. </p>
     */
    inline bool CurrentPolicyDescriptionHasBeenSet() const { return m_currentPolicyDescriptionHasBeenSet; }

    /**
     * <p>The policy that's currently in use in the individual account. </p>
     */
    inline void SetCurrentPolicyDescription(const NetworkFirewallPolicyDescription& value) { m_currentPolicyDescriptionHasBeenSet = true; m_currentPolicyDescription = value; }

    /**
     * <p>The policy that's currently in use in the individual account. </p>
     */
    inline void SetCurrentPolicyDescription(NetworkFirewallPolicyDescription&& value) { m_currentPolicyDescriptionHasBeenSet = true; m_currentPolicyDescription = std::move(value); }

    /**
     * <p>The policy that's currently in use in the individual account. </p>
     */
    inline NetworkFirewallPolicyModifiedViolation& WithCurrentPolicyDescription(const NetworkFirewallPolicyDescription& value) { SetCurrentPolicyDescription(value); return *this;}

    /**
     * <p>The policy that's currently in use in the individual account. </p>
     */
    inline NetworkFirewallPolicyModifiedViolation& WithCurrentPolicyDescription(NetworkFirewallPolicyDescription&& value) { SetCurrentPolicyDescription(std::move(value)); return *this;}


    /**
     * <p>The policy that should be in use in the individual account in order to be
     * compliant. </p>
     */
    inline const NetworkFirewallPolicyDescription& GetExpectedPolicyDescription() const{ return m_expectedPolicyDescription; }

    /**
     * <p>The policy that should be in use in the individual account in order to be
     * compliant. </p>
     */
    inline bool ExpectedPolicyDescriptionHasBeenSet() const { return m_expectedPolicyDescriptionHasBeenSet; }

    /**
     * <p>The policy that should be in use in the individual account in order to be
     * compliant. </p>
     */
    inline void SetExpectedPolicyDescription(const NetworkFirewallPolicyDescription& value) { m_expectedPolicyDescriptionHasBeenSet = true; m_expectedPolicyDescription = value; }

    /**
     * <p>The policy that should be in use in the individual account in order to be
     * compliant. </p>
     */
    inline void SetExpectedPolicyDescription(NetworkFirewallPolicyDescription&& value) { m_expectedPolicyDescriptionHasBeenSet = true; m_expectedPolicyDescription = std::move(value); }

    /**
     * <p>The policy that should be in use in the individual account in order to be
     * compliant. </p>
     */
    inline NetworkFirewallPolicyModifiedViolation& WithExpectedPolicyDescription(const NetworkFirewallPolicyDescription& value) { SetExpectedPolicyDescription(value); return *this;}

    /**
     * <p>The policy that should be in use in the individual account in order to be
     * compliant. </p>
     */
    inline NetworkFirewallPolicyModifiedViolation& WithExpectedPolicyDescription(NetworkFirewallPolicyDescription&& value) { SetExpectedPolicyDescription(std::move(value)); return *this;}

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
