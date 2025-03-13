/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Summary information about an evaluation form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormSummary">AWS
   * API Reference</a></p>
   */
  class EvaluationFormSummary
  {
  public:
    AWS_CONNECT_API EvaluationFormSummary() = default;
    AWS_CONNECT_API EvaluationFormSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const { return m_evaluationFormId; }
    inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }
    template<typename EvaluationFormIdT = Aws::String>
    void SetEvaluationFormId(EvaluationFormIdT&& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = std::forward<EvaluationFormIdT>(value); }
    template<typename EvaluationFormIdT = Aws::String>
    EvaluationFormSummary& WithEvaluationFormId(EvaluationFormIdT&& value) { SetEvaluationFormId(std::forward<EvaluationFormIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline const Aws::String& GetEvaluationFormArn() const { return m_evaluationFormArn; }
    inline bool EvaluationFormArnHasBeenSet() const { return m_evaluationFormArnHasBeenSet; }
    template<typename EvaluationFormArnT = Aws::String>
    void SetEvaluationFormArn(EvaluationFormArnT&& value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn = std::forward<EvaluationFormArnT>(value); }
    template<typename EvaluationFormArnT = Aws::String>
    EvaluationFormSummary& WithEvaluationFormArn(EvaluationFormArnT&& value) { SetEvaluationFormArn(std::forward<EvaluationFormArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A title of the evaluation form.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    EvaluationFormSummary& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the evaluation form was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    EvaluationFormSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    EvaluationFormSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the evaluation form was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    EvaluationFormSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    EvaluationFormSummary& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the evaluation form was last activated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastActivatedTime() const { return m_lastActivatedTime; }
    inline bool LastActivatedTimeHasBeenSet() const { return m_lastActivatedTimeHasBeenSet; }
    template<typename LastActivatedTimeT = Aws::Utils::DateTime>
    void SetLastActivatedTime(LastActivatedTimeT&& value) { m_lastActivatedTimeHasBeenSet = true; m_lastActivatedTime = std::forward<LastActivatedTimeT>(value); }
    template<typename LastActivatedTimeT = Aws::Utils::DateTime>
    EvaluationFormSummary& WithLastActivatedTime(LastActivatedTimeT&& value) { SetLastActivatedTime(std::forward<LastActivatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the user who last activated the evaluation
     * form.</p>
     */
    inline const Aws::String& GetLastActivatedBy() const { return m_lastActivatedBy; }
    inline bool LastActivatedByHasBeenSet() const { return m_lastActivatedByHasBeenSet; }
    template<typename LastActivatedByT = Aws::String>
    void SetLastActivatedBy(LastActivatedByT&& value) { m_lastActivatedByHasBeenSet = true; m_lastActivatedBy = std::forward<LastActivatedByT>(value); }
    template<typename LastActivatedByT = Aws::String>
    EvaluationFormSummary& WithLastActivatedBy(LastActivatedByT&& value) { SetLastActivatedBy(std::forward<LastActivatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the latest evaluation form version.</p>
     */
    inline int GetLatestVersion() const { return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    inline void SetLatestVersion(int value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }
    inline EvaluationFormSummary& WithLatestVersion(int value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the active evaluation form version.</p>
     */
    inline int GetActiveVersion() const { return m_activeVersion; }
    inline bool ActiveVersionHasBeenSet() const { return m_activeVersionHasBeenSet; }
    inline void SetActiveVersion(int value) { m_activeVersionHasBeenSet = true; m_activeVersion = value; }
    inline EvaluationFormSummary& WithActiveVersion(int value) { SetActiveVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_evaluationFormId;
    bool m_evaluationFormIdHasBeenSet = false;

    Aws::String m_evaluationFormArn;
    bool m_evaluationFormArnHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastActivatedTime{};
    bool m_lastActivatedTimeHasBeenSet = false;

    Aws::String m_lastActivatedBy;
    bool m_lastActivatedByHasBeenSet = false;

    int m_latestVersion{0};
    bool m_latestVersionHasBeenSet = false;

    int m_activeVersion{0};
    bool m_activeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
