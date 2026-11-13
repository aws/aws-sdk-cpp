/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/InvestigationEc2Instance.h>
#include <aws/guardduty/model/InvestigationEcsCluster.h>
#include <aws/guardduty/model/InvestigationEksCluster.h>
#include <aws/guardduty/model/LambdaFunction.h>
#include <aws/guardduty/model/RdsDbInstance.h>
#include <aws/guardduty/model/RdsDbUser.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains details that are specific to the type of a resource. The member that
 * is set matches the <code>ResourceType</code> of the resource, except that
 * <code>RdsDbInstance</code> and <code>RdsDbUser</code> can be set
 * together.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationResourceData">AWS
 * API Reference</a></p>
 */
class InvestigationResourceData {
 public:
  AWS_GUARDDUTY_API InvestigationResourceData() = default;
  AWS_GUARDDUTY_API InvestigationResourceData(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details about an Amazon EC2 instance.</p>
   */
  inline const InvestigationEc2Instance& GetEc2Instance() const { return m_ec2Instance; }
  inline bool Ec2InstanceHasBeenSet() const { return m_ec2InstanceHasBeenSet; }
  template <typename Ec2InstanceT = InvestigationEc2Instance>
  void SetEc2Instance(Ec2InstanceT&& value) {
    m_ec2InstanceHasBeenSet = true;
    m_ec2Instance = std::forward<Ec2InstanceT>(value);
  }
  template <typename Ec2InstanceT = InvestigationEc2Instance>
  InvestigationResourceData& WithEc2Instance(Ec2InstanceT&& value) {
    SetEc2Instance(std::forward<Ec2InstanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an Lambda function.</p>
   */
  inline const LambdaFunction& GetLambdaFunction() const { return m_lambdaFunction; }
  inline bool LambdaFunctionHasBeenSet() const { return m_lambdaFunctionHasBeenSet; }
  template <typename LambdaFunctionT = LambdaFunction>
  void SetLambdaFunction(LambdaFunctionT&& value) {
    m_lambdaFunctionHasBeenSet = true;
    m_lambdaFunction = std::forward<LambdaFunctionT>(value);
  }
  template <typename LambdaFunctionT = LambdaFunction>
  InvestigationResourceData& WithLambdaFunction(LambdaFunctionT&& value) {
    SetLambdaFunction(std::forward<LambdaFunctionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an Amazon RDS database instance.</p>
   */
  inline const RdsDbInstance& GetRdsDbInstance() const { return m_rdsDbInstance; }
  inline bool RdsDbInstanceHasBeenSet() const { return m_rdsDbInstanceHasBeenSet; }
  template <typename RdsDbInstanceT = RdsDbInstance>
  void SetRdsDbInstance(RdsDbInstanceT&& value) {
    m_rdsDbInstanceHasBeenSet = true;
    m_rdsDbInstance = std::forward<RdsDbInstanceT>(value);
  }
  template <typename RdsDbInstanceT = RdsDbInstance>
  InvestigationResourceData& WithRdsDbInstance(RdsDbInstanceT&& value) {
    SetRdsDbInstance(std::forward<RdsDbInstanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the user that logged in to an Amazon RDS database instance.</p>
   */
  inline const RdsDbUser& GetRdsDbUser() const { return m_rdsDbUser; }
  inline bool RdsDbUserHasBeenSet() const { return m_rdsDbUserHasBeenSet; }
  template <typename RdsDbUserT = RdsDbUser>
  void SetRdsDbUser(RdsDbUserT&& value) {
    m_rdsDbUserHasBeenSet = true;
    m_rdsDbUser = std::forward<RdsDbUserT>(value);
  }
  template <typename RdsDbUserT = RdsDbUser>
  InvestigationResourceData& WithRdsDbUser(RdsDbUserT&& value) {
    SetRdsDbUser(std::forward<RdsDbUserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an Amazon EKS cluster.</p>
   */
  inline const InvestigationEksCluster& GetEksCluster() const { return m_eksCluster; }
  inline bool EksClusterHasBeenSet() const { return m_eksClusterHasBeenSet; }
  template <typename EksClusterT = InvestigationEksCluster>
  void SetEksCluster(EksClusterT&& value) {
    m_eksClusterHasBeenSet = true;
    m_eksCluster = std::forward<EksClusterT>(value);
  }
  template <typename EksClusterT = InvestigationEksCluster>
  InvestigationResourceData& WithEksCluster(EksClusterT&& value) {
    SetEksCluster(std::forward<EksClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an Amazon ECS cluster.</p>
   */
  inline const InvestigationEcsCluster& GetEcsCluster() const { return m_ecsCluster; }
  inline bool EcsClusterHasBeenSet() const { return m_ecsClusterHasBeenSet; }
  template <typename EcsClusterT = InvestigationEcsCluster>
  void SetEcsCluster(EcsClusterT&& value) {
    m_ecsClusterHasBeenSet = true;
    m_ecsCluster = std::forward<EcsClusterT>(value);
  }
  template <typename EcsClusterT = InvestigationEcsCluster>
  InvestigationResourceData& WithEcsCluster(EcsClusterT&& value) {
    SetEcsCluster(std::forward<EcsClusterT>(value));
    return *this;
  }
  ///@}
 private:
  InvestigationEc2Instance m_ec2Instance;

  LambdaFunction m_lambdaFunction;

  RdsDbInstance m_rdsDbInstance;

  RdsDbUser m_rdsDbUser;

  InvestigationEksCluster m_eksCluster;

  InvestigationEcsCluster m_ecsCluster;
  bool m_ec2InstanceHasBeenSet = false;
  bool m_lambdaFunctionHasBeenSet = false;
  bool m_rdsDbInstanceHasBeenSet = false;
  bool m_rdsDbUserHasBeenSet = false;
  bool m_eksClusterHasBeenSet = false;
  bool m_ecsClusterHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
