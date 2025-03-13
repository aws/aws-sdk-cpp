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
    AWS_COGNITOIDENTITYPROVIDER_API ListResourceServersResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ListResourceServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListResourceServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of resource servers and the details of their configuration. For
     * each, the response includes names, identifiers, and custom scopes.</p>
     */
    inline const Aws::Vector<ResourceServerType>& GetResourceServers() const { return m_resourceServers; }
    template<typename ResourceServersT = Aws::Vector<ResourceServerType>>
    void SetResourceServers(ResourceServersT&& value) { m_resourceServersHasBeenSet = true; m_resourceServers = std::forward<ResourceServersT>(value); }
    template<typename ResourceServersT = Aws::Vector<ResourceServerType>>
    ListResourceServersResult& WithResourceServers(ResourceServersT&& value) { SetResourceServers(std::forward<ResourceServersT>(value)); return *this;}
    template<typename ResourceServersT = ResourceServerType>
    ListResourceServersResult& AddResourceServers(ResourceServersT&& value) { m_resourceServersHasBeenSet = true; m_resourceServers.emplace_back(std::forward<ResourceServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier that Amazon Cognito returned with the previous request to this
     * operation. When you include a pagination token in your request, Amazon Cognito
     * returns the next set of items in the list. By use of this token, you can
     * paginate through the full list of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceServersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceServersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceServerType> m_resourceServers;
    bool m_resourceServersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
