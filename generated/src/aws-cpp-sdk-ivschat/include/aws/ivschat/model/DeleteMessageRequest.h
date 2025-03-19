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
    AWS_IVSCHAT_API DeleteMessageRequest() = default;

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
    inline const Aws::String& GetRoomIdentifier() const { return m_roomIdentifier; }
    inline bool RoomIdentifierHasBeenSet() const { return m_roomIdentifierHasBeenSet; }
    template<typename RoomIdentifierT = Aws::String>
    void SetRoomIdentifier(RoomIdentifierT&& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = std::forward<RoomIdentifierT>(value); }
    template<typename RoomIdentifierT = Aws::String>
    DeleteMessageRequest& WithRoomIdentifier(RoomIdentifierT&& value) { SetRoomIdentifier(std::forward<RoomIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the message to be deleted. This is the <code>Id</code> field in the
     * received message (see <a
     * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-message-subscribe.html">
     * Message (Subscribe)</a> in the Chat Messaging API).</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeleteMessageRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason for deleting the message.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    DeleteMessageRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
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
