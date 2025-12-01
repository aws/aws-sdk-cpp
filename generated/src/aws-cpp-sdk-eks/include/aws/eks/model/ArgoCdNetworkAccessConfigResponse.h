/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>

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
 * <p>The response object containing network access configuration for the Argo CD
 * capability's managed API server endpoint. If VPC endpoint IDs are present,
 * public access is blocked and the Argo CD server is only accessible through the
 * specified VPC endpoints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ArgoCdNetworkAccessConfigResponse">AWS
 * API Reference</a></p>
 */
class ArgoCdNetworkAccessConfigResponse {
 public:
  AWS_EKS_API ArgoCdNetworkAccessConfigResponse() = default;
  AWS_EKS_API ArgoCdNetworkAccessConfigResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ArgoCdNetworkAccessConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of VPC endpoint IDs associated with the managed Argo CD API server
   * endpoint. Each VPC endpoint provides private connectivity from a specific VPC to
   * the Argo CD server.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVpceIds() const { return m_vpceIds; }
  inline bool VpceIdsHasBeenSet() const { return m_vpceIdsHasBeenSet; }
  template <typename VpceIdsT = Aws::Vector<Aws::String>>
  void SetVpceIds(VpceIdsT&& value) {
    m_vpceIdsHasBeenSet = true;
    m_vpceIds = std::forward<VpceIdsT>(value);
  }
  template <typename VpceIdsT = Aws::Vector<Aws::String>>
  ArgoCdNetworkAccessConfigResponse& WithVpceIds(VpceIdsT&& value) {
    SetVpceIds(std::forward<VpceIdsT>(value));
    return *this;
  }
  template <typename VpceIdsT = Aws::String>
  ArgoCdNetworkAccessConfigResponse& AddVpceIds(VpceIdsT&& value) {
    m_vpceIdsHasBeenSet = true;
    m_vpceIds.emplace_back(std::forward<VpceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_vpceIds;
  bool m_vpceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
