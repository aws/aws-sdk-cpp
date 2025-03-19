/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateComplianceByConformancePack.h>
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
  class DescribeAggregateComplianceByConformancePacksResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConformancePacksResult() = default;
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConformancePacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConformancePacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the <code>AggregateComplianceByConformancePack</code> object.</p>
     */
    inline const Aws::Vector<AggregateComplianceByConformancePack>& GetAggregateComplianceByConformancePacks() const { return m_aggregateComplianceByConformancePacks; }
    template<typename AggregateComplianceByConformancePacksT = Aws::Vector<AggregateComplianceByConformancePack>>
    void SetAggregateComplianceByConformancePacks(AggregateComplianceByConformancePacksT&& value) { m_aggregateComplianceByConformancePacksHasBeenSet = true; m_aggregateComplianceByConformancePacks = std::forward<AggregateComplianceByConformancePacksT>(value); }
    template<typename AggregateComplianceByConformancePacksT = Aws::Vector<AggregateComplianceByConformancePack>>
    DescribeAggregateComplianceByConformancePacksResult& WithAggregateComplianceByConformancePacks(AggregateComplianceByConformancePacksT&& value) { SetAggregateComplianceByConformancePacks(std::forward<AggregateComplianceByConformancePacksT>(value)); return *this;}
    template<typename AggregateComplianceByConformancePacksT = AggregateComplianceByConformancePack>
    DescribeAggregateComplianceByConformancePacksResult& AddAggregateComplianceByConformancePacks(AggregateComplianceByConformancePacksT&& value) { m_aggregateComplianceByConformancePacksHasBeenSet = true; m_aggregateComplianceByConformancePacks.emplace_back(std::forward<AggregateComplianceByConformancePacksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAggregateComplianceByConformancePacksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAggregateComplianceByConformancePacksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AggregateComplianceByConformancePack> m_aggregateComplianceByConformancePacks;
    bool m_aggregateComplianceByConformancePacksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
