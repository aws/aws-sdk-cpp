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

#include <aws/logs/model/GetLogObjectInitialResponse.h>
#include <aws/logs/model/FieldsData.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
    enum class GetLogObjectEventType
    {
        INITIAL_RESPONSE,
        FIELDS,
        UNKNOWN
    };

    class GetLogObjectHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const GetLogObjectInitialResponse&)> GetLogObjectInitialResponseCallback;
        typedef std::function<void(const GetLogObjectInitialResponse&, const Utils::Event::InitialResponseType)> GetLogObjectInitialResponseCallbackEx;
        typedef std::function<void(const FieldsData&)> FieldsDataCallback;
        typedef std::function<void(const Aws::Client::AWSError<CloudWatchLogsErrors>& error)> ErrorCallback;

    public:
        AWS_CLOUDWATCHLOGS_API GetLogObjectHandler();
        AWS_CLOUDWATCHLOGS_API GetLogObjectHandler& operator=(const GetLogObjectHandler&) = default;
        AWS_CLOUDWATCHLOGS_API GetLogObjectHandler(const GetLogObjectHandler&) = default;

        AWS_CLOUDWATCHLOGS_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial GetLogObject Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const GetLogObjectInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const GetLogObjectInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const GetLogObjectInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetFieldsDataCallback(const FieldsDataCallback& callback) { m_onFieldsData = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline GetLogObjectInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_CLOUDWATCHLOGS_API void HandleEventInMessage();
        AWS_CLOUDWATCHLOGS_API void HandleErrorInMessage();
        AWS_CLOUDWATCHLOGS_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        GetLogObjectInitialResponseCallbackEx m_onInitialResponse;
        FieldsDataCallback m_onFieldsData;
        ErrorCallback m_onError;
    };

namespace GetLogObjectEventMapper
{
    AWS_CLOUDWATCHLOGS_API GetLogObjectEventType GetGetLogObjectEventTypeForName(const Aws::String& name);

    AWS_CLOUDWATCHLOGS_API Aws::String GetNameForGetLogObjectEventType(GetLogObjectEventType value);
} // namespace GetLogObjectEventMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
