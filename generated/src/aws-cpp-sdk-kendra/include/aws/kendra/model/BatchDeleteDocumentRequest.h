/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DataSourceSyncJobMetricTarget.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class BatchDeleteDocumentRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API BatchDeleteDocumentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteDocument"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index that contains the documents to delete.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    BatchDeleteDocumentRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more identifiers for documents to delete from the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDocumentIdList() const { return m_documentIdList; }
    inline bool DocumentIdListHasBeenSet() const { return m_documentIdListHasBeenSet; }
    template<typename DocumentIdListT = Aws::Vector<Aws::String>>
    void SetDocumentIdList(DocumentIdListT&& value) { m_documentIdListHasBeenSet = true; m_documentIdList = std::forward<DocumentIdListT>(value); }
    template<typename DocumentIdListT = Aws::Vector<Aws::String>>
    BatchDeleteDocumentRequest& WithDocumentIdList(DocumentIdListT&& value) { SetDocumentIdList(std::forward<DocumentIdListT>(value)); return *this;}
    template<typename DocumentIdListT = Aws::String>
    BatchDeleteDocumentRequest& AddDocumentIdList(DocumentIdListT&& value) { m_documentIdListHasBeenSet = true; m_documentIdList.emplace_back(std::forward<DocumentIdListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DataSourceSyncJobMetricTarget& GetDataSourceSyncJobMetricTarget() const { return m_dataSourceSyncJobMetricTarget; }
    inline bool DataSourceSyncJobMetricTargetHasBeenSet() const { return m_dataSourceSyncJobMetricTargetHasBeenSet; }
    template<typename DataSourceSyncJobMetricTargetT = DataSourceSyncJobMetricTarget>
    void SetDataSourceSyncJobMetricTarget(DataSourceSyncJobMetricTargetT&& value) { m_dataSourceSyncJobMetricTargetHasBeenSet = true; m_dataSourceSyncJobMetricTarget = std::forward<DataSourceSyncJobMetricTargetT>(value); }
    template<typename DataSourceSyncJobMetricTargetT = DataSourceSyncJobMetricTarget>
    BatchDeleteDocumentRequest& WithDataSourceSyncJobMetricTarget(DataSourceSyncJobMetricTargetT&& value) { SetDataSourceSyncJobMetricTarget(std::forward<DataSourceSyncJobMetricTargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_documentIdList;
    bool m_documentIdListHasBeenSet = false;

    DataSourceSyncJobMetricTarget m_dataSourceSyncJobMetricTarget;
    bool m_dataSourceSyncJobMetricTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
