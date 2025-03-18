/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormQuestion.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{
  class EvaluationFormSection;

  /**
   * <p>Information about an item from an evaluation form. The item must be either a
   * section or a question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormItem">AWS
   * API Reference</a></p>
   */
  class EvaluationFormItem
  {
  public:
    AWS_CONNECT_API EvaluationFormItem() = default;
    AWS_CONNECT_API EvaluationFormItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The information of the section.</p>
     */
    inline const EvaluationFormSection& GetSection() const{
      return *m_section;
    }
    inline bool SectionHasBeenSet() const { return m_sectionHasBeenSet; }
    template<typename SectionT = EvaluationFormSection>
    void SetSection(SectionT&& value) {
      m_sectionHasBeenSet = true; 
      m_section = Aws::MakeShared<EvaluationFormSection>("EvaluationFormItem", std::forward<SectionT>(value));
    }
    template<typename SectionT = EvaluationFormSection>
    EvaluationFormItem& WithSection(SectionT&& value) { SetSection(std::forward<SectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information of the question.</p>
     */
    inline const EvaluationFormQuestion& GetQuestion() const { return m_question; }
    inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }
    template<typename QuestionT = EvaluationFormQuestion>
    void SetQuestion(QuestionT&& value) { m_questionHasBeenSet = true; m_question = std::forward<QuestionT>(value); }
    template<typename QuestionT = EvaluationFormQuestion>
    EvaluationFormItem& WithQuestion(QuestionT&& value) { SetQuestion(std::forward<QuestionT>(value)); return *this;}
    ///@}
  private:

    std::shared_ptr<EvaluationFormSection> m_section;
    bool m_sectionHasBeenSet = false;

    EvaluationFormQuestion m_question;
    bool m_questionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
