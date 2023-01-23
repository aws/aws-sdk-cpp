/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>The status, start time, and end time of a backtest, as well as a failure
   * reason if applicable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/TestWindowSummary">AWS
   * API Reference</a></p>
   */
  class TestWindowSummary
  {
  public:
    AWS_FORECASTSERVICE_API TestWindowSummary();
    AWS_FORECASTSERVICE_API TestWindowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API TestWindowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time at which the test began.</p>
     */
    inline const Aws::Utils::DateTime& GetTestWindowStart() const{ return m_testWindowStart; }

    /**
     * <p>The time at which the test began.</p>
     */
    inline bool TestWindowStartHasBeenSet() const { return m_testWindowStartHasBeenSet; }

    /**
     * <p>The time at which the test began.</p>
     */
    inline void SetTestWindowStart(const Aws::Utils::DateTime& value) { m_testWindowStartHasBeenSet = true; m_testWindowStart = value; }

    /**
     * <p>The time at which the test began.</p>
     */
    inline void SetTestWindowStart(Aws::Utils::DateTime&& value) { m_testWindowStartHasBeenSet = true; m_testWindowStart = std::move(value); }

    /**
     * <p>The time at which the test began.</p>
     */
    inline TestWindowSummary& WithTestWindowStart(const Aws::Utils::DateTime& value) { SetTestWindowStart(value); return *this;}

    /**
     * <p>The time at which the test began.</p>
     */
    inline TestWindowSummary& WithTestWindowStart(Aws::Utils::DateTime&& value) { SetTestWindowStart(std::move(value)); return *this;}


    /**
     * <p>The time at which the test ended.</p>
     */
    inline const Aws::Utils::DateTime& GetTestWindowEnd() const{ return m_testWindowEnd; }

    /**
     * <p>The time at which the test ended.</p>
     */
    inline bool TestWindowEndHasBeenSet() const { return m_testWindowEndHasBeenSet; }

    /**
     * <p>The time at which the test ended.</p>
     */
    inline void SetTestWindowEnd(const Aws::Utils::DateTime& value) { m_testWindowEndHasBeenSet = true; m_testWindowEnd = value; }

    /**
     * <p>The time at which the test ended.</p>
     */
    inline void SetTestWindowEnd(Aws::Utils::DateTime&& value) { m_testWindowEndHasBeenSet = true; m_testWindowEnd = std::move(value); }

    /**
     * <p>The time at which the test ended.</p>
     */
    inline TestWindowSummary& WithTestWindowEnd(const Aws::Utils::DateTime& value) { SetTestWindowEnd(value); return *this;}

    /**
     * <p>The time at which the test ended.</p>
     */
    inline TestWindowSummary& WithTestWindowEnd(Aws::Utils::DateTime&& value) { SetTestWindowEnd(std::move(value)); return *this;}


    /**
     * <p>The status of the test. Possible status values are:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> </p>
     * </li> <li> <p> <code>CREATE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the test. Possible status values are:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> </p>
     * </li> <li> <p> <code>CREATE_FAILED</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the test. Possible status values are:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> </p>
     * </li> <li> <p> <code>CREATE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the test. Possible status values are:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> </p>
     * </li> <li> <p> <code>CREATE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the test. Possible status values are:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> </p>
     * </li> <li> <p> <code>CREATE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the test. Possible status values are:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> </p>
     * </li> <li> <p> <code>CREATE_FAILED</code> </p> </li> </ul>
     */
    inline TestWindowSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the test. Possible status values are:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> </p>
     * </li> <li> <p> <code>CREATE_FAILED</code> </p> </li> </ul>
     */
    inline TestWindowSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the test. Possible status values are:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> </p>
     * </li> <li> <p> <code>CREATE_FAILED</code> </p> </li> </ul>
     */
    inline TestWindowSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If the test failed, the reason why it failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If the test failed, the reason why it failed.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>If the test failed, the reason why it failed.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>If the test failed, the reason why it failed.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>If the test failed, the reason why it failed.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>If the test failed, the reason why it failed.</p>
     */
    inline TestWindowSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If the test failed, the reason why it failed.</p>
     */
    inline TestWindowSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If the test failed, the reason why it failed.</p>
     */
    inline TestWindowSummary& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::Utils::DateTime m_testWindowStart;
    bool m_testWindowStartHasBeenSet = false;

    Aws::Utils::DateTime m_testWindowEnd;
    bool m_testWindowEndHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
