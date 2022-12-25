/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/AwsEc2NetworkInterfaceViolation.h>
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
   * <p>Violation detail for an EC2 instance resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AwsEc2InstanceViolation">AWS
   * API Reference</a></p>
   */
  class AwsEc2InstanceViolation
  {
  public:
    AWS_FMS_API AwsEc2InstanceViolation();
    AWS_FMS_API AwsEc2InstanceViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AwsEc2InstanceViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }

    /**
     * <p>The resource ID of the EC2 instance.</p>
     */
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }

    /**
     * <p>The resource ID of the EC2 instance.</p>
     */
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }

    /**
     * <p>The resource ID of the EC2 instance.</p>
     */
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }

    /**
     * <p>The resource ID of the EC2 instance.</p>
     */
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }

    /**
     * <p>The resource ID of the EC2 instance.</p>
     */
    inline AwsEc2InstanceViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}

    /**
     * <p>The resource ID of the EC2 instance.</p>
     */
    inline AwsEc2InstanceViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the EC2 instance.</p>
     */
    inline AwsEc2InstanceViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}


    /**
     * <p>Violation detail for network interfaces associated with the EC2 instance.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkInterfaceViolation>& GetAwsEc2NetworkInterfaceViolations() const{ return m_awsEc2NetworkInterfaceViolations; }

    /**
     * <p>Violation detail for network interfaces associated with the EC2 instance.</p>
     */
    inline bool AwsEc2NetworkInterfaceViolationsHasBeenSet() const { return m_awsEc2NetworkInterfaceViolationsHasBeenSet; }

    /**
     * <p>Violation detail for network interfaces associated with the EC2 instance.</p>
     */
    inline void SetAwsEc2NetworkInterfaceViolations(const Aws::Vector<AwsEc2NetworkInterfaceViolation>& value) { m_awsEc2NetworkInterfaceViolationsHasBeenSet = true; m_awsEc2NetworkInterfaceViolations = value; }

    /**
     * <p>Violation detail for network interfaces associated with the EC2 instance.</p>
     */
    inline void SetAwsEc2NetworkInterfaceViolations(Aws::Vector<AwsEc2NetworkInterfaceViolation>&& value) { m_awsEc2NetworkInterfaceViolationsHasBeenSet = true; m_awsEc2NetworkInterfaceViolations = std::move(value); }

    /**
     * <p>Violation detail for network interfaces associated with the EC2 instance.</p>
     */
    inline AwsEc2InstanceViolation& WithAwsEc2NetworkInterfaceViolations(const Aws::Vector<AwsEc2NetworkInterfaceViolation>& value) { SetAwsEc2NetworkInterfaceViolations(value); return *this;}

    /**
     * <p>Violation detail for network interfaces associated with the EC2 instance.</p>
     */
    inline AwsEc2InstanceViolation& WithAwsEc2NetworkInterfaceViolations(Aws::Vector<AwsEc2NetworkInterfaceViolation>&& value) { SetAwsEc2NetworkInterfaceViolations(std::move(value)); return *this;}

    /**
     * <p>Violation detail for network interfaces associated with the EC2 instance.</p>
     */
    inline AwsEc2InstanceViolation& AddAwsEc2NetworkInterfaceViolations(const AwsEc2NetworkInterfaceViolation& value) { m_awsEc2NetworkInterfaceViolationsHasBeenSet = true; m_awsEc2NetworkInterfaceViolations.push_back(value); return *this; }

    /**
     * <p>Violation detail for network interfaces associated with the EC2 instance.</p>
     */
    inline AwsEc2InstanceViolation& AddAwsEc2NetworkInterfaceViolations(AwsEc2NetworkInterfaceViolation&& value) { m_awsEc2NetworkInterfaceViolationsHasBeenSet = true; m_awsEc2NetworkInterfaceViolations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::Vector<AwsEc2NetworkInterfaceViolation> m_awsEc2NetworkInterfaceViolations;
    bool m_awsEc2NetworkInterfaceViolationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
