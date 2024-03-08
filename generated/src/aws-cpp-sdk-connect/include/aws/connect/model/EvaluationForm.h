/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationFormVersionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/EvaluationFormScoringStrategy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/EvaluationFormItem.h>
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
   * <p>Information about the evaluation form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationForm">AWS
   * API Reference</a></p>
   */
  class EvaluationForm
  {
  public:
    AWS_CONNECT_API EvaluationForm();
    AWS_CONNECT_API EvaluationForm(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationForm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const{ return m_evaluationFormId; }

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline void SetEvaluationFormId(const Aws::String& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = value; }

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline void SetEvaluationFormId(Aws::String&& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = std::move(value); }

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline void SetEvaluationFormId(const char* value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId.assign(value); }

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline EvaluationForm& WithEvaluationFormId(const Aws::String& value) { SetEvaluationFormId(value); return *this;}

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline EvaluationForm& WithEvaluationFormId(Aws::String&& value) { SetEvaluationFormId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline EvaluationForm& WithEvaluationFormId(const char* value) { SetEvaluationFormId(value); return *this;}


    /**
     * <p>A version of the evaluation form.</p>
     */
    inline int GetEvaluationFormVersion() const{ return m_evaluationFormVersion; }

    /**
     * <p>A version of the evaluation form.</p>
     */
    inline bool EvaluationFormVersionHasBeenSet() const { return m_evaluationFormVersionHasBeenSet; }

    /**
     * <p>A version of the evaluation form.</p>
     */
    inline void SetEvaluationFormVersion(int value) { m_evaluationFormVersionHasBeenSet = true; m_evaluationFormVersion = value; }

    /**
     * <p>A version of the evaluation form.</p>
     */
    inline EvaluationForm& WithEvaluationFormVersion(int value) { SetEvaluationFormVersion(value); return *this;}


    /**
     * <p>The flag indicating whether the evaluation form is locked for changes.</p>
     */
    inline bool GetLocked() const{ return m_locked; }

    /**
     * <p>The flag indicating whether the evaluation form is locked for changes.</p>
     */
    inline bool LockedHasBeenSet() const { return m_lockedHasBeenSet; }

    /**
     * <p>The flag indicating whether the evaluation form is locked for changes.</p>
     */
    inline void SetLocked(bool value) { m_lockedHasBeenSet = true; m_locked = value; }

    /**
     * <p>The flag indicating whether the evaluation form is locked for changes.</p>
     */
    inline EvaluationForm& WithLocked(bool value) { SetLocked(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline const Aws::String& GetEvaluationFormArn() const{ return m_evaluationFormArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline bool EvaluationFormArnHasBeenSet() const { return m_evaluationFormArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline void SetEvaluationFormArn(const Aws::String& value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline void SetEvaluationFormArn(Aws::String&& value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline void SetEvaluationFormArn(const char* value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline EvaluationForm& WithEvaluationFormArn(const Aws::String& value) { SetEvaluationFormArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline EvaluationForm& WithEvaluationFormArn(Aws::String&& value) { SetEvaluationFormArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline EvaluationForm& WithEvaluationFormArn(const char* value) { SetEvaluationFormArn(value); return *this;}


    /**
     * <p>A title of the evaluation form.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline EvaluationForm& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline EvaluationForm& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline EvaluationForm& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The description of the evaluation form.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the evaluation form.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the evaluation form.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the evaluation form.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the evaluation form.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the evaluation form.</p>
     */
    inline EvaluationForm& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the evaluation form.</p>
     */
    inline EvaluationForm& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the evaluation form.</p>
     */
    inline EvaluationForm& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the evaluation form.</p>
     */
    inline const EvaluationFormVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the evaluation form.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the evaluation form.</p>
     */
    inline void SetStatus(const EvaluationFormVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the evaluation form.</p>
     */
    inline void SetStatus(EvaluationFormVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the evaluation form.</p>
     */
    inline EvaluationForm& WithStatus(const EvaluationFormVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the evaluation form.</p>
     */
    inline EvaluationForm& WithStatus(EvaluationFormVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline const Aws::Vector<EvaluationFormItem>& GetItems() const{ return m_items; }

    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline void SetItems(const Aws::Vector<EvaluationFormItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline void SetItems(Aws::Vector<EvaluationFormItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline EvaluationForm& WithItems(const Aws::Vector<EvaluationFormItem>& value) { SetItems(value); return *this;}

    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline EvaluationForm& WithItems(Aws::Vector<EvaluationFormItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline EvaluationForm& AddItems(const EvaluationFormItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline EvaluationForm& AddItems(EvaluationFormItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>A scoring strategy of the evaluation form.</p>
     */
    inline const EvaluationFormScoringStrategy& GetScoringStrategy() const{ return m_scoringStrategy; }

    /**
     * <p>A scoring strategy of the evaluation form.</p>
     */
    inline bool ScoringStrategyHasBeenSet() const { return m_scoringStrategyHasBeenSet; }

    /**
     * <p>A scoring strategy of the evaluation form.</p>
     */
    inline void SetScoringStrategy(const EvaluationFormScoringStrategy& value) { m_scoringStrategyHasBeenSet = true; m_scoringStrategy = value; }

    /**
     * <p>A scoring strategy of the evaluation form.</p>
     */
    inline void SetScoringStrategy(EvaluationFormScoringStrategy&& value) { m_scoringStrategyHasBeenSet = true; m_scoringStrategy = std::move(value); }

    /**
     * <p>A scoring strategy of the evaluation form.</p>
     */
    inline EvaluationForm& WithScoringStrategy(const EvaluationFormScoringStrategy& value) { SetScoringStrategy(value); return *this;}

    /**
     * <p>A scoring strategy of the evaluation form.</p>
     */
    inline EvaluationForm& WithScoringStrategy(EvaluationFormScoringStrategy&& value) { SetScoringStrategy(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the evaluation form was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp for when the evaluation form was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the evaluation form was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The timestamp for when the evaluation form was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The timestamp for when the evaluation form was created.</p>
     */
    inline EvaluationForm& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp for when the evaluation form was created.</p>
     */
    inline EvaluationForm& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline EvaluationForm& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline EvaluationForm& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline EvaluationForm& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The timestamp for when the evaluation form was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp for when the evaluation form was last updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the evaluation form was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp for when the evaluation form was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp for when the evaluation form was last updated.</p>
     */
    inline EvaluationForm& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp for when the evaluation form was last updated.</p>
     */
    inline EvaluationForm& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline EvaluationForm& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline EvaluationForm& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline EvaluationForm& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


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
    inline EvaluationForm& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline EvaluationForm& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline EvaluationForm& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline EvaluationForm& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline EvaluationForm& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline EvaluationForm& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline EvaluationForm& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline EvaluationForm& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline EvaluationForm& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_evaluationFormId;
    bool m_evaluationFormIdHasBeenSet = false;

    int m_evaluationFormVersion;
    bool m_evaluationFormVersionHasBeenSet = false;

    bool m_locked;
    bool m_lockedHasBeenSet = false;

    Aws::String m_evaluationFormArn;
    bool m_evaluationFormArnHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EvaluationFormVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<EvaluationFormItem> m_items;
    bool m_itemsHasBeenSet = false;

    EvaluationFormScoringStrategy m_scoringStrategy;
    bool m_scoringStrategyHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
