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
  class DisconnectUserRequest : public IvschatRequest
  {
  public:
    AWS_IVSCHAT_API DisconnectUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisconnectUser"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    /**
     * <p>Reason for disconnecting the user.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>Reason for disconnecting the user.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Reason for disconnecting the user.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Reason for disconnecting the user.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Reason for disconnecting the user.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>Reason for disconnecting the user.</p>
     */
    inline DisconnectUserRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>Reason for disconnecting the user.</p>
     */
    inline DisconnectUserRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>Reason for disconnecting the user.</p>
     */
    inline DisconnectUserRequest& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>Identifier of the room from which the user's clients should be disconnected.
     * Currently this must be an ARN.</p>
     */
    inline const Aws::String& GetRoomIdentifier() const{ return m_roomIdentifier; }

    /**
     * <p>Identifier of the room from which the user's clients should be disconnected.
     * Currently this must be an ARN.</p>
     */
    inline bool RoomIdentifierHasBeenSet() const { return m_roomIdentifierHasBeenSet; }

    /**
     * <p>Identifier of the room from which the user's clients should be disconnected.
     * Currently this must be an ARN.</p>
     */
    inline void SetRoomIdentifier(const Aws::String& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = value; }

    /**
     * <p>Identifier of the room from which the user's clients should be disconnected.
     * Currently this must be an ARN.</p>
     */
    inline void SetRoomIdentifier(Aws::String&& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = std::move(value); }

    /**
     * <p>Identifier of the room from which the user's clients should be disconnected.
     * Currently this must be an ARN.</p>
     */
    inline void SetRoomIdentifier(const char* value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier.assign(value); }

    /**
     * <p>Identifier of the room from which the user's clients should be disconnected.
     * Currently this must be an ARN.</p>
     */
    inline DisconnectUserRequest& WithRoomIdentifier(const Aws::String& value) { SetRoomIdentifier(value); return *this;}

    /**
     * <p>Identifier of the room from which the user's clients should be disconnected.
     * Currently this must be an ARN.</p>
     */
    inline DisconnectUserRequest& WithRoomIdentifier(Aws::String&& value) { SetRoomIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifier of the room from which the user's clients should be disconnected.
     * Currently this must be an ARN.</p>
     */
    inline DisconnectUserRequest& WithRoomIdentifier(const char* value) { SetRoomIdentifier(value); return *this;}


    /**
     * <p>ID of the user (connection) to disconnect from the room.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>ID of the user (connection) to disconnect from the room.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>ID of the user (connection) to disconnect from the room.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>ID of the user (connection) to disconnect from the room.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>ID of the user (connection) to disconnect from the room.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>ID of the user (connection) to disconnect from the room.</p>
     */
    inline DisconnectUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>ID of the user (connection) to disconnect from the room.</p>
     */
    inline DisconnectUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>ID of the user (connection) to disconnect from the room.</p>
     */
    inline DisconnectUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_roomIdentifier;
    bool m_roomIdentifierHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
