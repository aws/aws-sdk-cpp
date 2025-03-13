/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationStatus.h>
#include <aws/connect/model/EvaluationScore.h>
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
   * <p>Summary information about a contact evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationSummary">AWS
   * API Reference</a></p>
   */
  class EvaluationSummary
  {
  public:
    AWS_CONNECT_API EvaluationSummary() = default;
    AWS_CONNECT_API EvaluationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    EvaluationSummary& WithEvaluationId(EvaluationIdT&& value) { SetEvaluationId(std::forward<EvaluationIdT>(value)); return *this;}
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
    EvaluationSummary& WithEvaluationArn(EvaluationArnT&& value) { SetEvaluationArn(std::forward<EvaluationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A title of the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormTitle() const { return m_evaluationFormTitle; }
    inline bool EvaluationFormTitleHasBeenSet() const { return m_evaluationFormTitleHasBeenSet; }
    template<typename EvaluationFormTitleT = Aws::String>
    void SetEvaluationFormTitle(EvaluationFormTitleT&& value) { m_evaluationFormTitleHasBeenSet = true; m_evaluationFormTitle = std::forward<EvaluationFormTitleT>(value); }
    template<typename EvaluationFormTitleT = Aws::String>
    EvaluationSummary& WithEvaluationFormTitle(EvaluationFormTitleT&& value) { SetEvaluationFormTitle(std::forward<EvaluationFormTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const { return m_evaluationFormId; }
    inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }
    template<typename EvaluationFormIdT = Aws::String>
    void SetEvaluationFormId(EvaluationFormIdT&& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = std::forward<EvaluationFormIdT>(value); }
    template<typename EvaluationFormIdT = Aws::String>
    EvaluationSummary& WithEvaluationFormId(EvaluationFormIdT&& value) { SetEvaluationFormId(std::forward<EvaluationFormIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the contact evaluation.</p>
     */
    inline EvaluationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EvaluationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EvaluationSummary& WithStatus(EvaluationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline const Aws::String& GetEvaluatorArn() const { return m_evaluatorArn; }
    inline bool EvaluatorArnHasBeenSet() const { return m_evaluatorArnHasBeenSet; }
    template<typename EvaluatorArnT = Aws::String>
    void SetEvaluatorArn(EvaluatorArnT&& value) { m_evaluatorArnHasBeenSet = true; m_evaluatorArn = std::forward<EvaluatorArnT>(value); }
    template<typename EvaluatorArnT = Aws::String>
    EvaluationSummary& WithEvaluatorArn(EvaluatorArnT&& value) { SetEvaluatorArn(std::forward<EvaluatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall score of the contact evaluation.</p>
     */
    inline const EvaluationScore& GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    template<typename ScoreT = EvaluationScore>
    void SetScore(ScoreT&& value) { m_scoreHasBeenSet = true; m_score = std::forward<ScoreT>(value); }
    template<typename ScoreT = EvaluationScore>
    EvaluationSummary& WithScore(ScoreT&& value) { SetScore(std::forward<ScoreT>(value)); return *this;}
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
    EvaluationSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
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
    EvaluationSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet = false;

    Aws::String m_evaluationArn;
    bool m_evaluationArnHasBeenSet = false;

    Aws::String m_evaluationFormTitle;
    bool m_evaluationFormTitleHasBeenSet = false;

    Aws::String m_evaluationFormId;
    bool m_evaluationFormIdHasBeenSet = false;

    EvaluationStatus m_status{EvaluationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_evaluatorArn;
    bool m_evaluatorArnHasBeenSet = false;

    EvaluationScore m_score;
    bool m_scoreHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
