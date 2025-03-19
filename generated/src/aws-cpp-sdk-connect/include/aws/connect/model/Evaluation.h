/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationMetadata.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/EvaluationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/EvaluationAnswerOutput.h>
#include <aws/connect/model/EvaluationNote.h>
#include <aws/connect/model/EvaluationScore.h>
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
   * <p>Information about a contact evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Evaluation">AWS
   * API Reference</a></p>
   */
  class Evaluation
  {
  public:
    AWS_CONNECT_API Evaluation() = default;
    AWS_CONNECT_API Evaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Evaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline const Aws::String& GetEvaluationId() const { return m_evaluationId; }
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }
    template<typename EvaluationIdT = Aws::String>
    void SetEvaluationId(EvaluationIdT&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::forward<EvaluationIdT>(value); }
    template<typename EvaluationIdT = Aws::String>
    Evaluation& WithEvaluationId(EvaluationIdT&& value) { SetEvaluationId(std::forward<EvaluationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline const Aws::String& GetEvaluationArn() const { return m_evaluationArn; }
    inline bool EvaluationArnHasBeenSet() const { return m_evaluationArnHasBeenSet; }
    template<typename EvaluationArnT = Aws::String>
    void SetEvaluationArn(EvaluationArnT&& value) { m_evaluationArnHasBeenSet = true; m_evaluationArn = std::forward<EvaluationArnT>(value); }
    template<typename EvaluationArnT = Aws::String>
    Evaluation& WithEvaluationArn(EvaluationArnT&& value) { SetEvaluationArn(std::forward<EvaluationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about the contact evaluation.</p>
     */
    inline const EvaluationMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = EvaluationMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = EvaluationMetadata>
    Evaluation& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline const Aws::Map<Aws::String, EvaluationAnswerOutput>& GetAnswers() const { return m_answers; }
    inline bool AnswersHasBeenSet() const { return m_answersHasBeenSet; }
    template<typename AnswersT = Aws::Map<Aws::String, EvaluationAnswerOutput>>
    void SetAnswers(AnswersT&& value) { m_answersHasBeenSet = true; m_answers = std::forward<AnswersT>(value); }
    template<typename AnswersT = Aws::Map<Aws::String, EvaluationAnswerOutput>>
    Evaluation& WithAnswers(AnswersT&& value) { SetAnswers(std::forward<AnswersT>(value)); return *this;}
    template<typename AnswersKeyT = Aws::String, typename AnswersValueT = EvaluationAnswerOutput>
    Evaluation& AddAnswers(AnswersKeyT&& key, AnswersValueT&& value) {
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
    Evaluation& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    template<typename NotesKeyT = Aws::String, typename NotesValueT = EvaluationNote>
    Evaluation& AddNotes(NotesKeyT&& key, NotesValueT&& value) {
      m_notesHasBeenSet = true; m_notes.emplace(std::forward<NotesKeyT>(key), std::forward<NotesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the contact evaluation.</p>
     */
    inline EvaluationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EvaluationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Evaluation& WithStatus(EvaluationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline const Aws::Map<Aws::String, EvaluationScore>& GetScores() const { return m_scores; }
    inline bool ScoresHasBeenSet() const { return m_scoresHasBeenSet; }
    template<typename ScoresT = Aws::Map<Aws::String, EvaluationScore>>
    void SetScores(ScoresT&& value) { m_scoresHasBeenSet = true; m_scores = std::forward<ScoresT>(value); }
    template<typename ScoresT = Aws::Map<Aws::String, EvaluationScore>>
    Evaluation& WithScores(ScoresT&& value) { SetScores(std::forward<ScoresT>(value)); return *this;}
    template<typename ScoresKeyT = Aws::String, typename ScoresValueT = EvaluationScore>
    Evaluation& AddScores(ScoresKeyT&& key, ScoresValueT&& value) {
      m_scoresHasBeenSet = true; m_scores.emplace(std::forward<ScoresKeyT>(key), std::forward<ScoresValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the evaluation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Evaluation& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the evaluation was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    Evaluation& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Evaluation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Evaluation& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet = false;

    Aws::String m_evaluationArn;
    bool m_evaluationArnHasBeenSet = false;

    EvaluationMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Map<Aws::String, EvaluationAnswerOutput> m_answers;
    bool m_answersHasBeenSet = false;

    Aws::Map<Aws::String, EvaluationNote> m_notes;
    bool m_notesHasBeenSet = false;

    EvaluationStatus m_status{EvaluationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, EvaluationScore> m_scores;
    bool m_scoresHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
