/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/ControlPlanePlacementRequest.h>
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
namespace EKS
{
namespace Model
{

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
  class OutpostConfigRequest
  {
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
    template<typename OutpostArnsT = Aws::Vector<Aws::String>>
    void SetOutpostArns(OutpostArnsT&& value) { m_outpostArnsHasBeenSet = true; m_outpostArns = std::forward<OutpostArnsT>(value); }
    template<typename OutpostArnsT = Aws::Vector<Aws::String>>
    OutpostConfigRequest& WithOutpostArns(OutpostArnsT&& value) { SetOutpostArns(std::forward<OutpostArnsT>(value)); return *this;}
    template<typename OutpostArnsT = Aws::String>
    OutpostConfigRequest& AddOutpostArns(OutpostArnsT&& value) { m_outpostArnsHasBeenSet = true; m_outpostArns.emplace_back(std::forward<OutpostArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type that you want to use for your local Amazon EKS
     * cluster on Outposts. Choose an instance type based on the number of nodes that
     * your cluster will have. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
     * considerations</a> in the <i>Amazon EKS User Guide</i>.</p> <p>The instance type
     * that you specify is used for all Kubernetes control plane instances. The
     * instance type can't be changed after cluster creation. The control plane is not
     * automatically scaled by Amazon EKS.</p> <p> </p>
     */
    inline const Aws::String& GetControlPlaneInstanceType() const { return m_controlPlaneInstanceType; }
    inline bool ControlPlaneInstanceTypeHasBeenSet() const { return m_controlPlaneInstanceTypeHasBeenSet; }
    template<typename ControlPlaneInstanceTypeT = Aws::String>
    void SetControlPlaneInstanceType(ControlPlaneInstanceTypeT&& value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType = std::forward<ControlPlaneInstanceTypeT>(value); }
    template<typename ControlPlaneInstanceTypeT = Aws::String>
    OutpostConfigRequest& WithControlPlaneInstanceType(ControlPlaneInstanceTypeT&& value) { SetControlPlaneInstanceType(std::forward<ControlPlaneInstanceTypeT>(value)); return *this;}
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
    template<typename ControlPlanePlacementT = ControlPlanePlacementRequest>
    void SetControlPlanePlacement(ControlPlanePlacementT&& value) { m_controlPlanePlacementHasBeenSet = true; m_controlPlanePlacement = std::forward<ControlPlanePlacementT>(value); }
    template<typename ControlPlanePlacementT = ControlPlanePlacementRequest>
    OutpostConfigRequest& WithControlPlanePlacement(ControlPlanePlacementT&& value) { SetControlPlanePlacement(std::forward<ControlPlanePlacementT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_outpostArns;
    bool m_outpostArnsHasBeenSet = false;

    Aws::String m_controlPlaneInstanceType;
    bool m_controlPlaneInstanceTypeHasBeenSet = false;

    ControlPlanePlacementRequest m_controlPlanePlacement;
    bool m_controlPlanePlacementHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
