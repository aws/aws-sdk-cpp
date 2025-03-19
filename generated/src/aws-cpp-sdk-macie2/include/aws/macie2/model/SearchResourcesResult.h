/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/MatchingResource.h>
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
namespace Macie2
{
namespace Model
{
  class SearchResourcesResult
  {
  public:
    AWS_MACIE2_API SearchResourcesResult() = default;
    AWS_MACIE2_API SearchResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API SearchResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each resource that matches the filter criteria
     * specified in the request.</p>
     */
    inline const Aws::Vector<MatchingResource>& GetMatchingResources() const { return m_matchingResources; }
    template<typename MatchingResourcesT = Aws::Vector<MatchingResource>>
    void SetMatchingResources(MatchingResourcesT&& value) { m_matchingResourcesHasBeenSet = true; m_matchingResources = std::forward<MatchingResourcesT>(value); }
    template<typename MatchingResourcesT = Aws::Vector<MatchingResource>>
    SearchResourcesResult& WithMatchingResources(MatchingResourcesT&& value) { SetMatchingResources(std::forward<MatchingResourcesT>(value)); return *this;}
    template<typename MatchingResourcesT = MatchingResource>
    SearchResourcesResult& AddMatchingResources(MatchingResourcesT&& value) { m_matchingResourcesHasBeenSet = true; m_matchingResources.emplace_back(std::forward<MatchingResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MatchingResource> m_matchingResources;
    bool m_matchingResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
