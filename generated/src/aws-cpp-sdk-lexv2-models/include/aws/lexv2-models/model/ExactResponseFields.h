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
    AWS_LEXMODELSV2_API ExactResponseFields();
    AWS_LEXMODELSV2_API ExactResponseFields(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ExactResponseFields& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field that contains the query made to the OpenSearch Service
     * database.</p>
     */
    inline const Aws::String& GetQuestionField() const{ return m_questionField; }

    /**
     * <p>The name of the field that contains the query made to the OpenSearch Service
     * database.</p>
     */
    inline bool QuestionFieldHasBeenSet() const { return m_questionFieldHasBeenSet; }

    /**
     * <p>The name of the field that contains the query made to the OpenSearch Service
     * database.</p>
     */
    inline void SetQuestionField(const Aws::String& value) { m_questionFieldHasBeenSet = true; m_questionField = value; }

    /**
     * <p>The name of the field that contains the query made to the OpenSearch Service
     * database.</p>
     */
    inline void SetQuestionField(Aws::String&& value) { m_questionFieldHasBeenSet = true; m_questionField = std::move(value); }

    /**
     * <p>The name of the field that contains the query made to the OpenSearch Service
     * database.</p>
     */
    inline void SetQuestionField(const char* value) { m_questionFieldHasBeenSet = true; m_questionField.assign(value); }

    /**
     * <p>The name of the field that contains the query made to the OpenSearch Service
     * database.</p>
     */
    inline ExactResponseFields& WithQuestionField(const Aws::String& value) { SetQuestionField(value); return *this;}

    /**
     * <p>The name of the field that contains the query made to the OpenSearch Service
     * database.</p>
     */
    inline ExactResponseFields& WithQuestionField(Aws::String&& value) { SetQuestionField(std::move(value)); return *this;}

    /**
     * <p>The name of the field that contains the query made to the OpenSearch Service
     * database.</p>
     */
    inline ExactResponseFields& WithQuestionField(const char* value) { SetQuestionField(value); return *this;}


    /**
     * <p>The name of the field that contains the answer to the query made to the
     * OpenSearch Service database.</p>
     */
    inline const Aws::String& GetAnswerField() const{ return m_answerField; }

    /**
     * <p>The name of the field that contains the answer to the query made to the
     * OpenSearch Service database.</p>
     */
    inline bool AnswerFieldHasBeenSet() const { return m_answerFieldHasBeenSet; }

    /**
     * <p>The name of the field that contains the answer to the query made to the
     * OpenSearch Service database.</p>
     */
    inline void SetAnswerField(const Aws::String& value) { m_answerFieldHasBeenSet = true; m_answerField = value; }

    /**
     * <p>The name of the field that contains the answer to the query made to the
     * OpenSearch Service database.</p>
     */
    inline void SetAnswerField(Aws::String&& value) { m_answerFieldHasBeenSet = true; m_answerField = std::move(value); }

    /**
     * <p>The name of the field that contains the answer to the query made to the
     * OpenSearch Service database.</p>
     */
    inline void SetAnswerField(const char* value) { m_answerFieldHasBeenSet = true; m_answerField.assign(value); }

    /**
     * <p>The name of the field that contains the answer to the query made to the
     * OpenSearch Service database.</p>
     */
    inline ExactResponseFields& WithAnswerField(const Aws::String& value) { SetAnswerField(value); return *this;}

    /**
     * <p>The name of the field that contains the answer to the query made to the
     * OpenSearch Service database.</p>
     */
    inline ExactResponseFields& WithAnswerField(Aws::String&& value) { SetAnswerField(std::move(value)); return *this;}

    /**
     * <p>The name of the field that contains the answer to the query made to the
     * OpenSearch Service database.</p>
     */
    inline ExactResponseFields& WithAnswerField(const char* value) { SetAnswerField(value); return *this;}

  private:

    Aws::String m_questionField;
    bool m_questionFieldHasBeenSet = false;

    Aws::String m_answerField;
    bool m_answerFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
