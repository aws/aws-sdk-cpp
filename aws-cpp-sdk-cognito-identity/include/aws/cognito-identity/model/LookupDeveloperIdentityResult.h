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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Returned in response to a successful <code>LookupDeveloperIdentity</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/LookupDeveloperIdentityResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API LookupDeveloperIdentityResult
  {
  public:
    LookupDeveloperIdentityResult();
    LookupDeveloperIdentityResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    LookupDeveloperIdentityResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline LookupDeveloperIdentityResult& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline LookupDeveloperIdentityResult& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline LookupDeveloperIdentityResult& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * <p>This is the list of developer user identifiers associated with an identity
     * ID. Cognito supports the association of multiple developer user identifiers with
     * an identity ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeveloperUserIdentifierList() const{ return m_developerUserIdentifierList; }

    /**
     * <p>This is the list of developer user identifiers associated with an identity
     * ID. Cognito supports the association of multiple developer user identifiers with
     * an identity ID.</p>
     */
    inline void SetDeveloperUserIdentifierList(const Aws::Vector<Aws::String>& value) { m_developerUserIdentifierList = value; }

    /**
     * <p>This is the list of developer user identifiers associated with an identity
     * ID. Cognito supports the association of multiple developer user identifiers with
     * an identity ID.</p>
     */
    inline void SetDeveloperUserIdentifierList(Aws::Vector<Aws::String>&& value) { m_developerUserIdentifierList = std::move(value); }

    /**
     * <p>This is the list of developer user identifiers associated with an identity
     * ID. Cognito supports the association of multiple developer user identifiers with
     * an identity ID.</p>
     */
    inline LookupDeveloperIdentityResult& WithDeveloperUserIdentifierList(const Aws::Vector<Aws::String>& value) { SetDeveloperUserIdentifierList(value); return *this;}

    /**
     * <p>This is the list of developer user identifiers associated with an identity
     * ID. Cognito supports the association of multiple developer user identifiers with
     * an identity ID.</p>
     */
    inline LookupDeveloperIdentityResult& WithDeveloperUserIdentifierList(Aws::Vector<Aws::String>&& value) { SetDeveloperUserIdentifierList(std::move(value)); return *this;}

    /**
     * <p>This is the list of developer user identifiers associated with an identity
     * ID. Cognito supports the association of multiple developer user identifiers with
     * an identity ID.</p>
     */
    inline LookupDeveloperIdentityResult& AddDeveloperUserIdentifierList(const Aws::String& value) { m_developerUserIdentifierList.push_back(value); return *this; }

    /**
     * <p>This is the list of developer user identifiers associated with an identity
     * ID. Cognito supports the association of multiple developer user identifiers with
     * an identity ID.</p>
     */
    inline LookupDeveloperIdentityResult& AddDeveloperUserIdentifierList(Aws::String&& value) { m_developerUserIdentifierList.push_back(std::move(value)); return *this; }

    /**
     * <p>This is the list of developer user identifiers associated with an identity
     * ID. Cognito supports the association of multiple developer user identifiers with
     * an identity ID.</p>
     */
    inline LookupDeveloperIdentityResult& AddDeveloperUserIdentifierList(const char* value) { m_developerUserIdentifierList.push_back(value); return *this; }

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline LookupDeveloperIdentityResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline LookupDeveloperIdentityResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline LookupDeveloperIdentityResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_identityId;
    Aws::Vector<Aws::String> m_developerUserIdentifierList;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
