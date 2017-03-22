/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKSCM_API DescribeServersRequest : public OpsWorksCMRequest
  {
  public:
    DescribeServersRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Describes the server with the specified ServerName.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>Describes the server with the specified ServerName.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>Describes the server with the specified ServerName.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>Describes the server with the specified ServerName.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>Describes the server with the specified ServerName.</p>
     */
    inline DescribeServersRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>Describes the server with the specified ServerName.</p>
     */
    inline DescribeServersRequest& WithServerName(Aws::String&& value) { SetServerName(value); return *this;}

    /**
     * <p>Describes the server with the specified ServerName.</p>
     */
    inline DescribeServersRequest& WithServerName(const char* value) { SetServerName(value); return *this;}

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeServers</code> again, and assign the token from the previous
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
     * <code>DescribeServers</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeServers</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeServers</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeServers</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline DescribeServersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeServers</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline DescribeServersRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeServers</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline DescribeServersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>To receive a paginated response, use this parameter to specify the maximum
     * number of results to be returned with a single call. If the number of available
     * results exceeds this maximum, the response includes a <code>NextToken</code>
     * value that you can assign to the <code>NextToken</code> request parameter to get
     * the next set of results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>To receive a paginated response, use this parameter to specify the maximum
     * number of results to be returned with a single call. If the number of available
     * results exceeds this maximum, the response includes a <code>NextToken</code>
     * value that you can assign to the <code>NextToken</code> request parameter to get
     * the next set of results. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>To receive a paginated response, use this parameter to specify the maximum
     * number of results to be returned with a single call. If the number of available
     * results exceeds this maximum, the response includes a <code>NextToken</code>
     * value that you can assign to the <code>NextToken</code> request parameter to get
     * the next set of results. </p>
     */
    inline DescribeServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
