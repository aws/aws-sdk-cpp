/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  class GetClusterCredentialsWithIAMResult
  {
  public:
    AWS_REDSHIFT_API GetClusterCredentialsWithIAMResult();
    AWS_REDSHIFT_API GetClusterCredentialsWithIAMResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API GetClusterCredentialsWithIAMResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A database user name that you provide when you connect to a database. The
     * database user is mapped 1:1 to the source IAM identity. </p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>A database user name that you provide when you connect to a database. The
     * database user is mapped 1:1 to the source IAM identity. </p>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUser = value; }

    /**
     * <p>A database user name that you provide when you connect to a database. The
     * database user is mapped 1:1 to the source IAM identity. </p>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUser = std::move(value); }

    /**
     * <p>A database user name that you provide when you connect to a database. The
     * database user is mapped 1:1 to the source IAM identity. </p>
     */
    inline void SetDbUser(const char* value) { m_dbUser.assign(value); }

    /**
     * <p>A database user name that you provide when you connect to a database. The
     * database user is mapped 1:1 to the source IAM identity. </p>
     */
    inline GetClusterCredentialsWithIAMResult& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>A database user name that you provide when you connect to a database. The
     * database user is mapped 1:1 to the source IAM identity. </p>
     */
    inline GetClusterCredentialsWithIAMResult& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>A database user name that you provide when you connect to a database. The
     * database user is mapped 1:1 to the source IAM identity. </p>
     */
    inline GetClusterCredentialsWithIAMResult& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>A temporary password that you provide when you connect to a database.</p>
     */
    inline const Aws::String& GetDbPassword() const{ return m_dbPassword; }

    /**
     * <p>A temporary password that you provide when you connect to a database.</p>
     */
    inline void SetDbPassword(const Aws::String& value) { m_dbPassword = value; }

    /**
     * <p>A temporary password that you provide when you connect to a database.</p>
     */
    inline void SetDbPassword(Aws::String&& value) { m_dbPassword = std::move(value); }

    /**
     * <p>A temporary password that you provide when you connect to a database.</p>
     */
    inline void SetDbPassword(const char* value) { m_dbPassword.assign(value); }

    /**
     * <p>A temporary password that you provide when you connect to a database.</p>
     */
    inline GetClusterCredentialsWithIAMResult& WithDbPassword(const Aws::String& value) { SetDbPassword(value); return *this;}

    /**
     * <p>A temporary password that you provide when you connect to a database.</p>
     */
    inline GetClusterCredentialsWithIAMResult& WithDbPassword(Aws::String&& value) { SetDbPassword(std::move(value)); return *this;}

    /**
     * <p>A temporary password that you provide when you connect to a database.</p>
     */
    inline GetClusterCredentialsWithIAMResult& WithDbPassword(const char* value) { SetDbPassword(value); return *this;}


    /**
     * <p>The time (UTC) when the temporary password expires. After this timestamp, a
     * log in with the temporary password fails.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }

    /**
     * <p>The time (UTC) when the temporary password expires. After this timestamp, a
     * log in with the temporary password fails.</p>
     */
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expiration = value; }

    /**
     * <p>The time (UTC) when the temporary password expires. After this timestamp, a
     * log in with the temporary password fails.</p>
     */
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expiration = std::move(value); }

    /**
     * <p>The time (UTC) when the temporary password expires. After this timestamp, a
     * log in with the temporary password fails.</p>
     */
    inline GetClusterCredentialsWithIAMResult& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    /**
     * <p>The time (UTC) when the temporary password expires. After this timestamp, a
     * log in with the temporary password fails.</p>
     */
    inline GetClusterCredentialsWithIAMResult& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRefreshTime() const{ return m_nextRefreshTime; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextRefreshTime(const Aws::Utils::DateTime& value) { m_nextRefreshTime = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextRefreshTime(Aws::Utils::DateTime&& value) { m_nextRefreshTime = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline GetClusterCredentialsWithIAMResult& WithNextRefreshTime(const Aws::Utils::DateTime& value) { SetNextRefreshTime(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline GetClusterCredentialsWithIAMResult& WithNextRefreshTime(Aws::Utils::DateTime&& value) { SetNextRefreshTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetClusterCredentialsWithIAMResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetClusterCredentialsWithIAMResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dbUser;

    Aws::String m_dbPassword;

    Aws::Utils::DateTime m_expiration;

    Aws::Utils::DateTime m_nextRefreshTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
