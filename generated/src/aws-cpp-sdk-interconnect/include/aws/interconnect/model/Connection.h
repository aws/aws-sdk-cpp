/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/AttachPoint.h>
#include <aws/interconnect/model/ConnectionState.h>
#include <aws/interconnect/model/Provider.h>

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
 * <p>The object describing the provided connectivity from the AWS region to the
 * partner location.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/Connection">AWS
 * API Reference</a></p>
 */
class Connection {
 public:
  AWS_INTERCONNECT_API Connection() = default;
  AWS_INTERCONNECT_API Connection(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API Connection& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The short identifier of the connection object.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  Connection& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ARN of a <a>Connection</a> object.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Connection& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive name for the connection.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Connection& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific selected bandwidth of this connection.</p>
   */
  inline const Aws::String& GetBandwidth() const { return m_bandwidth; }
  inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }
  template <typename BandwidthT = Aws::String>
  void SetBandwidth(BandwidthT&& value) {
    m_bandwidthHasBeenSet = true;
    m_bandwidth = std::forward<BandwidthT>(value);
  }
  template <typename BandwidthT = Aws::String>
  Connection& WithBandwidth(BandwidthT&& value) {
    SetBandwidth(std::forward<BandwidthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Attach Point to which the connection should be associated."</p>
   */
  inline const AttachPoint& GetAttachPoint() const { return m_attachPoint; }
  inline bool AttachPointHasBeenSet() const { return m_attachPointHasBeenSet; }
  template <typename AttachPointT = AttachPoint>
  void SetAttachPoint(AttachPointT&& value) {
    m_attachPointHasBeenSet = true;
    m_attachPoint = std::forward<AttachPointT>(value);
  }
  template <typename AttachPointT = AttachPoint>
  Connection& WithAttachPoint(AttachPointT&& value) {
    SetAttachPoint(std::forward<AttachPointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific <a>Environment</a> this connection is placed upon.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  Connection& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

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
  Connection& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider specific location on the remote side of this <a>Connection</a>
   * </p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  Connection& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific product type of this <a>Connection</a>.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  Connection& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <ul> <li> <p> <code>requested</code>: The initial state of a connection. The
   * state will remain here until the Connection is accepted on the Partner
   * portal.</p> </li> <li> <p> <code>pending</code>: The connection has been
   * accepted and is being provisioned between AWS and the Partner.</p> </li> <li>
   * <p> <code>available</code>: The connection has been fully provisioned between
   * AWS and the Partner.</p> </li> <li> <p> <code>deleting</code>: The connection is
   * being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has been
   * deleted.</p> </li> <li> <p> <code>failed</code>: The connection has failed to be
   * created.</p> </li> <li> <p> <code>updating</code>: The connection is being
   * updated.</p> </li> </ul>
   */
  inline ConnectionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ConnectionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline Connection& WithState(ConnectionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An identifier used by both AWS and the remote partner to identify the
   * specific connection.</p>
   */
  inline const Aws::String& GetSharedId() const { return m_sharedId; }
  inline bool SharedIdHasBeenSet() const { return m_sharedIdHasBeenSet; }
  template <typename SharedIdT = Aws::String>
  void SetSharedId(SharedIdT&& value) {
    m_sharedIdHasBeenSet = true;
    m_sharedId = std::forward<SharedIdT>(value);
  }
  template <typename SharedIdT = Aws::String>
  Connection& WithSharedId(SharedIdT&& value) {
    SetSharedId(std::forward<SharedIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing tier this connection is currently assigned.</p>
   */
  inline int64_t GetBillingTier() const { return m_billingTier; }
  inline bool BillingTierHasBeenSet() const { return m_billingTierHasBeenSet; }
  inline void SetBillingTier(int64_t value) {
    m_billingTierHasBeenSet = true;
    m_billingTier = value;
  }
  inline Connection& WithBillingTier(int64_t value) {
    SetBillingTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account that owns this <a>Connection</a> </p>
   */
  inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
  inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
  template <typename OwnerAccountT = Aws::String>
  void SetOwnerAccount(OwnerAccountT&& value) {
    m_ownerAccountHasBeenSet = true;
    m_ownerAccount = std::forward<OwnerAccountT>(value);
  }
  template <typename OwnerAccountT = Aws::String>
  Connection& WithOwnerAccount(OwnerAccountT&& value) {
    SetOwnerAccount(std::forward<OwnerAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Activation Key associated to this connection.</p>
   */
  inline const Aws::String& GetActivationKey() const { return m_activationKey; }
  inline bool ActivationKeyHasBeenSet() const { return m_activationKeyHasBeenSet; }
  template <typename ActivationKeyT = Aws::String>
  void SetActivationKey(ActivationKeyT&& value) {
    m_activationKeyHasBeenSet = true;
    m_activationKey = std::forward<ActivationKeyT>(value);
  }
  template <typename ActivationKeyT = Aws::String>
  Connection& WithActivationKey(ActivationKeyT&& value) {
    SetActivationKey(std::forward<ActivationKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags on the <a>Connection</a> </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  Connection& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  Connection& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_description;

  Aws::String m_bandwidth;

  AttachPoint m_attachPoint;

  Aws::String m_environmentId;

  Provider m_provider;

  Aws::String m_location;

  Aws::String m_type;

  ConnectionState m_state{ConnectionState::NOT_SET};

  Aws::String m_sharedId;

  int64_t m_billingTier{0};

  Aws::String m_ownerAccount;

  Aws::String m_activationKey;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_bandwidthHasBeenSet = false;
  bool m_attachPointHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_sharedIdHasBeenSet = false;
  bool m_billingTierHasBeenSet = false;
  bool m_ownerAccountHasBeenSet = false;
  bool m_activationKeyHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
