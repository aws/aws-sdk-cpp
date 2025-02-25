/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseErrors.h>

#include <aws/iotsitewise/model/InvokeAssistantInitialResponse.h>
#include <aws/iotsitewise/model/Trace.h>
#include <aws/iotsitewise/model/InvocationOutput.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
    enum class InvokeAssistantEventType
    {
        INITIAL_RESPONSE,
        TRACE,
        OUTPUT,
        UNKNOWN
    };

    class InvokeAssistantHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const InvokeAssistantInitialResponse&)> InvokeAssistantInitialResponseCallback;
        typedef std::function<void(const InvokeAssistantInitialResponse&, const Utils::Event::InitialResponseType)> InvokeAssistantInitialResponseCallbackEx;
        typedef std::function<void(const Trace&)> TraceCallback;
        typedef std::function<void(const InvocationOutput&)> InvocationOutputCallback;
        typedef std::function<void(const Aws::Client::AWSError<IoTSiteWiseErrors>& error)> ErrorCallback;

    public:
        AWS_IOTSITEWISE_API InvokeAssistantHandler();
        AWS_IOTSITEWISE_API InvokeAssistantHandler& operator=(const InvokeAssistantHandler&) = default;
        AWS_IOTSITEWISE_API InvokeAssistantHandler(const InvokeAssistantHandler&) = default;

        AWS_IOTSITEWISE_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial InvokeAssistant Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const InvokeAssistantInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const InvokeAssistantInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const InvokeAssistantInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetTraceCallback(const TraceCallback& callback) { m_onTrace = callback; }
        inline void SetInvocationOutputCallback(const InvocationOutputCallback& callback) { m_onInvocationOutput = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline InvokeAssistantInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_IOTSITEWISE_API void HandleEventInMessage();
        AWS_IOTSITEWISE_API void HandleErrorInMessage();
        AWS_IOTSITEWISE_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeAssistantInitialResponseCallbackEx m_onInitialResponse;
        TraceCallback m_onTrace;
        InvocationOutputCallback m_onInvocationOutput;
        ErrorCallback m_onError;
    };

namespace InvokeAssistantEventMapper
{
    AWS_IOTSITEWISE_API InvokeAssistantEventType GetInvokeAssistantEventTypeForName(const Aws::String& name);

    AWS_IOTSITEWISE_API Aws::String GetNameForInvokeAssistantEventType(InvokeAssistantEventType value);
} // namespace InvokeAssistantEventMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
