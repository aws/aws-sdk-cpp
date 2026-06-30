/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMRequest.h>
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/PrevalidationOptions.h>
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
class CreateAcmeDomainValidationRequest : public ACMRequest {
 public:
  AWS_ACM_API CreateAcmeDomainValidationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAcmeDomainValidation"; }

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
  CreateAcmeDomainValidationRequest& WithIdempotencyToken(IdempotencyTokenT&& value) {
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
  CreateAcmeDomainValidationRequest& WithAcmeEndpointArn(AcmeEndpointArnT&& value) {
    SetAcmeEndpointArn(std::forward<AcmeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain name to validate.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  CreateAcmeDomainValidationRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prevalidation options for the domain.</p>
   */
  inline const PrevalidationOptions& GetPrevalidationOptions() const { return m_prevalidationOptions; }
  inline bool PrevalidationOptionsHasBeenSet() const { return m_prevalidationOptionsHasBeenSet; }
  template <typename PrevalidationOptionsT = PrevalidationOptions>
  void SetPrevalidationOptions(PrevalidationOptionsT&& value) {
    m_prevalidationOptionsHasBeenSet = true;
    m_prevalidationOptions = std::forward<PrevalidationOptionsT>(value);
  }
  template <typename PrevalidationOptionsT = PrevalidationOptions>
  CreateAcmeDomainValidationRequest& WithPrevalidationOptions(PrevalidationOptionsT&& value) {
    SetPrevalidationOptions(std::forward<PrevalidationOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more tags to associate with the domain validation.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAcmeDomainValidationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAcmeDomainValidationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_acmeEndpointArn;

  Aws::String m_domainName;

  PrevalidationOptions m_prevalidationOptions;

  Aws::Vector<Tag> m_tags;
  bool m_idempotencyTokenHasBeenSet = true;
  bool m_acmeEndpointArnHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_prevalidationOptionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
