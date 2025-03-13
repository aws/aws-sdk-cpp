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
    AWS_CONNECTPARTICIPANT_API Receipt() = default;
    AWS_CONNECTPARTICIPANT_API Receipt(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Receipt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the message was delivered to the recipient.</p>
     */
    inline const Aws::String& GetDeliveredTimestamp() const { return m_deliveredTimestamp; }
    inline bool DeliveredTimestampHasBeenSet() const { return m_deliveredTimestampHasBeenSet; }
    template<typename DeliveredTimestampT = Aws::String>
    void SetDeliveredTimestamp(DeliveredTimestampT&& value) { m_deliveredTimestampHasBeenSet = true; m_deliveredTimestamp = std::forward<DeliveredTimestampT>(value); }
    template<typename DeliveredTimestampT = Aws::String>
    Receipt& WithDeliveredTimestamp(DeliveredTimestampT&& value) { SetDeliveredTimestamp(std::forward<DeliveredTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the message was read by the recipient.</p>
     */
    inline const Aws::String& GetReadTimestamp() const { return m_readTimestamp; }
    inline bool ReadTimestampHasBeenSet() const { return m_readTimestampHasBeenSet; }
    template<typename ReadTimestampT = Aws::String>
    void SetReadTimestamp(ReadTimestampT&& value) { m_readTimestampHasBeenSet = true; m_readTimestamp = std::forward<ReadTimestampT>(value); }
    template<typename ReadTimestampT = Aws::String>
    Receipt& WithReadTimestamp(ReadTimestampT&& value) { SetReadTimestamp(std::forward<ReadTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the recipient of the message. </p>
     */
    inline const Aws::String& GetRecipientParticipantId() const { return m_recipientParticipantId; }
    inline bool RecipientParticipantIdHasBeenSet() const { return m_recipientParticipantIdHasBeenSet; }
    template<typename RecipientParticipantIdT = Aws::String>
    void SetRecipientParticipantId(RecipientParticipantIdT&& value) { m_recipientParticipantIdHasBeenSet = true; m_recipientParticipantId = std::forward<RecipientParticipantIdT>(value); }
    template<typename RecipientParticipantIdT = Aws::String>
    Receipt& WithRecipientParticipantId(RecipientParticipantIdT&& value) { SetRecipientParticipantId(std::forward<RecipientParticipantIdT>(value)); return *this;}
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
