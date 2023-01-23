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
    AWS_FMS_API AwsEc2NetworkInterfaceViolation();
    AWS_FMS_API AwsEc2NetworkInterfaceViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AwsEc2NetworkInterfaceViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource ID of the network interface.</p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }

    /**
     * <p>The resource ID of the network interface.</p>
     */
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }

    /**
     * <p>The resource ID of the network interface.</p>
     */
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }

    /**
     * <p>The resource ID of the network interface.</p>
     */
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }

    /**
     * <p>The resource ID of the network interface.</p>
     */
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }

    /**
     * <p>The resource ID of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}

    /**
     * <p>The resource ID of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}


    /**
     * <p>List of security groups that violate the rules specified in the primary
     * security group of the Firewall Manager policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetViolatingSecurityGroups() const{ return m_violatingSecurityGroups; }

    /**
     * <p>List of security groups that violate the rules specified in the primary
     * security group of the Firewall Manager policy.</p>
     */
    inline bool ViolatingSecurityGroupsHasBeenSet() const { return m_violatingSecurityGroupsHasBeenSet; }

    /**
     * <p>List of security groups that violate the rules specified in the primary
     * security group of the Firewall Manager policy.</p>
     */
    inline void SetViolatingSecurityGroups(const Aws::Vector<Aws::String>& value) { m_violatingSecurityGroupsHasBeenSet = true; m_violatingSecurityGroups = value; }

    /**
     * <p>List of security groups that violate the rules specified in the primary
     * security group of the Firewall Manager policy.</p>
     */
    inline void SetViolatingSecurityGroups(Aws::Vector<Aws::String>&& value) { m_violatingSecurityGroupsHasBeenSet = true; m_violatingSecurityGroups = std::move(value); }

    /**
     * <p>List of security groups that violate the rules specified in the primary
     * security group of the Firewall Manager policy.</p>
     */
    inline AwsEc2NetworkInterfaceViolation& WithViolatingSecurityGroups(const Aws::Vector<Aws::String>& value) { SetViolatingSecurityGroups(value); return *this;}

    /**
     * <p>List of security groups that violate the rules specified in the primary
     * security group of the Firewall Manager policy.</p>
     */
    inline AwsEc2NetworkInterfaceViolation& WithViolatingSecurityGroups(Aws::Vector<Aws::String>&& value) { SetViolatingSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>List of security groups that violate the rules specified in the primary
     * security group of the Firewall Manager policy.</p>
     */
    inline AwsEc2NetworkInterfaceViolation& AddViolatingSecurityGroups(const Aws::String& value) { m_violatingSecurityGroupsHasBeenSet = true; m_violatingSecurityGroups.push_back(value); return *this; }

    /**
     * <p>List of security groups that violate the rules specified in the primary
     * security group of the Firewall Manager policy.</p>
     */
    inline AwsEc2NetworkInterfaceViolation& AddViolatingSecurityGroups(Aws::String&& value) { m_violatingSecurityGroupsHasBeenSet = true; m_violatingSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>List of security groups that violate the rules specified in the primary
     * security group of the Firewall Manager policy.</p>
     */
    inline AwsEc2NetworkInterfaceViolation& AddViolatingSecurityGroups(const char* value) { m_violatingSecurityGroupsHasBeenSet = true; m_violatingSecurityGroups.push_back(value); return *this; }

  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::Vector<Aws::String> m_violatingSecurityGroups;
    bool m_violatingSecurityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
