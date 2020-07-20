/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/AwsVPCSecurityGroupViolation.h>
#include <aws/fms/model/AwsEc2NetworkInterfaceViolation.h>
#include <aws/fms/model/AwsEc2InstanceViolation.h>
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
   * <p>Violation detail based on resource type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ResourceViolation">AWS
   * API Reference</a></p>
   */
  class AWS_FMS_API ResourceViolation
  {
  public:
    ResourceViolation();
    ResourceViolation(Aws::Utils::Json::JsonView jsonValue);
    ResourceViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Violation details for security groups.</p>
     */
    inline const AwsVPCSecurityGroupViolation& GetAwsVPCSecurityGroupViolation() const{ return m_awsVPCSecurityGroupViolation; }

    /**
     * <p>Violation details for security groups.</p>
     */
    inline bool AwsVPCSecurityGroupViolationHasBeenSet() const { return m_awsVPCSecurityGroupViolationHasBeenSet; }

    /**
     * <p>Violation details for security groups.</p>
     */
    inline void SetAwsVPCSecurityGroupViolation(const AwsVPCSecurityGroupViolation& value) { m_awsVPCSecurityGroupViolationHasBeenSet = true; m_awsVPCSecurityGroupViolation = value; }

    /**
     * <p>Violation details for security groups.</p>
     */
    inline void SetAwsVPCSecurityGroupViolation(AwsVPCSecurityGroupViolation&& value) { m_awsVPCSecurityGroupViolationHasBeenSet = true; m_awsVPCSecurityGroupViolation = std::move(value); }

    /**
     * <p>Violation details for security groups.</p>
     */
    inline ResourceViolation& WithAwsVPCSecurityGroupViolation(const AwsVPCSecurityGroupViolation& value) { SetAwsVPCSecurityGroupViolation(value); return *this;}

    /**
     * <p>Violation details for security groups.</p>
     */
    inline ResourceViolation& WithAwsVPCSecurityGroupViolation(AwsVPCSecurityGroupViolation&& value) { SetAwsVPCSecurityGroupViolation(std::move(value)); return *this;}


    /**
     * <p>Violation details for network interface.</p>
     */
    inline const AwsEc2NetworkInterfaceViolation& GetAwsEc2NetworkInterfaceViolation() const{ return m_awsEc2NetworkInterfaceViolation; }

    /**
     * <p>Violation details for network interface.</p>
     */
    inline bool AwsEc2NetworkInterfaceViolationHasBeenSet() const { return m_awsEc2NetworkInterfaceViolationHasBeenSet; }

    /**
     * <p>Violation details for network interface.</p>
     */
    inline void SetAwsEc2NetworkInterfaceViolation(const AwsEc2NetworkInterfaceViolation& value) { m_awsEc2NetworkInterfaceViolationHasBeenSet = true; m_awsEc2NetworkInterfaceViolation = value; }

    /**
     * <p>Violation details for network interface.</p>
     */
    inline void SetAwsEc2NetworkInterfaceViolation(AwsEc2NetworkInterfaceViolation&& value) { m_awsEc2NetworkInterfaceViolationHasBeenSet = true; m_awsEc2NetworkInterfaceViolation = std::move(value); }

    /**
     * <p>Violation details for network interface.</p>
     */
    inline ResourceViolation& WithAwsEc2NetworkInterfaceViolation(const AwsEc2NetworkInterfaceViolation& value) { SetAwsEc2NetworkInterfaceViolation(value); return *this;}

    /**
     * <p>Violation details for network interface.</p>
     */
    inline ResourceViolation& WithAwsEc2NetworkInterfaceViolation(AwsEc2NetworkInterfaceViolation&& value) { SetAwsEc2NetworkInterfaceViolation(std::move(value)); return *this;}


    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline const AwsEc2InstanceViolation& GetAwsEc2InstanceViolation() const{ return m_awsEc2InstanceViolation; }

    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline bool AwsEc2InstanceViolationHasBeenSet() const { return m_awsEc2InstanceViolationHasBeenSet; }

    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline void SetAwsEc2InstanceViolation(const AwsEc2InstanceViolation& value) { m_awsEc2InstanceViolationHasBeenSet = true; m_awsEc2InstanceViolation = value; }

    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline void SetAwsEc2InstanceViolation(AwsEc2InstanceViolation&& value) { m_awsEc2InstanceViolationHasBeenSet = true; m_awsEc2InstanceViolation = std::move(value); }

    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline ResourceViolation& WithAwsEc2InstanceViolation(const AwsEc2InstanceViolation& value) { SetAwsEc2InstanceViolation(value); return *this;}

    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline ResourceViolation& WithAwsEc2InstanceViolation(AwsEc2InstanceViolation&& value) { SetAwsEc2InstanceViolation(std::move(value)); return *this;}

  private:

    AwsVPCSecurityGroupViolation m_awsVPCSecurityGroupViolation;
    bool m_awsVPCSecurityGroupViolationHasBeenSet;

    AwsEc2NetworkInterfaceViolation m_awsEc2NetworkInterfaceViolation;
    bool m_awsEc2NetworkInterfaceViolationHasBeenSet;

    AwsEc2InstanceViolation m_awsEc2InstanceViolation;
    bool m_awsEc2InstanceViolationHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
