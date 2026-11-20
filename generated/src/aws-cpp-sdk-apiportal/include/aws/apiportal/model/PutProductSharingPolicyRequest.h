/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class PutProductSharingPolicyRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API PutProductSharingPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutProductSharingPolicy"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the product.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  PutProductSharingPolicyRequest& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sharing policy as a JSON resource policy document.</p>
   */
  inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
  inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
  template <typename PolicyDocumentT = Aws::String>
  void SetPolicyDocument(PolicyDocumentT&& value) {
    m_policyDocumentHasBeenSet = true;
    m_policyDocument = std::forward<PolicyDocumentT>(value);
  }
  template <typename PolicyDocumentT = Aws::String>
  PutProductSharingPolicyRequest& WithPolicyDocument(PolicyDocumentT&& value) {
    SetPolicyDocument(std::forward<PolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  PutProductSharingPolicyRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PutProductSharingPolicyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_policyDocument;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_productIdHasBeenSet = false;
  bool m_policyDocumentHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
