/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecatalyst/model/EmailAddress.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class GetUserDetailsResult
  {
  public:
    AWS_CODECATALYST_API GetUserDetailsResult();
    AWS_CODECATALYST_API GetUserDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetUserDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The system-generated unique ID of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline void SetUserId(const Aws::String& value) { m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userId.assign(value); }
    inline GetUserDetailsResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline GetUserDetailsResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline GetUserDetailsResult& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user as displayed in Amazon CodeCatalyst.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline void SetUserName(const Aws::String& value) { m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userName.assign(value); }
    inline GetUserDetailsResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline GetUserDetailsResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline GetUserDetailsResult& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name displayed for the user in Amazon CodeCatalyst.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetUserDetailsResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetUserDetailsResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetUserDetailsResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address provided by the user when they signed up.</p>
     */
    inline const EmailAddress& GetPrimaryEmail() const{ return m_primaryEmail; }
    inline void SetPrimaryEmail(const EmailAddress& value) { m_primaryEmail = value; }
    inline void SetPrimaryEmail(EmailAddress&& value) { m_primaryEmail = std::move(value); }
    inline GetUserDetailsResult& WithPrimaryEmail(const EmailAddress& value) { SetPrimaryEmail(value); return *this;}
    inline GetUserDetailsResult& WithPrimaryEmail(EmailAddress&& value) { SetPrimaryEmail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline GetUserDetailsResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline GetUserDetailsResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline GetUserDetailsResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUserDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUserDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUserDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;

    Aws::String m_userName;

    Aws::String m_displayName;

    EmailAddress m_primaryEmail;

    Aws::String m_version;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
