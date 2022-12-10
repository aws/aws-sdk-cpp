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


    /**
     * <p>The system-generated unique ID of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The system-generated unique ID of the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The system-generated unique ID of the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The system-generated unique ID of the user.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The system-generated unique ID of the user.</p>
     */
    inline GetUserDetailsResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the user.</p>
     */
    inline GetUserDetailsResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the user.</p>
     */
    inline GetUserDetailsResult& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The name of the user as displayed in Amazon CodeCatalyst.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user as displayed in Amazon CodeCatalyst.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userName = value; }

    /**
     * <p>The name of the user as displayed in Amazon CodeCatalyst.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }

    /**
     * <p>The name of the user as displayed in Amazon CodeCatalyst.</p>
     */
    inline void SetUserName(const char* value) { m_userName.assign(value); }

    /**
     * <p>The name of the user as displayed in Amazon CodeCatalyst.</p>
     */
    inline GetUserDetailsResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user as displayed in Amazon CodeCatalyst.</p>
     */
    inline GetUserDetailsResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the user as displayed in Amazon CodeCatalyst.</p>
     */
    inline GetUserDetailsResult& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The friendly name displayed for the user in Amazon CodeCatalyst.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The friendly name displayed for the user in Amazon CodeCatalyst.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The friendly name displayed for the user in Amazon CodeCatalyst.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The friendly name displayed for the user in Amazon CodeCatalyst.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The friendly name displayed for the user in Amazon CodeCatalyst.</p>
     */
    inline GetUserDetailsResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The friendly name displayed for the user in Amazon CodeCatalyst.</p>
     */
    inline GetUserDetailsResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The friendly name displayed for the user in Amazon CodeCatalyst.</p>
     */
    inline GetUserDetailsResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The email address provided by the user when they signed up.</p>
     */
    inline const EmailAddress& GetPrimaryEmail() const{ return m_primaryEmail; }

    /**
     * <p>The email address provided by the user when they signed up.</p>
     */
    inline void SetPrimaryEmail(const EmailAddress& value) { m_primaryEmail = value; }

    /**
     * <p>The email address provided by the user when they signed up.</p>
     */
    inline void SetPrimaryEmail(EmailAddress&& value) { m_primaryEmail = std::move(value); }

    /**
     * <p>The email address provided by the user when they signed up.</p>
     */
    inline GetUserDetailsResult& WithPrimaryEmail(const EmailAddress& value) { SetPrimaryEmail(value); return *this;}

    /**
     * <p>The email address provided by the user when they signed up.</p>
     */
    inline GetUserDetailsResult& WithPrimaryEmail(EmailAddress&& value) { SetPrimaryEmail(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p/>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p/>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p/>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p/>
     */
    inline GetUserDetailsResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p/>
     */
    inline GetUserDetailsResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetUserDetailsResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_userId;

    Aws::String m_userName;

    Aws::String m_displayName;

    EmailAddress m_primaryEmail;

    Aws::String m_version;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
