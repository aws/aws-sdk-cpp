/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>An action taken by a <a>TestGridSession</a> browser instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TestGridSessionAction">AWS
   * API Reference</a></p>
   */
  class TestGridSessionAction
  {
  public:
    AWS_DEVICEFARM_API TestGridSessionAction() = default;
    AWS_DEVICEFARM_API TestGridSessionAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API TestGridSessionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action taken by the session.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    TestGridSessionAction& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the session invoked the action.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const { return m_started; }
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }
    template<typename StartedT = Aws::Utils::DateTime>
    void SetStarted(StartedT&& value) { m_startedHasBeenSet = true; m_started = std::forward<StartedT>(value); }
    template<typename StartedT = Aws::Utils::DateTime>
    TestGridSessionAction& WithStarted(StartedT&& value) { SetStarted(std::forward<StartedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, that the action took to complete in the
     * browser.</p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline TestGridSessionAction& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>HTTP status code returned to the browser when the action was taken.</p>
     */
    inline const Aws::String& GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    template<typename StatusCodeT = Aws::String>
    void SetStatusCode(StatusCodeT&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::forward<StatusCodeT>(value); }
    template<typename StatusCodeT = Aws::String>
    TestGridSessionAction& WithStatusCode(StatusCodeT&& value) { SetStatusCode(std::forward<StatusCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>HTTP method that the browser used to make the request.</p>
     */
    inline const Aws::String& GetRequestMethod() const { return m_requestMethod; }
    inline bool RequestMethodHasBeenSet() const { return m_requestMethodHasBeenSet; }
    template<typename RequestMethodT = Aws::String>
    void SetRequestMethod(RequestMethodT&& value) { m_requestMethodHasBeenSet = true; m_requestMethod = std::forward<RequestMethodT>(value); }
    template<typename RequestMethodT = Aws::String>
    TestGridSessionAction& WithRequestMethod(RequestMethodT&& value) { SetRequestMethod(std::forward<RequestMethodT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::Utils::DateTime m_started{};
    bool m_startedHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_requestMethod;
    bool m_requestMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
