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
#include <aws/cognito-identity/model/IdentityDescription.h>

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
   * The response to a ListIdentities request.
   */
  class AWS_COGNITOIDENTITY_API ListIdentitiesResult
  {
  public:
    ListIdentitiesResult();
    ListIdentitiesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListIdentitiesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolId = value; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolId = value; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolId.assign(value); }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline ListIdentitiesResult& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline ListIdentitiesResult& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline ListIdentitiesResult& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

    /**
     * An object containing a set of identities and associated mappings.
     */
    inline const Aws::Vector<IdentityDescription>& GetIdentities() const{ return m_identities; }

    /**
     * An object containing a set of identities and associated mappings.
     */
    inline void SetIdentities(const Aws::Vector<IdentityDescription>& value) { m_identities = value; }

    /**
     * An object containing a set of identities and associated mappings.
     */
    inline void SetIdentities(Aws::Vector<IdentityDescription>&& value) { m_identities = value; }

    /**
     * An object containing a set of identities and associated mappings.
     */
    inline ListIdentitiesResult& WithIdentities(const Aws::Vector<IdentityDescription>& value) { SetIdentities(value); return *this;}

    /**
     * An object containing a set of identities and associated mappings.
     */
    inline ListIdentitiesResult& WithIdentities(Aws::Vector<IdentityDescription>&& value) { SetIdentities(value); return *this;}

    /**
     * An object containing a set of identities and associated mappings.
     */
    inline ListIdentitiesResult& AddIdentities(const IdentityDescription& value) { m_identities.push_back(value); return *this; }

    /**
     * An object containing a set of identities and associated mappings.
     */
    inline ListIdentitiesResult& AddIdentities(IdentityDescription&& value) { m_identities.push_back(value); return *this; }

    /**
     * A pagination token.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A pagination token.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A pagination token.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * A pagination token.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A pagination token.
     */
    inline ListIdentitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token.
     */
    inline ListIdentitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token.
     */
    inline ListIdentitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_identityPoolId;
    Aws::Vector<IdentityDescription> m_identities;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
