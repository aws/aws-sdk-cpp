/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregatedSourceStatus.h>
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
  class DescribeConfigurationAggregatorSourcesStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorSourcesStatusResult() = default;
    AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorSourcesStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorSourcesStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns an AggregatedSourceStatus object. </p>
     */
    inline const Aws::Vector<AggregatedSourceStatus>& GetAggregatedSourceStatusList() const { return m_aggregatedSourceStatusList; }
    template<typename AggregatedSourceStatusListT = Aws::Vector<AggregatedSourceStatus>>
    void SetAggregatedSourceStatusList(AggregatedSourceStatusListT&& value) { m_aggregatedSourceStatusListHasBeenSet = true; m_aggregatedSourceStatusList = std::forward<AggregatedSourceStatusListT>(value); }
    template<typename AggregatedSourceStatusListT = Aws::Vector<AggregatedSourceStatus>>
    DescribeConfigurationAggregatorSourcesStatusResult& WithAggregatedSourceStatusList(AggregatedSourceStatusListT&& value) { SetAggregatedSourceStatusList(std::forward<AggregatedSourceStatusListT>(value)); return *this;}
    template<typename AggregatedSourceStatusListT = AggregatedSourceStatus>
    DescribeConfigurationAggregatorSourcesStatusResult& AddAggregatedSourceStatusList(AggregatedSourceStatusListT&& value) { m_aggregatedSourceStatusListHasBeenSet = true; m_aggregatedSourceStatusList.emplace_back(std::forward<AggregatedSourceStatusListT>(value)); return *this; }
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
    DescribeConfigurationAggregatorSourcesStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConfigurationAggregatorSourcesStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AggregatedSourceStatus> m_aggregatedSourceStatusList;
    bool m_aggregatedSourceStatusListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
