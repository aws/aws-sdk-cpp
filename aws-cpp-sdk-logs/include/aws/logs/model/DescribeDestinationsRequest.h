/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DescribeDestinationsRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeDestinationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDestinations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline const Aws::String& GetDestinationNamePrefix() const{ return m_destinationNamePrefix; }

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline bool DestinationNamePrefixHasBeenSet() const { return m_destinationNamePrefixHasBeenSet; }

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline void SetDestinationNamePrefix(const Aws::String& value) { m_destinationNamePrefixHasBeenSet = true; m_destinationNamePrefix = value; }

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline void SetDestinationNamePrefix(Aws::String&& value) { m_destinationNamePrefixHasBeenSet = true; m_destinationNamePrefix = std::move(value); }

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline void SetDestinationNamePrefix(const char* value) { m_destinationNamePrefixHasBeenSet = true; m_destinationNamePrefix.assign(value); }

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline DescribeDestinationsRequest& WithDestinationNamePrefix(const Aws::String& value) { SetDestinationNamePrefix(value); return *this;}

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline DescribeDestinationsRequest& WithDestinationNamePrefix(Aws::String&& value) { SetDestinationNamePrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline DescribeDestinationsRequest& WithDestinationNamePrefix(const char* value) { SetDestinationNamePrefix(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeDestinationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeDestinationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeDestinationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline DescribeDestinationsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_destinationNamePrefix;
    bool m_destinationNamePrefixHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
