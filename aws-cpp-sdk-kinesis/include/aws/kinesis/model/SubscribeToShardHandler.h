/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisErrors.h>

#include <aws/kinesis/model/SubscribeToShardEvent.h>

namespace Aws
{
namespace Kinesis
{
namespace Model
{
    enum class SubscribeToShardEventType
    {
        SUBSCRIBETOSHARDEVENT,
        UNKNOWN
    };

    class AWS_KINESIS_API SubscribeToShardHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const SubscribeToShardEvent&)> SubscribeToShardEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<KinesisErrors>& error)> ErrorCallback;

    public:
        SubscribeToShardHandler();
        SubscribeToShardHandler& operator=(const SubscribeToShardHandler& handler) = default;

        virtual void OnEvent() override;

        inline void SetSubscribeToShardEventCallback(const SubscribeToShardEventCallback& callback) { m_onSubscribeToShardEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        void HandleEventInMessage();
        void HandleErrorInMessage();
        void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        SubscribeToShardEventCallback m_onSubscribeToShardEvent;
        ErrorCallback m_onError;
    };

namespace SubscribeToShardEventMapper
{
    AWS_KINESIS_API SubscribeToShardEventType GetSubscribeToShardEventTypeForName(const Aws::String& name);

    AWS_KINESIS_API Aws::String GetNameForSubscribeToShardEventType(SubscribeToShardEventType value);
} // namespace SubscribeToShardEventMapper
} // namespace Model
} // namespace Kinesis
} // namespace Aws
