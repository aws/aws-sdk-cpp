/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/Document.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class AWS_KENDRA_API BatchPutDocumentRequest : public KendraRequest
  {
  public:
    BatchPutDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutDocument"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <a>CreateIndex</a> operation.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <a>CreateIndex</a> operation.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <a>CreateIndex</a> operation.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <a>CreateIndex</a> operation.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <a>CreateIndex</a> operation.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <a>CreateIndex</a> operation.</p>
     */
    inline BatchPutDocumentRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <a>CreateIndex</a> operation.</p>
     */
    inline BatchPutDocumentRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <a>CreateIndex</a> operation.</p>
     */
    inline BatchPutDocumentRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> operation. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> operation. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> operation. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> operation. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> operation. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> operation. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline BatchPutDocumentRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> operation. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline BatchPutDocumentRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> operation. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline BatchPutDocumentRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>One or more documents to add to the index. </p> <p>Each document is limited
     * to 5 Mb, the total size of the list is limited to 50 Mb.</p>
     */
    inline const Aws::Vector<Document>& GetDocuments() const{ return m_documents; }

    /**
     * <p>One or more documents to add to the index. </p> <p>Each document is limited
     * to 5 Mb, the total size of the list is limited to 50 Mb.</p>
     */
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }

    /**
     * <p>One or more documents to add to the index. </p> <p>Each document is limited
     * to 5 Mb, the total size of the list is limited to 50 Mb.</p>
     */
    inline void SetDocuments(const Aws::Vector<Document>& value) { m_documentsHasBeenSet = true; m_documents = value; }

    /**
     * <p>One or more documents to add to the index. </p> <p>Each document is limited
     * to 5 Mb, the total size of the list is limited to 50 Mb.</p>
     */
    inline void SetDocuments(Aws::Vector<Document>&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }

    /**
     * <p>One or more documents to add to the index. </p> <p>Each document is limited
     * to 5 Mb, the total size of the list is limited to 50 Mb.</p>
     */
    inline BatchPutDocumentRequest& WithDocuments(const Aws::Vector<Document>& value) { SetDocuments(value); return *this;}

    /**
     * <p>One or more documents to add to the index. </p> <p>Each document is limited
     * to 5 Mb, the total size of the list is limited to 50 Mb.</p>
     */
    inline BatchPutDocumentRequest& WithDocuments(Aws::Vector<Document>&& value) { SetDocuments(std::move(value)); return *this;}

    /**
     * <p>One or more documents to add to the index. </p> <p>Each document is limited
     * to 5 Mb, the total size of the list is limited to 50 Mb.</p>
     */
    inline BatchPutDocumentRequest& AddDocuments(const Document& value) { m_documentsHasBeenSet = true; m_documents.push_back(value); return *this; }

    /**
     * <p>One or more documents to add to the index. </p> <p>Each document is limited
     * to 5 Mb, the total size of the list is limited to 50 Mb.</p>
     */
    inline BatchPutDocumentRequest& AddDocuments(Document&& value) { m_documentsHasBeenSet = true; m_documents.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Document> m_documents;
    bool m_documentsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
