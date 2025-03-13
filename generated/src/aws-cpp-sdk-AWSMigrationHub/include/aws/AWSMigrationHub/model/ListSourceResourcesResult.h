/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/SourceResource.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListSourceResourcesResult
  {
  public:
    AWS_MIGRATIONHUB_API ListSourceResourcesResult() = default;
    AWS_MIGRATIONHUB_API ListSourceResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListSourceResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response includes a <code>NextToken</code> value, that means that
     * there are more results available. The value of <code>NextToken</code> is a
     * unique pagination token for each page. To retrieve the next page of results,
     * call this API again and specify this <code>NextToken</code> value in the
     * request. Keep all other arguments unchanged. Each pagination token expires after
     * 24 hours. Using an expired pagination token will return an HTTP 400 InvalidToken
     * error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSourceResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of source resources.</p>
     */
    inline const Aws::Vector<SourceResource>& GetSourceResourceList() const { return m_sourceResourceList; }
    template<typename SourceResourceListT = Aws::Vector<SourceResource>>
    void SetSourceResourceList(SourceResourceListT&& value) { m_sourceResourceListHasBeenSet = true; m_sourceResourceList = std::forward<SourceResourceListT>(value); }
    template<typename SourceResourceListT = Aws::Vector<SourceResource>>
    ListSourceResourcesResult& WithSourceResourceList(SourceResourceListT&& value) { SetSourceResourceList(std::forward<SourceResourceListT>(value)); return *this;}
    template<typename SourceResourceListT = SourceResource>
    ListSourceResourcesResult& AddSourceResourceList(SourceResourceListT&& value) { m_sourceResourceListHasBeenSet = true; m_sourceResourceList.emplace_back(std::forward<SourceResourceListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSourceResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SourceResource> m_sourceResourceList;
    bool m_sourceResourceListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
