/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class DescribeOrganizationOverviewResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeOrganizationOverviewResult() = default;
    AWS_DEVOPSGURU_API DescribeOrganizationOverviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeOrganizationOverviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline int GetReactiveInsights() const { return m_reactiveInsights; }
    inline void SetReactiveInsights(int value) { m_reactiveInsightsHasBeenSet = true; m_reactiveInsights = value; }
    inline DescribeOrganizationOverviewResult& WithReactiveInsights(int value) { SetReactiveInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline int GetProactiveInsights() const { return m_proactiveInsights; }
    inline void SetProactiveInsights(int value) { m_proactiveInsightsHasBeenSet = true; m_proactiveInsights = value; }
    inline DescribeOrganizationOverviewResult& WithProactiveInsights(int value) { SetProactiveInsights(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationOverviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_reactiveInsights{0};
    bool m_reactiveInsightsHasBeenSet = false;

    int m_proactiveInsights{0};
    bool m_proactiveInsightsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
