/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/CustomDocumentEnrichmentConfiguration.h>
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
  class BatchPutDocumentRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API BatchPutDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutDocument"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <code>CreateIndex</code> API.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <code>CreateIndex</code> API.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <code>CreateIndex</code> API.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <code>CreateIndex</code> API.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <code>CreateIndex</code> API.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <code>CreateIndex</code> API.</p>
     */
    inline BatchPutDocumentRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <code>CreateIndex</code> API.</p>
     */
    inline BatchPutDocumentRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index to add the documents to. You need to create the
     * index first using the <code>CreateIndex</code> API.</p>
     */
    inline BatchPutDocumentRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> API. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> API. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> API. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> API. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> API. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> API. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline BatchPutDocumentRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> API. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline BatchPutDocumentRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role that is allowed to run the
     * <code>BatchPutDocument</code> API. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM Roles for
     * Amazon Kendra</a>.</p>
     */
    inline BatchPutDocumentRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>One or more documents to add to the index.</p> <p>Documents have the
     * following file size limits.</p> <ul> <li> <p>5 MB total size for inline
     * documents</p> </li> <li> <p>50 MB total size for files from an S3 bucket</p>
     * </li> <li> <p>5 MB extracted text for any file</p> </li> </ul> <p>For more
     * information about file size and transaction per second quotas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas</a>.</p>
     */
    inline const Aws::Vector<Document>& GetDocuments() const{ return m_documents; }

    /**
     * <p>One or more documents to add to the index.</p> <p>Documents have the
     * following file size limits.</p> <ul> <li> <p>5 MB total size for inline
     * documents</p> </li> <li> <p>50 MB total size for files from an S3 bucket</p>
     * </li> <li> <p>5 MB extracted text for any file</p> </li> </ul> <p>For more
     * information about file size and transaction per second quotas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas</a>.</p>
     */
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }

    /**
     * <p>One or more documents to add to the index.</p> <p>Documents have the
     * following file size limits.</p> <ul> <li> <p>5 MB total size for inline
     * documents</p> </li> <li> <p>50 MB total size for files from an S3 bucket</p>
     * </li> <li> <p>5 MB extracted text for any file</p> </li> </ul> <p>For more
     * information about file size and transaction per second quotas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas</a>.</p>
     */
    inline void SetDocuments(const Aws::Vector<Document>& value) { m_documentsHasBeenSet = true; m_documents = value; }

    /**
     * <p>One or more documents to add to the index.</p> <p>Documents have the
     * following file size limits.</p> <ul> <li> <p>5 MB total size for inline
     * documents</p> </li> <li> <p>50 MB total size for files from an S3 bucket</p>
     * </li> <li> <p>5 MB extracted text for any file</p> </li> </ul> <p>For more
     * information about file size and transaction per second quotas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas</a>.</p>
     */
    inline void SetDocuments(Aws::Vector<Document>&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }

    /**
     * <p>One or more documents to add to the index.</p> <p>Documents have the
     * following file size limits.</p> <ul> <li> <p>5 MB total size for inline
     * documents</p> </li> <li> <p>50 MB total size for files from an S3 bucket</p>
     * </li> <li> <p>5 MB extracted text for any file</p> </li> </ul> <p>For more
     * information about file size and transaction per second quotas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas</a>.</p>
     */
    inline BatchPutDocumentRequest& WithDocuments(const Aws::Vector<Document>& value) { SetDocuments(value); return *this;}

    /**
     * <p>One or more documents to add to the index.</p> <p>Documents have the
     * following file size limits.</p> <ul> <li> <p>5 MB total size for inline
     * documents</p> </li> <li> <p>50 MB total size for files from an S3 bucket</p>
     * </li> <li> <p>5 MB extracted text for any file</p> </li> </ul> <p>For more
     * information about file size and transaction per second quotas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas</a>.</p>
     */
    inline BatchPutDocumentRequest& WithDocuments(Aws::Vector<Document>&& value) { SetDocuments(std::move(value)); return *this;}

    /**
     * <p>One or more documents to add to the index.</p> <p>Documents have the
     * following file size limits.</p> <ul> <li> <p>5 MB total size for inline
     * documents</p> </li> <li> <p>50 MB total size for files from an S3 bucket</p>
     * </li> <li> <p>5 MB extracted text for any file</p> </li> </ul> <p>For more
     * information about file size and transaction per second quotas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas</a>.</p>
     */
    inline BatchPutDocumentRequest& AddDocuments(const Document& value) { m_documentsHasBeenSet = true; m_documents.push_back(value); return *this; }

    /**
     * <p>One or more documents to add to the index.</p> <p>Documents have the
     * following file size limits.</p> <ul> <li> <p>5 MB total size for inline
     * documents</p> </li> <li> <p>50 MB total size for files from an S3 bucket</p>
     * </li> <li> <p>5 MB extracted text for any file</p> </li> </ul> <p>For more
     * information about file size and transaction per second quotas, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas</a>.</p>
     */
    inline BatchPutDocumentRequest& AddDocuments(Document&& value) { m_documentsHasBeenSet = true; m_documents.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration information for altering your document metadata and content
     * during the document ingestion process when you use the
     * <code>BatchPutDocument</code> API.</p> <p>For more information on how to create,
     * modify and delete document metadata, or make other content alterations when you
     * ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline const CustomDocumentEnrichmentConfiguration& GetCustomDocumentEnrichmentConfiguration() const{ return m_customDocumentEnrichmentConfiguration; }

    /**
     * <p>Configuration information for altering your document metadata and content
     * during the document ingestion process when you use the
     * <code>BatchPutDocument</code> API.</p> <p>For more information on how to create,
     * modify and delete document metadata, or make other content alterations when you
     * ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline bool CustomDocumentEnrichmentConfigurationHasBeenSet() const { return m_customDocumentEnrichmentConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for altering your document metadata and content
     * during the document ingestion process when you use the
     * <code>BatchPutDocument</code> API.</p> <p>For more information on how to create,
     * modify and delete document metadata, or make other content alterations when you
     * ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline void SetCustomDocumentEnrichmentConfiguration(const CustomDocumentEnrichmentConfiguration& value) { m_customDocumentEnrichmentConfigurationHasBeenSet = true; m_customDocumentEnrichmentConfiguration = value; }

    /**
     * <p>Configuration information for altering your document metadata and content
     * during the document ingestion process when you use the
     * <code>BatchPutDocument</code> API.</p> <p>For more information on how to create,
     * modify and delete document metadata, or make other content alterations when you
     * ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline void SetCustomDocumentEnrichmentConfiguration(CustomDocumentEnrichmentConfiguration&& value) { m_customDocumentEnrichmentConfigurationHasBeenSet = true; m_customDocumentEnrichmentConfiguration = std::move(value); }

    /**
     * <p>Configuration information for altering your document metadata and content
     * during the document ingestion process when you use the
     * <code>BatchPutDocument</code> API.</p> <p>For more information on how to create,
     * modify and delete document metadata, or make other content alterations when you
     * ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline BatchPutDocumentRequest& WithCustomDocumentEnrichmentConfiguration(const CustomDocumentEnrichmentConfiguration& value) { SetCustomDocumentEnrichmentConfiguration(value); return *this;}

    /**
     * <p>Configuration information for altering your document metadata and content
     * during the document ingestion process when you use the
     * <code>BatchPutDocument</code> API.</p> <p>For more information on how to create,
     * modify and delete document metadata, or make other content alterations when you
     * ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline BatchPutDocumentRequest& WithCustomDocumentEnrichmentConfiguration(CustomDocumentEnrichmentConfiguration&& value) { SetCustomDocumentEnrichmentConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Document> m_documents;
    bool m_documentsHasBeenSet = false;

    CustomDocumentEnrichmentConfiguration m_customDocumentEnrichmentConfiguration;
    bool m_customDocumentEnrichmentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
