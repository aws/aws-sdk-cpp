/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceSummary.h>
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
  class ListInstancesResult
  {
  public:
    AWS_CONNECT_API ListInstancesResult() = default;
    AWS_CONNECT_API ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the instances.</p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstanceSummaryList() const { return m_instanceSummaryList; }
    template<typename InstanceSummaryListT = Aws::Vector<InstanceSummary>>
    void SetInstanceSummaryList(InstanceSummaryListT&& value) { m_instanceSummaryListHasBeenSet = true; m_instanceSummaryList = std::forward<InstanceSummaryListT>(value); }
    template<typename InstanceSummaryListT = Aws::Vector<InstanceSummary>>
    ListInstancesResult& WithInstanceSummaryList(InstanceSummaryListT&& value) { SetInstanceSummaryList(std::forward<InstanceSummaryListT>(value)); return *this;}
    template<typename InstanceSummaryListT = InstanceSummary>
    ListInstancesResult& AddInstanceSummaryList(InstanceSummaryListT&& value) { m_instanceSummaryListHasBeenSet = true; m_instanceSummaryList.emplace_back(std::forward<InstanceSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceSummary> m_instanceSummaryList;
    bool m_instanceSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
