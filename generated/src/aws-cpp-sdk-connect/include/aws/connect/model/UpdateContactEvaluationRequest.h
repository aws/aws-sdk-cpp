﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/EvaluationAnswerInput.h>
#include <aws/connect/model/EvaluationNote.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateContactEvaluationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateContactEvaluationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactEvaluation"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateContactEvaluationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateContactEvaluationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateContactEvaluationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = value; }
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::move(value); }
    inline void SetEvaluationId(const char* value) { m_evaluationIdHasBeenSet = true; m_evaluationId.assign(value); }
    inline UpdateContactEvaluationRequest& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}
    inline UpdateContactEvaluationRequest& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}
    inline UpdateContactEvaluationRequest& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline const Aws::Map<Aws::String, EvaluationAnswerInput>& GetAnswers() const{ return m_answers; }
    inline bool AnswersHasBeenSet() const { return m_answersHasBeenSet; }
    inline void SetAnswers(const Aws::Map<Aws::String, EvaluationAnswerInput>& value) { m_answersHasBeenSet = true; m_answers = value; }
    inline void SetAnswers(Aws::Map<Aws::String, EvaluationAnswerInput>&& value) { m_answersHasBeenSet = true; m_answers = std::move(value); }
    inline UpdateContactEvaluationRequest& WithAnswers(const Aws::Map<Aws::String, EvaluationAnswerInput>& value) { SetAnswers(value); return *this;}
    inline UpdateContactEvaluationRequest& WithAnswers(Aws::Map<Aws::String, EvaluationAnswerInput>&& value) { SetAnswers(std::move(value)); return *this;}
    inline UpdateContactEvaluationRequest& AddAnswers(const Aws::String& key, const EvaluationAnswerInput& value) { m_answersHasBeenSet = true; m_answers.emplace(key, value); return *this; }
    inline UpdateContactEvaluationRequest& AddAnswers(Aws::String&& key, const EvaluationAnswerInput& value) { m_answersHasBeenSet = true; m_answers.emplace(std::move(key), value); return *this; }
    inline UpdateContactEvaluationRequest& AddAnswers(const Aws::String& key, EvaluationAnswerInput&& value) { m_answersHasBeenSet = true; m_answers.emplace(key, std::move(value)); return *this; }
    inline UpdateContactEvaluationRequest& AddAnswers(Aws::String&& key, EvaluationAnswerInput&& value) { m_answersHasBeenSet = true; m_answers.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateContactEvaluationRequest& AddAnswers(const char* key, EvaluationAnswerInput&& value) { m_answersHasBeenSet = true; m_answers.emplace(key, std::move(value)); return *this; }
    inline UpdateContactEvaluationRequest& AddAnswers(const char* key, const EvaluationAnswerInput& value) { m_answersHasBeenSet = true; m_answers.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline const Aws::Map<Aws::String, EvaluationNote>& GetNotes() const{ return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    inline void SetNotes(const Aws::Map<Aws::String, EvaluationNote>& value) { m_notesHasBeenSet = true; m_notes = value; }
    inline void SetNotes(Aws::Map<Aws::String, EvaluationNote>&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }
    inline UpdateContactEvaluationRequest& WithNotes(const Aws::Map<Aws::String, EvaluationNote>& value) { SetNotes(value); return *this;}
    inline UpdateContactEvaluationRequest& WithNotes(Aws::Map<Aws::String, EvaluationNote>&& value) { SetNotes(std::move(value)); return *this;}
    inline UpdateContactEvaluationRequest& AddNotes(const Aws::String& key, const EvaluationNote& value) { m_notesHasBeenSet = true; m_notes.emplace(key, value); return *this; }
    inline UpdateContactEvaluationRequest& AddNotes(Aws::String&& key, const EvaluationNote& value) { m_notesHasBeenSet = true; m_notes.emplace(std::move(key), value); return *this; }
    inline UpdateContactEvaluationRequest& AddNotes(const Aws::String& key, EvaluationNote&& value) { m_notesHasBeenSet = true; m_notes.emplace(key, std::move(value)); return *this; }
    inline UpdateContactEvaluationRequest& AddNotes(Aws::String&& key, EvaluationNote&& value) { m_notesHasBeenSet = true; m_notes.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateContactEvaluationRequest& AddNotes(const char* key, EvaluationNote&& value) { m_notesHasBeenSet = true; m_notes.emplace(key, std::move(value)); return *this; }
    inline UpdateContactEvaluationRequest& AddNotes(const char* key, const EvaluationNote& value) { m_notesHasBeenSet = true; m_notes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet = false;

    Aws::Map<Aws::String, EvaluationAnswerInput> m_answers;
    bool m_answersHasBeenSet = false;

    Aws::Map<Aws::String, EvaluationNote> m_notes;
    bool m_notesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
