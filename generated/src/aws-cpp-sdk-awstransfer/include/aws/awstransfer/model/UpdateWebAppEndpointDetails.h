/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/UpdateWebAppVpcConfig.h>

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
 * <p>Contains the endpoint configuration details for updating a web app, including
 * VPC settings for endpoints hosted within a VPC.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateWebAppEndpointDetails">AWS
 * API Reference</a></p>
 */
class UpdateWebAppEndpointDetails {
 public:
  AWS_TRANSFER_API UpdateWebAppEndpointDetails() = default;
  AWS_TRANSFER_API UpdateWebAppEndpointDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API UpdateWebAppEndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The VPC configuration details for updating a web app endpoint hosted within a
   * VPC. This includes the subnet IDs for endpoint deployment.</p>
   */
  inline const UpdateWebAppVpcConfig& GetVpc() const { return m_vpc; }
  inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
  template <typename VpcT = UpdateWebAppVpcConfig>
  void SetVpc(VpcT&& value) {
    m_vpcHasBeenSet = true;
    m_vpc = std::forward<VpcT>(value);
  }
  template <typename VpcT = UpdateWebAppVpcConfig>
  UpdateWebAppEndpointDetails& WithVpc(VpcT&& value) {
    SetVpc(std::forward<VpcT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateWebAppVpcConfig m_vpc;
  bool m_vpcHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
