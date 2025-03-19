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
    AWS_FMS_API AwsEc2InstanceViolation() = default;
    AWS_FMS_API AwsEc2InstanceViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AwsEc2InstanceViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource ID of the EC2 instance.</p>
     */
    inline const Aws::String& GetViolationTarget() const { return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    template<typename ViolationTargetT = Aws::String>
    void SetViolationTarget(ViolationTargetT&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::forward<ViolationTargetT>(value); }
    template<typename ViolationTargetT = Aws::String>
    AwsEc2InstanceViolation& WithViolationTarget(ViolationTargetT&& value) { SetViolationTarget(std::forward<ViolationTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for network interfaces associated with the EC2 instance.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkInterfaceViolation>& GetAwsEc2NetworkInterfaceViolations() const { return m_awsEc2NetworkInterfaceViolations; }
    inline bool AwsEc2NetworkInterfaceViolationsHasBeenSet() const { return m_awsEc2NetworkInterfaceViolationsHasBeenSet; }
    template<typename AwsEc2NetworkInterfaceViolationsT = Aws::Vector<AwsEc2NetworkInterfaceViolation>>
    void SetAwsEc2NetworkInterfaceViolations(AwsEc2NetworkInterfaceViolationsT&& value) { m_awsEc2NetworkInterfaceViolationsHasBeenSet = true; m_awsEc2NetworkInterfaceViolations = std::forward<AwsEc2NetworkInterfaceViolationsT>(value); }
    template<typename AwsEc2NetworkInterfaceViolationsT = Aws::Vector<AwsEc2NetworkInterfaceViolation>>
    AwsEc2InstanceViolation& WithAwsEc2NetworkInterfaceViolations(AwsEc2NetworkInterfaceViolationsT&& value) { SetAwsEc2NetworkInterfaceViolations(std::forward<AwsEc2NetworkInterfaceViolationsT>(value)); return *this;}
    template<typename AwsEc2NetworkInterfaceViolationsT = AwsEc2NetworkInterfaceViolation>
    AwsEc2InstanceViolation& AddAwsEc2NetworkInterfaceViolations(AwsEc2NetworkInterfaceViolationsT&& value) { m_awsEc2NetworkInterfaceViolationsHasBeenSet = true; m_awsEc2NetworkInterfaceViolations.emplace_back(std::forward<AwsEc2NetworkInterfaceViolationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::Vector<AwsEc2NetworkInterfaceViolation> m_awsEc2NetworkInterfaceViolations;
    bool m_awsEc2NetworkInterfaceViolationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
