/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The configuration of your local Amazon EKS cluster on an Amazon Web Services
   * Outpost. Before creating a cluster on an Outpost, review <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/create-cluster-outpost.html">Creating
   * a local Amazon EKS cluster on an Amazon Web Services Outpost</a> in the
   * <i>Amazon EKS User Guide</i>. This API isn't available for Amazon EKS clusters
   * on the Amazon Web Services cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/OutpostConfigRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EKS_API OutpostConfigRequest
  {
  public:
    OutpostConfigRequest();
    OutpostConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    OutpostConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * cluster on Outposts. The instance type that you specify is used for all
     * Kubernetes control plane instances. The instance type can't be changed after
     * cluster creation.</p> <p>Choose an instance type based on the number of nodes
     * that your cluster will have. If your cluster will have:</p> <ul> <li> <p>1–20
     * nodes, then we recommend specifying a <code>large</code> instance type.</p>
     * </li> <li> <p>21–100 nodes, then we recommend specifying an <code>xlarge</code>
     * instance type.</p> </li> <li> <p>101–250 nodes, then we recommend specifying a
     * <code>2xlarge</code> instance type.</p> </li> </ul> <p>For a list of the
     * available Amazon EC2 instance types, see Compute and storage in <a
     * href="http://aws.amazon.com/outposts/rack/features/">Outposts rack features</a>.
     * The control plane is not automatically scaled by Amazon EKS.</p>
     */
    inline const Aws::String& GetControlPlaneInstanceType() const{ return m_controlPlaneInstanceType; }

    /**
     * <p>The Amazon EC2 instance type that you want to use for your local Amazon EKS
     * cluster on Outposts. The instance type that you specify is used for all
     * Kubernetes control plane instances. The instance type can't be changed after
     * cluster creation.</p> <p>Choose an instance type based on the number of nodes
     * that your cluster will have. If your cluster will have:</p> <ul> <li> <p>1–20
     * nodes, then we recommend specifying a <code>large</code> instance type.</p>
     * </li> <li> <p>21–100 nodes, then we recommend specifying an <code>xlarge</code>
     * instance type.</p> </li> <li> <p>101–250 nodes, then we recommend specifying a
     * <code>2xlarge</code> instance type.</p> </li> </ul> <p>For a list of the
     * available Amazon EC2 instance types, see Compute and storage in <a
     * href="http://aws.amazon.com/outposts/rack/features/">Outposts rack features</a>.
     * The control plane is not automatically scaled by Amazon EKS.</p>
     */
    inline bool ControlPlaneInstanceTypeHasBeenSet() const { return m_controlPlaneInstanceTypeHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance type that you want to use for your local Amazon EKS
     * cluster on Outposts. The instance type that you specify is used for all
     * Kubernetes control plane instances. The instance type can't be changed after
     * cluster creation.</p> <p>Choose an instance type based on the number of nodes
     * that your cluster will have. If your cluster will have:</p> <ul> <li> <p>1–20
     * nodes, then we recommend specifying a <code>large</code> instance type.</p>
     * </li> <li> <p>21–100 nodes, then we recommend specifying an <code>xlarge</code>
     * instance type.</p> </li> <li> <p>101–250 nodes, then we recommend specifying a
     * <code>2xlarge</code> instance type.</p> </li> </ul> <p>For a list of the
     * available Amazon EC2 instance types, see Compute and storage in <a
     * href="http://aws.amazon.com/outposts/rack/features/">Outposts rack features</a>.
     * The control plane is not automatically scaled by Amazon EKS.</p>
     */
    inline void SetControlPlaneInstanceType(const Aws::String& value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType = value; }

    /**
     * <p>The Amazon EC2 instance type that you want to use for your local Amazon EKS
     * cluster on Outposts. The instance type that you specify is used for all
     * Kubernetes control plane instances. The instance type can't be changed after
     * cluster creation.</p> <p>Choose an instance type based on the number of nodes
     * that your cluster will have. If your cluster will have:</p> <ul> <li> <p>1–20
     * nodes, then we recommend specifying a <code>large</code> instance type.</p>
     * </li> <li> <p>21–100 nodes, then we recommend specifying an <code>xlarge</code>
     * instance type.</p> </li> <li> <p>101–250 nodes, then we recommend specifying a
     * <code>2xlarge</code> instance type.</p> </li> </ul> <p>For a list of the
     * available Amazon EC2 instance types, see Compute and storage in <a
     * href="http://aws.amazon.com/outposts/rack/features/">Outposts rack features</a>.
     * The control plane is not automatically scaled by Amazon EKS.</p>
     */
    inline void SetControlPlaneInstanceType(Aws::String&& value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType = std::move(value); }

    /**
     * <p>The Amazon EC2 instance type that you want to use for your local Amazon EKS
     * cluster on Outposts. The instance type that you specify is used for all
     * Kubernetes control plane instances. The instance type can't be changed after
     * cluster creation.</p> <p>Choose an instance type based on the number of nodes
     * that your cluster will have. If your cluster will have:</p> <ul> <li> <p>1–20
     * nodes, then we recommend specifying a <code>large</code> instance type.</p>
     * </li> <li> <p>21–100 nodes, then we recommend specifying an <code>xlarge</code>
     * instance type.</p> </li> <li> <p>101–250 nodes, then we recommend specifying a
     * <code>2xlarge</code> instance type.</p> </li> </ul> <p>For a list of the
     * available Amazon EC2 instance types, see Compute and storage in <a
     * href="http://aws.amazon.com/outposts/rack/features/">Outposts rack features</a>.
     * The control plane is not automatically scaled by Amazon EKS.</p>
     */
    inline void SetControlPlaneInstanceType(const char* value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType.assign(value); }

    /**
     * <p>The Amazon EC2 instance type that you want to use for your local Amazon EKS
     * cluster on Outposts. The instance type that you specify is used for all
     * Kubernetes control plane instances. The instance type can't be changed after
     * cluster creation.</p> <p>Choose an instance type based on the number of nodes
     * that your cluster will have. If your cluster will have:</p> <ul> <li> <p>1–20
     * nodes, then we recommend specifying a <code>large</code> instance type.</p>
     * </li> <li> <p>21–100 nodes, then we recommend specifying an <code>xlarge</code>
     * instance type.</p> </li> <li> <p>101–250 nodes, then we recommend specifying a
     * <code>2xlarge</code> instance type.</p> </li> </ul> <p>For a list of the
     * available Amazon EC2 instance types, see Compute and storage in <a
     * href="http://aws.amazon.com/outposts/rack/features/">Outposts rack features</a>.
     * The control plane is not automatically scaled by Amazon EKS.</p>
     */
    inline OutpostConfigRequest& WithControlPlaneInstanceType(const Aws::String& value) { SetControlPlaneInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instance type that you want to use for your local Amazon EKS
     * cluster on Outposts. The instance type that you specify is used for all
     * Kubernetes control plane instances. The instance type can't be changed after
     * cluster creation.</p> <p>Choose an instance type based on the number of nodes
     * that your cluster will have. If your cluster will have:</p> <ul> <li> <p>1–20
     * nodes, then we recommend specifying a <code>large</code> instance type.</p>
     * </li> <li> <p>21–100 nodes, then we recommend specifying an <code>xlarge</code>
     * instance type.</p> </li> <li> <p>101–250 nodes, then we recommend specifying a
     * <code>2xlarge</code> instance type.</p> </li> </ul> <p>For a list of the
     * available Amazon EC2 instance types, see Compute and storage in <a
     * href="http://aws.amazon.com/outposts/rack/features/">Outposts rack features</a>.
     * The control plane is not automatically scaled by Amazon EKS.</p>
     */
    inline OutpostConfigRequest& WithControlPlaneInstanceType(Aws::String&& value) { SetControlPlaneInstanceType(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instance type that you want to use for your local Amazon EKS
     * cluster on Outposts. The instance type that you specify is used for all
     * Kubernetes control plane instances. The instance type can't be changed after
     * cluster creation.</p> <p>Choose an instance type based on the number of nodes
     * that your cluster will have. If your cluster will have:</p> <ul> <li> <p>1–20
     * nodes, then we recommend specifying a <code>large</code> instance type.</p>
     * </li> <li> <p>21–100 nodes, then we recommend specifying an <code>xlarge</code>
     * instance type.</p> </li> <li> <p>101–250 nodes, then we recommend specifying a
     * <code>2xlarge</code> instance type.</p> </li> </ul> <p>For a list of the
     * available Amazon EC2 instance types, see Compute and storage in <a
     * href="http://aws.amazon.com/outposts/rack/features/">Outposts rack features</a>.
     * The control plane is not automatically scaled by Amazon EKS.</p>
     */
    inline OutpostConfigRequest& WithControlPlaneInstanceType(const char* value) { SetControlPlaneInstanceType(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_outpostArns;
    bool m_outpostArnsHasBeenSet = false;

    Aws::String m_controlPlaneInstanceType;
    bool m_controlPlaneInstanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
