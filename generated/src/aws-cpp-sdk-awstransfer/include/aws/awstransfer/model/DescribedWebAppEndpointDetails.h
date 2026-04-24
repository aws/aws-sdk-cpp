/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedWebAppVpcConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Transfer {
namespace Model {

/**
 * <p>Contains the endpoint configuration details for a web app, including VPC
 * configuration when the endpoint is hosted within a VPC.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedWebAppEndpointDetails">AWS
 * API Reference</a></p>
 */
class DescribedWebAppEndpointDetails {
 public:
  AWS_TRANSFER_API DescribedWebAppEndpointDetails() = default;
  AWS_TRANSFER_API DescribedWebAppEndpointDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API DescribedWebAppEndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The VPC configuration details when the web app endpoint is hosted within a
   * VPC. This includes the VPC ID, subnet IDs, and VPC endpoint ID.</p>
   */
  inline const DescribedWebAppVpcConfig& GetVpc() const { return m_vpc; }
  inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
  template <typename VpcT = DescribedWebAppVpcConfig>
  void SetVpc(VpcT&& value) {
    m_vpcHasBeenSet = true;
    m_vpc = std::forward<VpcT>(value);
  }
  template <typename VpcT = DescribedWebAppVpcConfig>
  DescribedWebAppEndpointDetails& WithVpc(VpcT&& value) {
    SetVpc(std::forward<VpcT>(value));
    return *this;
  }
  ///@}
 private:
  DescribedWebAppVpcConfig m_vpc;
  bool m_vpcHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
