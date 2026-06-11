/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ControlPlanePlacementRequest.h>
#include <aws/eks/model/EtcdPlacementRequest.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>The configuration of your local Amazon EKS cluster on an Amazon Web Services
 * Outpost. Before creating a cluster on an Outpost, review <a
 * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-local-cluster-create.html">Creating
 * a local cluster on an Outpost</a> in the <i>Amazon EKS User Guide</i>. This API
 * isn't available for Amazon EKS clusters on the Amazon Web Services
 * cloud.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/OutpostConfigRequest">AWS
 * API Reference</a></p>
 */
class OutpostConfigRequest {
 public:
  AWS_EKS_API OutpostConfigRequest() = default;
  AWS_EKS_API OutpostConfigRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API OutpostConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Outpost that you want to use for your local Amazon EKS cluster
   * on Outposts. Only a single Outpost ARN is supported.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOutpostArns() const { return m_outpostArns; }
  inline bool OutpostArnsHasBeenSet() const { return m_outpostArnsHasBeenSet; }
  template <typename OutpostArnsT = Aws::Vector<Aws::String>>
  void SetOutpostArns(OutpostArnsT&& value) {
    m_outpostArnsHasBeenSet = true;
    m_outpostArns = std::forward<OutpostArnsT>(value);
  }
  template <typename OutpostArnsT = Aws::Vector<Aws::String>>
  OutpostConfigRequest& WithOutpostArns(OutpostArnsT&& value) {
    SetOutpostArns(std::forward<OutpostArnsT>(value));
    return *this;
  }
  template <typename OutpostArnsT = Aws::String>
  OutpostConfigRequest& AddOutpostArns(OutpostArnsT&& value) {
    m_outpostArnsHasBeenSet = true;
    m_outpostArns.emplace_back(std::forward<OutpostArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EC2 instance type for the Kubernetes control plane instances of
   * your local Amazon EKS cluster on Amazon Web Services Outposts. This instance
   * type applies to all control plane instances and cannot be changed after cluster
   * creation.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
   * considerations</a> in the <i>Amazon EKS User Guide</i>.</p> <p> </p>
   */
  inline const Aws::String& GetControlPlaneInstanceType() const { return m_controlPlaneInstanceType; }
  inline bool ControlPlaneInstanceTypeHasBeenSet() const { return m_controlPlaneInstanceTypeHasBeenSet; }
  template <typename ControlPlaneInstanceTypeT = Aws::String>
  void SetControlPlaneInstanceType(ControlPlaneInstanceTypeT&& value) {
    m_controlPlaneInstanceTypeHasBeenSet = true;
    m_controlPlaneInstanceType = std::forward<ControlPlaneInstanceTypeT>(value);
  }
  template <typename ControlPlaneInstanceTypeT = Aws::String>
  OutpostConfigRequest& WithControlPlaneInstanceType(ControlPlaneInstanceTypeT&& value) {
    SetControlPlaneInstanceType(std::forward<ControlPlaneInstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object representing the placement configuration for all the control plane
   * instances of your local Amazon EKS cluster on an Amazon Web Services Outpost.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
   * considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
   */
  inline const ControlPlanePlacementRequest& GetControlPlanePlacement() const { return m_controlPlanePlacement; }
  inline bool ControlPlanePlacementHasBeenSet() const { return m_controlPlanePlacementHasBeenSet; }
  template <typename ControlPlanePlacementT = ControlPlanePlacementRequest>
  void SetControlPlanePlacement(ControlPlanePlacementT&& value) {
    m_controlPlanePlacementHasBeenSet = true;
    m_controlPlanePlacement = std::forward<ControlPlanePlacementT>(value);
  }
  template <typename ControlPlanePlacementT = ControlPlanePlacementRequest>
  OutpostConfigRequest& WithControlPlanePlacement(ControlPlanePlacementT&& value) {
    SetControlPlanePlacement(std::forward<ControlPlanePlacementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EC2 instance type for etcd instances of your local Amazon EKS
   * cluster on Amazon Web Services Outposts. This instance type applies to all etcd
   * instances and cannot be changed after cluster creation.</p>
   */
  inline const Aws::String& GetEtcdInstanceType() const { return m_etcdInstanceType; }
  inline bool EtcdInstanceTypeHasBeenSet() const { return m_etcdInstanceTypeHasBeenSet; }
  template <typename EtcdInstanceTypeT = Aws::String>
  void SetEtcdInstanceType(EtcdInstanceTypeT&& value) {
    m_etcdInstanceTypeHasBeenSet = true;
    m_etcdInstanceType = std::forward<EtcdInstanceTypeT>(value);
  }
  template <typename EtcdInstanceTypeT = Aws::String>
  OutpostConfigRequest& WithEtcdInstanceType(EtcdInstanceTypeT&& value) {
    SetEtcdInstanceType(std::forward<EtcdInstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object representing the placement configuration for the etcd instances of
   * your local Amazon EKS cluster on an Amazon Web Services Outpost. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
   * considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
   */
  inline const EtcdPlacementRequest& GetEtcdPlacement() const { return m_etcdPlacement; }
  inline bool EtcdPlacementHasBeenSet() const { return m_etcdPlacementHasBeenSet; }
  template <typename EtcdPlacementT = EtcdPlacementRequest>
  void SetEtcdPlacement(EtcdPlacementT&& value) {
    m_etcdPlacementHasBeenSet = true;
    m_etcdPlacement = std::forward<EtcdPlacementT>(value);
  }
  template <typename EtcdPlacementT = EtcdPlacementRequest>
  OutpostConfigRequest& WithEtcdPlacement(EtcdPlacementT&& value) {
    SetEtcdPlacement(std::forward<EtcdPlacementT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_outpostArns;

  Aws::String m_controlPlaneInstanceType;

  ControlPlanePlacementRequest m_controlPlanePlacement;

  Aws::String m_etcdInstanceType;

  EtcdPlacementRequest m_etcdPlacement;
  bool m_outpostArnsHasBeenSet = false;
  bool m_controlPlaneInstanceTypeHasBeenSet = false;
  bool m_controlPlanePlacementHasBeenSet = false;
  bool m_etcdInstanceTypeHasBeenSet = false;
  bool m_etcdPlacementHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
