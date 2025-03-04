/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeDestinationsRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeDestinationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDestinations"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The prefix to match. If you don't specify a value, no prefix filter is
     * applied.</p>
     */
    inline const Aws::String& GetDestinationNamePrefix() const { return m_destinationNamePrefix; }
    inline bool DestinationNamePrefixHasBeenSet() const { return m_destinationNamePrefixHasBeenSet; }
    template<typename DestinationNamePrefixT = Aws::String>
    void SetDestinationNamePrefix(DestinationNamePrefixT&& value) { m_destinationNamePrefixHasBeenSet = true; m_destinationNamePrefix = std::forward<DestinationNamePrefixT>(value); }
    template<typename DestinationNamePrefixT = Aws::String>
    DescribeDestinationsRequest& WithDestinationNamePrefix(DestinationNamePrefixT&& value) { SetDestinationNamePrefix(std::forward<DestinationNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDestinationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default maximum value of 50 items is used.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeDestinationsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationNamePrefix;
    bool m_destinationNamePrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
