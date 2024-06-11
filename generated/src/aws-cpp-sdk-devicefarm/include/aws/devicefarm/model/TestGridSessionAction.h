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
    AWS_DEVICEFARM_API TestGridSessionAction();
    AWS_DEVICEFARM_API TestGridSessionAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API TestGridSessionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action taken by the session.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline TestGridSessionAction& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline TestGridSessionAction& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline TestGridSessionAction& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the session invoked the action.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const{ return m_started; }
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }
    inline void SetStarted(const Aws::Utils::DateTime& value) { m_startedHasBeenSet = true; m_started = value; }
    inline void SetStarted(Aws::Utils::DateTime&& value) { m_startedHasBeenSet = true; m_started = std::move(value); }
    inline TestGridSessionAction& WithStarted(const Aws::Utils::DateTime& value) { SetStarted(value); return *this;}
    inline TestGridSessionAction& WithStarted(Aws::Utils::DateTime&& value) { SetStarted(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, that the action took to complete in the
     * browser.</p>
     */
    inline long long GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline TestGridSessionAction& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>HTTP status code returned to the browser when the action was taken.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }
    inline TestGridSessionAction& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}
    inline TestGridSessionAction& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}
    inline TestGridSessionAction& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>HTTP method that the browser used to make the request.</p>
     */
    inline const Aws::String& GetRequestMethod() const{ return m_requestMethod; }
    inline bool RequestMethodHasBeenSet() const { return m_requestMethodHasBeenSet; }
    inline void SetRequestMethod(const Aws::String& value) { m_requestMethodHasBeenSet = true; m_requestMethod = value; }
    inline void SetRequestMethod(Aws::String&& value) { m_requestMethodHasBeenSet = true; m_requestMethod = std::move(value); }
    inline void SetRequestMethod(const char* value) { m_requestMethodHasBeenSet = true; m_requestMethod.assign(value); }
    inline TestGridSessionAction& WithRequestMethod(const Aws::String& value) { SetRequestMethod(value); return *this;}
    inline TestGridSessionAction& WithRequestMethod(Aws::String&& value) { SetRequestMethod(std::move(value)); return *this;}
    inline TestGridSessionAction& WithRequestMethod(const char* value) { SetRequestMethod(value); return *this;}
    ///@}
  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::Utils::DateTime m_started;
    bool m_startedHasBeenSet = false;

    long long m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_requestMethod;
    bool m_requestMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
