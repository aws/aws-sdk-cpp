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
  class DescribeOrganizationHealthResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeOrganizationHealthResult();
    AWS_DEVOPSGURU_API DescribeOrganizationHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeOrganizationHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline int GetOpenReactiveInsights() const{ return m_openReactiveInsights; }
    inline void SetOpenReactiveInsights(int value) { m_openReactiveInsights = value; }
    inline DescribeOrganizationHealthResult& WithOpenReactiveInsights(int value) { SetOpenReactiveInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline int GetOpenProactiveInsights() const{ return m_openProactiveInsights; }
    inline void SetOpenProactiveInsights(int value) { m_openProactiveInsights = value; }
    inline DescribeOrganizationHealthResult& WithOpenProactiveInsights(int value) { SetOpenProactiveInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer that specifies the number of metrics that have been analyzed in
     * your organization.</p>
     */
    inline int GetMetricsAnalyzed() const{ return m_metricsAnalyzed; }
    inline void SetMetricsAnalyzed(int value) { m_metricsAnalyzed = value; }
    inline DescribeOrganizationHealthResult& WithMetricsAnalyzed(int value) { SetMetricsAnalyzed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon DevOps Guru resource analysis hours billed to the
     * current Amazon Web Services account in the last hour. </p>
     */
    inline long long GetResourceHours() const{ return m_resourceHours; }
    inline void SetResourceHours(long long value) { m_resourceHours = value; }
    inline DescribeOrganizationHealthResult& WithResourceHours(long long value) { SetResourceHours(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeOrganizationHealthResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeOrganizationHealthResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeOrganizationHealthResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_openReactiveInsights;

    int m_openProactiveInsights;

    int m_metricsAnalyzed;

    long long m_resourceHours;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
