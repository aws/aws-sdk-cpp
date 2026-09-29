/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/model/NetworkConfiguration.h>

#include <utility>

namespace Aws {
namespace IdentityStore {
namespace Model {

/**
 */
class UpdateIdentityStoreRequest : public IdentityStoreRequest {
 public:
  AWS_IDENTITYSTORE_API UpdateIdentityStoreRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateIdentityStore"; }

  AWS_IDENTITYSTORE_API Aws::String SerializePayload() const override;

  AWS_IDENTITYSTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The globally unique identifier for the identity store.</p> <p>You can specify
   * the identity store by ID or by Amazon Resource Name (ARN). For example, identity
   * store ID <code>d-1234567890</code> or identity store ARN
   * <code>arn:aws:identitystore::111122223333:identitystore/d-1234567890</code>.</p>
   */
  inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
  inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
  template <typename IdentityStoreIdT = Aws::String>
  void SetIdentityStoreId(IdentityStoreIdT&& value) {
    m_identityStoreIdHasBeenSet = true;
    m_identityStoreId = std::forward<IdentityStoreIdT>(value);
  }
  template <typename IdentityStoreIdT = Aws::String>
  UpdateIdentityStoreRequest& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration to apply to the identity store. This controls
   * whether access through a virtual private cloud (VPC) endpoint is required and
   * the source VPCs and IP addresses that are allowed to access the identity
   * store.</p> <p>When you provide <code>NetworkConfiguration</code> in a request,
   * the service performs a full replacement of the identity store's current network
   * configuration with the values you specify. Any values that you omit are cleared.
   * To preserve or change the allowed source VPCs or IP address ranges, include the
   * complete set of values that you want in the request. To clear a list, omit it;
   * an empty list is not accepted.</p>
   */
  inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  UpdateIdentityStoreRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identityStoreId;

  NetworkConfiguration m_networkConfiguration;
  bool m_identityStoreIdHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
