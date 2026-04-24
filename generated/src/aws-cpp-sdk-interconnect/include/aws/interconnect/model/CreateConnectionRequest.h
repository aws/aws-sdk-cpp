/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/interconnect/InterconnectRequest.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/AttachPoint.h>
#include <aws/interconnect/model/RemoteAccountIdentifier.h>

#include <utility>

namespace Aws {
namespace Interconnect {
namespace Model {

/**
 */
class CreateConnectionRequest : public InterconnectRequest {
 public:
  AWS_INTERCONNECT_API CreateConnectionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateConnection"; }

  AWS_INTERCONNECT_API Aws::String SerializePayload() const override;

  AWS_INTERCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A description to distinguish this <a>Connection</a>.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateConnectionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired bandwidth of the requested <a>Connection</a> </p>
   */
  inline const Aws::String& GetBandwidth() const { return m_bandwidth; }
  inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }
  template <typename BandwidthT = Aws::String>
  void SetBandwidth(BandwidthT&& value) {
    m_bandwidthHasBeenSet = true;
    m_bandwidth = std::forward<BandwidthT>(value);
  }
  template <typename BandwidthT = Aws::String>
  CreateConnectionRequest& WithBandwidth(BandwidthT&& value) {
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
  CreateConnectionRequest& WithAttachPoint(AttachPointT&& value) {
    SetAttachPoint(std::forward<AttachPointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the <a>Environment</a> across which this <a>Connection</a>
   * should be created.</p> <p>The available <a>Environment</a> objects can be
   * determined using <a>ListEnvironments</a>.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  CreateConnectionRequest& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account and/or principal identifying information that can be verified by the
   * partner of this specific Environment.</p>
   */
  inline const RemoteAccountIdentifier& GetRemoteAccount() const { return m_remoteAccount; }
  inline bool RemoteAccountHasBeenSet() const { return m_remoteAccountHasBeenSet; }
  template <typename RemoteAccountT = RemoteAccountIdentifier>
  void SetRemoteAccount(RemoteAccountT&& value) {
    m_remoteAccountHasBeenSet = true;
    m_remoteAccount = std::forward<RemoteAccountT>(value);
  }
  template <typename RemoteAccountT = RemoteAccountIdentifier>
  CreateConnectionRequest& WithRemoteAccount(RemoteAccountT&& value) {
    SetRemoteAccount(std::forward<RemoteAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tag to associate with the resulting <a>Connection</a>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateConnectionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateConnectionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token used for the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateConnectionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::String m_bandwidth;

  AttachPoint m_attachPoint;

  Aws::String m_environmentId;

  RemoteAccountIdentifier m_remoteAccount;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_descriptionHasBeenSet = false;
  bool m_bandwidthHasBeenSet = false;
  bool m_attachPointHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_remoteAccountHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
