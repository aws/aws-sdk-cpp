/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class GetCredentialsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetCredentialsResult();
    AWS_REDSHIFTSERVERLESS_API GetCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>.</p>
     */
    inline const Aws::String& GetDbPassword() const{ return m_dbPassword; }

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>.</p>
     */
    inline void SetDbPassword(const Aws::String& value) { m_dbPassword = value; }

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>.</p>
     */
    inline void SetDbPassword(Aws::String&& value) { m_dbPassword = std::move(value); }

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>.</p>
     */
    inline void SetDbPassword(const char* value) { m_dbPassword.assign(value); }

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>.</p>
     */
    inline GetCredentialsResult& WithDbPassword(const Aws::String& value) { SetDbPassword(value); return *this;}

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>.</p>
     */
    inline GetCredentialsResult& WithDbPassword(Aws::String&& value) { SetDbPassword(std::move(value)); return *this;}

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>.</p>
     */
    inline GetCredentialsResult& WithDbPassword(const char* value) { SetDbPassword(value); return *this;}


    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * <code>DbUser</code> exists in the database, the new user name has the same
     * database privileges as the the user named in <code>DbUser</code>. By default,
     * the user is added to PUBLIC.</p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * <code>DbUser</code> exists in the database, the new user name has the same
     * database privileges as the the user named in <code>DbUser</code>. By default,
     * the user is added to PUBLIC.</p>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUser = value; }

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * <code>DbUser</code> exists in the database, the new user name has the same
     * database privileges as the the user named in <code>DbUser</code>. By default,
     * the user is added to PUBLIC.</p>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUser = std::move(value); }

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * <code>DbUser</code> exists in the database, the new user name has the same
     * database privileges as the the user named in <code>DbUser</code>. By default,
     * the user is added to PUBLIC.</p>
     */
    inline void SetDbUser(const char* value) { m_dbUser.assign(value); }

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * <code>DbUser</code> exists in the database, the new user name has the same
     * database privileges as the the user named in <code>DbUser</code>. By default,
     * the user is added to PUBLIC.</p>
     */
    inline GetCredentialsResult& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * <code>DbUser</code> exists in the database, the new user name has the same
     * database privileges as the the user named in <code>DbUser</code>. By default,
     * the user is added to PUBLIC.</p>
     */
    inline GetCredentialsResult& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * <code>DbUser</code> exists in the database, the new user name has the same
     * database privileges as the the user named in <code>DbUser</code>. By default,
     * the user is added to PUBLIC.</p>
     */
    inline GetCredentialsResult& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>The date and time the password in <code>DbPassword</code> expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }

    /**
     * <p>The date and time the password in <code>DbPassword</code> expires.</p>
     */
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expiration = value; }

    /**
     * <p>The date and time the password in <code>DbPassword</code> expires.</p>
     */
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expiration = std::move(value); }

    /**
     * <p>The date and time the password in <code>DbPassword</code> expires.</p>
     */
    inline GetCredentialsResult& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    /**
     * <p>The date and time the password in <code>DbPassword</code> expires.</p>
     */
    inline GetCredentialsResult& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}


    /**
     * <p>The date and time of when the <code>DbUser</code> and <code>DbPassword</code>
     * authorization refreshes.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRefreshTime() const{ return m_nextRefreshTime; }

    /**
     * <p>The date and time of when the <code>DbUser</code> and <code>DbPassword</code>
     * authorization refreshes.</p>
     */
    inline void SetNextRefreshTime(const Aws::Utils::DateTime& value) { m_nextRefreshTime = value; }

    /**
     * <p>The date and time of when the <code>DbUser</code> and <code>DbPassword</code>
     * authorization refreshes.</p>
     */
    inline void SetNextRefreshTime(Aws::Utils::DateTime&& value) { m_nextRefreshTime = std::move(value); }

    /**
     * <p>The date and time of when the <code>DbUser</code> and <code>DbPassword</code>
     * authorization refreshes.</p>
     */
    inline GetCredentialsResult& WithNextRefreshTime(const Aws::Utils::DateTime& value) { SetNextRefreshTime(value); return *this;}

    /**
     * <p>The date and time of when the <code>DbUser</code> and <code>DbPassword</code>
     * authorization refreshes.</p>
     */
    inline GetCredentialsResult& WithNextRefreshTime(Aws::Utils::DateTime&& value) { SetNextRefreshTime(std::move(value)); return *this;}

  private:

    Aws::String m_dbPassword;

    Aws::String m_dbUser;

    Aws::Utils::DateTime m_expiration;

    Aws::Utils::DateTime m_nextRefreshTime;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
