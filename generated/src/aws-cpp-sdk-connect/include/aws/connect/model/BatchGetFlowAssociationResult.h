/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FlowAssociationSummary.h>
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
namespace Connect
{
namespace Model
{
  class BatchGetFlowAssociationResult
  {
  public:
    AWS_CONNECT_API BatchGetFlowAssociationResult() = default;
    AWS_CONNECT_API BatchGetFlowAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API BatchGetFlowAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about flow associations.</p>
     */
    inline const Aws::Vector<FlowAssociationSummary>& GetFlowAssociationSummaryList() const { return m_flowAssociationSummaryList; }
    template<typename FlowAssociationSummaryListT = Aws::Vector<FlowAssociationSummary>>
    void SetFlowAssociationSummaryList(FlowAssociationSummaryListT&& value) { m_flowAssociationSummaryListHasBeenSet = true; m_flowAssociationSummaryList = std::forward<FlowAssociationSummaryListT>(value); }
    template<typename FlowAssociationSummaryListT = Aws::Vector<FlowAssociationSummary>>
    BatchGetFlowAssociationResult& WithFlowAssociationSummaryList(FlowAssociationSummaryListT&& value) { SetFlowAssociationSummaryList(std::forward<FlowAssociationSummaryListT>(value)); return *this;}
    template<typename FlowAssociationSummaryListT = FlowAssociationSummary>
    BatchGetFlowAssociationResult& AddFlowAssociationSummaryList(FlowAssociationSummaryListT&& value) { m_flowAssociationSummaryListHasBeenSet = true; m_flowAssociationSummaryList.emplace_back(std::forward<FlowAssociationSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetFlowAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowAssociationSummary> m_flowAssociationSummaryList;
    bool m_flowAssociationSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
