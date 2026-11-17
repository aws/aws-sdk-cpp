/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ElementalInference {
namespace Model {

/**
 */
class CreateQuestionSetVersionRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API CreateQuestionSetVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateQuestionSetVersion"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the question set whose DRAFT version you want to publish.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateQuestionSetVersionRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SHA-256 hash of the DRAFT version that you want to publish, as returned
   * by GetQuestionSet or UpdateQuestionSet. If you specify this value, Elemental
   * Inference publishes DRAFT only if its current hash matches. If it doesn't match,
   * because DRAFT changed after you retrieved it, the request fails with
   * ConflictException. </p> <p>If you don't specify this value, Elemental Inference
   * publishes DRAFT as it is when it receives the request. </p>
   */
  inline const Aws::String& GetSha256() const { return m_sha256; }
  inline bool Sha256HasBeenSet() const { return m_sha256HasBeenSet; }
  template <typename Sha256T = Aws::String>
  void SetSha256(Sha256T&& value) {
    m_sha256HasBeenSet = true;
    m_sha256 = std::forward<Sha256T>(value);
  }
  template <typename Sha256T = Aws::String>
  CreateQuestionSetVersionRequest& WithSha256(Sha256T&& value) {
    SetSha256(std::forward<Sha256T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the new version. You can't change the description after
   * Elemental Inference publishes the version. If DRAFT hasn't changed since the
   * latest version, Elemental Inference ignores this value and returns the latest
   * version with its existing description. </p> <p>The description can be up to 256
   * characters. It can contain the letters A-Z and a-z, the digits 0-9, underscores,
   * spaces, and the following characters: <code>- . ' , @ : ;</code>. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateQuestionSetVersionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_sha256;

  Aws::String m_description;
  bool m_idHasBeenSet = false;
  bool m_sha256HasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
