/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ivschat
{
namespace Model
{

  /**
   */
  class DeleteMessageRequest : public IvschatRequest
  {
  public:
    AWS_IVSCHAT_API DeleteMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMessage"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Identifier of the room where the message should be deleted. Currently this
     * must be an ARN. </p>
     */
    inline const Aws::String& GetRoomIdentifier() const{ return m_roomIdentifier; }
    inline bool RoomIdentifierHasBeenSet() const { return m_roomIdentifierHasBeenSet; }
    inline void SetRoomIdentifier(const Aws::String& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = value; }
    inline void SetRoomIdentifier(Aws::String&& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = std::move(value); }
    inline void SetRoomIdentifier(const char* value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier.assign(value); }
    inline DeleteMessageRequest& WithRoomIdentifier(const Aws::String& value) { SetRoomIdentifier(value); return *this;}
    inline DeleteMessageRequest& WithRoomIdentifier(Aws::String&& value) { SetRoomIdentifier(std::move(value)); return *this;}
    inline DeleteMessageRequest& WithRoomIdentifier(const char* value) { SetRoomIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the message to be deleted. This is the <code>Id</code> field in the
     * received message (see <a
     * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-message-subscribe.html">
     * Message (Subscribe)</a> in the Chat Messaging API).</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DeleteMessageRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteMessageRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteMessageRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason for deleting the message.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline DeleteMessageRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline DeleteMessageRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline DeleteMessageRequest& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_roomIdentifier;
    bool m_roomIdentifierHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
