/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DocumentInfo.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class BatchGetDocumentStatusRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API BatchGetDocumentStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetDocumentStatus"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index to add documents to. The index ID is returned by
     * the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CreateIndex.html">CreateIndex
     * </a> API.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index to add documents to. The index ID is returned by
     * the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CreateIndex.html">CreateIndex
     * </a> API.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index to add documents to. The index ID is returned by
     * the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CreateIndex.html">CreateIndex
     * </a> API.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index to add documents to. The index ID is returned by
     * the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CreateIndex.html">CreateIndex
     * </a> API.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index to add documents to. The index ID is returned by
     * the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CreateIndex.html">CreateIndex
     * </a> API.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index to add documents to. The index ID is returned by
     * the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CreateIndex.html">CreateIndex
     * </a> API.</p>
     */
    inline BatchGetDocumentStatusRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index to add documents to. The index ID is returned by
     * the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CreateIndex.html">CreateIndex
     * </a> API.</p>
     */
    inline BatchGetDocumentStatusRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index to add documents to. The index ID is returned by
     * the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CreateIndex.html">CreateIndex
     * </a> API.</p>
     */
    inline BatchGetDocumentStatusRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>A list of <code>DocumentInfo</code> objects that identify the documents for
     * which to get the status. You identify the documents by their document ID and
     * optional attributes.</p>
     */
    inline const Aws::Vector<DocumentInfo>& GetDocumentInfoList() const{ return m_documentInfoList; }

    /**
     * <p>A list of <code>DocumentInfo</code> objects that identify the documents for
     * which to get the status. You identify the documents by their document ID and
     * optional attributes.</p>
     */
    inline bool DocumentInfoListHasBeenSet() const { return m_documentInfoListHasBeenSet; }

    /**
     * <p>A list of <code>DocumentInfo</code> objects that identify the documents for
     * which to get the status. You identify the documents by their document ID and
     * optional attributes.</p>
     */
    inline void SetDocumentInfoList(const Aws::Vector<DocumentInfo>& value) { m_documentInfoListHasBeenSet = true; m_documentInfoList = value; }

    /**
     * <p>A list of <code>DocumentInfo</code> objects that identify the documents for
     * which to get the status. You identify the documents by their document ID and
     * optional attributes.</p>
     */
    inline void SetDocumentInfoList(Aws::Vector<DocumentInfo>&& value) { m_documentInfoListHasBeenSet = true; m_documentInfoList = std::move(value); }

    /**
     * <p>A list of <code>DocumentInfo</code> objects that identify the documents for
     * which to get the status. You identify the documents by their document ID and
     * optional attributes.</p>
     */
    inline BatchGetDocumentStatusRequest& WithDocumentInfoList(const Aws::Vector<DocumentInfo>& value) { SetDocumentInfoList(value); return *this;}

    /**
     * <p>A list of <code>DocumentInfo</code> objects that identify the documents for
     * which to get the status. You identify the documents by their document ID and
     * optional attributes.</p>
     */
    inline BatchGetDocumentStatusRequest& WithDocumentInfoList(Aws::Vector<DocumentInfo>&& value) { SetDocumentInfoList(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DocumentInfo</code> objects that identify the documents for
     * which to get the status. You identify the documents by their document ID and
     * optional attributes.</p>
     */
    inline BatchGetDocumentStatusRequest& AddDocumentInfoList(const DocumentInfo& value) { m_documentInfoListHasBeenSet = true; m_documentInfoList.push_back(value); return *this; }

    /**
     * <p>A list of <code>DocumentInfo</code> objects that identify the documents for
     * which to get the status. You identify the documents by their document ID and
     * optional attributes.</p>
     */
    inline BatchGetDocumentStatusRequest& AddDocumentInfoList(DocumentInfo&& value) { m_documentInfoListHasBeenSet = true; m_documentInfoList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<DocumentInfo> m_documentInfoList;
    bool m_documentInfoListHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
