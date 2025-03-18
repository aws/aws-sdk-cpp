/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackRuleCompliance.h>
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
  class DescribeConformancePackComplianceResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConformancePackComplianceResult() = default;
    AWS_CONFIGSERVICE_API DescribeConformancePackComplianceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConformancePackComplianceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const { return m_conformancePackName; }
    template<typename ConformancePackNameT = Aws::String>
    void SetConformancePackName(ConformancePackNameT&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::forward<ConformancePackNameT>(value); }
    template<typename ConformancePackNameT = Aws::String>
    DescribeConformancePackComplianceResult& WithConformancePackName(ConformancePackNameT&& value) { SetConformancePackName(std::forward<ConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of <code>ConformancePackRuleCompliance</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackRuleCompliance>& GetConformancePackRuleComplianceList() const { return m_conformancePackRuleComplianceList; }
    template<typename ConformancePackRuleComplianceListT = Aws::Vector<ConformancePackRuleCompliance>>
    void SetConformancePackRuleComplianceList(ConformancePackRuleComplianceListT&& value) { m_conformancePackRuleComplianceListHasBeenSet = true; m_conformancePackRuleComplianceList = std::forward<ConformancePackRuleComplianceListT>(value); }
    template<typename ConformancePackRuleComplianceListT = Aws::Vector<ConformancePackRuleCompliance>>
    DescribeConformancePackComplianceResult& WithConformancePackRuleComplianceList(ConformancePackRuleComplianceListT&& value) { SetConformancePackRuleComplianceList(std::forward<ConformancePackRuleComplianceListT>(value)); return *this;}
    template<typename ConformancePackRuleComplianceListT = ConformancePackRuleCompliance>
    DescribeConformancePackComplianceResult& AddConformancePackRuleComplianceList(ConformancePackRuleComplianceListT&& value) { m_conformancePackRuleComplianceListHasBeenSet = true; m_conformancePackRuleComplianceList.emplace_back(std::forward<ConformancePackRuleComplianceListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConformancePackComplianceResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConformancePackComplianceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    Aws::Vector<ConformancePackRuleCompliance> m_conformancePackRuleComplianceList;
    bool m_conformancePackRuleComplianceListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
