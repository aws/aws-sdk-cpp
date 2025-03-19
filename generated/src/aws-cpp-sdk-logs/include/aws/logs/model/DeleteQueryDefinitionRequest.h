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
  class DeleteQueryDefinitionRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DeleteQueryDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteQueryDefinition"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the query definition that you want to delete. You can use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeQueryDefinitions.html">DescribeQueryDefinitions</a>
     * to retrieve the IDs of your saved query definitions.</p>
     */
    inline const Aws::String& GetQueryDefinitionId() const { return m_queryDefinitionId; }
    inline bool QueryDefinitionIdHasBeenSet() const { return m_queryDefinitionIdHasBeenSet; }
    template<typename QueryDefinitionIdT = Aws::String>
    void SetQueryDefinitionId(QueryDefinitionIdT&& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = std::forward<QueryDefinitionIdT>(value); }
    template<typename QueryDefinitionIdT = Aws::String>
    DeleteQueryDefinitionRequest& WithQueryDefinitionId(QueryDefinitionIdT&& value) { SetQueryDefinitionId(std::forward<QueryDefinitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryDefinitionId;
    bool m_queryDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
