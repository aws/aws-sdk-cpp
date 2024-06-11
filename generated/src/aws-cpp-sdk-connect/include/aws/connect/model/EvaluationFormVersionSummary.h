/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationFormVersionStatus.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormVersionSummary">AWS
   * API Reference</a></p>
   */
  class EvaluationFormVersionSummary
  {
  public:
    AWS_CONNECT_API EvaluationFormVersionSummary();
    AWS_CONNECT_API EvaluationFormVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline const Aws::String& GetEvaluationFormArn() const{ return m_evaluationFormArn; }
    inline bool EvaluationFormArnHasBeenSet() const { return m_evaluationFormArnHasBeenSet; }
    inline void SetEvaluationFormArn(const Aws::String& value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn = value; }
    inline void SetEvaluationFormArn(Aws::String&& value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn = std::move(value); }
    inline void SetEvaluationFormArn(const char* value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn.assign(value); }
    inline EvaluationFormVersionSummary& WithEvaluationFormArn(const Aws::String& value) { SetEvaluationFormArn(value); return *this;}
    inline EvaluationFormVersionSummary& WithEvaluationFormArn(Aws::String&& value) { SetEvaluationFormArn(std::move(value)); return *this;}
    inline EvaluationFormVersionSummary& WithEvaluationFormArn(const char* value) { SetEvaluationFormArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const{ return m_evaluationFormId; }
    inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }
    inline void SetEvaluationFormId(const Aws::String& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = value; }
    inline void SetEvaluationFormId(Aws::String&& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = std::move(value); }
    inline void SetEvaluationFormId(const char* value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId.assign(value); }
    inline EvaluationFormVersionSummary& WithEvaluationFormId(const Aws::String& value) { SetEvaluationFormId(value); return *this;}
    inline EvaluationFormVersionSummary& WithEvaluationFormId(Aws::String&& value) { SetEvaluationFormId(std::move(value)); return *this;}
    inline EvaluationFormVersionSummary& WithEvaluationFormId(const char* value) { SetEvaluationFormId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version of the evaluation form.</p>
     */
    inline int GetEvaluationFormVersion() const{ return m_evaluationFormVersion; }
    inline bool EvaluationFormVersionHasBeenSet() const { return m_evaluationFormVersionHasBeenSet; }
    inline void SetEvaluationFormVersion(int value) { m_evaluationFormVersionHasBeenSet = true; m_evaluationFormVersion = value; }
    inline EvaluationFormVersionSummary& WithEvaluationFormVersion(int value) { SetEvaluationFormVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The flag indicating whether the evaluation form is locked for changes.</p>
     */
    inline bool GetLocked() const{ return m_locked; }
    inline bool LockedHasBeenSet() const { return m_lockedHasBeenSet; }
    inline void SetLocked(bool value) { m_lockedHasBeenSet = true; m_locked = value; }
    inline EvaluationFormVersionSummary& WithLocked(bool value) { SetLocked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the evaluation form.</p>
     */
    inline const EvaluationFormVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EvaluationFormVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EvaluationFormVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EvaluationFormVersionSummary& WithStatus(const EvaluationFormVersionStatus& value) { SetStatus(value); return *this;}
    inline EvaluationFormVersionSummary& WithStatus(EvaluationFormVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the evaluation form was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline EvaluationFormVersionSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline EvaluationFormVersionSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
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
    inline EvaluationFormVersionSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline EvaluationFormVersionSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline EvaluationFormVersionSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the evaluation form was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline EvaluationFormVersionSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline EvaluationFormVersionSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
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
    inline EvaluationFormVersionSummary& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline EvaluationFormVersionSummary& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline EvaluationFormVersionSummary& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}
  private:

    Aws::String m_evaluationFormArn;
    bool m_evaluationFormArnHasBeenSet = false;

    Aws::String m_evaluationFormId;
    bool m_evaluationFormIdHasBeenSet = false;

    int m_evaluationFormVersion;
    bool m_evaluationFormVersionHasBeenSet = false;

    bool m_locked;
    bool m_lockedHasBeenSet = false;

    EvaluationFormVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
