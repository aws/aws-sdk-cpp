/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ClientVpnDeviceTrustProviderType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a device trust provider to configure for a Client VPN
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnTrustProviderRequest">AWS
 * API Reference</a></p>
 */
class ClientVpnTrustProviderRequest {
 public:
  AWS_EC2_API ClientVpnTrustProviderRequest() = default;
  AWS_EC2_API ClientVpnTrustProviderRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ClientVpnTrustProviderRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The type of the device trust provider. Possible values include:</p> <ul> <li>
   * <p> <code>crowdstrike</code> - CrowdStrike device trust provider.</p> </li> <li>
   * <p> <code>jamf</code> - Jamf device trust provider.</p> </li> <li> <p>
   * <code>jumpcloud</code> - JumpCloud device trust provider.</p> </li> </ul>
   */
  inline ClientVpnDeviceTrustProviderType GetTrustProviderType() const { return m_trustProviderType; }
  inline bool TrustProviderTypeHasBeenSet() const { return m_trustProviderTypeHasBeenSet; }
  inline void SetTrustProviderType(ClientVpnDeviceTrustProviderType value) {
    m_trustProviderTypeHasBeenSet = true;
    m_trustProviderType = value;
  }
  inline ClientVpnTrustProviderRequest& WithTrustProviderType(ClientVpnDeviceTrustProviderType value) {
    SetTrustProviderType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tenant ID associated with your device trust provider account.</p>
   */
  inline const Aws::String& GetTenantId() const { return m_tenantId; }
  inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
  template <typename TenantIdT = Aws::String>
  void SetTenantId(TenantIdT&& value) {
    m_tenantIdHasBeenSet = true;
    m_tenantId = std::forward<TenantIdT>(value);
  }
  template <typename TenantIdT = Aws::String>
  ClientVpnTrustProviderRequest& WithTenantId(TenantIdT&& value) {
    SetTenantId(std::forward<TenantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the public signing key that is used to verify the identity token
   * issued by the device trust provider.</p>
   */
  inline const Aws::String& GetPublicSigningKeyUrl() const { return m_publicSigningKeyUrl; }
  inline bool PublicSigningKeyUrlHasBeenSet() const { return m_publicSigningKeyUrlHasBeenSet; }
  template <typename PublicSigningKeyUrlT = Aws::String>
  void SetPublicSigningKeyUrl(PublicSigningKeyUrlT&& value) {
    m_publicSigningKeyUrlHasBeenSet = true;
    m_publicSigningKeyUrl = std::forward<PublicSigningKeyUrlT>(value);
  }
  template <typename PublicSigningKeyUrlT = Aws::String>
  ClientVpnTrustProviderRequest& WithPublicSigningKeyUrl(PublicSigningKeyUrlT&& value) {
    SetPublicSigningKeyUrl(std::forward<PublicSigningKeyUrlT>(value));
    return *this;
  }
  ///@}
 private:
  ClientVpnDeviceTrustProviderType m_trustProviderType{ClientVpnDeviceTrustProviderType::NOT_SET};

  Aws::String m_tenantId;

  Aws::String m_publicSigningKeyUrl;
  bool m_trustProviderTypeHasBeenSet = false;
  bool m_tenantIdHasBeenSet = false;
  bool m_publicSigningKeyUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
