/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DEVICEFARM_API Counters
  {
  public:
    Counters();
    Counters(Aws::Utils::Json::JsonView jsonValue);
    Counters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of entities.</p>
     */
    inline int GetTotal() const{ return m_total; }

    /**
     * <p>The total number of entities.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total number of entities.</p>
     */
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total number of entities.</p>
     */
    inline Counters& WithTotal(int value) { SetTotal(value); return *this;}


    /**
     * <p>The number of passed entities.</p>
     */
    inline int GetPassed() const{ return m_passed; }

    /**
     * <p>The number of passed entities.</p>
     */
    inline bool PassedHasBeenSet() const { return m_passedHasBeenSet; }

    /**
     * <p>The number of passed entities.</p>
     */
    inline void SetPassed(int value) { m_passedHasBeenSet = true; m_passed = value; }

    /**
     * <p>The number of passed entities.</p>
     */
    inline Counters& WithPassed(int value) { SetPassed(value); return *this;}


    /**
     * <p>The number of failed entities.</p>
     */
    inline int GetFailed() const{ return m_failed; }

    /**
     * <p>The number of failed entities.</p>
     */
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }

    /**
     * <p>The number of failed entities.</p>
     */
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p>The number of failed entities.</p>
     */
    inline Counters& WithFailed(int value) { SetFailed(value); return *this;}


    /**
     * <p>The number of warned entities.</p>
     */
    inline int GetWarned() const{ return m_warned; }

    /**
     * <p>The number of warned entities.</p>
     */
    inline bool WarnedHasBeenSet() const { return m_warnedHasBeenSet; }

    /**
     * <p>The number of warned entities.</p>
     */
    inline void SetWarned(int value) { m_warnedHasBeenSet = true; m_warned = value; }

    /**
     * <p>The number of warned entities.</p>
     */
    inline Counters& WithWarned(int value) { SetWarned(value); return *this;}


    /**
     * <p>The number of errored entities.</p>
     */
    inline int GetErrored() const{ return m_errored; }

    /**
     * <p>The number of errored entities.</p>
     */
    inline bool ErroredHasBeenSet() const { return m_erroredHasBeenSet; }

    /**
     * <p>The number of errored entities.</p>
     */
    inline void SetErrored(int value) { m_erroredHasBeenSet = true; m_errored = value; }

    /**
     * <p>The number of errored entities.</p>
     */
    inline Counters& WithErrored(int value) { SetErrored(value); return *this;}


    /**
     * <p>The number of stopped entities.</p>
     */
    inline int GetStopped() const{ return m_stopped; }

    /**
     * <p>The number of stopped entities.</p>
     */
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }

    /**
     * <p>The number of stopped entities.</p>
     */
    inline void SetStopped(int value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The number of stopped entities.</p>
     */
    inline Counters& WithStopped(int value) { SetStopped(value); return *this;}


    /**
     * <p>The number of skipped entities.</p>
     */
    inline int GetSkipped() const{ return m_skipped; }

    /**
     * <p>The number of skipped entities.</p>
     */
    inline bool SkippedHasBeenSet() const { return m_skippedHasBeenSet; }

    /**
     * <p>The number of skipped entities.</p>
     */
    inline void SetSkipped(int value) { m_skippedHasBeenSet = true; m_skipped = value; }

    /**
     * <p>The number of skipped entities.</p>
     */
    inline Counters& WithSkipped(int value) { SetSkipped(value); return *this;}

  private:

    int m_total;
    bool m_totalHasBeenSet;

    int m_passed;
    bool m_passedHasBeenSet;

    int m_failed;
    bool m_failedHasBeenSet;

    int m_warned;
    bool m_warnedHasBeenSet;

    int m_errored;
    bool m_erroredHasBeenSet;

    int m_stopped;
    bool m_stoppedHasBeenSet;

    int m_skipped;
    bool m_skippedHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
