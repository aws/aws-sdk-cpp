/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  /**
   * <p>Temporary credentials with authorization to log on to an Amazon Redshift
   * database. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterCredentials">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API GetClusterCredentialsResult
  {
  public:
    GetClusterCredentialsResult();
    GetClusterCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetClusterCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * DbUser exists in the database, the new user name has the same database
     * privileges as the the user named in DbUser. By default, the user is added to
     * PUBLIC. If the <code>DbGroups</code> parameter is specifed, <code>DbUser</code>
     * is added to the listed groups for any sessions created using these
     * credentials.</p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * DbUser exists in the database, the new user name has the same database
     * privileges as the the user named in DbUser. By default, the user is added to
     * PUBLIC. If the <code>DbGroups</code> parameter is specifed, <code>DbUser</code>
     * is added to the listed groups for any sessions created using these
     * credentials.</p>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUser = value; }

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * DbUser exists in the database, the new user name has the same database
     * privileges as the the user named in DbUser. By default, the user is added to
     * PUBLIC. If the <code>DbGroups</code> parameter is specifed, <code>DbUser</code>
     * is added to the listed groups for any sessions created using these
     * credentials.</p>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUser = std::move(value); }

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * DbUser exists in the database, the new user name has the same database
     * privileges as the the user named in DbUser. By default, the user is added to
     * PUBLIC. If the <code>DbGroups</code> parameter is specifed, <code>DbUser</code>
     * is added to the listed groups for any sessions created using these
     * credentials.</p>
     */
    inline void SetDbUser(const char* value) { m_dbUser.assign(value); }

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * DbUser exists in the database, the new user name has the same database
     * privileges as the the user named in DbUser. By default, the user is added to
     * PUBLIC. If the <code>DbGroups</code> parameter is specifed, <code>DbUser</code>
     * is added to the listed groups for any sessions created using these
     * credentials.</p>
     */
    inline GetClusterCredentialsResult& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * DbUser exists in the database, the new user name has the same database
     * privileges as the the user named in DbUser. By default, the user is added to
     * PUBLIC. If the <code>DbGroups</code> parameter is specifed, <code>DbUser</code>
     * is added to the listed groups for any sessions created using these
     * credentials.</p>
     */
    inline GetClusterCredentialsResult& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * DbUser exists in the database, the new user name has the same database
     * privileges as the the user named in DbUser. By default, the user is added to
     * PUBLIC. If the <code>DbGroups</code> parameter is specifed, <code>DbUser</code>
     * is added to the listed groups for any sessions created using these
     * credentials.</p>
     */
    inline GetClusterCredentialsResult& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>. </p>
     */
    inline const Aws::String& GetDbPassword() const{ return m_dbPassword; }

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>. </p>
     */
    inline void SetDbPassword(const Aws::String& value) { m_dbPassword = value; }

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>. </p>
     */
    inline void SetDbPassword(Aws::String&& value) { m_dbPassword = std::move(value); }

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>. </p>
     */
    inline void SetDbPassword(const char* value) { m_dbPassword.assign(value); }

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>. </p>
     */
    inline GetClusterCredentialsResult& WithDbPassword(const Aws::String& value) { SetDbPassword(value); return *this;}

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>. </p>
     */
    inline GetClusterCredentialsResult& WithDbPassword(Aws::String&& value) { SetDbPassword(std::move(value)); return *this;}

    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>. </p>
     */
    inline GetClusterCredentialsResult& WithDbPassword(const char* value) { SetDbPassword(value); return *this;}


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
    inline GetClusterCredentialsResult& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    /**
     * <p>The date and time the password in <code>DbPassword</code> expires.</p>
     */
    inline GetClusterCredentialsResult& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetClusterCredentialsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetClusterCredentialsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dbUser;

    Aws::String m_dbPassword;

    Aws::Utils::DateTime m_expiration;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
