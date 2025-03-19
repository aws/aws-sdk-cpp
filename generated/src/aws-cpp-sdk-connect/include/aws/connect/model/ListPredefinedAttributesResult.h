/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/PredefinedAttributeSummary.h>
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
  class ListPredefinedAttributesResult
  {
  public:
    AWS_CONNECT_API ListPredefinedAttributesResult() = default;
    AWS_CONNECT_API ListPredefinedAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListPredefinedAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPredefinedAttributesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary of the predefined attributes.</p>
     */
    inline const Aws::Vector<PredefinedAttributeSummary>& GetPredefinedAttributeSummaryList() const { return m_predefinedAttributeSummaryList; }
    template<typename PredefinedAttributeSummaryListT = Aws::Vector<PredefinedAttributeSummary>>
    void SetPredefinedAttributeSummaryList(PredefinedAttributeSummaryListT&& value) { m_predefinedAttributeSummaryListHasBeenSet = true; m_predefinedAttributeSummaryList = std::forward<PredefinedAttributeSummaryListT>(value); }
    template<typename PredefinedAttributeSummaryListT = Aws::Vector<PredefinedAttributeSummary>>
    ListPredefinedAttributesResult& WithPredefinedAttributeSummaryList(PredefinedAttributeSummaryListT&& value) { SetPredefinedAttributeSummaryList(std::forward<PredefinedAttributeSummaryListT>(value)); return *this;}
    template<typename PredefinedAttributeSummaryListT = PredefinedAttributeSummary>
    ListPredefinedAttributesResult& AddPredefinedAttributeSummaryList(PredefinedAttributeSummaryListT&& value) { m_predefinedAttributeSummaryListHasBeenSet = true; m_predefinedAttributeSummaryList.emplace_back(std::forward<PredefinedAttributeSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPredefinedAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PredefinedAttributeSummary> m_predefinedAttributeSummaryList;
    bool m_predefinedAttributeSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
