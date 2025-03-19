/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/StoredQueryMetadata.h>
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
namespace ConfigService
{
namespace Model
{
  class ListStoredQueriesResult
  {
  public:
    AWS_CONFIGSERVICE_API ListStoredQueriesResult() = default;
    AWS_CONFIGSERVICE_API ListStoredQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListStoredQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>StoredQueryMetadata</code> objects.</p>
     */
    inline const Aws::Vector<StoredQueryMetadata>& GetStoredQueryMetadata() const { return m_storedQueryMetadata; }
    template<typename StoredQueryMetadataT = Aws::Vector<StoredQueryMetadata>>
    void SetStoredQueryMetadata(StoredQueryMetadataT&& value) { m_storedQueryMetadataHasBeenSet = true; m_storedQueryMetadata = std::forward<StoredQueryMetadataT>(value); }
    template<typename StoredQueryMetadataT = Aws::Vector<StoredQueryMetadata>>
    ListStoredQueriesResult& WithStoredQueryMetadata(StoredQueryMetadataT&& value) { SetStoredQueryMetadata(std::forward<StoredQueryMetadataT>(value)); return *this;}
    template<typename StoredQueryMetadataT = StoredQueryMetadata>
    ListStoredQueriesResult& AddStoredQueryMetadata(StoredQueryMetadataT&& value) { m_storedQueryMetadataHasBeenSet = true; m_storedQueryMetadata.emplace_back(std::forward<StoredQueryMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this operation again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStoredQueriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStoredQueriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StoredQueryMetadata> m_storedQueryMetadata;
    bool m_storedQueryMetadataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
