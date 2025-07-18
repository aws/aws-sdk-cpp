/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/model/GetLogObjectHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>The parameters for the GetLogObject operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogObjectRequest">AWS
   * API Reference</a></p>
   */
  class GetLogObjectRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetLogObjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLogObject"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline GetLogObjectHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const GetLogObjectHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline GetLogObjectRequest& WithEventStreamHandler(const GetLogObjectHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>A boolean flag that indicates whether to unmask sensitive log data. When set
     * to true, any masked or redacted data in the log object will be displayed in its
     * original form. Default is false.</p>
     */
    inline bool GetUnmask() const { return m_unmask; }
    inline bool UnmaskHasBeenSet() const { return m_unmaskHasBeenSet; }
    inline void SetUnmask(bool value) { m_unmaskHasBeenSet = true; m_unmask = value; }
    inline GetLogObjectRequest& WithUnmask(bool value) { SetUnmask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pointer to the specific log object to retrieve. This is a required
     * parameter that uniquely identifies the log object within CloudWatch Logs. The
     * pointer is typically obtained from a previous query or filter operation.</p>
     */
    inline const Aws::String& GetLogObjectPointer() const { return m_logObjectPointer; }
    inline bool LogObjectPointerHasBeenSet() const { return m_logObjectPointerHasBeenSet; }
    template<typename LogObjectPointerT = Aws::String>
    void SetLogObjectPointer(LogObjectPointerT&& value) { m_logObjectPointerHasBeenSet = true; m_logObjectPointer = std::forward<LogObjectPointerT>(value); }
    template<typename LogObjectPointerT = Aws::String>
    GetLogObjectRequest& WithLogObjectPointer(LogObjectPointerT&& value) { SetLogObjectPointer(std::forward<LogObjectPointerT>(value)); return *this;}
    ///@}
  private:

    bool m_unmask{false};
    bool m_unmaskHasBeenSet = false;

    Aws::String m_logObjectPointer;
    bool m_logObjectPointerHasBeenSet = false;
    GetLogObjectHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
