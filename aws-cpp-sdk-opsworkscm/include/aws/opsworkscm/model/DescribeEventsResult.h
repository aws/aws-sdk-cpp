/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworkscm/model/ServerEvent.h>
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
namespace OpsWorksCM
{
namespace Model
{
  class DescribeEventsResult
  {
  public:
    AWS_OPSWORKSCM_API DescribeEventsResult();
    AWS_OPSWORKSCM_API DescribeEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API DescribeEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the response to a <code>DescribeEvents</code> request. </p>
     */
    inline const Aws::Vector<ServerEvent>& GetServerEvents() const{ return m_serverEvents; }

    /**
     * <p>Contains the response to a <code>DescribeEvents</code> request. </p>
     */
    inline void SetServerEvents(const Aws::Vector<ServerEvent>& value) { m_serverEvents = value; }

    /**
     * <p>Contains the response to a <code>DescribeEvents</code> request. </p>
     */
    inline void SetServerEvents(Aws::Vector<ServerEvent>&& value) { m_serverEvents = std::move(value); }

    /**
     * <p>Contains the response to a <code>DescribeEvents</code> request. </p>
     */
    inline DescribeEventsResult& WithServerEvents(const Aws::Vector<ServerEvent>& value) { SetServerEvents(value); return *this;}

    /**
     * <p>Contains the response to a <code>DescribeEvents</code> request. </p>
     */
    inline DescribeEventsResult& WithServerEvents(Aws::Vector<ServerEvent>&& value) { SetServerEvents(std::move(value)); return *this;}

    /**
     * <p>Contains the response to a <code>DescribeEvents</code> request. </p>
     */
    inline DescribeEventsResult& AddServerEvents(const ServerEvent& value) { m_serverEvents.push_back(value); return *this; }

    /**
     * <p>Contains the response to a <code>DescribeEvents</code> request. </p>
     */
    inline DescribeEventsResult& AddServerEvents(ServerEvent&& value) { m_serverEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeEvents</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeEvents</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeEvents</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeEvents</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeEvents</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline DescribeEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeEvents</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline DescribeEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeEvents</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline DescribeEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ServerEvent> m_serverEvents;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
