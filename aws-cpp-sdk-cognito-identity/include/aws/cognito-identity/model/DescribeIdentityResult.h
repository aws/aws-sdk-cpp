/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
namespace CognitoIdentity
{
namespace Model
{
  /**
   * A description of the identity.
   */
  class AWS_COGNITOIDENTITY_API DescribeIdentityResult
  {
  public:
    DescribeIdentityResult();
    DescribeIdentityResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeIdentityResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityId = value; }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityId = value; }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline void SetIdentityId(const char* value) { m_identityId.assign(value); }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline DescribeIdentityResult& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline DescribeIdentityResult& WithIdentityId(Aws::String&& value) { SetIdentityId(value); return *this;}

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline DescribeIdentityResult& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline const Aws::Vector<Aws::String>& GetLogins() const{ return m_logins; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline void SetLogins(const Aws::Vector<Aws::String>& value) { m_logins = value; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline void SetLogins(Aws::Vector<Aws::String>&& value) { m_logins = value; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline DescribeIdentityResult& WithLogins(const Aws::Vector<Aws::String>& value) { SetLogins(value); return *this;}

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline DescribeIdentityResult& WithLogins(Aws::Vector<Aws::String>&& value) { SetLogins(value); return *this;}

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline DescribeIdentityResult& AddLogins(const Aws::String& value) { m_logins.push_back(value); return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline DescribeIdentityResult& AddLogins(Aws::String&& value) { m_logins.push_back(value); return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline DescribeIdentityResult& AddLogins(const char* value) { m_logins.push_back(value); return *this; }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline double GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline void SetCreationDate(double value) { m_creationDate = value; }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline DescribeIdentityResult& WithCreationDate(double value) { SetCreationDate(value); return *this;}

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline double GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline void SetLastModifiedDate(double value) { m_lastModifiedDate = value; }

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline DescribeIdentityResult& WithLastModifiedDate(double value) { SetLastModifiedDate(value); return *this;}

  private:
    Aws::String m_identityId;
    Aws::Vector<Aws::String> m_logins;
    double m_creationDate;
    double m_lastModifiedDate;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
