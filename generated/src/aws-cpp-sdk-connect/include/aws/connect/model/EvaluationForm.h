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


    ///@{
    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const{ return m_evaluationFormId; }
    inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }
    inline void SetEvaluationFormId(const Aws::String& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = value; }
    inline void SetEvaluationFormId(Aws::String&& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = std::move(value); }
    inline void SetEvaluationFormId(const char* value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId.assign(value); }
    inline EvaluationForm& WithEvaluationFormId(const Aws::String& value) { SetEvaluationFormId(value); return *this;}
    inline EvaluationForm& WithEvaluationFormId(Aws::String&& value) { SetEvaluationFormId(std::move(value)); return *this;}
    inline EvaluationForm& WithEvaluationFormId(const char* value) { SetEvaluationFormId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version of the evaluation form.</p>
     */
    inline int GetEvaluationFormVersion() const{ return m_evaluationFormVersion; }
    inline bool EvaluationFormVersionHasBeenSet() const { return m_evaluationFormVersionHasBeenSet; }
    inline void SetEvaluationFormVersion(int value) { m_evaluationFormVersionHasBeenSet = true; m_evaluationFormVersion = value; }
    inline EvaluationForm& WithEvaluationFormVersion(int value) { SetEvaluationFormVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag indicating whether the evaluation form is locked for changes.</p>
     */
    inline bool GetLocked() const{ return m_locked; }
    inline bool LockedHasBeenSet() const { return m_lockedHasBeenSet; }
    inline void SetLocked(bool value) { m_lockedHasBeenSet = true; m_locked = value; }
    inline EvaluationForm& WithLocked(bool value) { SetLocked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline const Aws::String& GetEvaluationFormArn() const{ return m_evaluationFormArn; }
    inline bool EvaluationFormArnHasBeenSet() const { return m_evaluationFormArnHasBeenSet; }
    inline void SetEvaluationFormArn(const Aws::String& value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn = value; }
    inline void SetEvaluationFormArn(Aws::String&& value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn = std::move(value); }
    inline void SetEvaluationFormArn(const char* value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn.assign(value); }
    inline EvaluationForm& WithEvaluationFormArn(const Aws::String& value) { SetEvaluationFormArn(value); return *this;}
    inline EvaluationForm& WithEvaluationFormArn(Aws::String&& value) { SetEvaluationFormArn(std::move(value)); return *this;}
    inline EvaluationForm& WithEvaluationFormArn(const char* value) { SetEvaluationFormArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A title of the evaluation form.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline EvaluationForm& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline EvaluationForm& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline EvaluationForm& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the evaluation form.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EvaluationForm& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EvaluationForm& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EvaluationForm& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the evaluation form.</p>
     */
    inline const EvaluationFormVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EvaluationFormVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EvaluationFormVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EvaluationForm& WithStatus(const EvaluationFormVersionStatus& value) { SetStatus(value); return *this;}
    inline EvaluationForm& WithStatus(EvaluationFormVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline const Aws::Vector<EvaluationFormItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<EvaluationFormItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<EvaluationFormItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline EvaluationForm& WithItems(const Aws::Vector<EvaluationFormItem>& value) { SetItems(value); return *this;}
    inline EvaluationForm& WithItems(Aws::Vector<EvaluationFormItem>&& value) { SetItems(std::move(value)); return *this;}
    inline EvaluationForm& AddItems(const EvaluationFormItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline EvaluationForm& AddItems(EvaluationFormItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A scoring strategy of the evaluation form.</p>
     */
    inline const EvaluationFormScoringStrategy& GetScoringStrategy() const{ return m_scoringStrategy; }
    inline bool ScoringStrategyHasBeenSet() const { return m_scoringStrategyHasBeenSet; }
    inline void SetScoringStrategy(const EvaluationFormScoringStrategy& value) { m_scoringStrategyHasBeenSet = true; m_scoringStrategy = value; }
    inline void SetScoringStrategy(EvaluationFormScoringStrategy&& value) { m_scoringStrategyHasBeenSet = true; m_scoringStrategy = std::move(value); }
    inline EvaluationForm& WithScoringStrategy(const EvaluationFormScoringStrategy& value) { SetScoringStrategy(value); return *this;}
    inline EvaluationForm& WithScoringStrategy(EvaluationFormScoringStrategy&& value) { SetScoringStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the evaluation form was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline EvaluationForm& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline EvaluationForm& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline EvaluationForm& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline EvaluationForm& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline EvaluationForm& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the evaluation form was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline EvaluationForm& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline EvaluationForm& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }
    inline EvaluationForm& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline EvaluationForm& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline EvaluationForm& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline EvaluationForm& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline EvaluationForm& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline EvaluationForm& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline EvaluationForm& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EvaluationForm& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EvaluationForm& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline EvaluationForm& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EvaluationForm& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EvaluationForm& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
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
