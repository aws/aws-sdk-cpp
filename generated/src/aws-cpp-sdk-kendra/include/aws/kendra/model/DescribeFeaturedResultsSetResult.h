/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/FeaturedResultsSetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/FeaturedDocumentWithMetadata.h>
#include <aws/kendra/model/FeaturedDocumentMissing.h>
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
namespace kendra
{
namespace Model
{
  class DescribeFeaturedResultsSetResult
  {
  public:
    AWS_KENDRA_API DescribeFeaturedResultsSetResult();
    AWS_KENDRA_API DescribeFeaturedResultsSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeFeaturedResultsSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetId() const{ return m_featuredResultsSetId; }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetId(const Aws::String& value) { m_featuredResultsSetId = value; }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetId(Aws::String&& value) { m_featuredResultsSetId = std::move(value); }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetId(const char* value) { m_featuredResultsSetId.assign(value); }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithFeaturedResultsSetId(const Aws::String& value) { SetFeaturedResultsSetId(value); return *this;}

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithFeaturedResultsSetId(Aws::String&& value) { SetFeaturedResultsSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithFeaturedResultsSetId(const char* value) { SetFeaturedResultsSetId(value); return *this;}


    /**
     * <p>The name for the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetName() const{ return m_featuredResultsSetName; }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(const Aws::String& value) { m_featuredResultsSetName = value; }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(Aws::String&& value) { m_featuredResultsSetName = std::move(value); }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(const char* value) { m_featuredResultsSetName.assign(value); }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithFeaturedResultsSetName(const Aws::String& value) { SetFeaturedResultsSetName(value); return *this;}

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithFeaturedResultsSetName(Aws::String&& value) { SetFeaturedResultsSetName(std::move(value)); return *this;}

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithFeaturedResultsSetName(const char* value) { SetFeaturedResultsSetName(value); return *this;}


    /**
     * <p>The description for the set of featured results.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline const FeaturedResultsSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(const FeaturedResultsSetStatus& value) { m_status = value; }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(FeaturedResultsSetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithStatus(const FeaturedResultsSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithStatus(FeaturedResultsSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The list of queries for featuring results. For more information on the list
     * of queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryTexts() const{ return m_queryTexts; }

    /**
     * <p>The list of queries for featuring results. For more information on the list
     * of queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline void SetQueryTexts(const Aws::Vector<Aws::String>& value) { m_queryTexts = value; }

    /**
     * <p>The list of queries for featuring results. For more information on the list
     * of queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline void SetQueryTexts(Aws::Vector<Aws::String>&& value) { m_queryTexts = std::move(value); }

    /**
     * <p>The list of queries for featuring results. For more information on the list
     * of queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithQueryTexts(const Aws::Vector<Aws::String>& value) { SetQueryTexts(value); return *this;}

    /**
     * <p>The list of queries for featuring results. For more information on the list
     * of queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithQueryTexts(Aws::Vector<Aws::String>&& value) { SetQueryTexts(std::move(value)); return *this;}

    /**
     * <p>The list of queries for featuring results. For more information on the list
     * of queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline DescribeFeaturedResultsSetResult& AddQueryTexts(const Aws::String& value) { m_queryTexts.push_back(value); return *this; }

    /**
     * <p>The list of queries for featuring results. For more information on the list
     * of queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline DescribeFeaturedResultsSetResult& AddQueryTexts(Aws::String&& value) { m_queryTexts.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of queries for featuring results. For more information on the list
     * of queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline DescribeFeaturedResultsSetResult& AddQueryTexts(const char* value) { m_queryTexts.push_back(value); return *this; }


    /**
     * <p>The list of document IDs for the documents you want to feature with their
     * metadata information. For more information on the list of featured documents,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline const Aws::Vector<FeaturedDocumentWithMetadata>& GetFeaturedDocumentsWithMetadata() const{ return m_featuredDocumentsWithMetadata; }

    /**
     * <p>The list of document IDs for the documents you want to feature with their
     * metadata information. For more information on the list of featured documents,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline void SetFeaturedDocumentsWithMetadata(const Aws::Vector<FeaturedDocumentWithMetadata>& value) { m_featuredDocumentsWithMetadata = value; }

    /**
     * <p>The list of document IDs for the documents you want to feature with their
     * metadata information. For more information on the list of featured documents,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline void SetFeaturedDocumentsWithMetadata(Aws::Vector<FeaturedDocumentWithMetadata>&& value) { m_featuredDocumentsWithMetadata = std::move(value); }

    /**
     * <p>The list of document IDs for the documents you want to feature with their
     * metadata information. For more information on the list of featured documents,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithFeaturedDocumentsWithMetadata(const Aws::Vector<FeaturedDocumentWithMetadata>& value) { SetFeaturedDocumentsWithMetadata(value); return *this;}

    /**
     * <p>The list of document IDs for the documents you want to feature with their
     * metadata information. For more information on the list of featured documents,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithFeaturedDocumentsWithMetadata(Aws::Vector<FeaturedDocumentWithMetadata>&& value) { SetFeaturedDocumentsWithMetadata(std::move(value)); return *this;}

    /**
     * <p>The list of document IDs for the documents you want to feature with their
     * metadata information. For more information on the list of featured documents,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline DescribeFeaturedResultsSetResult& AddFeaturedDocumentsWithMetadata(const FeaturedDocumentWithMetadata& value) { m_featuredDocumentsWithMetadata.push_back(value); return *this; }

    /**
     * <p>The list of document IDs for the documents you want to feature with their
     * metadata information. For more information on the list of featured documents,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline DescribeFeaturedResultsSetResult& AddFeaturedDocumentsWithMetadata(FeaturedDocumentWithMetadata&& value) { m_featuredDocumentsWithMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of document IDs that don't exist but you have specified as featured
     * documents. Amazon Kendra cannot feature these documents if they don't exist in
     * the index. You can check the status of a document and its ID or check for
     * documents with status errors using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchGetDocumentStatus.html">BatchGetDocumentStatus</a>
     * API.</p>
     */
    inline const Aws::Vector<FeaturedDocumentMissing>& GetFeaturedDocumentsMissing() const{ return m_featuredDocumentsMissing; }

    /**
     * <p>The list of document IDs that don't exist but you have specified as featured
     * documents. Amazon Kendra cannot feature these documents if they don't exist in
     * the index. You can check the status of a document and its ID or check for
     * documents with status errors using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchGetDocumentStatus.html">BatchGetDocumentStatus</a>
     * API.</p>
     */
    inline void SetFeaturedDocumentsMissing(const Aws::Vector<FeaturedDocumentMissing>& value) { m_featuredDocumentsMissing = value; }

    /**
     * <p>The list of document IDs that don't exist but you have specified as featured
     * documents. Amazon Kendra cannot feature these documents if they don't exist in
     * the index. You can check the status of a document and its ID or check for
     * documents with status errors using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchGetDocumentStatus.html">BatchGetDocumentStatus</a>
     * API.</p>
     */
    inline void SetFeaturedDocumentsMissing(Aws::Vector<FeaturedDocumentMissing>&& value) { m_featuredDocumentsMissing = std::move(value); }

    /**
     * <p>The list of document IDs that don't exist but you have specified as featured
     * documents. Amazon Kendra cannot feature these documents if they don't exist in
     * the index. You can check the status of a document and its ID or check for
     * documents with status errors using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchGetDocumentStatus.html">BatchGetDocumentStatus</a>
     * API.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithFeaturedDocumentsMissing(const Aws::Vector<FeaturedDocumentMissing>& value) { SetFeaturedDocumentsMissing(value); return *this;}

    /**
     * <p>The list of document IDs that don't exist but you have specified as featured
     * documents. Amazon Kendra cannot feature these documents if they don't exist in
     * the index. You can check the status of a document and its ID or check for
     * documents with status errors using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchGetDocumentStatus.html">BatchGetDocumentStatus</a>
     * API.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithFeaturedDocumentsMissing(Aws::Vector<FeaturedDocumentMissing>&& value) { SetFeaturedDocumentsMissing(std::move(value)); return *this;}

    /**
     * <p>The list of document IDs that don't exist but you have specified as featured
     * documents. Amazon Kendra cannot feature these documents if they don't exist in
     * the index. You can check the status of a document and its ID or check for
     * documents with status errors using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchGetDocumentStatus.html">BatchGetDocumentStatus</a>
     * API.</p>
     */
    inline DescribeFeaturedResultsSetResult& AddFeaturedDocumentsMissing(const FeaturedDocumentMissing& value) { m_featuredDocumentsMissing.push_back(value); return *this; }

    /**
     * <p>The list of document IDs that don't exist but you have specified as featured
     * documents. Amazon Kendra cannot feature these documents if they don't exist in
     * the index. You can check the status of a document and its ID or check for
     * documents with status errors using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchGetDocumentStatus.html">BatchGetDocumentStatus</a>
     * API.</p>
     */
    inline DescribeFeaturedResultsSetResult& AddFeaturedDocumentsMissing(FeaturedDocumentMissing&& value) { m_featuredDocumentsMissing.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp when the set of featured results was last updated.</p>
     */
    inline long long GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The timestamp when the set of featured results was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(long long value) { m_lastUpdatedTimestamp = value; }

    /**
     * <p>The timestamp when the set of featured results was last updated.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithLastUpdatedTimestamp(long long value) { SetLastUpdatedTimestamp(value); return *this;}


    /**
     * <p>The Unix timestamp when the set of the featured results was created.</p>
     */
    inline long long GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The Unix timestamp when the set of the featured results was created.</p>
     */
    inline void SetCreationTimestamp(long long value) { m_creationTimestamp = value; }

    /**
     * <p>The Unix timestamp when the set of the featured results was created.</p>
     */
    inline DescribeFeaturedResultsSetResult& WithCreationTimestamp(long long value) { SetCreationTimestamp(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeFeaturedResultsSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeFeaturedResultsSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeFeaturedResultsSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_featuredResultsSetId;

    Aws::String m_featuredResultsSetName;

    Aws::String m_description;

    FeaturedResultsSetStatus m_status;

    Aws::Vector<Aws::String> m_queryTexts;

    Aws::Vector<FeaturedDocumentWithMetadata> m_featuredDocumentsWithMetadata;

    Aws::Vector<FeaturedDocumentMissing> m_featuredDocumentsMissing;

    long long m_lastUpdatedTimestamp;

    long long m_creationTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
