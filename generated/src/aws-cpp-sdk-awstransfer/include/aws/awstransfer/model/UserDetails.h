/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Specifies the user name, server ID, and session ID for a
   * workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UserDetails">AWS
   * API Reference</a></p>
   */
  class UserDetails
  {
  public:
    AWS_TRANSFER_API UserDetails();
    AWS_TRANSFER_API UserDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API UserDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique string that identifies a user account associated with a server.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique string that identifies a user account associated with a server.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>A unique string that identifies a user account associated with a server.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>A unique string that identifies a user account associated with a server.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>A unique string that identifies a user account associated with a server.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>A unique string that identifies a user account associated with a server.</p>
     */
    inline UserDetails& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique string that identifies a user account associated with a server.</p>
     */
    inline UserDetails& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies a user account associated with a server.</p>
     */
    inline UserDetails& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The system-assigned unique identifier for a Transfer server instance. </p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The system-assigned unique identifier for a Transfer server instance. </p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>The system-assigned unique identifier for a Transfer server instance. </p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>The system-assigned unique identifier for a Transfer server instance. </p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>The system-assigned unique identifier for a Transfer server instance. </p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>The system-assigned unique identifier for a Transfer server instance. </p>
     */
    inline UserDetails& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The system-assigned unique identifier for a Transfer server instance. </p>
     */
    inline UserDetails& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The system-assigned unique identifier for a Transfer server instance. </p>
     */
    inline UserDetails& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The system-assigned unique identifier for a session that corresponds to the
     * workflow.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The system-assigned unique identifier for a session that corresponds to the
     * workflow.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The system-assigned unique identifier for a session that corresponds to the
     * workflow.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The system-assigned unique identifier for a session that corresponds to the
     * workflow.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The system-assigned unique identifier for a session that corresponds to the
     * workflow.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The system-assigned unique identifier for a session that corresponds to the
     * workflow.</p>
     */
    inline UserDetails& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The system-assigned unique identifier for a session that corresponds to the
     * workflow.</p>
     */
    inline UserDetails& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The system-assigned unique identifier for a session that corresponds to the
     * workflow.</p>
     */
    inline UserDetails& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
