/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ConflictMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/MergeHunk.h>
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
namespace CodeCommit
{
namespace Model
{
  class DescribeMergeConflictsResult
  {
  public:
    AWS_CODECOMMIT_API DescribeMergeConflictsResult() = default;
    AWS_CODECOMMIT_API DescribeMergeConflictsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DescribeMergeConflictsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains metadata about the conflicts found in the merge.</p>
     */
    inline const ConflictMetadata& GetConflictMetadata() const { return m_conflictMetadata; }
    template<typename ConflictMetadataT = ConflictMetadata>
    void SetConflictMetadata(ConflictMetadataT&& value) { m_conflictMetadataHasBeenSet = true; m_conflictMetadata = std::forward<ConflictMetadataT>(value); }
    template<typename ConflictMetadataT = ConflictMetadata>
    DescribeMergeConflictsResult& WithConflictMetadata(ConflictMetadataT&& value) { SetConflictMetadata(std::forward<ConflictMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of merge hunks of the differences between the files or lines.</p>
     */
    inline const Aws::Vector<MergeHunk>& GetMergeHunks() const { return m_mergeHunks; }
    template<typename MergeHunksT = Aws::Vector<MergeHunk>>
    void SetMergeHunks(MergeHunksT&& value) { m_mergeHunksHasBeenSet = true; m_mergeHunks = std::forward<MergeHunksT>(value); }
    template<typename MergeHunksT = Aws::Vector<MergeHunk>>
    DescribeMergeConflictsResult& WithMergeHunks(MergeHunksT&& value) { SetMergeHunks(std::forward<MergeHunksT>(value)); return *this;}
    template<typename MergeHunksT = MergeHunk>
    DescribeMergeConflictsResult& AddMergeHunks(MergeHunksT&& value) { m_mergeHunksHasBeenSet = true; m_mergeHunks.emplace_back(std::forward<MergeHunksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMergeConflictsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetDestinationCommitId() const { return m_destinationCommitId; }
    template<typename DestinationCommitIdT = Aws::String>
    void SetDestinationCommitId(DestinationCommitIdT&& value) { m_destinationCommitIdHasBeenSet = true; m_destinationCommitId = std::forward<DestinationCommitIdT>(value); }
    template<typename DestinationCommitIdT = Aws::String>
    DescribeMergeConflictsResult& WithDestinationCommitId(DestinationCommitIdT&& value) { SetDestinationCommitId(std::forward<DestinationCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetSourceCommitId() const { return m_sourceCommitId; }
    template<typename SourceCommitIdT = Aws::String>
    void SetSourceCommitId(SourceCommitIdT&& value) { m_sourceCommitIdHasBeenSet = true; m_sourceCommitId = std::forward<SourceCommitIdT>(value); }
    template<typename SourceCommitIdT = Aws::String>
    DescribeMergeConflictsResult& WithSourceCommitId(SourceCommitIdT&& value) { SetSourceCommitId(std::forward<SourceCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const { return m_baseCommitId; }
    template<typename BaseCommitIdT = Aws::String>
    void SetBaseCommitId(BaseCommitIdT&& value) { m_baseCommitIdHasBeenSet = true; m_baseCommitId = std::forward<BaseCommitIdT>(value); }
    template<typename BaseCommitIdT = Aws::String>
    DescribeMergeConflictsResult& WithBaseCommitId(BaseCommitIdT&& value) { SetBaseCommitId(std::forward<BaseCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMergeConflictsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConflictMetadata m_conflictMetadata;
    bool m_conflictMetadataHasBeenSet = false;

    Aws::Vector<MergeHunk> m_mergeHunks;
    bool m_mergeHunksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_destinationCommitId;
    bool m_destinationCommitIdHasBeenSet = false;

    Aws::String m_sourceCommitId;
    bool m_sourceCommitIdHasBeenSet = false;

    Aws::String m_baseCommitId;
    bool m_baseCommitIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
