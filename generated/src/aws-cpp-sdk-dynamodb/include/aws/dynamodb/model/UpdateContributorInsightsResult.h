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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class UpdateContributorInsightsResult
  {
  public:
    AWS_DYNAMODB_API UpdateContributorInsightsResult() = default;
    AWS_DYNAMODB_API UpdateContributorInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API UpdateContributorInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdateContributorInsightsResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the global secondary index, if applicable.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    UpdateContributorInsightsResult& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of contributor insights</p>
     */
    inline ContributorInsightsStatus GetContributorInsightsStatus() const { return m_contributorInsightsStatus; }
    inline void SetContributorInsightsStatus(ContributorInsightsStatus value) { m_contributorInsightsStatusHasBeenSet = true; m_contributorInsightsStatus = value; }
    inline UpdateContributorInsightsResult& WithContributorInsightsStatus(ContributorInsightsStatus value) { SetContributorInsightsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated mode of CloudWatch Contributor Insights that determines whether
     * to monitor all access and throttled events or to track throttled events
     * exclusively.</p>
     */
    inline ContributorInsightsMode GetContributorInsightsMode() const { return m_contributorInsightsMode; }
    inline void SetContributorInsightsMode(ContributorInsightsMode value) { m_contributorInsightsModeHasBeenSet = true; m_contributorInsightsMode = value; }
    inline UpdateContributorInsightsResult& WithContributorInsightsMode(ContributorInsightsMode value) { SetContributorInsightsMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateContributorInsightsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
