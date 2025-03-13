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
    AWS_KENDRA_API BatchGetDocumentStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetDocumentStatus"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index to add documents to. The index ID is returned by
     * the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_CreateIndex.html">CreateIndex
     * </a> API.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    BatchGetDocumentStatusRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DocumentInfo</code> objects that identify the documents for
     * which to get the status. You identify the documents by their document ID and
     * optional attributes.</p>
     */
    inline const Aws::Vector<DocumentInfo>& GetDocumentInfoList() const { return m_documentInfoList; }
    inline bool DocumentInfoListHasBeenSet() const { return m_documentInfoListHasBeenSet; }
    template<typename DocumentInfoListT = Aws::Vector<DocumentInfo>>
    void SetDocumentInfoList(DocumentInfoListT&& value) { m_documentInfoListHasBeenSet = true; m_documentInfoList = std::forward<DocumentInfoListT>(value); }
    template<typename DocumentInfoListT = Aws::Vector<DocumentInfo>>
    BatchGetDocumentStatusRequest& WithDocumentInfoList(DocumentInfoListT&& value) { SetDocumentInfoList(std::forward<DocumentInfoListT>(value)); return *this;}
    template<typename DocumentInfoListT = DocumentInfo>
    BatchGetDocumentStatusRequest& AddDocumentInfoList(DocumentInfoListT&& value) { m_documentInfoListHasBeenSet = true; m_documentInfoList.emplace_back(std::forward<DocumentInfoListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<DocumentInfo> m_documentInfoList;
    bool m_documentInfoListHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
