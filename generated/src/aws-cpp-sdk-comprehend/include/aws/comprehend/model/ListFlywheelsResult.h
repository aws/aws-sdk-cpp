/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/FlywheelSummary.h>
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
namespace Comprehend
{
namespace Model
{
  class ListFlywheelsResult
  {
  public:
    AWS_COMPREHEND_API ListFlywheelsResult() = default;
    AWS_COMPREHEND_API ListFlywheelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListFlywheelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of flywheel properties retrieved by the service in response to the
     * request. </p>
     */
    inline const Aws::Vector<FlywheelSummary>& GetFlywheelSummaryList() const { return m_flywheelSummaryList; }
    template<typename FlywheelSummaryListT = Aws::Vector<FlywheelSummary>>
    void SetFlywheelSummaryList(FlywheelSummaryListT&& value) { m_flywheelSummaryListHasBeenSet = true; m_flywheelSummaryList = std::forward<FlywheelSummaryListT>(value); }
    template<typename FlywheelSummaryListT = Aws::Vector<FlywheelSummary>>
    ListFlywheelsResult& WithFlywheelSummaryList(FlywheelSummaryListT&& value) { SetFlywheelSummaryList(std::forward<FlywheelSummaryListT>(value)); return *this;}
    template<typename FlywheelSummaryListT = FlywheelSummary>
    ListFlywheelsResult& AddFlywheelSummaryList(FlywheelSummaryListT&& value) { m_flywheelSummaryListHasBeenSet = true; m_flywheelSummaryList.emplace_back(std::forward<FlywheelSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFlywheelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFlywheelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlywheelSummary> m_flywheelSummaryList;
    bool m_flywheelSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
