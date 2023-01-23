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
    AWS_KENDRA_API BatchDeleteDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteDocument"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index that contains the documents to delete.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index that contains the documents to delete.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index that contains the documents to delete.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index that contains the documents to delete.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index that contains the documents to delete.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index that contains the documents to delete.</p>
     */
    inline BatchDeleteDocumentRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index that contains the documents to delete.</p>
     */
    inline BatchDeleteDocumentRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index that contains the documents to delete.</p>
     */
    inline BatchDeleteDocumentRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>One or more identifiers for documents to delete from the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDocumentIdList() const{ return m_documentIdList; }

    /**
     * <p>One or more identifiers for documents to delete from the index.</p>
     */
    inline bool DocumentIdListHasBeenSet() const { return m_documentIdListHasBeenSet; }

    /**
     * <p>One or more identifiers for documents to delete from the index.</p>
     */
    inline void SetDocumentIdList(const Aws::Vector<Aws::String>& value) { m_documentIdListHasBeenSet = true; m_documentIdList = value; }

    /**
     * <p>One or more identifiers for documents to delete from the index.</p>
     */
    inline void SetDocumentIdList(Aws::Vector<Aws::String>&& value) { m_documentIdListHasBeenSet = true; m_documentIdList = std::move(value); }

    /**
     * <p>One or more identifiers for documents to delete from the index.</p>
     */
    inline BatchDeleteDocumentRequest& WithDocumentIdList(const Aws::Vector<Aws::String>& value) { SetDocumentIdList(value); return *this;}

    /**
     * <p>One or more identifiers for documents to delete from the index.</p>
     */
    inline BatchDeleteDocumentRequest& WithDocumentIdList(Aws::Vector<Aws::String>&& value) { SetDocumentIdList(std::move(value)); return *this;}

    /**
     * <p>One or more identifiers for documents to delete from the index.</p>
     */
    inline BatchDeleteDocumentRequest& AddDocumentIdList(const Aws::String& value) { m_documentIdListHasBeenSet = true; m_documentIdList.push_back(value); return *this; }

    /**
     * <p>One or more identifiers for documents to delete from the index.</p>
     */
    inline BatchDeleteDocumentRequest& AddDocumentIdList(Aws::String&& value) { m_documentIdListHasBeenSet = true; m_documentIdList.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more identifiers for documents to delete from the index.</p>
     */
    inline BatchDeleteDocumentRequest& AddDocumentIdList(const char* value) { m_documentIdListHasBeenSet = true; m_documentIdList.push_back(value); return *this; }


    
    inline const DataSourceSyncJobMetricTarget& GetDataSourceSyncJobMetricTarget() const{ return m_dataSourceSyncJobMetricTarget; }

    
    inline bool DataSourceSyncJobMetricTargetHasBeenSet() const { return m_dataSourceSyncJobMetricTargetHasBeenSet; }

    
    inline void SetDataSourceSyncJobMetricTarget(const DataSourceSyncJobMetricTarget& value) { m_dataSourceSyncJobMetricTargetHasBeenSet = true; m_dataSourceSyncJobMetricTarget = value; }

    
    inline void SetDataSourceSyncJobMetricTarget(DataSourceSyncJobMetricTarget&& value) { m_dataSourceSyncJobMetricTargetHasBeenSet = true; m_dataSourceSyncJobMetricTarget = std::move(value); }

    
    inline BatchDeleteDocumentRequest& WithDataSourceSyncJobMetricTarget(const DataSourceSyncJobMetricTarget& value) { SetDataSourceSyncJobMetricTarget(value); return *this;}

    
    inline BatchDeleteDocumentRequest& WithDataSourceSyncJobMetricTarget(DataSourceSyncJobMetricTarget&& value) { SetDataSourceSyncJobMetricTarget(std::move(value)); return *this;}

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
