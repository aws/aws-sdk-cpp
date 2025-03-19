/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/ApiKey.h>
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
namespace AppSync
{
namespace Model
{
  class ListApiKeysResult
  {
  public:
    AWS_APPSYNC_API ListApiKeysResult() = default;
    AWS_APPSYNC_API ListApiKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListApiKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ApiKey</code> objects.</p>
     */
    inline const Aws::Vector<ApiKey>& GetApiKeys() const { return m_apiKeys; }
    template<typename ApiKeysT = Aws::Vector<ApiKey>>
    void SetApiKeys(ApiKeysT&& value) { m_apiKeysHasBeenSet = true; m_apiKeys = std::forward<ApiKeysT>(value); }
    template<typename ApiKeysT = Aws::Vector<ApiKey>>
    ListApiKeysResult& WithApiKeys(ApiKeysT&& value) { SetApiKeys(std::forward<ApiKeysT>(value)); return *this;}
    template<typename ApiKeysT = ApiKey>
    ListApiKeysResult& AddApiKeys(ApiKeysT&& value) { m_apiKeysHasBeenSet = true; m_apiKeys.emplace_back(std::forward<ApiKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApiKeysResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApiKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApiKey> m_apiKeys;
    bool m_apiKeysHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
