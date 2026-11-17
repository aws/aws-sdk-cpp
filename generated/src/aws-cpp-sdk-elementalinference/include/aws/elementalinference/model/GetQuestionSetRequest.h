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
namespace Http {
class URI;
}  // namespace Http
namespace ElementalInference {
namespace Model {

/**
 */
class GetQuestionSetRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API GetQuestionSetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetQuestionSet"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  AWS_ELEMENTALINFERENCE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the question set to retrieve.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetQuestionSetRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the question set to retrieve: DRAFT or the number of a
   * published version. If you don't specify a version, Elemental Inference returns
   * DRAFT. </p>
   */
  inline const Aws::String& GetQuestionSetVersion() const { return m_questionSetVersion; }
  inline bool QuestionSetVersionHasBeenSet() const { return m_questionSetVersionHasBeenSet; }
  template <typename QuestionSetVersionT = Aws::String>
  void SetQuestionSetVersion(QuestionSetVersionT&& value) {
    m_questionSetVersionHasBeenSet = true;
    m_questionSetVersion = std::forward<QuestionSetVersionT>(value);
  }
  template <typename QuestionSetVersionT = Aws::String>
  GetQuestionSetRequest& WithQuestionSetVersion(QuestionSetVersionT&& value) {
    SetQuestionSetVersion(std::forward<QuestionSetVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_questionSetVersion;
  bool m_idHasBeenSet = false;
  bool m_questionSetVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
