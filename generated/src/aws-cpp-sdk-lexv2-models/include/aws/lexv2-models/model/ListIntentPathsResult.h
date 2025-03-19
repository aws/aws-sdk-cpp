/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/AnalyticsIntentNodeSummary.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListIntentPathsResult
  {
  public:
    AWS_LEXMODELSV2_API ListIntentPathsResult() = default;
    AWS_LEXMODELSV2_API ListIntentPathsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListIntentPathsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects, each of which contains information about a node in the
     * intent path for which you requested metrics.</p>
     */
    inline const Aws::Vector<AnalyticsIntentNodeSummary>& GetNodeSummaries() const { return m_nodeSummaries; }
    template<typename NodeSummariesT = Aws::Vector<AnalyticsIntentNodeSummary>>
    void SetNodeSummaries(NodeSummariesT&& value) { m_nodeSummariesHasBeenSet = true; m_nodeSummaries = std::forward<NodeSummariesT>(value); }
    template<typename NodeSummariesT = Aws::Vector<AnalyticsIntentNodeSummary>>
    ListIntentPathsResult& WithNodeSummaries(NodeSummariesT&& value) { SetNodeSummaries(std::forward<NodeSummariesT>(value)); return *this;}
    template<typename NodeSummariesT = AnalyticsIntentNodeSummary>
    ListIntentPathsResult& AddNodeSummaries(NodeSummariesT&& value) { m_nodeSummariesHasBeenSet = true; m_nodeSummaries.emplace_back(std::forward<NodeSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIntentPathsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalyticsIntentNodeSummary> m_nodeSummaries;
    bool m_nodeSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
