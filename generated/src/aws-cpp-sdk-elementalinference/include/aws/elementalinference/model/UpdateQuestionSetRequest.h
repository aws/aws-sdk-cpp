/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class UpdateQuestionSetRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API UpdateQuestionSetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateQuestionSet"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the question set to update.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateQuestionSetRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of questions that Elemental Inference answers with yes or no, to
   * replace all the yesNo questions in DRAFT. You can specify up to 50 yesNo
   * questions. If not specified, the yesNo questions are not changed. To remove all
   * the yesNo questions, specify an empty array. </p>
   */
  inline const Aws::Vector<YesNoQuestion>& GetYesNo() const { return m_yesNo; }
  inline bool YesNoHasBeenSet() const { return m_yesNoHasBeenSet; }
  template <typename YesNoT = Aws::Vector<YesNoQuestion>>
  void SetYesNo(YesNoT&& value) {
    m_yesNoHasBeenSet = true;
    m_yesNo = std::forward<YesNoT>(value);
  }
  template <typename YesNoT = Aws::Vector<YesNoQuestion>>
  UpdateQuestionSetRequest& WithYesNo(YesNoT&& value) {
    SetYesNo(std::forward<YesNoT>(value));
    return *this;
  }
  template <typename YesNoT = YesNoQuestion>
  UpdateQuestionSetRequest& AddYesNo(YesNoT&& value) {
    m_yesNoHasBeenSet = true;
    m_yesNo.emplace_back(std::forward<YesNoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of questions that you ask about each of their options, to replace
   * all the yesNoPerOption questions in DRAFT. You can specify up to 10
   * yesNoPerOption questions. If not specified, the yesNoPerOption questions are not
   * changed. To remove all the yesNoPerOption questions, specify an empty array.
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
  UpdateQuestionSetRequest& WithYesNoPerOption(YesNoPerOptionT&& value) {
    SetYesNoPerOption(std::forward<YesNoPerOptionT>(value));
    return *this;
  }
  template <typename YesNoPerOptionT = YesNoPerOptionQuestion>
  UpdateQuestionSetRequest& AddYesNoPerOption(YesNoPerOptionT&& value) {
    m_yesNoPerOptionHasBeenSet = true;
    m_yesNoPerOption.emplace_back(std::forward<YesNoPerOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of questions that Elemental Inference answers by choosing one of
   * their options, to replace all the chooseOne questions in DRAFT. You can specify
   * up to 10 chooseOne questions. If not specified, the chooseOne questions are not
   * changed. To remove all the chooseOne questions, specify an empty array. </p>
   */
  inline const Aws::Vector<ChooseOneQuestion>& GetChooseOne() const { return m_chooseOne; }
  inline bool ChooseOneHasBeenSet() const { return m_chooseOneHasBeenSet; }
  template <typename ChooseOneT = Aws::Vector<ChooseOneQuestion>>
  void SetChooseOne(ChooseOneT&& value) {
    m_chooseOneHasBeenSet = true;
    m_chooseOne = std::forward<ChooseOneT>(value);
  }
  template <typename ChooseOneT = Aws::Vector<ChooseOneQuestion>>
  UpdateQuestionSetRequest& WithChooseOne(ChooseOneT&& value) {
    SetChooseOne(std::forward<ChooseOneT>(value));
    return *this;
  }
  template <typename ChooseOneT = ChooseOneQuestion>
  UpdateQuestionSetRequest& AddChooseOne(ChooseOneT&& value) {
    m_chooseOneHasBeenSet = true;
    m_chooseOne.emplace_back(std::forward<ChooseOneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new name for the question set. If not specified, the name is not
   * changed.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateQuestionSetRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::Vector<YesNoQuestion> m_yesNo;

  Aws::Vector<YesNoPerOptionQuestion> m_yesNoPerOption;

  Aws::Vector<ChooseOneQuestion> m_chooseOne;

  Aws::String m_name;
  bool m_idHasBeenSet = false;
  bool m_yesNoHasBeenSet = false;
  bool m_yesNoPerOptionHasBeenSet = false;
  bool m_chooseOneHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
