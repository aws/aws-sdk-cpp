﻿/**
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


    ///@{
    /**
     * <p>The identifier of the answer option. An identifier must be unique within the
     * question.</p>
     */
    inline const Aws::String& GetRefId() const{ return m_refId; }
    inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }
    inline void SetRefId(const Aws::String& value) { m_refIdHasBeenSet = true; m_refId = value; }
    inline void SetRefId(Aws::String&& value) { m_refIdHasBeenSet = true; m_refId = std::move(value); }
    inline void SetRefId(const char* value) { m_refIdHasBeenSet = true; m_refId.assign(value); }
    inline EvaluationFormSingleSelectQuestionOption& WithRefId(const Aws::String& value) { SetRefId(value); return *this;}
    inline EvaluationFormSingleSelectQuestionOption& WithRefId(Aws::String&& value) { SetRefId(std::move(value)); return *this;}
    inline EvaluationFormSingleSelectQuestionOption& WithRefId(const char* value) { SetRefId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the answer option.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline EvaluationFormSingleSelectQuestionOption& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline EvaluationFormSingleSelectQuestionOption& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline EvaluationFormSingleSelectQuestionOption& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The score assigned to the answer option.</p>
     */
    inline int GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(int value) { m_scoreHasBeenSet = true; m_score = value; }
    inline EvaluationFormSingleSelectQuestionOption& WithScore(int value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag to mark the option as automatic fail. If an automatic fail answer is
     * provided, the overall evaluation gets a score of 0.</p>
     */
    inline bool GetAutomaticFail() const{ return m_automaticFail; }
    inline bool AutomaticFailHasBeenSet() const { return m_automaticFailHasBeenSet; }
    inline void SetAutomaticFail(bool value) { m_automaticFailHasBeenSet = true; m_automaticFail = value; }
    inline EvaluationFormSingleSelectQuestionOption& WithAutomaticFail(bool value) { SetAutomaticFail(value); return *this;}
    ///@}
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
