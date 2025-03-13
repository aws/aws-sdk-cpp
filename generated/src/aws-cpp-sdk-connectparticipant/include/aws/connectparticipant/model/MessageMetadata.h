/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectparticipant/model/Receipt.h>
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
   * <p>Contains metadata related to a message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/MessageMetadata">AWS
   * API Reference</a></p>
   */
  class MessageMetadata
  {
  public:
    AWS_CONNECTPARTICIPANT_API MessageMetadata() = default;
    AWS_CONNECTPARTICIPANT_API MessageMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API MessageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the message that contains the metadata information. </p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    MessageMetadata& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of receipt information for a message for different recipients.</p>
     */
    inline const Aws::Vector<Receipt>& GetReceipts() const { return m_receipts; }
    inline bool ReceiptsHasBeenSet() const { return m_receiptsHasBeenSet; }
    template<typename ReceiptsT = Aws::Vector<Receipt>>
    void SetReceipts(ReceiptsT&& value) { m_receiptsHasBeenSet = true; m_receipts = std::forward<ReceiptsT>(value); }
    template<typename ReceiptsT = Aws::Vector<Receipt>>
    MessageMetadata& WithReceipts(ReceiptsT&& value) { SetReceipts(std::forward<ReceiptsT>(value)); return *this;}
    template<typename ReceiptsT = Receipt>
    MessageMetadata& AddReceipts(ReceiptsT&& value) { m_receiptsHasBeenSet = true; m_receipts.emplace_back(std::forward<ReceiptsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::Vector<Receipt> m_receipts;
    bool m_receiptsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
