/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IdentityStore {
namespace Model {

/**
 * <p>The network configuration that controls how an identity store can be
 * accessed. You provide this object in a request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/NetworkConfiguration">AWS
 * API Reference</a></p>
 */
class NetworkConfiguration {
 public:
  AWS_IDENTITYSTORE_API NetworkConfiguration() = default;
  AWS_IDENTITYSTORE_API NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether the identity store can be accessed only through a virtual
   * private cloud (VPC) endpoint. When set to <code>true</code>, requests must
   * originate from a VPC endpoint.</p> <p>This value must be set to either
   * <code>true</code> or <code>false</code> when you provide
   * <code>NetworkConfiguration</code> in a request.</p>
   */
  inline bool GetVpceAccessRequired() const { return m_vpceAccessRequired; }
  inline bool VpceAccessRequiredHasBeenSet() const { return m_vpceAccessRequiredHasBeenSet; }
  inline void SetVpceAccessRequired(bool value) {
    m_vpceAccessRequiredHasBeenSet = true;
    m_vpceAccessRequired = value;
  }
  inline NetworkConfiguration& WithVpceAccessRequired(bool value) {
    SetVpceAccessRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of virtual private cloud (VPC) IDs that are allowed to access the
   * identity store API operations. A request is denied unless it originates from a
   * VPC in this list, or from an IP address in <code>ApiAllowSourceIps</code> if you
   * specified one. If you don't specify a value, access isn't restricted to specific
   * VPCs, but the VPC endpoint requirement set by <code>VpceAccessRequired</code>
   * still applies.</p>
   */
  inline const Aws::Vector<Aws::String>& GetApiRestrictSourceVpcs() const { return m_apiRestrictSourceVpcs; }
  inline bool ApiRestrictSourceVpcsHasBeenSet() const { return m_apiRestrictSourceVpcsHasBeenSet; }
  template <typename ApiRestrictSourceVpcsT = Aws::Vector<Aws::String>>
  void SetApiRestrictSourceVpcs(ApiRestrictSourceVpcsT&& value) {
    m_apiRestrictSourceVpcsHasBeenSet = true;
    m_apiRestrictSourceVpcs = std::forward<ApiRestrictSourceVpcsT>(value);
  }
  template <typename ApiRestrictSourceVpcsT = Aws::Vector<Aws::String>>
  NetworkConfiguration& WithApiRestrictSourceVpcs(ApiRestrictSourceVpcsT&& value) {
    SetApiRestrictSourceVpcs(std::forward<ApiRestrictSourceVpcsT>(value));
    return *this;
  }
  template <typename ApiRestrictSourceVpcsT = Aws::String>
  NetworkConfiguration& AddApiRestrictSourceVpcs(ApiRestrictSourceVpcsT&& value) {
    m_apiRestrictSourceVpcsHasBeenSet = true;
    m_apiRestrictSourceVpcs.emplace_back(std::forward<ApiRestrictSourceVpcsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of IP address CIDR ranges that are allowed to access the identity
   * store API operations. A request from an IP address in this list bypasses the
   * identity store's other API network controls: it's permitted even if it doesn't
   * come through a VPC endpoint required by <code>VpceAccessRequired</code>, and
   * even if it doesn't originate from a VPC in <code>ApiRestrictSourceVpcs</code>.
   * If you don't specify a value, no such IP address exception applies.</p>
   */
  inline const Aws::Vector<Aws::String>& GetApiAllowSourceIps() const { return m_apiAllowSourceIps; }
  inline bool ApiAllowSourceIpsHasBeenSet() const { return m_apiAllowSourceIpsHasBeenSet; }
  template <typename ApiAllowSourceIpsT = Aws::Vector<Aws::String>>
  void SetApiAllowSourceIps(ApiAllowSourceIpsT&& value) {
    m_apiAllowSourceIpsHasBeenSet = true;
    m_apiAllowSourceIps = std::forward<ApiAllowSourceIpsT>(value);
  }
  template <typename ApiAllowSourceIpsT = Aws::Vector<Aws::String>>
  NetworkConfiguration& WithApiAllowSourceIps(ApiAllowSourceIpsT&& value) {
    SetApiAllowSourceIps(std::forward<ApiAllowSourceIpsT>(value));
    return *this;
  }
  template <typename ApiAllowSourceIpsT = Aws::String>
  NetworkConfiguration& AddApiAllowSourceIps(ApiAllowSourceIpsT&& value) {
    m_apiAllowSourceIpsHasBeenSet = true;
    m_apiAllowSourceIps.emplace_back(std::forward<ApiAllowSourceIpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of IP address CIDR ranges that are allowed to access the identity
   * store through the System for Cross-domain Identity Management (SCIM) protocol.
   * Requests from IP addresses outside these ranges are denied. If you don't specify
   * a value, SCIM requests remain subject to the identity store's other network
   * controls, such as the VPC endpoint requirement set by
   * <code>VpceAccessRequired</code>.</p> <p>For example, to allow SCIM traffic from
   * the public internet while still requiring the identity store API operations to
   * be accessed through a VPC endpoint, set <code>VpceAccessRequired</code> to
   * <code>true</code> and set this value to <code>0.0.0.0/0</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScimAllowSourceIps() const { return m_scimAllowSourceIps; }
  inline bool ScimAllowSourceIpsHasBeenSet() const { return m_scimAllowSourceIpsHasBeenSet; }
  template <typename ScimAllowSourceIpsT = Aws::Vector<Aws::String>>
  void SetScimAllowSourceIps(ScimAllowSourceIpsT&& value) {
    m_scimAllowSourceIpsHasBeenSet = true;
    m_scimAllowSourceIps = std::forward<ScimAllowSourceIpsT>(value);
  }
  template <typename ScimAllowSourceIpsT = Aws::Vector<Aws::String>>
  NetworkConfiguration& WithScimAllowSourceIps(ScimAllowSourceIpsT&& value) {
    SetScimAllowSourceIps(std::forward<ScimAllowSourceIpsT>(value));
    return *this;
  }
  template <typename ScimAllowSourceIpsT = Aws::String>
  NetworkConfiguration& AddScimAllowSourceIps(ScimAllowSourceIpsT&& value) {
    m_scimAllowSourceIpsHasBeenSet = true;
    m_scimAllowSourceIps.emplace_back(std::forward<ScimAllowSourceIpsT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_vpceAccessRequired{false};

  Aws::Vector<Aws::String> m_apiRestrictSourceVpcs;

  Aws::Vector<Aws::String> m_apiAllowSourceIps;

  Aws::Vector<Aws::String> m_scimAllowSourceIps;
  bool m_vpceAccessRequiredHasBeenSet = false;
  bool m_apiRestrictSourceVpcsHasBeenSet = false;
  bool m_apiAllowSourceIpsHasBeenSet = false;
  bool m_scimAllowSourceIpsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
