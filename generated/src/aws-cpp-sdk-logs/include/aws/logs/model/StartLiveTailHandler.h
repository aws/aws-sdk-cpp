/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsErrors.h>

#include <aws/logs/model/StartLiveTailInitialResponse.h>
#include <aws/logs/model/LiveTailSessionStart.h>
#include <aws/logs/model/LiveTailSessionUpdate.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
    enum class StartLiveTailEventType
    {
        INITIAL_RESPONSE,
        SESSIONSTART,
        SESSIONUPDATE,
        UNKNOWN
    };

    class StartLiveTailHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const StartLiveTailInitialResponse&)> StartLiveTailInitialResponseCallback;
        typedef std::function<void(const LiveTailSessionStart&)> LiveTailSessionStartCallback;
        typedef std::function<void(const LiveTailSessionUpdate&)> LiveTailSessionUpdateCallback;
        typedef std::function<void(const Aws::Client::AWSError<CloudWatchLogsErrors>& error)> ErrorCallback;

    public:
        AWS_CLOUDWATCHLOGS_API StartLiveTailHandler();
        AWS_CLOUDWATCHLOGS_API StartLiveTailHandler& operator=(const StartLiveTailHandler&) = default;

        AWS_CLOUDWATCHLOGS_API virtual void OnEvent() override;

        inline void SetInitialResponseCallback(const StartLiveTailInitialResponseCallback& callback) { m_onInitialResponse = callback; }
        inline void SetLiveTailSessionStartCallback(const LiveTailSessionStartCallback& callback) { m_onLiveTailSessionStart = callback; }
        inline void SetLiveTailSessionUpdateCallback(const LiveTailSessionUpdateCallback& callback) { m_onLiveTailSessionUpdate = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        AWS_CLOUDWATCHLOGS_API void HandleEventInMessage();
        AWS_CLOUDWATCHLOGS_API void HandleErrorInMessage();
        AWS_CLOUDWATCHLOGS_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        StartLiveTailInitialResponseCallback m_onInitialResponse;
        LiveTailSessionStartCallback m_onLiveTailSessionStart;
        LiveTailSessionUpdateCallback m_onLiveTailSessionUpdate;
        ErrorCallback m_onError;
    };

namespace StartLiveTailEventMapper
{
    AWS_CLOUDWATCHLOGS_API StartLiveTailEventType GetStartLiveTailEventTypeForName(const Aws::String& name);

    AWS_CLOUDWATCHLOGS_API Aws::String GetNameForStartLiveTailEventType(StartLiveTailEventType value);
} // namespace StartLiveTailEventMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
