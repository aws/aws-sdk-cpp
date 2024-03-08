/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class DescribeSlackWorkspacesRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API DescribeSlackWorkspacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSlackWorkspaces"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    /**
     * The maximum number of results to include in the response. If more results exist
     * than the specified MaxResults value, a token is included in the response so that
     * the remaining results can be retrieved.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The maximum number of results to include in the response. If more results exist
     * than the specified MaxResults value, a token is included in the response so that
     * the remaining results can be retrieved.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * The maximum number of results to include in the response. If more results exist
     * than the specified MaxResults value, a token is included in the response so that
     * the remaining results can be retrieved.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * The maximum number of results to include in the response. If more results exist
     * than the specified MaxResults value, a token is included in the response so that
     * the remaining results can be retrieved.
     */
    inline DescribeSlackWorkspacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeSlackWorkspacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeSlackWorkspacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeSlackWorkspacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
