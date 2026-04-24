/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/Bandwidths.h>
#include <aws/interconnect/model/EnvironmentState.h>
#include <aws/interconnect/model/Provider.h>
#include <aws/interconnect/model/RemoteAccountIdentifierType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Interconnect {
namespace Model {

/**
 * <p>Defines the logical topology that an AWS Interconnect Connection is created
 * upon.</p> <p>Specifically, an Environment defines the partner The remote Cloud
 * Service Provider of this resource. or The remote Last Mile Provider of this
 * resource. and the region or location specification to which an AWS Interconnect
 * Connection can be made.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/Environment">AWS
 * API Reference</a></p>
 */
class Environment {
 public:
  AWS_INTERCONNECT_API Environment() = default;
  AWS_INTERCONNECT_API Environment(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API Environment& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The provider on the remote side of this <a>Connection</a>.</p>
   */
  inline const Provider& GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  template <typename ProviderT = Provider>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = Provider>
  Environment& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider specific location on the remote side of this
   * <a>Connection</a>.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  Environment& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of this <a>Environment</a> </p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  Environment& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the <a>Environment</a>. Possible values:</p> <ul> <li> <p>
   * <code>available</code>: The environment is available and new <a>Connection</a>
   * objects can be requested.</p> </li> <li> <p> <code>limited</code>: The
   * environment is available, but overall capacity is limited. The set of available
   * bandwidths </p> </li> <li> <p> <code>unavailable</code>: The environment is
   * currently unavailable.</p> </li> </ul>
   */
  inline EnvironmentState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(EnvironmentState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline Environment& WithState(EnvironmentState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sets of bandwidths that are available and supported on this
   * environment.</p>
   */
  inline const Bandwidths& GetBandwidths() const { return m_bandwidths; }
  inline bool BandwidthsHasBeenSet() const { return m_bandwidthsHasBeenSet; }
  template <typename BandwidthsT = Bandwidths>
  void SetBandwidths(BandwidthsT&& value) {
    m_bandwidthsHasBeenSet = true;
    m_bandwidths = std::forward<BandwidthsT>(value);
  }
  template <typename BandwidthsT = Bandwidths>
  Environment& WithBandwidths(BandwidthsT&& value) {
    SetBandwidths(std::forward<BandwidthsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific product type of <a>Connection</a> objects provided by this
   * <a>Environment</a>.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  Environment& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An HTTPS URL on the remote partner portal where the Activation Key should be
   * brought to complete the creation process.</p>
   */
  inline const Aws::String& GetActivationPageUrl() const { return m_activationPageUrl; }
  inline bool ActivationPageUrlHasBeenSet() const { return m_activationPageUrlHasBeenSet; }
  template <typename ActivationPageUrlT = Aws::String>
  void SetActivationPageUrl(ActivationPageUrlT&& value) {
    m_activationPageUrlHasBeenSet = true;
    m_activationPageUrl = std::forward<ActivationPageUrlT>(value);
  }
  template <typename ActivationPageUrlT = Aws::String>
  Environment& WithActivationPageUrl(ActivationPageUrlT&& value) {
    SetActivationPageUrl(std::forward<ActivationPageUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of identifying information that should be supplied to the
   * <code>remoteAccount</code> parameter of a <a>CreateConnection</a> call for this
   * specific Environment.</p>
   */
  inline RemoteAccountIdentifierType GetRemoteIdentifierType() const { return m_remoteIdentifierType; }
  inline bool RemoteIdentifierTypeHasBeenSet() const { return m_remoteIdentifierTypeHasBeenSet; }
  inline void SetRemoteIdentifierType(RemoteAccountIdentifierType value) {
    m_remoteIdentifierTypeHasBeenSet = true;
    m_remoteIdentifierType = value;
  }
  inline Environment& WithRemoteIdentifierType(RemoteAccountIdentifierType value) {
    SetRemoteIdentifierType(value);
    return *this;
  }
  ///@}
 private:
  Provider m_provider;

  Aws::String m_location;

  Aws::String m_environmentId;

  EnvironmentState m_state{EnvironmentState::NOT_SET};

  Bandwidths m_bandwidths;

  Aws::String m_type;

  Aws::String m_activationPageUrl;

  RemoteAccountIdentifierType m_remoteIdentifierType{RemoteAccountIdentifierType::NOT_SET};
  bool m_providerHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_bandwidthsHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_activationPageUrlHasBeenSet = false;
  bool m_remoteIdentifierTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
