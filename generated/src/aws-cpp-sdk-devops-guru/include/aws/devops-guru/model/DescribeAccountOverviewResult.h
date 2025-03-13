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
  class DescribeAccountOverviewResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeAccountOverviewResult() = default;
    AWS_DEVOPSGURU_API DescribeAccountOverviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeAccountOverviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An integer that specifies the number of open reactive insights in your
     * Amazon Web Services account that were created during the time range passed in.
     * </p>
     */
    inline int GetReactiveInsights() const { return m_reactiveInsights; }
    inline void SetReactiveInsights(int value) { m_reactiveInsightsHasBeenSet = true; m_reactiveInsights = value; }
    inline DescribeAccountOverviewResult& WithReactiveInsights(int value) { SetReactiveInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account that were created during the time range passed in.
     * </p>
     */
    inline int GetProactiveInsights() const { return m_proactiveInsights; }
    inline void SetProactiveInsights(int value) { m_proactiveInsightsHasBeenSet = true; m_proactiveInsights = value; }
    inline DescribeAccountOverviewResult& WithProactiveInsights(int value) { SetProactiveInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Mean Time to Recover (MTTR) for all closed insights that were created
     * during the time range passed in. </p>
     */
    inline long long GetMeanTimeToRecoverInMilliseconds() const { return m_meanTimeToRecoverInMilliseconds; }
    inline void SetMeanTimeToRecoverInMilliseconds(long long value) { m_meanTimeToRecoverInMillisecondsHasBeenSet = true; m_meanTimeToRecoverInMilliseconds = value; }
    inline DescribeAccountOverviewResult& WithMeanTimeToRecoverInMilliseconds(long long value) { SetMeanTimeToRecoverInMilliseconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountOverviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_reactiveInsights{0};
    bool m_reactiveInsightsHasBeenSet = false;

    int m_proactiveInsights{0};
    bool m_proactiveInsightsHasBeenSet = false;

    long long m_meanTimeToRecoverInMilliseconds{0};
    bool m_meanTimeToRecoverInMillisecondsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
