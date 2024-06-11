/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ContributorInsightsStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents a Contributor Insights summary entry.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ContributorInsightsSummary">AWS
   * API Reference</a></p>
   */
  class ContributorInsightsSummary
  {
  public:
    AWS_DYNAMODB_API ContributorInsightsSummary();
    AWS_DYNAMODB_API ContributorInsightsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ContributorInsightsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the table associated with the summary.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline ContributorInsightsSummary& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline ContributorInsightsSummary& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline ContributorInsightsSummary& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the index associated with the summary, if any.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline ContributorInsightsSummary& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline ContributorInsightsSummary& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline ContributorInsightsSummary& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current status for contributor insights for the given table and
     * index, if applicable.</p>
     */
    inline const ContributorInsightsStatus& GetContributorInsightsStatus() const{ return m_contributorInsightsStatus; }
    inline bool ContributorInsightsStatusHasBeenSet() const { return m_contributorInsightsStatusHasBeenSet; }
    inline void SetContributorInsightsStatus(const ContributorInsightsStatus& value) { m_contributorInsightsStatusHasBeenSet = true; m_contributorInsightsStatus = value; }
    inline void SetContributorInsightsStatus(ContributorInsightsStatus&& value) { m_contributorInsightsStatusHasBeenSet = true; m_contributorInsightsStatus = std::move(value); }
    inline ContributorInsightsSummary& WithContributorInsightsStatus(const ContributorInsightsStatus& value) { SetContributorInsightsStatus(value); return *this;}
    inline ContributorInsightsSummary& WithContributorInsightsStatus(ContributorInsightsStatus&& value) { SetContributorInsightsStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    ContributorInsightsStatus m_contributorInsightsStatus;
    bool m_contributorInsightsStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
