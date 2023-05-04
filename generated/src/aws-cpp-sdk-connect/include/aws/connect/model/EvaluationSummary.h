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
    AWS_CONNECT_API EvaluationSummary();
    AWS_CONNECT_API EvaluationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline EvaluationSummary& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline EvaluationSummary& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline EvaluationSummary& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}


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
    inline EvaluationSummary& WithEvaluationArn(const Aws::String& value) { SetEvaluationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline EvaluationSummary& WithEvaluationArn(Aws::String&& value) { SetEvaluationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
     */
    inline EvaluationSummary& WithEvaluationArn(const char* value) { SetEvaluationArn(value); return *this;}


    /**
     * <p>A title of the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormTitle() const{ return m_evaluationFormTitle; }

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline bool EvaluationFormTitleHasBeenSet() const { return m_evaluationFormTitleHasBeenSet; }

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline void SetEvaluationFormTitle(const Aws::String& value) { m_evaluationFormTitleHasBeenSet = true; m_evaluationFormTitle = value; }

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline void SetEvaluationFormTitle(Aws::String&& value) { m_evaluationFormTitleHasBeenSet = true; m_evaluationFormTitle = std::move(value); }

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline void SetEvaluationFormTitle(const char* value) { m_evaluationFormTitleHasBeenSet = true; m_evaluationFormTitle.assign(value); }

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline EvaluationSummary& WithEvaluationFormTitle(const Aws::String& value) { SetEvaluationFormTitle(value); return *this;}

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline EvaluationSummary& WithEvaluationFormTitle(Aws::String&& value) { SetEvaluationFormTitle(std::move(value)); return *this;}

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline EvaluationSummary& WithEvaluationFormTitle(const char* value) { SetEvaluationFormTitle(value); return *this;}


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
    inline EvaluationSummary& WithEvaluationFormId(const Aws::String& value) { SetEvaluationFormId(value); return *this;}

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline EvaluationSummary& WithEvaluationFormId(Aws::String&& value) { SetEvaluationFormId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline EvaluationSummary& WithEvaluationFormId(const char* value) { SetEvaluationFormId(value); return *this;}


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
    inline EvaluationSummary& WithStatus(const EvaluationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the contact evaluation.</p>
     */
    inline EvaluationSummary& WithStatus(EvaluationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline const Aws::String& GetEvaluatorArn() const{ return m_evaluatorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline bool EvaluatorArnHasBeenSet() const { return m_evaluatorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline void SetEvaluatorArn(const Aws::String& value) { m_evaluatorArnHasBeenSet = true; m_evaluatorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline void SetEvaluatorArn(Aws::String&& value) { m_evaluatorArnHasBeenSet = true; m_evaluatorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline void SetEvaluatorArn(const char* value) { m_evaluatorArnHasBeenSet = true; m_evaluatorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline EvaluationSummary& WithEvaluatorArn(const Aws::String& value) { SetEvaluatorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline EvaluationSummary& WithEvaluatorArn(Aws::String&& value) { SetEvaluatorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline EvaluationSummary& WithEvaluatorArn(const char* value) { SetEvaluatorArn(value); return *this;}


    /**
     * <p>The overall score of the contact evaluation.</p>
     */
    inline const EvaluationScore& GetScore() const{ return m_score; }

    /**
     * <p>The overall score of the contact evaluation.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The overall score of the contact evaluation.</p>
     */
    inline void SetScore(const EvaluationScore& value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The overall score of the contact evaluation.</p>
     */
    inline void SetScore(EvaluationScore&& value) { m_scoreHasBeenSet = true; m_score = std::move(value); }

    /**
     * <p>The overall score of the contact evaluation.</p>
     */
    inline EvaluationSummary& WithScore(const EvaluationScore& value) { SetScore(value); return *this;}

    /**
     * <p>The overall score of the contact evaluation.</p>
     */
    inline EvaluationSummary& WithScore(EvaluationScore&& value) { SetScore(std::move(value)); return *this;}


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
    inline EvaluationSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp for when the evaluation was created.</p>
     */
    inline EvaluationSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


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
    inline EvaluationSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp for when the evaluation was last updated.</p>
     */
    inline EvaluationSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet = false;

    Aws::String m_evaluationArn;
    bool m_evaluationArnHasBeenSet = false;

    Aws::String m_evaluationFormTitle;
    bool m_evaluationFormTitleHasBeenSet = false;

    Aws::String m_evaluationFormId;
    bool m_evaluationFormIdHasBeenSet = false;

    EvaluationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_evaluatorArn;
    bool m_evaluatorArnHasBeenSet = false;

    EvaluationScore m_score;
    bool m_scoreHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
