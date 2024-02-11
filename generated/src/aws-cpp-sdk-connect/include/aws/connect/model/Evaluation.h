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
    AWS_CONNECT_API Evaluation();
    AWS_CONNECT_API Evaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Evaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = value; }

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::move(value); }

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationIdHasBeenSet = true; m_evaluationId.assign(value); }

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline Evaluation& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline Evaluation& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline Evaluation& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline const Aws::String& GetEvaluationArn() const{ return m_evaluationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline bool EvaluationArnHasBeenSet() const { return m_evaluationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline void SetEvaluationArn(const Aws::String& value) { m_evaluationArnHasBeenSet = true; m_evaluationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline void SetEvaluationArn(Aws::String&& value) { m_evaluationArnHasBeenSet = true; m_evaluationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline void SetEvaluationArn(const char* value) { m_evaluationArnHasBeenSet = true; m_evaluationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline Evaluation& WithEvaluationArn(const Aws::String& value) { SetEvaluationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline Evaluation& WithEvaluationArn(Aws::String&& value) { SetEvaluationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline Evaluation& WithEvaluationArn(const char* value) { SetEvaluationArn(value); return *this;}


    /**
     * <p>Metadata about the contact evaluation.</p>
     */
    inline const EvaluationMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Metadata about the contact evaluation.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Metadata about the contact evaluation.</p>
     */
    inline void SetMetadata(const EvaluationMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Metadata about the contact evaluation.</p>
     */
    inline void SetMetadata(EvaluationMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Metadata about the contact evaluation.</p>
     */
    inline Evaluation& WithMetadata(const EvaluationMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>Metadata about the contact evaluation.</p>
     */
    inline Evaluation& WithMetadata(EvaluationMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline const Aws::Map<Aws::String, EvaluationAnswerOutput>& GetAnswers() const{ return m_answers; }

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline bool AnswersHasBeenSet() const { return m_answersHasBeenSet; }

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline void SetAnswers(const Aws::Map<Aws::String, EvaluationAnswerOutput>& value) { m_answersHasBeenSet = true; m_answers = value; }

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline void SetAnswers(Aws::Map<Aws::String, EvaluationAnswerOutput>&& value) { m_answersHasBeenSet = true; m_answers = std::move(value); }

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline Evaluation& WithAnswers(const Aws::Map<Aws::String, EvaluationAnswerOutput>& value) { SetAnswers(value); return *this;}

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline Evaluation& WithAnswers(Aws::Map<Aws::String, EvaluationAnswerOutput>&& value) { SetAnswers(std::move(value)); return *this;}

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline Evaluation& AddAnswers(const Aws::String& key, const EvaluationAnswerOutput& value) { m_answersHasBeenSet = true; m_answers.emplace(key, value); return *this; }

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline Evaluation& AddAnswers(Aws::String&& key, const EvaluationAnswerOutput& value) { m_answersHasBeenSet = true; m_answers.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline Evaluation& AddAnswers(const Aws::String& key, EvaluationAnswerOutput&& value) { m_answersHasBeenSet = true; m_answers.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline Evaluation& AddAnswers(Aws::String&& key, EvaluationAnswerOutput&& value) { m_answersHasBeenSet = true; m_answers.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline Evaluation& AddAnswers(const char* key, EvaluationAnswerOutput&& value) { m_answersHasBeenSet = true; m_answers.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of question identifiers to answer value.</p>
     */
    inline Evaluation& AddAnswers(const char* key, const EvaluationAnswerOutput& value) { m_answersHasBeenSet = true; m_answers.emplace(key, value); return *this; }


    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline const Aws::Map<Aws::String, EvaluationNote>& GetNotes() const{ return m_notes; }

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline void SetNotes(const Aws::Map<Aws::String, EvaluationNote>& value) { m_notesHasBeenSet = true; m_notes = value; }

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline void SetNotes(Aws::Map<Aws::String, EvaluationNote>&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline Evaluation& WithNotes(const Aws::Map<Aws::String, EvaluationNote>& value) { SetNotes(value); return *this;}

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline Evaluation& WithNotes(Aws::Map<Aws::String, EvaluationNote>&& value) { SetNotes(std::move(value)); return *this;}

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline Evaluation& AddNotes(const Aws::String& key, const EvaluationNote& value) { m_notesHasBeenSet = true; m_notes.emplace(key, value); return *this; }

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline Evaluation& AddNotes(Aws::String&& key, const EvaluationNote& value) { m_notesHasBeenSet = true; m_notes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline Evaluation& AddNotes(const Aws::String& key, EvaluationNote&& value) { m_notesHasBeenSet = true; m_notes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline Evaluation& AddNotes(Aws::String&& key, EvaluationNote&& value) { m_notesHasBeenSet = true; m_notes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline Evaluation& AddNotes(const char* key, EvaluationNote&& value) { m_notesHasBeenSet = true; m_notes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of question identifiers to note value.</p>
     */
    inline Evaluation& AddNotes(const char* key, const EvaluationNote& value) { m_notesHasBeenSet = true; m_notes.emplace(key, value); return *this; }


    /**
     * <p>The status of the contact evaluation.</p>
     */
    inline const EvaluationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the contact evaluation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the contact evaluation.</p>
     */
    inline void SetStatus(const EvaluationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the contact evaluation.</p>
     */
    inline void SetStatus(EvaluationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the contact evaluation.</p>
     */
    inline Evaluation& WithStatus(const EvaluationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the contact evaluation.</p>
     */
    inline Evaluation& WithStatus(EvaluationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline const Aws::Map<Aws::String, EvaluationScore>& GetScores() const{ return m_scores; }

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline bool ScoresHasBeenSet() const { return m_scoresHasBeenSet; }

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline void SetScores(const Aws::Map<Aws::String, EvaluationScore>& value) { m_scoresHasBeenSet = true; m_scores = value; }

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline void SetScores(Aws::Map<Aws::String, EvaluationScore>&& value) { m_scoresHasBeenSet = true; m_scores = std::move(value); }

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline Evaluation& WithScores(const Aws::Map<Aws::String, EvaluationScore>& value) { SetScores(value); return *this;}

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline Evaluation& WithScores(Aws::Map<Aws::String, EvaluationScore>&& value) { SetScores(std::move(value)); return *this;}

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline Evaluation& AddScores(const Aws::String& key, const EvaluationScore& value) { m_scoresHasBeenSet = true; m_scores.emplace(key, value); return *this; }

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline Evaluation& AddScores(Aws::String&& key, const EvaluationScore& value) { m_scoresHasBeenSet = true; m_scores.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline Evaluation& AddScores(const Aws::String& key, EvaluationScore&& value) { m_scoresHasBeenSet = true; m_scores.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline Evaluation& AddScores(Aws::String&& key, EvaluationScore&& value) { m_scoresHasBeenSet = true; m_scores.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline Evaluation& AddScores(const char* key, EvaluationScore&& value) { m_scoresHasBeenSet = true; m_scores.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of item (section or question) identifiers to score value.</p>
     */
    inline Evaluation& AddScores(const char* key, const EvaluationScore& value) { m_scoresHasBeenSet = true; m_scores.emplace(key, value); return *this; }


    /**
     * <p>The timestamp for when the evaluation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp for when the evaluation was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the evaluation was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The timestamp for when the evaluation was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The timestamp for when the evaluation was created.</p>
     */
    inline Evaluation& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp for when the evaluation was created.</p>
     */
    inline Evaluation& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the evaluation was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp for when the evaluation was last updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the evaluation was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp for when the evaluation was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp for when the evaluation was last updated.</p>
     */
    inline Evaluation& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp for when the evaluation was last updated.</p>
     */
    inline Evaluation& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Evaluation& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Evaluation& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Evaluation& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Evaluation& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Evaluation& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Evaluation& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Evaluation& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Evaluation& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Evaluation& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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

    EvaluationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, EvaluationScore> m_scores;
    bool m_scoresHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
