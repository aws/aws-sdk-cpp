/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMRequest.h>
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/Expiration.h>
#include <aws/acm/model/Tag.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ACM {
namespace Model {

/**
 */
class CreateAcmeExternalAccountBindingRequest : public ACMRequest {
 public:
  AWS_ACM_API CreateAcmeExternalAccountBindingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAcmeExternalAccountBinding"; }

  AWS_ACM_API Aws::String SerializePayload() const override;

  AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_ACM_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the request.</p>
   */
  inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
  inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
  template <typename IdempotencyTokenT = Aws::String>
  void SetIdempotencyToken(IdempotencyTokenT&& value) {
    m_idempotencyTokenHasBeenSet = true;
    m_idempotencyToken = std::forward<IdempotencyTokenT>(value);
  }
  template <typename IdempotencyTokenT = Aws::String>
  CreateAcmeExternalAccountBindingRequest& WithIdempotencyToken(IdempotencyTokenT&& value) {
    SetIdempotencyToken(std::forward<IdempotencyTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACME endpoint.</p>
   */
  inline const Aws::String& GetAcmeEndpointArn() const { return m_acmeEndpointArn; }
  inline bool AcmeEndpointArnHasBeenSet() const { return m_acmeEndpointArnHasBeenSet; }
  template <typename AcmeEndpointArnT = Aws::String>
  void SetAcmeEndpointArn(AcmeEndpointArnT&& value) {
    m_acmeEndpointArnHasBeenSet = true;
    m_acmeEndpointArn = std::forward<AcmeEndpointArnT>(value);
  }
  template <typename AcmeEndpointArnT = Aws::String>
  CreateAcmeExternalAccountBindingRequest& WithAcmeEndpointArn(AcmeEndpointArnT&& value) {
    SetAcmeEndpointArn(std::forward<AcmeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role to associate with the external
   * account binding.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateAcmeExternalAccountBindingRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiration configuration for the external account binding.</p>
   */
  inline const Expiration& GetExpiration() const { return m_expiration; }
  inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
  template <typename ExpirationT = Expiration>
  void SetExpiration(ExpirationT&& value) {
    m_expirationHasBeenSet = true;
    m_expiration = std::forward<ExpirationT>(value);
  }
  template <typename ExpirationT = Expiration>
  CreateAcmeExternalAccountBindingRequest& WithExpiration(ExpirationT&& value) {
    SetExpiration(std::forward<ExpirationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more tags to associate with the external account binding.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAcmeExternalAccountBindingRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAcmeExternalAccountBindingRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_acmeEndpointArn;

  Aws::String m_roleArn;

  Expiration m_expiration;

  Aws::Vector<Tag> m_tags;
  bool m_idempotencyTokenHasBeenSet = true;
  bool m_acmeEndpointArnHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_expirationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
