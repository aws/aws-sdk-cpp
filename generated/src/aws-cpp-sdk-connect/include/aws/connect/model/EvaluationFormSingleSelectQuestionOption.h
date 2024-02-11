/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the automation configuration in single select
   * questions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormSingleSelectQuestionOption">AWS
   * API Reference</a></p>
   */
  class EvaluationFormSingleSelectQuestionOption
  {
  public:
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionOption();
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormSingleSelectQuestionOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the answer option. An identifier must be unique within the
     * question.</p>
     */
    inline const Aws::String& GetRefId() const{ return m_refId; }

    /**
     * <p>The identifier of the answer option. An identifier must be unique within the
     * question.</p>
     */
    inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }

    /**
     * <p>The identifier of the answer option. An identifier must be unique within the
     * question.</p>
     */
    inline void SetRefId(const Aws::String& value) { m_refIdHasBeenSet = true; m_refId = value; }

    /**
     * <p>The identifier of the answer option. An identifier must be unique within the
     * question.</p>
     */
    inline void SetRefId(Aws::String&& value) { m_refIdHasBeenSet = true; m_refId = std::move(value); }

    /**
     * <p>The identifier of the answer option. An identifier must be unique within the
     * question.</p>
     */
    inline void SetRefId(const char* value) { m_refIdHasBeenSet = true; m_refId.assign(value); }

    /**
     * <p>The identifier of the answer option. An identifier must be unique within the
     * question.</p>
     */
    inline EvaluationFormSingleSelectQuestionOption& WithRefId(const Aws::String& value) { SetRefId(value); return *this;}

    /**
     * <p>The identifier of the answer option. An identifier must be unique within the
     * question.</p>
     */
    inline EvaluationFormSingleSelectQuestionOption& WithRefId(Aws::String&& value) { SetRefId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the answer option. An identifier must be unique within the
     * question.</p>
     */
    inline EvaluationFormSingleSelectQuestionOption& WithRefId(const char* value) { SetRefId(value); return *this;}


    /**
     * <p>The title of the answer option.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The title of the answer option.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The title of the answer option.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The title of the answer option.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The title of the answer option.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The title of the answer option.</p>
     */
    inline EvaluationFormSingleSelectQuestionOption& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The title of the answer option.</p>
     */
    inline EvaluationFormSingleSelectQuestionOption& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The title of the answer option.</p>
     */
    inline EvaluationFormSingleSelectQuestionOption& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The score assigned to the answer option.</p>
     */
    inline int GetScore() const{ return m_score; }

    /**
     * <p>The score assigned to the answer option.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The score assigned to the answer option.</p>
     */
    inline void SetScore(int value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The score assigned to the answer option.</p>
     */
    inline EvaluationFormSingleSelectQuestionOption& WithScore(int value) { SetScore(value); return *this;}


    /**
     * <p>The flag to mark the option as automatic fail. If an automatic fail answer is
     * provided, the overall evaluation gets a score of 0.</p>
     */
    inline bool GetAutomaticFail() const{ return m_automaticFail; }

    /**
     * <p>The flag to mark the option as automatic fail. If an automatic fail answer is
     * provided, the overall evaluation gets a score of 0.</p>
     */
    inline bool AutomaticFailHasBeenSet() const { return m_automaticFailHasBeenSet; }

    /**
     * <p>The flag to mark the option as automatic fail. If an automatic fail answer is
     * provided, the overall evaluation gets a score of 0.</p>
     */
    inline void SetAutomaticFail(bool value) { m_automaticFailHasBeenSet = true; m_automaticFail = value; }

    /**
     * <p>The flag to mark the option as automatic fail. If an automatic fail answer is
     * provided, the overall evaluation gets a score of 0.</p>
     */
    inline EvaluationFormSingleSelectQuestionOption& WithAutomaticFail(bool value) { SetAutomaticFail(value); return *this;}

  private:

    Aws::String m_refId;
    bool m_refIdHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    int m_score;
    bool m_scoreHasBeenSet = false;

    bool m_automaticFail;
    bool m_automaticFailHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
