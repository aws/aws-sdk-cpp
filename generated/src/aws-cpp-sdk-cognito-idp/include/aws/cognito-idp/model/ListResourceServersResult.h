/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/ResourceServerType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class ListResourceServersResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListResourceServersResult();
    AWS_COGNITOIDENTITYPROVIDER_API ListResourceServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListResourceServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of resource servers and the details of their configuration. For
     * each, the response includes names, identifiers, and custom scopes.</p>
     */
    inline const Aws::Vector<ResourceServerType>& GetResourceServers() const{ return m_resourceServers; }
    inline void SetResourceServers(const Aws::Vector<ResourceServerType>& value) { m_resourceServers = value; }
    inline void SetResourceServers(Aws::Vector<ResourceServerType>&& value) { m_resourceServers = std::move(value); }
    inline ListResourceServersResult& WithResourceServers(const Aws::Vector<ResourceServerType>& value) { SetResourceServers(value); return *this;}
    inline ListResourceServersResult& WithResourceServers(Aws::Vector<ResourceServerType>&& value) { SetResourceServers(std::move(value)); return *this;}
    inline ListResourceServersResult& AddResourceServers(const ResourceServerType& value) { m_resourceServers.push_back(value); return *this; }
    inline ListResourceServersResult& AddResourceServers(ResourceServerType&& value) { m_resourceServers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier that Amazon Cognito returned with the previous request to this
     * operation. When you include a pagination token in your request, Amazon Cognito
     * returns the next set of items in the list. By use of this token, you can
     * paginate through the full list of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourceServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourceServersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourceServersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourceServersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceServerType> m_resourceServers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
