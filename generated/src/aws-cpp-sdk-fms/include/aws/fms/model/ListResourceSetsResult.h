/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ResourceSetSummary.h>
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
namespace FMS
{
namespace Model
{
  class ListResourceSetsResult
  {
  public:
    AWS_FMS_API ListResourceSetsResult() = default;
    AWS_FMS_API ListResourceSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListResourceSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>ResourceSetSummary</code> objects.</p>
     */
    inline const Aws::Vector<ResourceSetSummary>& GetResourceSets() const { return m_resourceSets; }
    template<typename ResourceSetsT = Aws::Vector<ResourceSetSummary>>
    void SetResourceSets(ResourceSetsT&& value) { m_resourceSetsHasBeenSet = true; m_resourceSets = std::forward<ResourceSetsT>(value); }
    template<typename ResourceSetsT = Aws::Vector<ResourceSetSummary>>
    ListResourceSetsResult& WithResourceSets(ResourceSetsT&& value) { SetResourceSets(std::forward<ResourceSetsT>(value)); return *this;}
    template<typename ResourceSetsT = ResourceSetSummary>
    ListResourceSetsResult& AddResourceSets(ResourceSetsT&& value) { m_resourceSetsHasBeenSet = true; m_resourceSets.emplace_back(std::forward<ResourceSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceSetSummary> m_resourceSets;
    bool m_resourceSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
