/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/PoolStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class DeletePoolResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeletePoolResult();
    AWS_PINPOINTSMSVOICEV2_API DeletePoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeletePoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the pool that was deleted.</p>
     */
    inline const Aws::String& GetPoolArn() const{ return m_poolArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pool that was deleted.</p>
     */
    inline void SetPoolArn(const Aws::String& value) { m_poolArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pool that was deleted.</p>
     */
    inline void SetPoolArn(Aws::String&& value) { m_poolArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pool that was deleted.</p>
     */
    inline void SetPoolArn(const char* value) { m_poolArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pool that was deleted.</p>
     */
    inline DeletePoolResult& WithPoolArn(const Aws::String& value) { SetPoolArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pool that was deleted.</p>
     */
    inline DeletePoolResult& WithPoolArn(Aws::String&& value) { SetPoolArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pool that was deleted.</p>
     */
    inline DeletePoolResult& WithPoolArn(const char* value) { SetPoolArn(value); return *this;}


    /**
     * <p>The PoolId of the pool that was deleted.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The PoolId of the pool that was deleted.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolId = value; }

    /**
     * <p>The PoolId of the pool that was deleted.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolId = std::move(value); }

    /**
     * <p>The PoolId of the pool that was deleted.</p>
     */
    inline void SetPoolId(const char* value) { m_poolId.assign(value); }

    /**
     * <p>The PoolId of the pool that was deleted.</p>
     */
    inline DeletePoolResult& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The PoolId of the pool that was deleted.</p>
     */
    inline DeletePoolResult& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The PoolId of the pool that was deleted.</p>
     */
    inline DeletePoolResult& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The current status of the pool.</p> <ul> <li> <p>CREATING: The pool is
     * currently being created and isn't yet available for use.</p> </li> <li>
     * <p>ACTIVE: The pool is active and available for use.</p> </li> <li> <p>DELETING:
     * The pool is being deleted.</p> </li> </ul>
     */
    inline const PoolStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the pool.</p> <ul> <li> <p>CREATING: The pool is
     * currently being created and isn't yet available for use.</p> </li> <li>
     * <p>ACTIVE: The pool is active and available for use.</p> </li> <li> <p>DELETING:
     * The pool is being deleted.</p> </li> </ul>
     */
    inline void SetStatus(const PoolStatus& value) { m_status = value; }

    /**
     * <p>The current status of the pool.</p> <ul> <li> <p>CREATING: The pool is
     * currently being created and isn't yet available for use.</p> </li> <li>
     * <p>ACTIVE: The pool is active and available for use.</p> </li> <li> <p>DELETING:
     * The pool is being deleted.</p> </li> </ul>
     */
    inline void SetStatus(PoolStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the pool.</p> <ul> <li> <p>CREATING: The pool is
     * currently being created and isn't yet available for use.</p> </li> <li>
     * <p>ACTIVE: The pool is active and available for use.</p> </li> <li> <p>DELETING:
     * The pool is being deleted.</p> </li> </ul>
     */
    inline DeletePoolResult& WithStatus(const PoolStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the pool.</p> <ul> <li> <p>CREATING: The pool is
     * currently being created and isn't yet available for use.</p> </li> <li>
     * <p>ACTIVE: The pool is active and available for use.</p> </li> <li> <p>DELETING:
     * The pool is being deleted.</p> </li> </ul>
     */
    inline DeletePoolResult& WithStatus(PoolStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The message type that was associated with the deleted pool.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The message type that was associated with the deleted pool.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageType = value; }

    /**
     * <p>The message type that was associated with the deleted pool.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageType = std::move(value); }

    /**
     * <p>The message type that was associated with the deleted pool.</p>
     */
    inline DeletePoolResult& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The message type that was associated with the deleted pool.</p>
     */
    inline DeletePoolResult& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline bool GetTwoWayEnabled() const{ return m_twoWayEnabled; }

    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline void SetTwoWayEnabled(bool value) { m_twoWayEnabled = value; }

    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline DeletePoolResult& WithTwoWayEnabled(bool value) { SetTwoWayEnabled(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline const Aws::String& GetTwoWayChannelArn() const{ return m_twoWayChannelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline void SetTwoWayChannelArn(const Aws::String& value) { m_twoWayChannelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline void SetTwoWayChannelArn(Aws::String&& value) { m_twoWayChannelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline void SetTwoWayChannelArn(const char* value) { m_twoWayChannelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline DeletePoolResult& WithTwoWayChannelArn(const Aws::String& value) { SetTwoWayChannelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline DeletePoolResult& WithTwoWayChannelArn(Aws::String&& value) { SetTwoWayChannelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline DeletePoolResult& WithTwoWayChannelArn(const char* value) { SetTwoWayChannelArn(value); return *this;}


    /**
     * <p>By default this is set to false. When an end recipient sends a message that
     * begins with HELP or STOP to one of your dedicated numbers, Amazon Pinpoint
     * automatically replies with a customizable message and adds the end recipient to
     * the OptOutList. When set to true you're responsible for responding to HELP and
     * STOP requests. You're also responsible for tracking and honoring opt-out
     * requests.</p>
     */
    inline bool GetSelfManagedOptOutsEnabled() const{ return m_selfManagedOptOutsEnabled; }

    /**
     * <p>By default this is set to false. When an end recipient sends a message that
     * begins with HELP or STOP to one of your dedicated numbers, Amazon Pinpoint
     * automatically replies with a customizable message and adds the end recipient to
     * the OptOutList. When set to true you're responsible for responding to HELP and
     * STOP requests. You're also responsible for tracking and honoring opt-out
     * requests.</p>
     */
    inline void SetSelfManagedOptOutsEnabled(bool value) { m_selfManagedOptOutsEnabled = value; }

    /**
     * <p>By default this is set to false. When an end recipient sends a message that
     * begins with HELP or STOP to one of your dedicated numbers, Amazon Pinpoint
     * automatically replies with a customizable message and adds the end recipient to
     * the OptOutList. When set to true you're responsible for responding to HELP and
     * STOP requests. You're also responsible for tracking and honoring opt-out
     * requests.</p>
     */
    inline DeletePoolResult& WithSelfManagedOptOutsEnabled(bool value) { SetSelfManagedOptOutsEnabled(value); return *this;}


    /**
     * <p>The name of the OptOutList that was associated with the deleted pool.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }

    /**
     * <p>The name of the OptOutList that was associated with the deleted pool.</p>
     */
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListName = value; }

    /**
     * <p>The name of the OptOutList that was associated with the deleted pool.</p>
     */
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListName = std::move(value); }

    /**
     * <p>The name of the OptOutList that was associated with the deleted pool.</p>
     */
    inline void SetOptOutListName(const char* value) { m_optOutListName.assign(value); }

    /**
     * <p>The name of the OptOutList that was associated with the deleted pool.</p>
     */
    inline DeletePoolResult& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}

    /**
     * <p>The name of the OptOutList that was associated with the deleted pool.</p>
     */
    inline DeletePoolResult& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}

    /**
     * <p>The name of the OptOutList that was associated with the deleted pool.</p>
     */
    inline DeletePoolResult& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}


    /**
     * <p>Indicates whether shared routes are enabled for the pool.</p>
     */
    inline bool GetSharedRoutesEnabled() const{ return m_sharedRoutesEnabled; }

    /**
     * <p>Indicates whether shared routes are enabled for the pool.</p>
     */
    inline void SetSharedRoutesEnabled(bool value) { m_sharedRoutesEnabled = value; }

    /**
     * <p>Indicates whether shared routes are enabled for the pool.</p>
     */
    inline DeletePoolResult& WithSharedRoutesEnabled(bool value) { SetSharedRoutesEnabled(value); return *this;}


    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline DeletePoolResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline DeletePoolResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_poolArn;

    Aws::String m_poolId;

    PoolStatus m_status;

    MessageType m_messageType;

    bool m_twoWayEnabled;

    Aws::String m_twoWayChannelArn;

    bool m_selfManagedOptOutsEnabled;

    Aws::String m_optOutListName;

    bool m_sharedRoutesEnabled;

    Aws::Utils::DateTime m_createdTimestamp;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
