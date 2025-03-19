/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackComplianceSummary.h>
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
namespace ConfigService
{
namespace Model
{
  class GetConformancePackComplianceSummaryResult
  {
  public:
    AWS_CONFIGSERVICE_API GetConformancePackComplianceSummaryResult() = default;
    AWS_CONFIGSERVICE_API GetConformancePackComplianceSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetConformancePackComplianceSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ConformancePackComplianceSummary</code> objects. </p>
     */
    inline const Aws::Vector<ConformancePackComplianceSummary>& GetConformancePackComplianceSummaryList() const { return m_conformancePackComplianceSummaryList; }
    template<typename ConformancePackComplianceSummaryListT = Aws::Vector<ConformancePackComplianceSummary>>
    void SetConformancePackComplianceSummaryList(ConformancePackComplianceSummaryListT&& value) { m_conformancePackComplianceSummaryListHasBeenSet = true; m_conformancePackComplianceSummaryList = std::forward<ConformancePackComplianceSummaryListT>(value); }
    template<typename ConformancePackComplianceSummaryListT = Aws::Vector<ConformancePackComplianceSummary>>
    GetConformancePackComplianceSummaryResult& WithConformancePackComplianceSummaryList(ConformancePackComplianceSummaryListT&& value) { SetConformancePackComplianceSummaryList(std::forward<ConformancePackComplianceSummaryListT>(value)); return *this;}
    template<typename ConformancePackComplianceSummaryListT = ConformancePackComplianceSummary>
    GetConformancePackComplianceSummaryResult& AddConformancePackComplianceSummaryList(ConformancePackComplianceSummaryListT&& value) { m_conformancePackComplianceSummaryListHasBeenSet = true; m_conformancePackComplianceSummaryList.emplace_back(std::forward<ConformancePackComplianceSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetConformancePackComplianceSummaryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConformancePackComplianceSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConformancePackComplianceSummary> m_conformancePackComplianceSummaryList;
    bool m_conformancePackComplianceSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
