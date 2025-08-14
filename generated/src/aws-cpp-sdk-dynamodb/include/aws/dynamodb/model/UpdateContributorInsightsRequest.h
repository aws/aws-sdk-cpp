/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ContributorInsightsAction.h>
#include <aws/dynamodb/model/ContributorInsightsMode.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class UpdateContributorInsightsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API UpdateContributorInsightsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContributorInsights"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the table. You can also provide the Amazon Resource Name (ARN) of
     * the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdateContributorInsightsRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The global secondary index name, if applicable.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    UpdateContributorInsightsRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the contributor insights action.</p>
     */
    inline ContributorInsightsAction GetContributorInsightsAction() const { return m_contributorInsightsAction; }
    inline bool ContributorInsightsActionHasBeenSet() const { return m_contributorInsightsActionHasBeenSet; }
    inline void SetContributorInsightsAction(ContributorInsightsAction value) { m_contributorInsightsActionHasBeenSet = true; m_contributorInsightsAction = value; }
    inline UpdateContributorInsightsRequest& WithContributorInsightsAction(ContributorInsightsAction value) { SetContributorInsightsAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to track all access and throttled events or throttled
     * events only for the DynamoDB table or index.</p>
     */
    inline ContributorInsightsMode GetContributorInsightsMode() const { return m_contributorInsightsMode; }
    inline bool ContributorInsightsModeHasBeenSet() const { return m_contributorInsightsModeHasBeenSet; }
    inline void SetContributorInsightsMode(ContributorInsightsMode value) { m_contributorInsightsModeHasBeenSet = true; m_contributorInsightsMode = value; }
    inline UpdateContributorInsightsRequest& WithContributorInsightsMode(ContributorInsightsMode value) { SetContributorInsightsMode(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    ContributorInsightsAction m_contributorInsightsAction{ContributorInsightsAction::NOT_SET};
    bool m_contributorInsightsActionHasBeenSet = false;

    ContributorInsightsMode m_contributorInsightsMode{ContributorInsightsMode::NOT_SET};
    bool m_contributorInsightsModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
