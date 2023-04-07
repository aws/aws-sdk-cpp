/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaErrors.h>

#include <aws/lambda/model/InvokeResponseStreamUpdate.h>
#include <aws/lambda/model/InvokeWithResponseStreamCompleteEvent.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{
    enum class InvokeWithResponseStreamEventType
    {
        PAYLOADCHUNK,
        INVOKECOMPLETE,
        UNKNOWN
    };

    class InvokeWithResponseStreamHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const InvokeResponseStreamUpdate&)> InvokeResponseStreamUpdateCallback;
        typedef std::function<void(const InvokeWithResponseStreamCompleteEvent&)> InvokeWithResponseStreamCompleteEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<LambdaErrors>& error)> ErrorCallback;

    public:
        AWS_LAMBDA_API InvokeWithResponseStreamHandler();
        AWS_LAMBDA_API InvokeWithResponseStreamHandler& operator=(const InvokeWithResponseStreamHandler&) = default;

        AWS_LAMBDA_API virtual void OnEvent() override;

        inline void SetInvokeResponseStreamUpdateCallback(const InvokeResponseStreamUpdateCallback& callback) { m_onInvokeResponseStreamUpdate = callback; }
        inline void SetInvokeWithResponseStreamCompleteEventCallback(const InvokeWithResponseStreamCompleteEventCallback& callback) { m_onInvokeWithResponseStreamCompleteEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        AWS_LAMBDA_API void HandleEventInMessage();
        AWS_LAMBDA_API void HandleErrorInMessage();
        AWS_LAMBDA_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeResponseStreamUpdateCallback m_onInvokeResponseStreamUpdate;
        InvokeWithResponseStreamCompleteEventCallback m_onInvokeWithResponseStreamCompleteEvent;
        ErrorCallback m_onError;
    };

namespace InvokeWithResponseStreamEventMapper
{
    AWS_LAMBDA_API InvokeWithResponseStreamEventType GetInvokeWithResponseStreamEventTypeForName(const Aws::String& name);

    AWS_LAMBDA_API Aws::String GetNameForInvokeWithResponseStreamEventType(InvokeWithResponseStreamEventType value);
} // namespace InvokeWithResponseStreamEventMapper
} // namespace Model
} // namespace Lambda
} // namespace Aws
