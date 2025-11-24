/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/WebAppVpcConfig.h>

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
 * <p>Contains the endpoint configuration for a web app, including VPC settings
 * when the endpoint is hosted within a VPC.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/WebAppEndpointDetails">AWS
 * API Reference</a></p>
 */
class WebAppEndpointDetails {
 public:
  AWS_TRANSFER_API WebAppEndpointDetails() = default;
  AWS_TRANSFER_API WebAppEndpointDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API WebAppEndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The VPC configuration for hosting the web app endpoint within a VPC.</p>
   */
  inline const WebAppVpcConfig& GetVpc() const { return m_vpc; }
  inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
  template <typename VpcT = WebAppVpcConfig>
  void SetVpc(VpcT&& value) {
    m_vpcHasBeenSet = true;
    m_vpc = std::forward<VpcT>(value);
  }
  template <typename VpcT = WebAppVpcConfig>
  WebAppEndpointDetails& WithVpc(VpcT&& value) {
    SetVpc(std::forward<VpcT>(value));
    return *this;
  }
  ///@}
 private:
  WebAppVpcConfig m_vpc;
  bool m_vpcHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
