/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormQuestion.h>
#include <utility>
#include <memory>

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
    AWS_CONNECT_API EvaluationFormItem();
    AWS_CONNECT_API EvaluationFormItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The information of the section.</p>
     */
    AWS_CONNECT_API const EvaluationFormSection& GetSection() const;

    /**
     * <p>The information of the section.</p>
     */
    AWS_CONNECT_API bool SectionHasBeenSet() const;

    /**
     * <p>The information of the section.</p>
     */
    AWS_CONNECT_API void SetSection(const EvaluationFormSection& value);

    /**
     * <p>The information of the section.</p>
     */
    AWS_CONNECT_API void SetSection(EvaluationFormSection&& value);

    /**
     * <p>The information of the section.</p>
     */
    AWS_CONNECT_API EvaluationFormItem& WithSection(const EvaluationFormSection& value);

    /**
     * <p>The information of the section.</p>
     */
    AWS_CONNECT_API EvaluationFormItem& WithSection(EvaluationFormSection&& value);


    /**
     * <p>The information of the question.</p>
     */
    inline const EvaluationFormQuestion& GetQuestion() const{ return m_question; }

    /**
     * <p>The information of the question.</p>
     */
    inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }

    /**
     * <p>The information of the question.</p>
     */
    inline void SetQuestion(const EvaluationFormQuestion& value) { m_questionHasBeenSet = true; m_question = value; }

    /**
     * <p>The information of the question.</p>
     */
    inline void SetQuestion(EvaluationFormQuestion&& value) { m_questionHasBeenSet = true; m_question = std::move(value); }

    /**
     * <p>The information of the question.</p>
     */
    inline EvaluationFormItem& WithQuestion(const EvaluationFormQuestion& value) { SetQuestion(value); return *this;}

    /**
     * <p>The information of the question.</p>
     */
    inline EvaluationFormItem& WithQuestion(EvaluationFormQuestion&& value) { SetQuestion(std::move(value)); return *this;}

  private:

    std::shared_ptr<EvaluationFormSection> m_section;
    bool m_sectionHasBeenSet = false;

    EvaluationFormQuestion m_question;
    bool m_questionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
