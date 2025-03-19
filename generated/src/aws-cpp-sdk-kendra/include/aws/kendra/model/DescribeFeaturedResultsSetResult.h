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
    AWS_KENDRA_API DescribeFeaturedResultsSetResult() = default;
    AWS_KENDRA_API DescribeFeaturedResultsSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeFeaturedResultsSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetId() const { return m_featuredResultsSetId; }
    template<typename FeaturedResultsSetIdT = Aws::String>
    void SetFeaturedResultsSetId(FeaturedResultsSetIdT&& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = std::forward<FeaturedResultsSetIdT>(value); }
    template<typename FeaturedResultsSetIdT = Aws::String>
    DescribeFeaturedResultsSetResult& WithFeaturedResultsSetId(FeaturedResultsSetIdT&& value) { SetFeaturedResultsSetId(std::forward<FeaturedResultsSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetName() const { return m_featuredResultsSetName; }
    template<typename FeaturedResultsSetNameT = Aws::String>
    void SetFeaturedResultsSetName(FeaturedResultsSetNameT&& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = std::forward<FeaturedResultsSetNameT>(value); }
    template<typename FeaturedResultsSetNameT = Aws::String>
    DescribeFeaturedResultsSetResult& WithFeaturedResultsSetName(FeaturedResultsSetNameT&& value) { SetFeaturedResultsSetName(std::forward<FeaturedResultsSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the set of featured results.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeFeaturedResultsSetResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline FeaturedResultsSetStatus GetStatus() const { return m_status; }
    inline void SetStatus(FeaturedResultsSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeFeaturedResultsSetResult& WithStatus(FeaturedResultsSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of queries for featuring results. For more information on the list
     * of queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryTexts() const { return m_queryTexts; }
    template<typename QueryTextsT = Aws::Vector<Aws::String>>
    void SetQueryTexts(QueryTextsT&& value) { m_queryTextsHasBeenSet = true; m_queryTexts = std::forward<QueryTextsT>(value); }
    template<typename QueryTextsT = Aws::Vector<Aws::String>>
    DescribeFeaturedResultsSetResult& WithQueryTexts(QueryTextsT&& value) { SetQueryTexts(std::forward<QueryTextsT>(value)); return *this;}
    template<typename QueryTextsT = Aws::String>
    DescribeFeaturedResultsSetResult& AddQueryTexts(QueryTextsT&& value) { m_queryTextsHasBeenSet = true; m_queryTexts.emplace_back(std::forward<QueryTextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of document IDs for the documents you want to feature with their
     * metadata information. For more information on the list of featured documents,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline const Aws::Vector<FeaturedDocumentWithMetadata>& GetFeaturedDocumentsWithMetadata() const { return m_featuredDocumentsWithMetadata; }
    template<typename FeaturedDocumentsWithMetadataT = Aws::Vector<FeaturedDocumentWithMetadata>>
    void SetFeaturedDocumentsWithMetadata(FeaturedDocumentsWithMetadataT&& value) { m_featuredDocumentsWithMetadataHasBeenSet = true; m_featuredDocumentsWithMetadata = std::forward<FeaturedDocumentsWithMetadataT>(value); }
    template<typename FeaturedDocumentsWithMetadataT = Aws::Vector<FeaturedDocumentWithMetadata>>
    DescribeFeaturedResultsSetResult& WithFeaturedDocumentsWithMetadata(FeaturedDocumentsWithMetadataT&& value) { SetFeaturedDocumentsWithMetadata(std::forward<FeaturedDocumentsWithMetadataT>(value)); return *this;}
    template<typename FeaturedDocumentsWithMetadataT = FeaturedDocumentWithMetadata>
    DescribeFeaturedResultsSetResult& AddFeaturedDocumentsWithMetadata(FeaturedDocumentsWithMetadataT&& value) { m_featuredDocumentsWithMetadataHasBeenSet = true; m_featuredDocumentsWithMetadata.emplace_back(std::forward<FeaturedDocumentsWithMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of document IDs that don't exist but you have specified as featured
     * documents. Amazon Kendra cannot feature these documents if they don't exist in
     * the index. You can check the status of a document and its ID or check for
     * documents with status errors using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchGetDocumentStatus.html">BatchGetDocumentStatus</a>
     * API.</p>
     */
    inline const Aws::Vector<FeaturedDocumentMissing>& GetFeaturedDocumentsMissing() const { return m_featuredDocumentsMissing; }
    template<typename FeaturedDocumentsMissingT = Aws::Vector<FeaturedDocumentMissing>>
    void SetFeaturedDocumentsMissing(FeaturedDocumentsMissingT&& value) { m_featuredDocumentsMissingHasBeenSet = true; m_featuredDocumentsMissing = std::forward<FeaturedDocumentsMissingT>(value); }
    template<typename FeaturedDocumentsMissingT = Aws::Vector<FeaturedDocumentMissing>>
    DescribeFeaturedResultsSetResult& WithFeaturedDocumentsMissing(FeaturedDocumentsMissingT&& value) { SetFeaturedDocumentsMissing(std::forward<FeaturedDocumentsMissingT>(value)); return *this;}
    template<typename FeaturedDocumentsMissingT = FeaturedDocumentMissing>
    DescribeFeaturedResultsSetResult& AddFeaturedDocumentsMissing(FeaturedDocumentsMissingT&& value) { m_featuredDocumentsMissingHasBeenSet = true; m_featuredDocumentsMissing.emplace_back(std::forward<FeaturedDocumentsMissingT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the set of featured results was last updated.</p>
     */
    inline long long GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline void SetLastUpdatedTimestamp(long long value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline DescribeFeaturedResultsSetResult& WithLastUpdatedTimestamp(long long value) { SetLastUpdatedTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the set of the featured results was created.</p>
     */
    inline long long GetCreationTimestamp() const { return m_creationTimestamp; }
    inline void SetCreationTimestamp(long long value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline DescribeFeaturedResultsSetResult& WithCreationTimestamp(long long value) { SetCreationTimestamp(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFeaturedResultsSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_featuredResultsSetId;
    bool m_featuredResultsSetIdHasBeenSet = false;

    Aws::String m_featuredResultsSetName;
    bool m_featuredResultsSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FeaturedResultsSetStatus m_status{FeaturedResultsSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_queryTexts;
    bool m_queryTextsHasBeenSet = false;

    Aws::Vector<FeaturedDocumentWithMetadata> m_featuredDocumentsWithMetadata;
    bool m_featuredDocumentsWithMetadataHasBeenSet = false;

    Aws::Vector<FeaturedDocumentMissing> m_featuredDocumentsMissing;
    bool m_featuredDocumentsMissingHasBeenSet = false;

    long long m_lastUpdatedTimestamp{0};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    long long m_creationTimestamp{0};
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
