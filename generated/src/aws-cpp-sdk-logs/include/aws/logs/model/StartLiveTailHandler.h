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
        typedef std::function<void(const StartLiveTailInitialResponse&, const Utils::Event::InitialResponseType)> StartLiveTailInitialResponseCallbackEx;
        typedef std::function<void(const LiveTailSessionStart&)> LiveTailSessionStartCallback;
        typedef std::function<void(const LiveTailSessionUpdate&)> LiveTailSessionUpdateCallback;
        typedef std::function<void(const Aws::Client::AWSError<CloudWatchLogsErrors>& error)> ErrorCallback;

    public:
        AWS_CLOUDWATCHLOGS_API StartLiveTailHandler();
        AWS_CLOUDWATCHLOGS_API StartLiveTailHandler& operator=(const StartLiveTailHandler&) = default;
        AWS_CLOUDWATCHLOGS_API StartLiveTailHandler(const StartLiveTailHandler&) = default;

        AWS_CLOUDWATCHLOGS_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial StartLiveTail Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const StartLiveTailInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const StartLiveTailInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const StartLiveTailInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetLiveTailSessionStartCallback(const LiveTailSessionStartCallback& callback) { m_onLiveTailSessionStart = callback; }
        inline void SetLiveTailSessionUpdateCallback(const LiveTailSessionUpdateCallback& callback) { m_onLiveTailSessionUpdate = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline StartLiveTailInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_CLOUDWATCHLOGS_API void HandleEventInMessage();
        AWS_CLOUDWATCHLOGS_API void HandleErrorInMessage();
        AWS_CLOUDWATCHLOGS_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        StartLiveTailInitialResponseCallbackEx m_onInitialResponse;
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
