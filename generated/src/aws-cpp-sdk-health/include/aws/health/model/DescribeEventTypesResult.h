/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Health
{
namespace Model
{
  class DescribeEventTypesResult
  {
  public:
    AWS_HEALTH_API DescribeEventTypesResult();
    AWS_HEALTH_API DescribeEventTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEventTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of event types that match the filter criteria. Event types have a
     * category (<code>issue</code>, <code>accountNotification</code>, or
     * <code>scheduledChange</code>), a service (for example, <code>EC2</code>,
     * <code>RDS</code>, <code>DATAPIPELINE</code>, <code>BILLING</code>), and a code
     * (in the format <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypes() const{ return m_eventTypes; }

    /**
     * <p>A list of event types that match the filter criteria. Event types have a
     * category (<code>issue</code>, <code>accountNotification</code>, or
     * <code>scheduledChange</code>), a service (for example, <code>EC2</code>,
     * <code>RDS</code>, <code>DATAPIPELINE</code>, <code>BILLING</code>), and a code
     * (in the format <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>).</p>
     */
    inline void SetEventTypes(const Aws::Vector<Aws::String>& value) { m_eventTypes = value; }

    /**
     * <p>A list of event types that match the filter criteria. Event types have a
     * category (<code>issue</code>, <code>accountNotification</code>, or
     * <code>scheduledChange</code>), a service (for example, <code>EC2</code>,
     * <code>RDS</code>, <code>DATAPIPELINE</code>, <code>BILLING</code>), and a code
     * (in the format <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>).</p>
     */
    inline void SetEventTypes(Aws::Vector<Aws::String>&& value) { m_eventTypes = std::move(value); }

    /**
     * <p>A list of event types that match the filter criteria. Event types have a
     * category (<code>issue</code>, <code>accountNotification</code>, or
     * <code>scheduledChange</code>), a service (for example, <code>EC2</code>,
     * <code>RDS</code>, <code>DATAPIPELINE</code>, <code>BILLING</code>), and a code
     * (in the format <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>).</p>
     */
    inline DescribeEventTypesResult& WithEventTypes(const Aws::Vector<Aws::String>& value) { SetEventTypes(value); return *this;}

    /**
     * <p>A list of event types that match the filter criteria. Event types have a
     * category (<code>issue</code>, <code>accountNotification</code>, or
     * <code>scheduledChange</code>), a service (for example, <code>EC2</code>,
     * <code>RDS</code>, <code>DATAPIPELINE</code>, <code>BILLING</code>), and a code
     * (in the format <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>).</p>
     */
    inline DescribeEventTypesResult& WithEventTypes(Aws::Vector<Aws::String>&& value) { SetEventTypes(std::move(value)); return *this;}

    /**
     * <p>A list of event types that match the filter criteria. Event types have a
     * category (<code>issue</code>, <code>accountNotification</code>, or
     * <code>scheduledChange</code>), a service (for example, <code>EC2</code>,
     * <code>RDS</code>, <code>DATAPIPELINE</code>, <code>BILLING</code>), and a code
     * (in the format <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>).</p>
     */
    inline DescribeEventTypesResult& AddEventTypes(const Aws::String& value) { m_eventTypes.push_back(value); return *this; }

    /**
     * <p>A list of event types that match the filter criteria. Event types have a
     * category (<code>issue</code>, <code>accountNotification</code>, or
     * <code>scheduledChange</code>), a service (for example, <code>EC2</code>,
     * <code>RDS</code>, <code>DATAPIPELINE</code>, <code>BILLING</code>), and a code
     * (in the format <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>).</p>
     */
    inline DescribeEventTypesResult& AddEventTypes(Aws::String&& value) { m_eventTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event types that match the filter criteria. Event types have a
     * category (<code>issue</code>, <code>accountNotification</code>, or
     * <code>scheduledChange</code>), a service (for example, <code>EC2</code>,
     * <code>RDS</code>, <code>DATAPIPELINE</code>, <code>BILLING</code>), and a code
     * (in the format <code>AWS_<i>SERVICE</i>_<i>DESCRIPTION</i> </code>; for example,
     * <code>AWS_EC2_SYSTEM_MAINTENANCE_EVENT</code>).</p>
     */
    inline DescribeEventTypesResult& AddEventTypes(const char* value) { m_eventTypes.push_back(value); return *this; }


    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_eventTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
