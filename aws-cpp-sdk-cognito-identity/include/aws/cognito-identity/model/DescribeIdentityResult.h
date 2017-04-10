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
namespace CognitoIdentity
{
namespace Model
{
  /**
   * <p>A description of the identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/IdentityDescription">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API DescribeIdentityResult
  {
  public:
    DescribeIdentityResult();
    DescribeIdentityResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeIdentityResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityId = value; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityId = std::move(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityId.assign(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline DescribeIdentityResult& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline DescribeIdentityResult& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline DescribeIdentityResult& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogins() const{ return m_logins; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline void SetLogins(const Aws::Vector<Aws::String>& value) { m_logins = value; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline void SetLogins(Aws::Vector<Aws::String>&& value) { m_logins = std::move(value); }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline DescribeIdentityResult& WithLogins(const Aws::Vector<Aws::String>& value) { SetLogins(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline DescribeIdentityResult& WithLogins(Aws::Vector<Aws::String>&& value) { SetLogins(std::move(value)); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline DescribeIdentityResult& AddLogins(const Aws::String& value) { m_logins.push_back(value); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline DescribeIdentityResult& AddLogins(Aws::String&& value) { m_logins.push_back(std::move(value)); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline DescribeIdentityResult& AddLogins(const char* value) { m_logins.push_back(value); return *this; }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline DescribeIdentityResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline DescribeIdentityResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline DescribeIdentityResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline DescribeIdentityResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:
    Aws::String m_identityId;
    Aws::Vector<Aws::String> m_logins;
    Aws::Utils::DateTime m_creationDate;
    Aws::Utils::DateTime m_lastModifiedDate;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
