﻿/**
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
    AWS_IOT_API TaskStatistics() = default;
    AWS_IOT_API TaskStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TaskStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of checks in this audit.</p>
     */
    inline int GetTotalChecks() const { return m_totalChecks; }
    inline bool TotalChecksHasBeenSet() const { return m_totalChecksHasBeenSet; }
    inline void SetTotalChecks(int value) { m_totalChecksHasBeenSet = true; m_totalChecks = value; }
    inline TaskStatistics& WithTotalChecks(int value) { SetTotalChecks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of checks in progress.</p>
     */
    inline int GetInProgressChecks() const { return m_inProgressChecks; }
    inline bool InProgressChecksHasBeenSet() const { return m_inProgressChecksHasBeenSet; }
    inline void SetInProgressChecks(int value) { m_inProgressChecksHasBeenSet = true; m_inProgressChecks = value; }
    inline TaskStatistics& WithInProgressChecks(int value) { SetInProgressChecks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of checks waiting for data collection.</p>
     */
    inline int GetWaitingForDataCollectionChecks() const { return m_waitingForDataCollectionChecks; }
    inline bool WaitingForDataCollectionChecksHasBeenSet() const { return m_waitingForDataCollectionChecksHasBeenSet; }
    inline void SetWaitingForDataCollectionChecks(int value) { m_waitingForDataCollectionChecksHasBeenSet = true; m_waitingForDataCollectionChecks = value; }
    inline TaskStatistics& WithWaitingForDataCollectionChecks(int value) { SetWaitingForDataCollectionChecks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of checks that found compliant resources.</p>
     */
    inline int GetCompliantChecks() const { return m_compliantChecks; }
    inline bool CompliantChecksHasBeenSet() const { return m_compliantChecksHasBeenSet; }
    inline void SetCompliantChecks(int value) { m_compliantChecksHasBeenSet = true; m_compliantChecks = value; }
    inline TaskStatistics& WithCompliantChecks(int value) { SetCompliantChecks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of checks that found noncompliant resources.</p>
     */
    inline int GetNonCompliantChecks() const { return m_nonCompliantChecks; }
    inline bool NonCompliantChecksHasBeenSet() const { return m_nonCompliantChecksHasBeenSet; }
    inline void SetNonCompliantChecks(int value) { m_nonCompliantChecksHasBeenSet = true; m_nonCompliantChecks = value; }
    inline TaskStatistics& WithNonCompliantChecks(int value) { SetNonCompliantChecks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of checks.</p>
     */
    inline int GetFailedChecks() const { return m_failedChecks; }
    inline bool FailedChecksHasBeenSet() const { return m_failedChecksHasBeenSet; }
    inline void SetFailedChecks(int value) { m_failedChecksHasBeenSet = true; m_failedChecks = value; }
    inline TaskStatistics& WithFailedChecks(int value) { SetFailedChecks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of checks that did not run because the audit was canceled.</p>
     */
    inline int GetCanceledChecks() const { return m_canceledChecks; }
    inline bool CanceledChecksHasBeenSet() const { return m_canceledChecksHasBeenSet; }
    inline void SetCanceledChecks(int value) { m_canceledChecksHasBeenSet = true; m_canceledChecks = value; }
    inline TaskStatistics& WithCanceledChecks(int value) { SetCanceledChecks(value); return *this;}
    ///@}
  private:

    int m_totalChecks{0};
    bool m_totalChecksHasBeenSet = false;

    int m_inProgressChecks{0};
    bool m_inProgressChecksHasBeenSet = false;

    int m_waitingForDataCollectionChecks{0};
    bool m_waitingForDataCollectionChecksHasBeenSet = false;

    int m_compliantChecks{0};
    bool m_compliantChecksHasBeenSet = false;

    int m_nonCompliantChecks{0};
    bool m_nonCompliantChecksHasBeenSet = false;

    int m_failedChecks{0};
    bool m_failedChecksHasBeenSet = false;

    int m_canceledChecks{0};
    bool m_canceledChecksHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
