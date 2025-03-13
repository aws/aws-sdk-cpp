/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The VPC Lattice configuration for your service that holds the information for
   * the target group(s) Amazon ECS tasks will be registered to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/VpcLatticeConfiguration">AWS
   * API Reference</a></p>
   */
  class VpcLatticeConfiguration
  {
  public:
    AWS_ECS_API VpcLatticeConfiguration() = default;
    AWS_ECS_API VpcLatticeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API VpcLatticeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM role to associate with this VPC Lattice configuration.
     * This is the Amazon ECS&#x2028; infrastructure IAM role that is used to manage
     * your VPC Lattice infrastructure.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    VpcLatticeConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the target group or groups associated
     * with the VPC Lattice configuration that the Amazon ECS tasks will be registered
     * to.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const { return m_targetGroupArn; }
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }
    template<typename TargetGroupArnT = Aws::String>
    void SetTargetGroupArn(TargetGroupArnT&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::forward<TargetGroupArnT>(value); }
    template<typename TargetGroupArnT = Aws::String>
    VpcLatticeConfiguration& WithTargetGroupArn(TargetGroupArnT&& value) { SetTargetGroupArn(std::forward<TargetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the port mapping to register in the VPC Lattice target group.
     * This is the name of the <code>portMapping</code> you defined in your task
     * definition.</p>
     */
    inline const Aws::String& GetPortName() const { return m_portName; }
    inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }
    template<typename PortNameT = Aws::String>
    void SetPortName(PortNameT&& value) { m_portNameHasBeenSet = true; m_portName = std::forward<PortNameT>(value); }
    template<typename PortNameT = Aws::String>
    VpcLatticeConfiguration& WithPortName(PortNameT&& value) { SetPortName(std::forward<PortNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    Aws::String m_portName;
    bool m_portNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
