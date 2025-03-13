/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>The object containing the result statistics for a completed assessment
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTaskAssessmentRunResultStatistic">AWS
   * API Reference</a></p>
   */
  class ReplicationTaskAssessmentRunResultStatistic
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRunResultStatistic() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRunResultStatistic(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRunResultStatistic& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of individual assessments that successfully passed all checks in
     * the assessment run.</p>
     */
    inline int GetPassed() const { return m_passed; }
    inline bool PassedHasBeenSet() const { return m_passedHasBeenSet; }
    inline void SetPassed(int value) { m_passedHasBeenSet = true; m_passed = value; }
    inline ReplicationTaskAssessmentRunResultStatistic& WithPassed(int value) { SetPassed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of individual assessments that failed to meet the criteria defined
     * in the assessment run.</p>
     */
    inline int GetFailed() const { return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }
    inline ReplicationTaskAssessmentRunResultStatistic& WithFailed(int value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of individual assessments that encountered a critical error and
     * could not complete properly.</p>
     */
    inline int GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(int value) { m_errorHasBeenSet = true; m_error = value; }
    inline ReplicationTaskAssessmentRunResultStatistic& WithError(int value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the recent completed AssessmentRun triggered a warning.</p>
     */
    inline int GetWarning() const { return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    inline void SetWarning(int value) { m_warningHasBeenSet = true; m_warning = value; }
    inline ReplicationTaskAssessmentRunResultStatistic& WithWarning(int value) { SetWarning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of individual assessments that were cancelled during the
     * assessment run. </p>
     */
    inline int GetCancelled() const { return m_cancelled; }
    inline bool CancelledHasBeenSet() const { return m_cancelledHasBeenSet; }
    inline void SetCancelled(int value) { m_cancelledHasBeenSet = true; m_cancelled = value; }
    inline ReplicationTaskAssessmentRunResultStatistic& WithCancelled(int value) { SetCancelled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of individual assessments that were skipped during the assessment
     * run.</p>
     */
    inline int GetSkipped() const { return m_skipped; }
    inline bool SkippedHasBeenSet() const { return m_skippedHasBeenSet; }
    inline void SetSkipped(int value) { m_skippedHasBeenSet = true; m_skipped = value; }
    inline ReplicationTaskAssessmentRunResultStatistic& WithSkipped(int value) { SetSkipped(value); return *this;}
    ///@}
  private:

    int m_passed{0};
    bool m_passedHasBeenSet = false;

    int m_failed{0};
    bool m_failedHasBeenSet = false;

    int m_error{0};
    bool m_errorHasBeenSet = false;

    int m_warning{0};
    bool m_warningHasBeenSet = false;

    int m_cancelled{0};
    bool m_cancelledHasBeenSet = false;

    int m_skipped{0};
    bool m_skippedHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
