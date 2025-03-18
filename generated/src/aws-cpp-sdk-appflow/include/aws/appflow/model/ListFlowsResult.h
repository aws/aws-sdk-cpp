/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/FlowDefinition.h>
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
namespace Appflow
{
namespace Model
{
  class ListFlowsResult
  {
  public:
    AWS_APPFLOW_API ListFlowsResult() = default;
    AWS_APPFLOW_API ListFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API ListFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of flows associated with your account. </p>
     */
    inline const Aws::Vector<FlowDefinition>& GetFlows() const { return m_flows; }
    template<typename FlowsT = Aws::Vector<FlowDefinition>>
    void SetFlows(FlowsT&& value) { m_flowsHasBeenSet = true; m_flows = std::forward<FlowsT>(value); }
    template<typename FlowsT = Aws::Vector<FlowDefinition>>
    ListFlowsResult& WithFlows(FlowsT&& value) { SetFlows(std::forward<FlowsT>(value)); return *this;}
    template<typename FlowsT = FlowDefinition>
    ListFlowsResult& AddFlows(FlowsT&& value) { m_flowsHasBeenSet = true; m_flows.emplace_back(std::forward<FlowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token for next page of data. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFlowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFlowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowDefinition> m_flows;
    bool m_flowsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
