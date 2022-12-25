/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/ScheduledQueryDescription.h>
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
namespace TimestreamQuery
{
namespace Model
{
  class DescribeScheduledQueryResult
  {
  public:
    AWS_TIMESTREAMQUERY_API DescribeScheduledQueryResult();
    AWS_TIMESTREAMQUERY_API DescribeScheduledQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API DescribeScheduledQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The scheduled query.</p>
     */
    inline const ScheduledQueryDescription& GetScheduledQuery() const{ return m_scheduledQuery; }

    /**
     * <p>The scheduled query.</p>
     */
    inline void SetScheduledQuery(const ScheduledQueryDescription& value) { m_scheduledQuery = value; }

    /**
     * <p>The scheduled query.</p>
     */
    inline void SetScheduledQuery(ScheduledQueryDescription&& value) { m_scheduledQuery = std::move(value); }

    /**
     * <p>The scheduled query.</p>
     */
    inline DescribeScheduledQueryResult& WithScheduledQuery(const ScheduledQueryDescription& value) { SetScheduledQuery(value); return *this;}

    /**
     * <p>The scheduled query.</p>
     */
    inline DescribeScheduledQueryResult& WithScheduledQuery(ScheduledQueryDescription&& value) { SetScheduledQuery(std::move(value)); return *this;}

  private:

    ScheduledQueryDescription m_scheduledQuery;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
