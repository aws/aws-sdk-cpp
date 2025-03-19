/**
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
  class SubmitContactEvaluationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SubmitContactEvaluationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitContactEvaluation"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SubmitContactEvaluationRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline const Aws::String& GetEvaluationId() const { return m_evaluationId; }
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }
    template<typename EvaluationIdT = Aws::String>
    void SetEvaluationId(EvaluationIdT&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::forward<EvaluationIdT>(value); }
    template<typename EvaluationIdT = Aws::String>
    SubmitContactEvaluationRequest& WithEvaluationId(EvaluationIdT&& value) { SetEvaluationId(std::forward<EvaluationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline const Aws::Map<Aws::String, EvaluationAnswerInput>& GetAnswers() const { return m_answers; }
    inline bool AnswersHasBeenSet() const { return m_answersHasBeenSet; }
    template<typename AnswersT = Aws::Map<Aws::String, EvaluationAnswerInput>>
    void SetAnswers(AnswersT&& value) { m_answersHasBeenSet = true; m_answers = std::forward<AnswersT>(value); }
    template<typename AnswersT = Aws::Map<Aws::String, EvaluationAnswerInput>>
    SubmitContactEvaluationRequest& WithAnswers(AnswersT&& value) { SetAnswers(std::forward<AnswersT>(value)); return *this;}
    template<typename AnswersKeyT = Aws::String, typename AnswersValueT = EvaluationAnswerInput>
    SubmitContactEvaluationRequest& AddAnswers(AnswersKeyT&& key, AnswersValueT&& value) {
      m_answersHasBeenSet = true; m_answers.emplace(std::forward<AnswersKeyT>(key), std::forward<AnswersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline const Aws::Map<Aws::String, EvaluationNote>& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::Map<Aws::String, EvaluationNote>>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::Map<Aws::String, EvaluationNote>>
    SubmitContactEvaluationRequest& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    template<typename NotesKeyT = Aws::String, typename NotesValueT = EvaluationNote>
    SubmitContactEvaluationRequest& AddNotes(NotesKeyT&& key, NotesValueT&& value) {
      m_notesHasBeenSet = true; m_notes.emplace(std::forward<NotesKeyT>(key), std::forward<NotesValueT>(value)); return *this;
    }
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
