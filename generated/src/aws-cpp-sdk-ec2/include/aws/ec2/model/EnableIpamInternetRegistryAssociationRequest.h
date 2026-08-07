/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class EnableIpamInternetRegistryAssociationRequest : public EC2Request {
 public:
  AWS_EC2_API EnableIpamInternetRegistryAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "EnableIpamInternetRegistryAssociation"; }

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
  inline EnableIpamInternetRegistryAssociationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM internet registry association to enable.</p>
   */
  inline const Aws::String& GetIpamInternetRegistryAssociationId() const { return m_ipamInternetRegistryAssociationId; }
  inline bool IpamInternetRegistryAssociationIdHasBeenSet() const { return m_ipamInternetRegistryAssociationIdHasBeenSet; }
  template <typename IpamInternetRegistryAssociationIdT = Aws::String>
  void SetIpamInternetRegistryAssociationId(IpamInternetRegistryAssociationIdT&& value) {
    m_ipamInternetRegistryAssociationIdHasBeenSet = true;
    m_ipamInternetRegistryAssociationId = std::forward<IpamInternetRegistryAssociationIdT>(value);
  }
  template <typename IpamInternetRegistryAssociationIdT = Aws::String>
  EnableIpamInternetRegistryAssociationRequest& WithIpamInternetRegistryAssociationId(IpamInternetRegistryAssociationIdT&& value) {
    SetIpamInternetRegistryAssociationId(std::forward<IpamInternetRegistryAssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The RPKI version to use from the Parent Response XML.</p>
   */
  inline const Aws::String& GetRpkiVersion() const { return m_rpkiVersion; }
  inline bool RpkiVersionHasBeenSet() const { return m_rpkiVersionHasBeenSet; }
  template <typename RpkiVersionT = Aws::String>
  void SetRpkiVersion(RpkiVersionT&& value) {
    m_rpkiVersionHasBeenSet = true;
    m_rpkiVersion = std::forward<RpkiVersionT>(value);
  }
  template <typename RpkiVersionT = Aws::String>
  EnableIpamInternetRegistryAssociationRequest& WithRpkiVersion(RpkiVersionT&& value) {
    SetRpkiVersion(std::forward<RpkiVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The RPKI service URI for the publication point from the Parent Response
   * XML.</p>
   */
  inline const Aws::String& GetServiceUri() const { return m_serviceUri; }
  inline bool ServiceUriHasBeenSet() const { return m_serviceUriHasBeenSet; }
  template <typename ServiceUriT = Aws::String>
  void SetServiceUri(ServiceUriT&& value) {
    m_serviceUriHasBeenSet = true;
    m_serviceUri = std::forward<ServiceUriT>(value);
  }
  template <typename ServiceUriT = Aws::String>
  EnableIpamInternetRegistryAssociationRequest& WithServiceUri(ServiceUriT&& value) {
    SetServiceUri(std::forward<ServiceUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The child handle for the BPKI certificate hierarchy from the Parent Response
   * XML.</p>
   */
  inline const Aws::String& GetChildHandle() const { return m_childHandle; }
  inline bool ChildHandleHasBeenSet() const { return m_childHandleHasBeenSet; }
  template <typename ChildHandleT = Aws::String>
  void SetChildHandle(ChildHandleT&& value) {
    m_childHandleHasBeenSet = true;
    m_childHandle = std::forward<ChildHandleT>(value);
  }
  template <typename ChildHandleT = Aws::String>
  EnableIpamInternetRegistryAssociationRequest& WithChildHandle(ChildHandleT&& value) {
    SetChildHandle(std::forward<ChildHandleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent handle for the BPKI certificate hierarchy from the Parent Response
   * XML.</p>
   */
  inline const Aws::String& GetParentHandle() const { return m_parentHandle; }
  inline bool ParentHandleHasBeenSet() const { return m_parentHandleHasBeenSet; }
  template <typename ParentHandleT = Aws::String>
  void SetParentHandle(ParentHandleT&& value) {
    m_parentHandleHasBeenSet = true;
    m_parentHandle = std::forward<ParentHandleT>(value);
  }
  template <typename ParentHandleT = Aws::String>
  EnableIpamInternetRegistryAssociationRequest& WithParentHandle(ParentHandleT&& value) {
    SetParentHandle(std::forward<ParentHandleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent BPKI Trust Anchor certificate in PEM format from the Parent
   * Response XML.</p>
   */
  inline const Aws::String& GetParentBpkiTa() const { return m_parentBpkiTa; }
  inline bool ParentBpkiTaHasBeenSet() const { return m_parentBpkiTaHasBeenSet; }
  template <typename ParentBpkiTaT = Aws::String>
  void SetParentBpkiTa(ParentBpkiTaT&& value) {
    m_parentBpkiTaHasBeenSet = true;
    m_parentBpkiTa = std::forward<ParentBpkiTaT>(value);
  }
  template <typename ParentBpkiTaT = Aws::String>
  EnableIpamInternetRegistryAssociationRequest& WithParentBpkiTa(ParentBpkiTaT&& value) {
    SetParentBpkiTa(std::forward<ParentBpkiTaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the operation
   * ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  EnableIpamInternetRegistryAssociationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamInternetRegistryAssociationId;

  Aws::String m_rpkiVersion;

  Aws::String m_serviceUri;

  Aws::String m_childHandle;

  Aws::String m_parentHandle;

  Aws::String m_parentBpkiTa;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_dryRunHasBeenSet = false;
  bool m_ipamInternetRegistryAssociationIdHasBeenSet = false;
  bool m_rpkiVersionHasBeenSet = false;
  bool m_serviceUriHasBeenSet = false;
  bool m_childHandleHasBeenSet = false;
  bool m_parentHandleHasBeenSet = false;
  bool m_parentBpkiTaHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
