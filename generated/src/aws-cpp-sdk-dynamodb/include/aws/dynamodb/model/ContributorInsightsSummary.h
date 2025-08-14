/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ContributorInsightsStatus.h>
#include <aws/dynamodb/model/ContributorInsightsMode.h>
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
    AWS_DYNAMODB_API ContributorInsightsSummary() = default;
    AWS_DYNAMODB_API ContributorInsightsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ContributorInsightsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the table associated with the summary.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ContributorInsightsSummary& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the index associated with the summary, if any.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    ContributorInsightsSummary& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current status for contributor insights for the given table and
     * index, if applicable.</p>
     */
    inline ContributorInsightsStatus GetContributorInsightsStatus() const { return m_contributorInsightsStatus; }
    inline bool ContributorInsightsStatusHasBeenSet() const { return m_contributorInsightsStatusHasBeenSet; }
    inline void SetContributorInsightsStatus(ContributorInsightsStatus value) { m_contributorInsightsStatusHasBeenSet = true; m_contributorInsightsStatus = value; }
    inline ContributorInsightsSummary& WithContributorInsightsStatus(ContributorInsightsStatus value) { SetContributorInsightsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current mode of CloudWatch Contributor Insights, specifying
     * whether it tracks all access and throttled events or throttled events only for
     * the DynamoDB table or index.</p>
     */
    inline ContributorInsightsMode GetContributorInsightsMode() const { return m_contributorInsightsMode; }
    inline bool ContributorInsightsModeHasBeenSet() const { return m_contributorInsightsModeHasBeenSet; }
    inline void SetContributorInsightsMode(ContributorInsightsMode value) { m_contributorInsightsModeHasBeenSet = true; m_contributorInsightsMode = value; }
    inline ContributorInsightsSummary& WithContributorInsightsMode(ContributorInsightsMode value) { SetContributorInsightsMode(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    ContributorInsightsStatus m_contributorInsightsStatus{ContributorInsightsStatus::NOT_SET};
    bool m_contributorInsightsStatusHasBeenSet = false;

    ContributorInsightsMode m_contributorInsightsMode{ContributorInsightsMode::NOT_SET};
    bool m_contributorInsightsModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
