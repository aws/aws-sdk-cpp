/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>

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
  class AWS_DEVOPSGURU_API DescribeAccountOverviewResult
  {
  public:
    DescribeAccountOverviewResult();
    DescribeAccountOverviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAccountOverviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An integer that specifies the number of open reactive insights in your AWS
     * account that were created during the time range passed in. </p>
     */
    inline int GetReactiveInsights() const{ return m_reactiveInsights; }

    /**
     * <p> An integer that specifies the number of open reactive insights in your AWS
     * account that were created during the time range passed in. </p>
     */
    inline void SetReactiveInsights(int value) { m_reactiveInsights = value; }

    /**
     * <p> An integer that specifies the number of open reactive insights in your AWS
     * account that were created during the time range passed in. </p>
     */
    inline DescribeAccountOverviewResult& WithReactiveInsights(int value) { SetReactiveInsights(value); return *this;}


    /**
     * <p> An integer that specifies the number of open proactive insights in your AWS
     * account that were created during the time range passed in. </p>
     */
    inline int GetProactiveInsights() const{ return m_proactiveInsights; }

    /**
     * <p> An integer that specifies the number of open proactive insights in your AWS
     * account that were created during the time range passed in. </p>
     */
    inline void SetProactiveInsights(int value) { m_proactiveInsights = value; }

    /**
     * <p> An integer that specifies the number of open proactive insights in your AWS
     * account that were created during the time range passed in. </p>
     */
    inline DescribeAccountOverviewResult& WithProactiveInsights(int value) { SetProactiveInsights(value); return *this;}


    /**
     * <p> The Mean Time to Recover (MTTR) for all closed insights that were created
     * during the time range passed in. </p>
     */
    inline long long GetMeanTimeToRecoverInMilliseconds() const{ return m_meanTimeToRecoverInMilliseconds; }

    /**
     * <p> The Mean Time to Recover (MTTR) for all closed insights that were created
     * during the time range passed in. </p>
     */
    inline void SetMeanTimeToRecoverInMilliseconds(long long value) { m_meanTimeToRecoverInMilliseconds = value; }

    /**
     * <p> The Mean Time to Recover (MTTR) for all closed insights that were created
     * during the time range passed in. </p>
     */
    inline DescribeAccountOverviewResult& WithMeanTimeToRecoverInMilliseconds(long long value) { SetMeanTimeToRecoverInMilliseconds(value); return *this;}

  private:

    int m_reactiveInsights;

    int m_proactiveInsights;

    long long m_meanTimeToRecoverInMilliseconds;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
