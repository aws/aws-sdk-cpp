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
    AWS_CONNECT_API EvaluationFormSummary();
    AWS_CONNECT_API EvaluationFormSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline EvaluationFormSummary& WithEvaluationFormId(const Aws::String& value) { SetEvaluationFormId(value); return *this;}

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline EvaluationFormSummary& WithEvaluationFormId(Aws::String&& value) { SetEvaluationFormId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline EvaluationFormSummary& WithEvaluationFormId(const char* value) { SetEvaluationFormId(value); return *this;}


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
    inline EvaluationFormSummary& WithEvaluationFormArn(const Aws::String& value) { SetEvaluationFormArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline EvaluationFormSummary& WithEvaluationFormArn(Aws::String&& value) { SetEvaluationFormArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline EvaluationFormSummary& WithEvaluationFormArn(const char* value) { SetEvaluationFormArn(value); return *this;}


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
    inline EvaluationFormSummary& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline EvaluationFormSummary& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A title of the evaluation form.</p>
     */
    inline EvaluationFormSummary& WithTitle(const char* value) { SetTitle(value); return *this;}


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
    inline EvaluationFormSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp for when the evaluation form was created.</p>
     */
    inline EvaluationFormSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


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
    inline EvaluationFormSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline EvaluationFormSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
     * form.</p>
     */
    inline EvaluationFormSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


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
    inline EvaluationFormSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp for when the evaluation form was last updated.</p>
     */
    inline EvaluationFormSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


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
    inline EvaluationFormSummary& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline EvaluationFormSummary& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
     * form.</p>
     */
    inline EvaluationFormSummary& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The timestamp for when the evaluation form was last activated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastActivatedTime() const{ return m_lastActivatedTime; }

    /**
     * <p>The timestamp for when the evaluation form was last activated.</p>
     */
    inline bool LastActivatedTimeHasBeenSet() const { return m_lastActivatedTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the evaluation form was last activated.</p>
     */
    inline void SetLastActivatedTime(const Aws::Utils::DateTime& value) { m_lastActivatedTimeHasBeenSet = true; m_lastActivatedTime = value; }

    /**
     * <p>The timestamp for when the evaluation form was last activated.</p>
     */
    inline void SetLastActivatedTime(Aws::Utils::DateTime&& value) { m_lastActivatedTimeHasBeenSet = true; m_lastActivatedTime = std::move(value); }

    /**
     * <p>The timestamp for when the evaluation form was last activated.</p>
     */
    inline EvaluationFormSummary& WithLastActivatedTime(const Aws::Utils::DateTime& value) { SetLastActivatedTime(value); return *this;}

    /**
     * <p>The timestamp for when the evaluation form was last activated.</p>
     */
    inline EvaluationFormSummary& WithLastActivatedTime(Aws::Utils::DateTime&& value) { SetLastActivatedTime(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the user who last activated the evaluation
     * form.</p>
     */
    inline const Aws::String& GetLastActivatedBy() const{ return m_lastActivatedBy; }

    /**
     * <p> The Amazon Resource Name (ARN) of the user who last activated the evaluation
     * form.</p>
     */
    inline bool LastActivatedByHasBeenSet() const { return m_lastActivatedByHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the user who last activated the evaluation
     * form.</p>
     */
    inline void SetLastActivatedBy(const Aws::String& value) { m_lastActivatedByHasBeenSet = true; m_lastActivatedBy = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the user who last activated the evaluation
     * form.</p>
     */
    inline void SetLastActivatedBy(Aws::String&& value) { m_lastActivatedByHasBeenSet = true; m_lastActivatedBy = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the user who last activated the evaluation
     * form.</p>
     */
    inline void SetLastActivatedBy(const char* value) { m_lastActivatedByHasBeenSet = true; m_lastActivatedBy.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the user who last activated the evaluation
     * form.</p>
     */
    inline EvaluationFormSummary& WithLastActivatedBy(const Aws::String& value) { SetLastActivatedBy(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the user who last activated the evaluation
     * form.</p>
     */
    inline EvaluationFormSummary& WithLastActivatedBy(Aws::String&& value) { SetLastActivatedBy(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the user who last activated the evaluation
     * form.</p>
     */
    inline EvaluationFormSummary& WithLastActivatedBy(const char* value) { SetLastActivatedBy(value); return *this;}


    /**
     * <p>The version number of the latest evaluation form version.</p>
     */
    inline int GetLatestVersion() const{ return m_latestVersion; }

    /**
     * <p>The version number of the latest evaluation form version.</p>
     */
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }

    /**
     * <p>The version number of the latest evaluation form version.</p>
     */
    inline void SetLatestVersion(int value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }

    /**
     * <p>The version number of the latest evaluation form version.</p>
     */
    inline EvaluationFormSummary& WithLatestVersion(int value) { SetLatestVersion(value); return *this;}


    /**
     * <p>The version of the active evaluation form version.</p>
     */
    inline int GetActiveVersion() const{ return m_activeVersion; }

    /**
     * <p>The version of the active evaluation form version.</p>
     */
    inline bool ActiveVersionHasBeenSet() const { return m_activeVersionHasBeenSet; }

    /**
     * <p>The version of the active evaluation form version.</p>
     */
    inline void SetActiveVersion(int value) { m_activeVersionHasBeenSet = true; m_activeVersion = value; }

    /**
     * <p>The version of the active evaluation form version.</p>
     */
    inline EvaluationFormSummary& WithActiveVersion(int value) { SetActiveVersion(value); return *this;}

  private:

    Aws::String m_evaluationFormId;
    bool m_evaluationFormIdHasBeenSet = false;

    Aws::String m_evaluationFormArn;
    bool m_evaluationFormArnHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastActivatedTime;
    bool m_lastActivatedTimeHasBeenSet = false;

    Aws::String m_lastActivatedBy;
    bool m_lastActivatedByHasBeenSet = false;

    int m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    int m_activeVersion;
    bool m_activeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
