/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ContributorInsightsAction.h>
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
    AWS_DYNAMODB_API UpdateContributorInsightsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContributorInsights"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline UpdateContributorInsightsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline UpdateContributorInsightsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline UpdateContributorInsightsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The global secondary index name, if applicable.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The global secondary index name, if applicable.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The global secondary index name, if applicable.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The global secondary index name, if applicable.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The global secondary index name, if applicable.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The global secondary index name, if applicable.</p>
     */
    inline UpdateContributorInsightsRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The global secondary index name, if applicable.</p>
     */
    inline UpdateContributorInsightsRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The global secondary index name, if applicable.</p>
     */
    inline UpdateContributorInsightsRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>Represents the contributor insights action.</p>
     */
    inline const ContributorInsightsAction& GetContributorInsightsAction() const{ return m_contributorInsightsAction; }

    /**
     * <p>Represents the contributor insights action.</p>
     */
    inline bool ContributorInsightsActionHasBeenSet() const { return m_contributorInsightsActionHasBeenSet; }

    /**
     * <p>Represents the contributor insights action.</p>
     */
    inline void SetContributorInsightsAction(const ContributorInsightsAction& value) { m_contributorInsightsActionHasBeenSet = true; m_contributorInsightsAction = value; }

    /**
     * <p>Represents the contributor insights action.</p>
     */
    inline void SetContributorInsightsAction(ContributorInsightsAction&& value) { m_contributorInsightsActionHasBeenSet = true; m_contributorInsightsAction = std::move(value); }

    /**
     * <p>Represents the contributor insights action.</p>
     */
    inline UpdateContributorInsightsRequest& WithContributorInsightsAction(const ContributorInsightsAction& value) { SetContributorInsightsAction(value); return *this;}

    /**
     * <p>Represents the contributor insights action.</p>
     */
    inline UpdateContributorInsightsRequest& WithContributorInsightsAction(ContributorInsightsAction&& value) { SetContributorInsightsAction(std::move(value)); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    ContributorInsightsAction m_contributorInsightsAction;
    bool m_contributorInsightsActionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
