/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/ConflictMetadata.h>
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
  class GetMergeConflictsResult
  {
  public:
    AWS_CODECOMMIT_API GetMergeConflictsResult() = default;
    AWS_CODECOMMIT_API GetMergeConflictsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetMergeConflictsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A Boolean value that indicates whether the code is mergeable by the specified
     * merge option.</p>
     */
    inline bool GetMergeable() const { return m_mergeable; }
    inline void SetMergeable(bool value) { m_mergeableHasBeenSet = true; m_mergeable = value; }
    inline GetMergeConflictsResult& WithMergeable(bool value) { SetMergeable(value); return *this;}
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
    GetMergeConflictsResult& WithDestinationCommitId(DestinationCommitIdT&& value) { SetDestinationCommitId(std::forward<DestinationCommitIdT>(value)); return *this;}
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
    GetMergeConflictsResult& WithSourceCommitId(SourceCommitIdT&& value) { SetSourceCommitId(std::forward<SourceCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const { return m_baseCommitId; }
    template<typename BaseCommitIdT = Aws::String>
    void SetBaseCommitId(BaseCommitIdT&& value) { m_baseCommitIdHasBeenSet = true; m_baseCommitId = std::forward<BaseCommitIdT>(value); }
    template<typename BaseCommitIdT = Aws::String>
    GetMergeConflictsResult& WithBaseCommitId(BaseCommitIdT&& value) { SetBaseCommitId(std::forward<BaseCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metadata for any conflicting files. If the specified merge strategy
     * is FAST_FORWARD_MERGE, this list is always empty.</p>
     */
    inline const Aws::Vector<ConflictMetadata>& GetConflictMetadataList() const { return m_conflictMetadataList; }
    template<typename ConflictMetadataListT = Aws::Vector<ConflictMetadata>>
    void SetConflictMetadataList(ConflictMetadataListT&& value) { m_conflictMetadataListHasBeenSet = true; m_conflictMetadataList = std::forward<ConflictMetadataListT>(value); }
    template<typename ConflictMetadataListT = Aws::Vector<ConflictMetadata>>
    GetMergeConflictsResult& WithConflictMetadataList(ConflictMetadataListT&& value) { SetConflictMetadataList(std::forward<ConflictMetadataListT>(value)); return *this;}
    template<typename ConflictMetadataListT = ConflictMetadata>
    GetMergeConflictsResult& AddConflictMetadataList(ConflictMetadataListT&& value) { m_conflictMetadataListHasBeenSet = true; m_conflictMetadataList.emplace_back(std::forward<ConflictMetadataListT>(value)); return *this; }
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
    GetMergeConflictsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMergeConflictsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_mergeable{false};
    bool m_mergeableHasBeenSet = false;

    Aws::String m_destinationCommitId;
    bool m_destinationCommitIdHasBeenSet = false;

    Aws::String m_sourceCommitId;
    bool m_sourceCommitIdHasBeenSet = false;

    Aws::String m_baseCommitId;
    bool m_baseCommitIdHasBeenSet = false;

    Aws::Vector<ConflictMetadata> m_conflictMetadataList;
    bool m_conflictMetadataListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
