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


    
    inline long long GetMeanTimeToRecoverInMilliseconds() const{ return m_meanTimeToRecoverInMilliseconds; }

    
    inline void SetMeanTimeToRecoverInMilliseconds(long long value) { m_meanTimeToRecoverInMilliseconds = value; }

    
    inline DescribeAccountOverviewResult& WithMeanTimeToRecoverInMilliseconds(long long value) { SetMeanTimeToRecoverInMilliseconds(value); return *this;}


    
    inline int GetProactiveInsights() const{ return m_proactiveInsights; }

    
    inline void SetProactiveInsights(int value) { m_proactiveInsights = value; }

    
    inline DescribeAccountOverviewResult& WithProactiveInsights(int value) { SetProactiveInsights(value); return *this;}


    
    inline int GetReactiveInsights() const{ return m_reactiveInsights; }

    
    inline void SetReactiveInsights(int value) { m_reactiveInsights = value; }

    
    inline DescribeAccountOverviewResult& WithReactiveInsights(int value) { SetReactiveInsights(value); return *this;}

  private:

    long long m_meanTimeToRecoverInMilliseconds;

    int m_proactiveInsights;

    int m_reactiveInsights;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
