/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ChooseOneQuestion.h>
#include <aws/elementalinference/model/YesNoPerOptionQuestion.h>
#include <aws/elementalinference/model/YesNoQuestion.h>

#include <utility>

namespace Aws {
namespace ElementalInference {
namespace Model {

/**
 */
class CreateQuestionSetRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API CreateQuestionSetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateQuestionSet"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>An array of questions that Elemental Inference answers with yes or no. You
   * can specify up to 50 yesNo questions. An empty array is the same as omitting
   * this property. </p>
   */
  inline const Aws::Vector<YesNoQuestion>& GetYesNo() const { return m_yesNo; }
  inline bool YesNoHasBeenSet() const { return m_yesNoHasBeenSet; }
  template <typename YesNoT = Aws::Vector<YesNoQuestion>>
  void SetYesNo(YesNoT&& value) {
    m_yesNoHasBeenSet = true;
    m_yesNo = std::forward<YesNoT>(value);
  }
  template <typename YesNoT = Aws::Vector<YesNoQuestion>>
  CreateQuestionSetRequest& WithYesNo(YesNoT&& value) {
    SetYesNo(std::forward<YesNoT>(value));
    return *this;
  }
  template <typename YesNoT = YesNoQuestion>
  CreateQuestionSetRequest& AddYesNo(YesNoT&& value) {
    m_yesNoHasBeenSet = true;
    m_yesNo.emplace_back(std::forward<YesNoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of questions that you ask about each of their options. Elemental
   * Inference answers yes or no for each option. You can specify up to 10
   * yesNoPerOption questions. An empty array is the same as omitting this property.
   * </p>
   */
  inline const Aws::Vector<YesNoPerOptionQuestion>& GetYesNoPerOption() const { return m_yesNoPerOption; }
  inline bool YesNoPerOptionHasBeenSet() const { return m_yesNoPerOptionHasBeenSet; }
  template <typename YesNoPerOptionT = Aws::Vector<YesNoPerOptionQuestion>>
  void SetYesNoPerOption(YesNoPerOptionT&& value) {
    m_yesNoPerOptionHasBeenSet = true;
    m_yesNoPerOption = std::forward<YesNoPerOptionT>(value);
  }
  template <typename YesNoPerOptionT = Aws::Vector<YesNoPerOptionQuestion>>
  CreateQuestionSetRequest& WithYesNoPerOption(YesNoPerOptionT&& value) {
    SetYesNoPerOption(std::forward<YesNoPerOptionT>(value));
    return *this;
  }
  template <typename YesNoPerOptionT = YesNoPerOptionQuestion>
  CreateQuestionSetRequest& AddYesNoPerOption(YesNoPerOptionT&& value) {
    m_yesNoPerOptionHasBeenSet = true;
    m_yesNoPerOption.emplace_back(std::forward<YesNoPerOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of questions that Elemental Inference answers by choosing one of
   * their options. You can specify up to 10 chooseOne questions. An empty array is
   * the same as omitting this property. </p>
   */
  inline const Aws::Vector<ChooseOneQuestion>& GetChooseOne() const { return m_chooseOne; }
  inline bool ChooseOneHasBeenSet() const { return m_chooseOneHasBeenSet; }
  template <typename ChooseOneT = Aws::Vector<ChooseOneQuestion>>
  void SetChooseOne(ChooseOneT&& value) {
    m_chooseOneHasBeenSet = true;
    m_chooseOne = std::forward<ChooseOneT>(value);
  }
  template <typename ChooseOneT = Aws::Vector<ChooseOneQuestion>>
  CreateQuestionSetRequest& WithChooseOne(ChooseOneT&& value) {
    SetChooseOne(std::forward<ChooseOneT>(value));
    return *this;
  }
  template <typename ChooseOneT = ChooseOneQuestion>
  CreateQuestionSetRequest& AddChooseOne(ChooseOneT&& value) {
    m_chooseOneHasBeenSet = true;
    m_chooseOne.emplace_back(std::forward<ChooseOneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A user-friendly name for this question set.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateQuestionSetRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional tags to associate with the question set. You can also add tags
   * later, using TagResource. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateQuestionSetRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateQuestionSetRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<YesNoQuestion> m_yesNo;

  Aws::Vector<YesNoPerOptionQuestion> m_yesNoPerOption;

  Aws::Vector<ChooseOneQuestion> m_chooseOne;

  Aws::String m_name;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_yesNoHasBeenSet = false;
  bool m_yesNoPerOptionHasBeenSet = false;
  bool m_chooseOneHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
