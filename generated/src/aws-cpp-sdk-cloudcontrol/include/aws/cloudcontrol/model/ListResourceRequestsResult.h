/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudcontrol/model/ProgressEvent.h>
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
namespace CloudControlApi
{
namespace Model
{
  class ListResourceRequestsResult
  {
  public:
    AWS_CLOUDCONTROLAPI_API ListResourceRequestsResult() = default;
    AWS_CLOUDCONTROLAPI_API ListResourceRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API ListResourceRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requests that match the specified filter criteria.</p>
     */
    inline const Aws::Vector<ProgressEvent>& GetResourceRequestStatusSummaries() const { return m_resourceRequestStatusSummaries; }
    template<typename ResourceRequestStatusSummariesT = Aws::Vector<ProgressEvent>>
    void SetResourceRequestStatusSummaries(ResourceRequestStatusSummariesT&& value) { m_resourceRequestStatusSummariesHasBeenSet = true; m_resourceRequestStatusSummaries = std::forward<ResourceRequestStatusSummariesT>(value); }
    template<typename ResourceRequestStatusSummariesT = Aws::Vector<ProgressEvent>>
    ListResourceRequestsResult& WithResourceRequestStatusSummaries(ResourceRequestStatusSummariesT&& value) { SetResourceRequestStatusSummaries(std::forward<ResourceRequestStatusSummariesT>(value)); return *this;}
    template<typename ResourceRequestStatusSummariesT = ProgressEvent>
    ListResourceRequestsResult& AddResourceRequestStatusSummaries(ResourceRequestStatusSummariesT&& value) { m_resourceRequestStatusSummariesHasBeenSet = true; m_resourceRequestStatusSummaries.emplace_back(std::forward<ResourceRequestStatusSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResources</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceRequestsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceRequestsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProgressEvent> m_resourceRequestStatusSummaries;
    bool m_resourceRequestStatusSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
