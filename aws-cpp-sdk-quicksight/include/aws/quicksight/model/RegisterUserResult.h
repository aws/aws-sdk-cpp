﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/User.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{
  class AWS_QUICKSIGHT_API RegisterUserResult
  {
  public:
    RegisterUserResult();
    RegisterUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RegisterUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user's user name.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>The user's user name.</p>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>The user's user name.</p>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>The user's user name.</p>
     */
    inline RegisterUserResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>The user's user name.</p>
     */
    inline RegisterUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}


    /**
     * <p>The URL the user visits to complete registration and provide a password. This
     * is returned only for users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline const Aws::String& GetUserInvitationUrl() const{ return m_userInvitationUrl; }

    /**
     * <p>The URL the user visits to complete registration and provide a password. This
     * is returned only for users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline void SetUserInvitationUrl(const Aws::String& value) { m_userInvitationUrl = value; }

    /**
     * <p>The URL the user visits to complete registration and provide a password. This
     * is returned only for users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline void SetUserInvitationUrl(Aws::String&& value) { m_userInvitationUrl = std::move(value); }

    /**
     * <p>The URL the user visits to complete registration and provide a password. This
     * is returned only for users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline void SetUserInvitationUrl(const char* value) { m_userInvitationUrl.assign(value); }

    /**
     * <p>The URL the user visits to complete registration and provide a password. This
     * is returned only for users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline RegisterUserResult& WithUserInvitationUrl(const Aws::String& value) { SetUserInvitationUrl(value); return *this;}

    /**
     * <p>The URL the user visits to complete registration and provide a password. This
     * is returned only for users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline RegisterUserResult& WithUserInvitationUrl(Aws::String&& value) { SetUserInvitationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL the user visits to complete registration and provide a password. This
     * is returned only for users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline RegisterUserResult& WithUserInvitationUrl(const char* value) { SetUserInvitationUrl(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline RegisterUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline RegisterUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline RegisterUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline RegisterUserResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    User m_user;

    Aws::String m_userInvitationUrl;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
