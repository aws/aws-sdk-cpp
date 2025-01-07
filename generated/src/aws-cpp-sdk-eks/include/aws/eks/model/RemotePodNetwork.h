﻿/**
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
   * <p>A network CIDR that can contain pods that run Kubernetes webhooks on hybrid
   * nodes.</p> <p>These CIDR blocks are determined by configuring your Container
   * Network Interface (CNI) plugin. We recommend the Calico CNI or Cilium CNI. Note
   * that the Amazon VPC CNI plugin for Kubernetes isn't available for on-premises
   * and edge locations.</p> <p>Enter one or more IPv4 CIDR blocks in decimal
   * dotted-quad notation (for example, <code> 10.2.0.0/16</code>).</p> <p>It must
   * satisfy the following requirements:</p> <ul> <li> <p>Each block must be within
   * an <code>IPv4</code> RFC-1918 network range. Minimum allowed size is /24,
   * maximum allowed size is /8. Publicly-routable addresses aren't supported.</p>
   * </li> <li> <p>Each block cannot overlap with the range of the VPC CIDR blocks
   * for your EKS resources, or the block of the Kubernetes service IP range.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/RemotePodNetwork">AWS
   * API Reference</a></p>
   */
  class RemotePodNetwork
  {
  public:
    AWS_EKS_API RemotePodNetwork();
    AWS_EKS_API RemotePodNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API RemotePodNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A network CIDR that can contain pods that run Kubernetes webhooks on hybrid
     * nodes.</p> <p>These CIDR blocks are determined by configuring your Container
     * Network Interface (CNI) plugin. We recommend the Calico CNI or Cilium CNI. Note
     * that the Amazon VPC CNI plugin for Kubernetes isn't available for on-premises
     * and edge locations.</p> <p>Enter one or more IPv4 CIDR blocks in decimal
     * dotted-quad notation (for example, <code> 10.2.0.0/16</code>).</p> <p>It must
     * satisfy the following requirements:</p> <ul> <li> <p>Each block must be within
     * an <code>IPv4</code> RFC-1918 network range. Minimum allowed size is /24,
     * maximum allowed size is /8. Publicly-routable addresses aren't supported.</p>
     * </li> <li> <p>Each block cannot overlap with the range of the VPC CIDR blocks
     * for your EKS resources, or the block of the Kubernetes service IP range.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const{ return m_cidrs; }
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
    inline void SetCidrs(const Aws::Vector<Aws::String>& value) { m_cidrsHasBeenSet = true; m_cidrs = value; }
    inline void SetCidrs(Aws::Vector<Aws::String>&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::move(value); }
    inline RemotePodNetwork& WithCidrs(const Aws::Vector<Aws::String>& value) { SetCidrs(value); return *this;}
    inline RemotePodNetwork& WithCidrs(Aws::Vector<Aws::String>&& value) { SetCidrs(std::move(value)); return *this;}
    inline RemotePodNetwork& AddCidrs(const Aws::String& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }
    inline RemotePodNetwork& AddCidrs(Aws::String&& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(std::move(value)); return *this; }
    inline RemotePodNetwork& AddCidrs(const char* value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
