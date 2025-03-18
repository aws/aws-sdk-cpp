/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregationAuthorization.h>
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
  class DescribeAggregationAuthorizationsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeAggregationAuthorizationsResult() = default;
    AWS_CONFIGSERVICE_API DescribeAggregationAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeAggregationAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of authorizations granted to various aggregator accounts and
     * regions.</p>
     */
    inline const Aws::Vector<AggregationAuthorization>& GetAggregationAuthorizations() const { return m_aggregationAuthorizations; }
    template<typename AggregationAuthorizationsT = Aws::Vector<AggregationAuthorization>>
    void SetAggregationAuthorizations(AggregationAuthorizationsT&& value) { m_aggregationAuthorizationsHasBeenSet = true; m_aggregationAuthorizations = std::forward<AggregationAuthorizationsT>(value); }
    template<typename AggregationAuthorizationsT = Aws::Vector<AggregationAuthorization>>
    DescribeAggregationAuthorizationsResult& WithAggregationAuthorizations(AggregationAuthorizationsT&& value) { SetAggregationAuthorizations(std::forward<AggregationAuthorizationsT>(value)); return *this;}
    template<typename AggregationAuthorizationsT = AggregationAuthorization>
    DescribeAggregationAuthorizationsResult& AddAggregationAuthorizations(AggregationAuthorizationsT&& value) { m_aggregationAuthorizationsHasBeenSet = true; m_aggregationAuthorizations.emplace_back(std::forward<AggregationAuthorizationsT>(value)); return *this; }
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
    DescribeAggregationAuthorizationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAggregationAuthorizationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AggregationAuthorization> m_aggregationAuthorizations;
    bool m_aggregationAuthorizationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
