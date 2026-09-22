/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AccessGrantPermission.h>
#include <aws/cloudwatchomni/model/AccessGrantPrincipal.h>
#include <aws/cloudwatchomni/model/ScopedActions.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class CreateAccessGrantRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API CreateAccessGrantRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAccessGrant"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the domain that contains the space.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  CreateAccessGrantRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the space to scope the grant to.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  CreateAccessGrantRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name that identifies the access grant.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateAccessGrantRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal receiving the grant.</p>
   */
  inline const AccessGrantPrincipal& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = AccessGrantPrincipal>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = AccessGrantPrincipal>
  CreateAccessGrantRequest& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permission to grant. Exactly one permission is granted per request.</p>
   */
  inline AccessGrantPermission GetPermission() const { return m_permission; }
  inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
  inline void SetPermission(AccessGrantPermission value) {
    m_permissionHasBeenSet = true;
    m_permission = value;
  }
  inline CreateAccessGrantRequest& WithPermission(AccessGrantPermission value) {
    SetPermission(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Groups of actions to allow, each with the resource scopes and conditions that
   * limit those actions.</p>
   */
  inline const Aws::Vector<ScopedActions>& GetScopedActions() const { return m_scopedActions; }
  inline bool ScopedActionsHasBeenSet() const { return m_scopedActionsHasBeenSet; }
  template <typename ScopedActionsT = Aws::Vector<ScopedActions>>
  void SetScopedActions(ScopedActionsT&& value) {
    m_scopedActionsHasBeenSet = true;
    m_scopedActions = std::forward<ScopedActionsT>(value);
  }
  template <typename ScopedActionsT = Aws::Vector<ScopedActions>>
  CreateAccessGrantRequest& WithScopedActions(ScopedActionsT&& value) {
    SetScopedActions(std::forward<ScopedActionsT>(value));
    return *this;
  }
  template <typename ScopedActionsT = ScopedActions>
  CreateAccessGrantRequest& AddScopedActions(ScopedActionsT&& value) {
    m_scopedActionsHasBeenSet = true;
    m_scopedActions.emplace_back(std::forward<ScopedActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the access grant.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateAccessGrantRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateAccessGrantRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for safe retries. Repeated requests with the same token
   * return the original result instead of creating a duplicate.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAccessGrantRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_spaceId;

  Aws::String m_name;

  AccessGrantPrincipal m_principal;

  AccessGrantPermission m_permission{AccessGrantPermission::NOT_SET};

  Aws::Vector<ScopedActions> m_scopedActions;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdHasBeenSet = false;
  bool m_spaceIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_principalHasBeenSet = false;
  bool m_permissionHasBeenSet = false;
  bool m_scopedActionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
