/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKSRequest.h>
#include <aws/eks/EKS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EKS {
namespace Model {

/**
 */
class DescribeCapabilityRequest : public EKSRequest {
 public:
  AWS_EKS_API DescribeCapabilityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeCapability"; }

  AWS_EKS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the Amazon EKS cluster that contains the capability you want to
   * describe.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  DescribeCapabilityRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the capability to describe.</p>
   */
  inline const Aws::String& GetCapabilityName() const { return m_capabilityName; }
  inline bool CapabilityNameHasBeenSet() const { return m_capabilityNameHasBeenSet; }
  template <typename CapabilityNameT = Aws::String>
  void SetCapabilityName(CapabilityNameT&& value) {
    m_capabilityNameHasBeenSet = true;
    m_capabilityName = std::forward<CapabilityNameT>(value);
  }
  template <typename CapabilityNameT = Aws::String>
  DescribeCapabilityRequest& WithCapabilityName(CapabilityNameT&& value) {
    SetCapabilityName(std::forward<CapabilityNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::String m_capabilityName;
  bool m_clusterNameHasBeenSet = false;
  bool m_capabilityNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
