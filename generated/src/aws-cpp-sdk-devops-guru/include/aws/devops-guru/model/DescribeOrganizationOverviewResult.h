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
  class DescribeOrganizationOverviewResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeOrganizationOverviewResult();
    AWS_DEVOPSGURU_API DescribeOrganizationOverviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeOrganizationOverviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline int GetReactiveInsights() const{ return m_reactiveInsights; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline void SetReactiveInsights(int value) { m_reactiveInsights = value; }

    /**
     * <p>An integer that specifies the number of open reactive insights in your Amazon
     * Web Services account.</p>
     */
    inline DescribeOrganizationOverviewResult& WithReactiveInsights(int value) { SetReactiveInsights(value); return *this;}


    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline int GetProactiveInsights() const{ return m_proactiveInsights; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline void SetProactiveInsights(int value) { m_proactiveInsights = value; }

    /**
     * <p>An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account.</p>
     */
    inline DescribeOrganizationOverviewResult& WithProactiveInsights(int value) { SetProactiveInsights(value); return *this;}

  private:

    int m_reactiveInsights;

    int m_proactiveInsights;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
