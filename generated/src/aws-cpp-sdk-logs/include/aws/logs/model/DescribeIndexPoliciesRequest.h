/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeIndexPoliciesRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeIndexPoliciesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIndexPolicies"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array containing the name or ARN of the log group that you want to
     * retrieve field index policies for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const { return m_logGroupIdentifiers; }
    inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }
    template<typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
    void SetLogGroupIdentifiers(LogGroupIdentifiersT&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = std::forward<LogGroupIdentifiersT>(value); }
    template<typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
    DescribeIndexPoliciesRequest& WithLogGroupIdentifiers(LogGroupIdentifiersT&& value) { SetLogGroupIdentifiers(std::forward<LogGroupIdentifiersT>(value)); return *this;}
    template<typename LogGroupIdentifiersT = Aws::String>
    DescribeIndexPoliciesRequest& AddLogGroupIdentifiers(LogGroupIdentifiersT&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.emplace_back(std::forward<LogGroupIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeIndexPoliciesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_logGroupIdentifiers;
    bool m_logGroupIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
