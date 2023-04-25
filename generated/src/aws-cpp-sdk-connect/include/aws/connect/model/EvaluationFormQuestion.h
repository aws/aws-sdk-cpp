/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationFormQuestionType.h>
#include <aws/connect/model/EvaluationFormQuestionTypeProperties.h>
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
   * <p>Information about a question from an evaluation form.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormQuestion">AWS
   * API Reference</a></p>
   */
  class EvaluationFormQuestion
  {
  public:
    AWS_CONNECT_API EvaluationFormQuestion();
    AWS_CONNECT_API EvaluationFormQuestion(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormQuestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The title of the question.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the question.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the question.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the question.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the question.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the question.</p>
     */
    inline EvaluationFormQuestion& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the question.</p>
     */
    inline EvaluationFormQuestion& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the question.</p>
     */
    inline EvaluationFormQuestion& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The instructions of the section.</p>
     */
    inline const Aws::String& GetInstructions() const{ return m_instructions; }

    /**
     * <p>The instructions of the section.</p>
     */
    inline bool InstructionsHasBeenSet() const { return m_instructionsHasBeenSet; }

    /**
     * <p>The instructions of the section.</p>
     */
    inline void SetInstructions(const Aws::String& value) { m_instructionsHasBeenSet = true; m_instructions = value; }

    /**
     * <p>The instructions of the section.</p>
     */
    inline void SetInstructions(Aws::String&& value) { m_instructionsHasBeenSet = true; m_instructions = std::move(value); }

    /**
     * <p>The instructions of the section.</p>
     */
    inline void SetInstructions(const char* value) { m_instructionsHasBeenSet = true; m_instructions.assign(value); }

    /**
     * <p>The instructions of the section.</p>
     */
    inline EvaluationFormQuestion& WithInstructions(const Aws::String& value) { SetInstructions(value); return *this;}

    /**
     * <p>The instructions of the section.</p>
     */
    inline EvaluationFormQuestion& WithInstructions(Aws::String&& value) { SetInstructions(std::move(value)); return *this;}

    /**
     * <p>The instructions of the section.</p>
     */
    inline EvaluationFormQuestion& WithInstructions(const char* value) { SetInstructions(value); return *this;}


    /**
     * <p>The identifier of the question. An identifier must be unique within the
     * evaluation form.</p>
     */
    inline const Aws::String& GetRefId() const{ return m_refId; }

    /**
     * <p>The identifier of the question. An identifier must be unique within the
     * evaluation form.</p>
     */
    inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }

    /**
     * <p>The identifier of the question. An identifier must be unique within the
     * evaluation form.</p>
     */
    inline void SetRefId(const Aws::String& value) { m_refIdHasBeenSet = true; m_refId = value; }

    /**
     * <p>The identifier of the question. An identifier must be unique within the
     * evaluation form.</p>
     */
    inline void SetRefId(Aws::String&& value) { m_refIdHasBeenSet = true; m_refId = std::move(value); }

    /**
     * <p>The identifier of the question. An identifier must be unique within the
     * evaluation form.</p>
     */
    inline void SetRefId(const char* value) { m_refIdHasBeenSet = true; m_refId.assign(value); }

    /**
     * <p>The identifier of the question. An identifier must be unique within the
     * evaluation form.</p>
     */
    inline EvaluationFormQuestion& WithRefId(const Aws::String& value) { SetRefId(value); return *this;}

    /**
     * <p>The identifier of the question. An identifier must be unique within the
     * evaluation form.</p>
     */
    inline EvaluationFormQuestion& WithRefId(Aws::String&& value) { SetRefId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the question. An identifier must be unique within the
     * evaluation form.</p>
     */
    inline EvaluationFormQuestion& WithRefId(const char* value) { SetRefId(value); return *this;}


    /**
     * <p>The flag to enable not applicable answers to the question.</p>
     */
    inline bool GetNotApplicableEnabled() const{ return m_notApplicableEnabled; }

    /**
     * <p>The flag to enable not applicable answers to the question.</p>
     */
    inline bool NotApplicableEnabledHasBeenSet() const { return m_notApplicableEnabledHasBeenSet; }

    /**
     * <p>The flag to enable not applicable answers to the question.</p>
     */
    inline void SetNotApplicableEnabled(bool value) { m_notApplicableEnabledHasBeenSet = true; m_notApplicableEnabled = value; }

    /**
     * <p>The flag to enable not applicable answers to the question.</p>
     */
    inline EvaluationFormQuestion& WithNotApplicableEnabled(bool value) { SetNotApplicableEnabled(value); return *this;}


    /**
     * <p>The type of the question.</p>
     */
    inline const EvaluationFormQuestionType& GetQuestionType() const{ return m_questionType; }

    /**
     * <p>The type of the question.</p>
     */
    inline bool QuestionTypeHasBeenSet() const { return m_questionTypeHasBeenSet; }

    /**
     * <p>The type of the question.</p>
     */
    inline void SetQuestionType(const EvaluationFormQuestionType& value) { m_questionTypeHasBeenSet = true; m_questionType = value; }

    /**
     * <p>The type of the question.</p>
     */
    inline void SetQuestionType(EvaluationFormQuestionType&& value) { m_questionTypeHasBeenSet = true; m_questionType = std::move(value); }

    /**
     * <p>The type of the question.</p>
     */
    inline EvaluationFormQuestion& WithQuestionType(const EvaluationFormQuestionType& value) { SetQuestionType(value); return *this;}

    /**
     * <p>The type of the question.</p>
     */
    inline EvaluationFormQuestion& WithQuestionType(EvaluationFormQuestionType&& value) { SetQuestionType(std::move(value)); return *this;}


    /**
     * <p>The properties of the type of question. Text questions do not have to define
     * question type properties.</p>
     */
    inline const EvaluationFormQuestionTypeProperties& GetQuestionTypeProperties() const{ return m_questionTypeProperties; }

    /**
     * <p>The properties of the type of question. Text questions do not have to define
     * question type properties.</p>
     */
    inline bool QuestionTypePropertiesHasBeenSet() const { return m_questionTypePropertiesHasBeenSet; }

    /**
     * <p>The properties of the type of question. Text questions do not have to define
     * question type properties.</p>
     */
    inline void SetQuestionTypeProperties(const EvaluationFormQuestionTypeProperties& value) { m_questionTypePropertiesHasBeenSet = true; m_questionTypeProperties = value; }

    /**
     * <p>The properties of the type of question. Text questions do not have to define
     * question type properties.</p>
     */
    inline void SetQuestionTypeProperties(EvaluationFormQuestionTypeProperties&& value) { m_questionTypePropertiesHasBeenSet = true; m_questionTypeProperties = std::move(value); }

    /**
     * <p>The properties of the type of question. Text questions do not have to define
     * question type properties.</p>
     */
    inline EvaluationFormQuestion& WithQuestionTypeProperties(const EvaluationFormQuestionTypeProperties& value) { SetQuestionTypeProperties(value); return *this;}

    /**
     * <p>The properties of the type of question. Text questions do not have to define
     * question type properties.</p>
     */
    inline EvaluationFormQuestion& WithQuestionTypeProperties(EvaluationFormQuestionTypeProperties&& value) { SetQuestionTypeProperties(std::move(value)); return *this;}


    /**
     * <p>The scoring weight of the section.</p>
     */
    inline double GetWeight() const{ return m_weight; }

    /**
     * <p>The scoring weight of the section.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The scoring weight of the section.</p>
     */
    inline void SetWeight(double value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The scoring weight of the section.</p>
     */
    inline EvaluationFormQuestion& WithWeight(double value) { SetWeight(value); return *this;}

  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_instructions;
    bool m_instructionsHasBeenSet = false;

    Aws::String m_refId;
    bool m_refIdHasBeenSet = false;

    bool m_notApplicableEnabled;
    bool m_notApplicableEnabledHasBeenSet = false;

    EvaluationFormQuestionType m_questionType;
    bool m_questionTypeHasBeenSet = false;

    EvaluationFormQuestionTypeProperties m_questionTypeProperties;
    bool m_questionTypePropertiesHasBeenSet = false;

    double m_weight;
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
