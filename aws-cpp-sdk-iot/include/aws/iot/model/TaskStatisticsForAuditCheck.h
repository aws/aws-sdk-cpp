/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{

  /**
   * <p>Provides summary counts of how many tasks for findings are in a particular
   * state. This information is included in the response from
   * DescribeAuditMitigationActionsTask.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TaskStatisticsForAuditCheck">AWS
   * API Reference</a></p>
   */
  class TaskStatisticsForAuditCheck
  {
  public:
    AWS_IOT_API TaskStatisticsForAuditCheck();
    AWS_IOT_API TaskStatisticsForAuditCheck(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TaskStatisticsForAuditCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of findings to which a task is being applied.</p>
     */
    inline long long GetTotalFindingsCount() const{ return m_totalFindingsCount; }

    /**
     * <p>The total number of findings to which a task is being applied.</p>
     */
    inline bool TotalFindingsCountHasBeenSet() const { return m_totalFindingsCountHasBeenSet; }

    /**
     * <p>The total number of findings to which a task is being applied.</p>
     */
    inline void SetTotalFindingsCount(long long value) { m_totalFindingsCountHasBeenSet = true; m_totalFindingsCount = value; }

    /**
     * <p>The total number of findings to which a task is being applied.</p>
     */
    inline TaskStatisticsForAuditCheck& WithTotalFindingsCount(long long value) { SetTotalFindingsCount(value); return *this;}


    /**
     * <p>The number of findings for which at least one of the actions failed when
     * applied.</p>
     */
    inline long long GetFailedFindingsCount() const{ return m_failedFindingsCount; }

    /**
     * <p>The number of findings for which at least one of the actions failed when
     * applied.</p>
     */
    inline bool FailedFindingsCountHasBeenSet() const { return m_failedFindingsCountHasBeenSet; }

    /**
     * <p>The number of findings for which at least one of the actions failed when
     * applied.</p>
     */
    inline void SetFailedFindingsCount(long long value) { m_failedFindingsCountHasBeenSet = true; m_failedFindingsCount = value; }

    /**
     * <p>The number of findings for which at least one of the actions failed when
     * applied.</p>
     */
    inline TaskStatisticsForAuditCheck& WithFailedFindingsCount(long long value) { SetFailedFindingsCount(value); return *this;}


    /**
     * <p>The number of findings for which all mitigation actions succeeded when
     * applied.</p>
     */
    inline long long GetSucceededFindingsCount() const{ return m_succeededFindingsCount; }

    /**
     * <p>The number of findings for which all mitigation actions succeeded when
     * applied.</p>
     */
    inline bool SucceededFindingsCountHasBeenSet() const { return m_succeededFindingsCountHasBeenSet; }

    /**
     * <p>The number of findings for which all mitigation actions succeeded when
     * applied.</p>
     */
    inline void SetSucceededFindingsCount(long long value) { m_succeededFindingsCountHasBeenSet = true; m_succeededFindingsCount = value; }

    /**
     * <p>The number of findings for which all mitigation actions succeeded when
     * applied.</p>
     */
    inline TaskStatisticsForAuditCheck& WithSucceededFindingsCount(long long value) { SetSucceededFindingsCount(value); return *this;}


    /**
     * <p>The number of findings skipped because of filter conditions provided in the
     * parameters to the command.</p>
     */
    inline long long GetSkippedFindingsCount() const{ return m_skippedFindingsCount; }

    /**
     * <p>The number of findings skipped because of filter conditions provided in the
     * parameters to the command.</p>
     */
    inline bool SkippedFindingsCountHasBeenSet() const { return m_skippedFindingsCountHasBeenSet; }

    /**
     * <p>The number of findings skipped because of filter conditions provided in the
     * parameters to the command.</p>
     */
    inline void SetSkippedFindingsCount(long long value) { m_skippedFindingsCountHasBeenSet = true; m_skippedFindingsCount = value; }

    /**
     * <p>The number of findings skipped because of filter conditions provided in the
     * parameters to the command.</p>
     */
    inline TaskStatisticsForAuditCheck& WithSkippedFindingsCount(long long value) { SetSkippedFindingsCount(value); return *this;}


    /**
     * <p>The number of findings to which the mitigation action task was canceled when
     * applied.</p>
     */
    inline long long GetCanceledFindingsCount() const{ return m_canceledFindingsCount; }

    /**
     * <p>The number of findings to which the mitigation action task was canceled when
     * applied.</p>
     */
    inline bool CanceledFindingsCountHasBeenSet() const { return m_canceledFindingsCountHasBeenSet; }

    /**
     * <p>The number of findings to which the mitigation action task was canceled when
     * applied.</p>
     */
    inline void SetCanceledFindingsCount(long long value) { m_canceledFindingsCountHasBeenSet = true; m_canceledFindingsCount = value; }

    /**
     * <p>The number of findings to which the mitigation action task was canceled when
     * applied.</p>
     */
    inline TaskStatisticsForAuditCheck& WithCanceledFindingsCount(long long value) { SetCanceledFindingsCount(value); return *this;}

  private:

    long long m_totalFindingsCount;
    bool m_totalFindingsCountHasBeenSet = false;

    long long m_failedFindingsCount;
    bool m_failedFindingsCountHasBeenSet = false;

    long long m_succeededFindingsCount;
    bool m_succeededFindingsCountHasBeenSet = false;

    long long m_skippedFindingsCount;
    bool m_skippedFindingsCountHasBeenSet = false;

    long long m_canceledFindingsCount;
    bool m_canceledFindingsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
