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
    AWS_FORECASTSERVICE_API TestWindowSummary() = default;
    AWS_FORECASTSERVICE_API TestWindowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API TestWindowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the test began.</p>
     */
    inline const Aws::Utils::DateTime& GetTestWindowStart() const { return m_testWindowStart; }
    inline bool TestWindowStartHasBeenSet() const { return m_testWindowStartHasBeenSet; }
    template<typename TestWindowStartT = Aws::Utils::DateTime>
    void SetTestWindowStart(TestWindowStartT&& value) { m_testWindowStartHasBeenSet = true; m_testWindowStart = std::forward<TestWindowStartT>(value); }
    template<typename TestWindowStartT = Aws::Utils::DateTime>
    TestWindowSummary& WithTestWindowStart(TestWindowStartT&& value) { SetTestWindowStart(std::forward<TestWindowStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the test ended.</p>
     */
    inline const Aws::Utils::DateTime& GetTestWindowEnd() const { return m_testWindowEnd; }
    inline bool TestWindowEndHasBeenSet() const { return m_testWindowEndHasBeenSet; }
    template<typename TestWindowEndT = Aws::Utils::DateTime>
    void SetTestWindowEnd(TestWindowEndT&& value) { m_testWindowEndHasBeenSet = true; m_testWindowEnd = std::forward<TestWindowEndT>(value); }
    template<typename TestWindowEndT = Aws::Utils::DateTime>
    TestWindowSummary& WithTestWindowEnd(TestWindowEndT&& value) { SetTestWindowEnd(std::forward<TestWindowEndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test. Possible status values are:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> </p>
     * </li> <li> <p> <code>CREATE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TestWindowSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the test failed, the reason why it failed.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TestWindowSummary& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_testWindowStart{};
    bool m_testWindowStartHasBeenSet = false;

    Aws::Utils::DateTime m_testWindowEnd{};
    bool m_testWindowEndHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
