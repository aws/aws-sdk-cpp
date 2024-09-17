/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectParticipant
{
namespace Model
{

  /**
   * <p>The receipt for the message delivered to the recipient.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/Receipt">AWS
   * API Reference</a></p>
   */
  class Receipt
  {
  public:
    AWS_CONNECTPARTICIPANT_API Receipt();
    AWS_CONNECTPARTICIPANT_API Receipt(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Receipt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the message was delivered to the recipient.</p>
     */
    inline const Aws::String& GetDeliveredTimestamp() const{ return m_deliveredTimestamp; }
    inline bool DeliveredTimestampHasBeenSet() const { return m_deliveredTimestampHasBeenSet; }
    inline void SetDeliveredTimestamp(const Aws::String& value) { m_deliveredTimestampHasBeenSet = true; m_deliveredTimestamp = value; }
    inline void SetDeliveredTimestamp(Aws::String&& value) { m_deliveredTimestampHasBeenSet = true; m_deliveredTimestamp = std::move(value); }
    inline void SetDeliveredTimestamp(const char* value) { m_deliveredTimestampHasBeenSet = true; m_deliveredTimestamp.assign(value); }
    inline Receipt& WithDeliveredTimestamp(const Aws::String& value) { SetDeliveredTimestamp(value); return *this;}
    inline Receipt& WithDeliveredTimestamp(Aws::String&& value) { SetDeliveredTimestamp(std::move(value)); return *this;}
    inline Receipt& WithDeliveredTimestamp(const char* value) { SetDeliveredTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the message was read by the recipient.</p>
     */
    inline const Aws::String& GetReadTimestamp() const{ return m_readTimestamp; }
    inline bool ReadTimestampHasBeenSet() const { return m_readTimestampHasBeenSet; }
    inline void SetReadTimestamp(const Aws::String& value) { m_readTimestampHasBeenSet = true; m_readTimestamp = value; }
    inline void SetReadTimestamp(Aws::String&& value) { m_readTimestampHasBeenSet = true; m_readTimestamp = std::move(value); }
    inline void SetReadTimestamp(const char* value) { m_readTimestampHasBeenSet = true; m_readTimestamp.assign(value); }
    inline Receipt& WithReadTimestamp(const Aws::String& value) { SetReadTimestamp(value); return *this;}
    inline Receipt& WithReadTimestamp(Aws::String&& value) { SetReadTimestamp(std::move(value)); return *this;}
    inline Receipt& WithReadTimestamp(const char* value) { SetReadTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the recipient of the message. </p>
     */
    inline const Aws::String& GetRecipientParticipantId() const{ return m_recipientParticipantId; }
    inline bool RecipientParticipantIdHasBeenSet() const { return m_recipientParticipantIdHasBeenSet; }
    inline void SetRecipientParticipantId(const Aws::String& value) { m_recipientParticipantIdHasBeenSet = true; m_recipientParticipantId = value; }
    inline void SetRecipientParticipantId(Aws::String&& value) { m_recipientParticipantIdHasBeenSet = true; m_recipientParticipantId = std::move(value); }
    inline void SetRecipientParticipantId(const char* value) { m_recipientParticipantIdHasBeenSet = true; m_recipientParticipantId.assign(value); }
    inline Receipt& WithRecipientParticipantId(const Aws::String& value) { SetRecipientParticipantId(value); return *this;}
    inline Receipt& WithRecipientParticipantId(Aws::String&& value) { SetRecipientParticipantId(std::move(value)); return *this;}
    inline Receipt& WithRecipientParticipantId(const char* value) { SetRecipientParticipantId(value); return *this;}
    ///@}
  private:

    Aws::String m_deliveredTimestamp;
    bool m_deliveredTimestampHasBeenSet = false;

    Aws::String m_readTimestamp;
    bool m_readTimestampHasBeenSet = false;

    Aws::String m_recipientParticipantId;
    bool m_recipientParticipantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
