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
   * <p>Statistics for the checks performed during the audit.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TaskStatistics">AWS
   * API Reference</a></p>
   */
  class TaskStatistics
  {
  public:
    AWS_IOT_API TaskStatistics();
    AWS_IOT_API TaskStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TaskStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of checks in this audit.</p>
     */
    inline int GetTotalChecks() const{ return m_totalChecks; }

    /**
     * <p>The number of checks in this audit.</p>
     */
    inline bool TotalChecksHasBeenSet() const { return m_totalChecksHasBeenSet; }

    /**
     * <p>The number of checks in this audit.</p>
     */
    inline void SetTotalChecks(int value) { m_totalChecksHasBeenSet = true; m_totalChecks = value; }

    /**
     * <p>The number of checks in this audit.</p>
     */
    inline TaskStatistics& WithTotalChecks(int value) { SetTotalChecks(value); return *this;}


    /**
     * <p>The number of checks in progress.</p>
     */
    inline int GetInProgressChecks() const{ return m_inProgressChecks; }

    /**
     * <p>The number of checks in progress.</p>
     */
    inline bool InProgressChecksHasBeenSet() const { return m_inProgressChecksHasBeenSet; }

    /**
     * <p>The number of checks in progress.</p>
     */
    inline void SetInProgressChecks(int value) { m_inProgressChecksHasBeenSet = true; m_inProgressChecks = value; }

    /**
     * <p>The number of checks in progress.</p>
     */
    inline TaskStatistics& WithInProgressChecks(int value) { SetInProgressChecks(value); return *this;}


    /**
     * <p>The number of checks waiting for data collection.</p>
     */
    inline int GetWaitingForDataCollectionChecks() const{ return m_waitingForDataCollectionChecks; }

    /**
     * <p>The number of checks waiting for data collection.</p>
     */
    inline bool WaitingForDataCollectionChecksHasBeenSet() const { return m_waitingForDataCollectionChecksHasBeenSet; }

    /**
     * <p>The number of checks waiting for data collection.</p>
     */
    inline void SetWaitingForDataCollectionChecks(int value) { m_waitingForDataCollectionChecksHasBeenSet = true; m_waitingForDataCollectionChecks = value; }

    /**
     * <p>The number of checks waiting for data collection.</p>
     */
    inline TaskStatistics& WithWaitingForDataCollectionChecks(int value) { SetWaitingForDataCollectionChecks(value); return *this;}


    /**
     * <p>The number of checks that found compliant resources.</p>
     */
    inline int GetCompliantChecks() const{ return m_compliantChecks; }

    /**
     * <p>The number of checks that found compliant resources.</p>
     */
    inline bool CompliantChecksHasBeenSet() const { return m_compliantChecksHasBeenSet; }

    /**
     * <p>The number of checks that found compliant resources.</p>
     */
    inline void SetCompliantChecks(int value) { m_compliantChecksHasBeenSet = true; m_compliantChecks = value; }

    /**
     * <p>The number of checks that found compliant resources.</p>
     */
    inline TaskStatistics& WithCompliantChecks(int value) { SetCompliantChecks(value); return *this;}


    /**
     * <p>The number of checks that found noncompliant resources.</p>
     */
    inline int GetNonCompliantChecks() const{ return m_nonCompliantChecks; }

    /**
     * <p>The number of checks that found noncompliant resources.</p>
     */
    inline bool NonCompliantChecksHasBeenSet() const { return m_nonCompliantChecksHasBeenSet; }

    /**
     * <p>The number of checks that found noncompliant resources.</p>
     */
    inline void SetNonCompliantChecks(int value) { m_nonCompliantChecksHasBeenSet = true; m_nonCompliantChecks = value; }

    /**
     * <p>The number of checks that found noncompliant resources.</p>
     */
    inline TaskStatistics& WithNonCompliantChecks(int value) { SetNonCompliantChecks(value); return *this;}


    /**
     * <p>The number of checks.</p>
     */
    inline int GetFailedChecks() const{ return m_failedChecks; }

    /**
     * <p>The number of checks.</p>
     */
    inline bool FailedChecksHasBeenSet() const { return m_failedChecksHasBeenSet; }

    /**
     * <p>The number of checks.</p>
     */
    inline void SetFailedChecks(int value) { m_failedChecksHasBeenSet = true; m_failedChecks = value; }

    /**
     * <p>The number of checks.</p>
     */
    inline TaskStatistics& WithFailedChecks(int value) { SetFailedChecks(value); return *this;}


    /**
     * <p>The number of checks that did not run because the audit was canceled.</p>
     */
    inline int GetCanceledChecks() const{ return m_canceledChecks; }

    /**
     * <p>The number of checks that did not run because the audit was canceled.</p>
     */
    inline bool CanceledChecksHasBeenSet() const { return m_canceledChecksHasBeenSet; }

    /**
     * <p>The number of checks that did not run because the audit was canceled.</p>
     */
    inline void SetCanceledChecks(int value) { m_canceledChecksHasBeenSet = true; m_canceledChecks = value; }

    /**
     * <p>The number of checks that did not run because the audit was canceled.</p>
     */
    inline TaskStatistics& WithCanceledChecks(int value) { SetCanceledChecks(value); return *this;}

  private:

    int m_totalChecks;
    bool m_totalChecksHasBeenSet = false;

    int m_inProgressChecks;
    bool m_inProgressChecksHasBeenSet = false;

    int m_waitingForDataCollectionChecks;
    bool m_waitingForDataCollectionChecksHasBeenSet = false;

    int m_compliantChecks;
    bool m_compliantChecksHasBeenSet = false;

    int m_nonCompliantChecks;
    bool m_nonCompliantChecksHasBeenSet = false;

    int m_failedChecks;
    bool m_failedChecksHasBeenSet = false;

    int m_canceledChecks;
    bool m_canceledChecksHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
