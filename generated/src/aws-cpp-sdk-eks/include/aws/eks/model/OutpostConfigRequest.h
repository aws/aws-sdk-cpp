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
    AWS_EKS_API OutpostConfigRequest();
    AWS_EKS_API OutpostConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API OutpostConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Outpost that you want to use for your local Amazon EKS cluster
     * on Outposts. Only a single Outpost ARN is supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutpostArns() const{ return m_outpostArns; }

    /**
     * <p>The ARN of the Outpost that you want to use for your local Amazon EKS cluster
     * on Outposts. Only a single Outpost ARN is supported.</p>
     */
    inline bool OutpostArnsHasBeenSet() const { return m_outpostArnsHasBeenSet; }

    /**
     * <p>The ARN of the Outpost that you want to use for your local Amazon EKS cluster
     * on Outposts. Only a single Outpost ARN is supported.</p>
     */
    inline void SetOutpostArns(const Aws::Vector<Aws::String>& value) { m_outpostArnsHasBeenSet = true; m_outpostArns = value; }

    /**
     * <p>The ARN of the Outpost that you want to use for your local Amazon EKS cluster
     * on Outposts. Only a single Outpost ARN is supported.</p>
     */
    inline void SetOutpostArns(Aws::Vector<Aws::String>&& value) { m_outpostArnsHasBeenSet = true; m_outpostArns = std::move(value); }

    /**
     * <p>The ARN of the Outpost that you want to use for your local Amazon EKS cluster
     * on Outposts. Only a single Outpost ARN is supported.</p>
     */
    inline OutpostConfigRequest& WithOutpostArns(const Aws::Vector<Aws::String>& value) { SetOutpostArns(value); return *this;}

    /**
     * <p>The ARN of the Outpost that you want to use for your local Amazon EKS cluster
     * on Outposts. Only a single Outpost ARN is supported.</p>
     */
    inline OutpostConfigRequest& WithOutpostArns(Aws::Vector<Aws::String>&& value) { SetOutpostArns(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Outpost that you want to use for your local Amazon EKS cluster
     * on Outposts. Only a single Outpost ARN is supported.</p>
     */
    inline OutpostConfigRequest& AddOutpostArns(const Aws::String& value) { m_outpostArnsHasBeenSet = true; m_outpostArns.push_back(value); return *this; }

    /**
     * <p>The ARN of the Outpost that you want to use for your local Amazon EKS cluster
     * on Outposts. Only a single Outpost ARN is supported.</p>
     */
    inline OutpostConfigRequest& AddOutpostArns(Aws::String&& value) { m_outpostArnsHasBeenSet = true; m_outpostArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN of the Outpost that you want to use for your local Amazon EKS cluster
     * on Outposts. Only a single Outpost ARN is supported.</p>
     */
    inline OutpostConfigRequest& AddOutpostArns(const char* value) { m_outpostArnsHasBeenSet = true; m_outpostArns.push_back(value); return *this; }


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
    inline const Aws::String& GetControlPlaneInstanceType() const{ return m_controlPlaneInstanceType; }

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
    inline bool ControlPlaneInstanceTypeHasBeenSet() const { return m_controlPlaneInstanceTypeHasBeenSet; }

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
    inline void SetControlPlaneInstanceType(const Aws::String& value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType = value; }

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
    inline void SetControlPlaneInstanceType(Aws::String&& value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType = std::move(value); }

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
    inline void SetControlPlaneInstanceType(const char* value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType.assign(value); }

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
    inline OutpostConfigRequest& WithControlPlaneInstanceType(const Aws::String& value) { SetControlPlaneInstanceType(value); return *this;}

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
    inline OutpostConfigRequest& WithControlPlaneInstanceType(Aws::String&& value) { SetControlPlaneInstanceType(std::move(value)); return *this;}

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
    inline OutpostConfigRequest& WithControlPlaneInstanceType(const char* value) { SetControlPlaneInstanceType(value); return *this;}


    /**
     * <p>An object representing the placement configuration for all the control plane
     * instances of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
     * considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const ControlPlanePlacementRequest& GetControlPlanePlacement() const{ return m_controlPlanePlacement; }

    /**
     * <p>An object representing the placement configuration for all the control plane
     * instances of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
     * considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool ControlPlanePlacementHasBeenSet() const { return m_controlPlanePlacementHasBeenSet; }

    /**
     * <p>An object representing the placement configuration for all the control plane
     * instances of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
     * considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetControlPlanePlacement(const ControlPlanePlacementRequest& value) { m_controlPlanePlacementHasBeenSet = true; m_controlPlanePlacement = value; }

    /**
     * <p>An object representing the placement configuration for all the control plane
     * instances of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
     * considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetControlPlanePlacement(ControlPlanePlacementRequest&& value) { m_controlPlanePlacementHasBeenSet = true; m_controlPlanePlacement = std::move(value); }

    /**
     * <p>An object representing the placement configuration for all the control plane
     * instances of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
     * considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline OutpostConfigRequest& WithControlPlanePlacement(const ControlPlanePlacementRequest& value) { SetControlPlanePlacement(value); return *this;}

    /**
     * <p>An object representing the placement configuration for all the control plane
     * instances of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
     * considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline OutpostConfigRequest& WithControlPlanePlacement(ControlPlanePlacementRequest&& value) { SetControlPlanePlacement(std::move(value)); return *this;}

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
