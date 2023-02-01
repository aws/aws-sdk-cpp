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
    AWS_CONNECTPARTICIPANT_API MessageMetadata();
    AWS_CONNECTPARTICIPANT_API MessageMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API MessageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the message that contains the metadata information. </p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The identifier of the message that contains the metadata information. </p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The identifier of the message that contains the metadata information. </p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The identifier of the message that contains the metadata information. </p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The identifier of the message that contains the metadata information. </p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The identifier of the message that contains the metadata information. </p>
     */
    inline MessageMetadata& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The identifier of the message that contains the metadata information. </p>
     */
    inline MessageMetadata& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the message that contains the metadata information. </p>
     */
    inline MessageMetadata& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The list of receipt information for a message for different recipients.</p>
     */
    inline const Aws::Vector<Receipt>& GetReceipts() const{ return m_receipts; }

    /**
     * <p>The list of receipt information for a message for different recipients.</p>
     */
    inline bool ReceiptsHasBeenSet() const { return m_receiptsHasBeenSet; }

    /**
     * <p>The list of receipt information for a message for different recipients.</p>
     */
    inline void SetReceipts(const Aws::Vector<Receipt>& value) { m_receiptsHasBeenSet = true; m_receipts = value; }

    /**
     * <p>The list of receipt information for a message for different recipients.</p>
     */
    inline void SetReceipts(Aws::Vector<Receipt>&& value) { m_receiptsHasBeenSet = true; m_receipts = std::move(value); }

    /**
     * <p>The list of receipt information for a message for different recipients.</p>
     */
    inline MessageMetadata& WithReceipts(const Aws::Vector<Receipt>& value) { SetReceipts(value); return *this;}

    /**
     * <p>The list of receipt information for a message for different recipients.</p>
     */
    inline MessageMetadata& WithReceipts(Aws::Vector<Receipt>&& value) { SetReceipts(std::move(value)); return *this;}

    /**
     * <p>The list of receipt information for a message for different recipients.</p>
     */
    inline MessageMetadata& AddReceipts(const Receipt& value) { m_receiptsHasBeenSet = true; m_receipts.push_back(value); return *this; }

    /**
     * <p>The list of receipt information for a message for different recipients.</p>
     */
    inline MessageMetadata& AddReceipts(Receipt&& value) { m_receiptsHasBeenSet = true; m_receipts.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::Vector<Receipt> m_receipts;
    bool m_receiptsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
