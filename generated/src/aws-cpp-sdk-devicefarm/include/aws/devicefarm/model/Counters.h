/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents entity counters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Counters">AWS
   * API Reference</a></p>
   */
  class Counters
  {
  public:
    AWS_DEVICEFARM_API Counters() = default;
    AWS_DEVICEFARM_API Counters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Counters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of entities.</p>
     */
    inline int GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }
    inline Counters& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of passed entities.</p>
     */
    inline int GetPassed() const { return m_passed; }
    inline bool PassedHasBeenSet() const { return m_passedHasBeenSet; }
    inline void SetPassed(int value) { m_passedHasBeenSet = true; m_passed = value; }
    inline Counters& WithPassed(int value) { SetPassed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of failed entities.</p>
     */
    inline int GetFailed() const { return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }
    inline Counters& WithFailed(int value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of warned entities.</p>
     */
    inline int GetWarned() const { return m_warned; }
    inline bool WarnedHasBeenSet() const { return m_warnedHasBeenSet; }
    inline void SetWarned(int value) { m_warnedHasBeenSet = true; m_warned = value; }
    inline Counters& WithWarned(int value) { SetWarned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of errored entities.</p>
     */
    inline int GetErrored() const { return m_errored; }
    inline bool ErroredHasBeenSet() const { return m_erroredHasBeenSet; }
    inline void SetErrored(int value) { m_erroredHasBeenSet = true; m_errored = value; }
    inline Counters& WithErrored(int value) { SetErrored(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of stopped entities.</p>
     */
    inline int GetStopped() const { return m_stopped; }
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }
    inline void SetStopped(int value) { m_stoppedHasBeenSet = true; m_stopped = value; }
    inline Counters& WithStopped(int value) { SetStopped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of skipped entities.</p>
     */
    inline int GetSkipped() const { return m_skipped; }
    inline bool SkippedHasBeenSet() const { return m_skippedHasBeenSet; }
    inline void SetSkipped(int value) { m_skippedHasBeenSet = true; m_skipped = value; }
    inline Counters& WithSkipped(int value) { SetSkipped(value); return *this;}
    ///@}
  private:

    int m_total{0};
    bool m_totalHasBeenSet = false;

    int m_passed{0};
    bool m_passedHasBeenSet = false;

    int m_failed{0};
    bool m_failedHasBeenSet = false;

    int m_warned{0};
    bool m_warnedHasBeenSet = false;

    int m_errored{0};
    bool m_erroredHasBeenSet = false;

    int m_stopped{0};
    bool m_stoppedHasBeenSet = false;

    int m_skipped{0};
    bool m_skippedHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
