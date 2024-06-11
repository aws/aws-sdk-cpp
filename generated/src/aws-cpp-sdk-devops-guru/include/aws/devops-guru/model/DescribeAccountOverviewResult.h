﻿/**
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
    AWS_DEVOPSGURU_API DescribeAccountOverviewResult();
    AWS_DEVOPSGURU_API DescribeAccountOverviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeAccountOverviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An integer that specifies the number of open reactive insights in your
     * Amazon Web Services account that were created during the time range passed in.
     * </p>
     */
    inline int GetReactiveInsights() const{ return m_reactiveInsights; }
    inline void SetReactiveInsights(int value) { m_reactiveInsights = value; }
    inline DescribeAccountOverviewResult& WithReactiveInsights(int value) { SetReactiveInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account that were created during the time range passed in.
     * </p>
     */
    inline int GetProactiveInsights() const{ return m_proactiveInsights; }
    inline void SetProactiveInsights(int value) { m_proactiveInsights = value; }
    inline DescribeAccountOverviewResult& WithProactiveInsights(int value) { SetProactiveInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Mean Time to Recover (MTTR) for all closed insights that were created
     * during the time range passed in. </p>
     */
    inline long long GetMeanTimeToRecoverInMilliseconds() const{ return m_meanTimeToRecoverInMilliseconds; }
    inline void SetMeanTimeToRecoverInMilliseconds(long long value) { m_meanTimeToRecoverInMilliseconds = value; }
    inline DescribeAccountOverviewResult& WithMeanTimeToRecoverInMilliseconds(long long value) { SetMeanTimeToRecoverInMilliseconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAccountOverviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAccountOverviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAccountOverviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_reactiveInsights;

    int m_proactiveInsights;

    long long m_meanTimeToRecoverInMilliseconds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
