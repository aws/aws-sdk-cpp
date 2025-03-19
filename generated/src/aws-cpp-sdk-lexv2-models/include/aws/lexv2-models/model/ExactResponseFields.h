/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains the names of the fields used for an exact response to the
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ExactResponseFields">AWS
   * API Reference</a></p>
   */
  class ExactResponseFields
  {
  public:
    AWS_LEXMODELSV2_API ExactResponseFields() = default;
    AWS_LEXMODELSV2_API ExactResponseFields(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ExactResponseFields& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field that contains the query made to the OpenSearch Service
     * database.</p>
     */
    inline const Aws::String& GetQuestionField() const { return m_questionField; }
    inline bool QuestionFieldHasBeenSet() const { return m_questionFieldHasBeenSet; }
    template<typename QuestionFieldT = Aws::String>
    void SetQuestionField(QuestionFieldT&& value) { m_questionFieldHasBeenSet = true; m_questionField = std::forward<QuestionFieldT>(value); }
    template<typename QuestionFieldT = Aws::String>
    ExactResponseFields& WithQuestionField(QuestionFieldT&& value) { SetQuestionField(std::forward<QuestionFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the field that contains the answer to the query made to the
     * OpenSearch Service database.</p>
     */
    inline const Aws::String& GetAnswerField() const { return m_answerField; }
    inline bool AnswerFieldHasBeenSet() const { return m_answerFieldHasBeenSet; }
    template<typename AnswerFieldT = Aws::String>
    void SetAnswerField(AnswerFieldT&& value) { m_answerFieldHasBeenSet = true; m_answerField = std::forward<AnswerFieldT>(value); }
    template<typename AnswerFieldT = Aws::String>
    ExactResponseFields& WithAnswerField(AnswerFieldT&& value) { SetAnswerField(std::forward<AnswerFieldT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_questionField;
    bool m_questionFieldHasBeenSet = false;

    Aws::String m_answerField;
    bool m_answerFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
