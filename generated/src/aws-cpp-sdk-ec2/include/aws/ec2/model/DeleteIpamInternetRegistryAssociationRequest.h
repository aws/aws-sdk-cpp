/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class DeleteIpamInternetRegistryAssociationRequest : public EC2Request {
 public:
  AWS_EC2_API DeleteIpamInternetRegistryAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteIpamInternetRegistryAssociation"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline DeleteIpamInternetRegistryAssociationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM internet registry association to delete.</p>
   */
  inline const Aws::String& GetIpamInternetRegistryAssociationId() const { return m_ipamInternetRegistryAssociationId; }
  inline bool IpamInternetRegistryAssociationIdHasBeenSet() const { return m_ipamInternetRegistryAssociationIdHasBeenSet; }
  template <typename IpamInternetRegistryAssociationIdT = Aws::String>
  void SetIpamInternetRegistryAssociationId(IpamInternetRegistryAssociationIdT&& value) {
    m_ipamInternetRegistryAssociationIdHasBeenSet = true;
    m_ipamInternetRegistryAssociationId = std::forward<IpamInternetRegistryAssociationIdT>(value);
  }
  template <typename IpamInternetRegistryAssociationIdT = Aws::String>
  DeleteIpamInternetRegistryAssociationRequest& WithIpamInternetRegistryAssociationId(IpamInternetRegistryAssociationIdT&& value) {
    SetIpamInternetRegistryAssociationId(std::forward<IpamInternetRegistryAssociationIdT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamInternetRegistryAssociationId;
  bool m_dryRunHasBeenSet = false;
  bool m_ipamInternetRegistryAssociationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
