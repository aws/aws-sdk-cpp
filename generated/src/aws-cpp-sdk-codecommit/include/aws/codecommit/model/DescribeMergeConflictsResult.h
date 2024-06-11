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
    AWS_CODECOMMIT_API DescribeMergeConflictsResult();
    AWS_CODECOMMIT_API DescribeMergeConflictsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DescribeMergeConflictsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains metadata about the conflicts found in the merge.</p>
     */
    inline const ConflictMetadata& GetConflictMetadata() const{ return m_conflictMetadata; }
    inline void SetConflictMetadata(const ConflictMetadata& value) { m_conflictMetadata = value; }
    inline void SetConflictMetadata(ConflictMetadata&& value) { m_conflictMetadata = std::move(value); }
    inline DescribeMergeConflictsResult& WithConflictMetadata(const ConflictMetadata& value) { SetConflictMetadata(value); return *this;}
    inline DescribeMergeConflictsResult& WithConflictMetadata(ConflictMetadata&& value) { SetConflictMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of merge hunks of the differences between the files or lines.</p>
     */
    inline const Aws::Vector<MergeHunk>& GetMergeHunks() const{ return m_mergeHunks; }
    inline void SetMergeHunks(const Aws::Vector<MergeHunk>& value) { m_mergeHunks = value; }
    inline void SetMergeHunks(Aws::Vector<MergeHunk>&& value) { m_mergeHunks = std::move(value); }
    inline DescribeMergeConflictsResult& WithMergeHunks(const Aws::Vector<MergeHunk>& value) { SetMergeHunks(value); return *this;}
    inline DescribeMergeConflictsResult& WithMergeHunks(Aws::Vector<MergeHunk>&& value) { SetMergeHunks(std::move(value)); return *this;}
    inline DescribeMergeConflictsResult& AddMergeHunks(const MergeHunk& value) { m_mergeHunks.push_back(value); return *this; }
    inline DescribeMergeConflictsResult& AddMergeHunks(MergeHunk&& value) { m_mergeHunks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeMergeConflictsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeMergeConflictsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeMergeConflictsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetDestinationCommitId() const{ return m_destinationCommitId; }
    inline void SetDestinationCommitId(const Aws::String& value) { m_destinationCommitId = value; }
    inline void SetDestinationCommitId(Aws::String&& value) { m_destinationCommitId = std::move(value); }
    inline void SetDestinationCommitId(const char* value) { m_destinationCommitId.assign(value); }
    inline DescribeMergeConflictsResult& WithDestinationCommitId(const Aws::String& value) { SetDestinationCommitId(value); return *this;}
    inline DescribeMergeConflictsResult& WithDestinationCommitId(Aws::String&& value) { SetDestinationCommitId(std::move(value)); return *this;}
    inline DescribeMergeConflictsResult& WithDestinationCommitId(const char* value) { SetDestinationCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetSourceCommitId() const{ return m_sourceCommitId; }
    inline void SetSourceCommitId(const Aws::String& value) { m_sourceCommitId = value; }
    inline void SetSourceCommitId(Aws::String&& value) { m_sourceCommitId = std::move(value); }
    inline void SetSourceCommitId(const char* value) { m_sourceCommitId.assign(value); }
    inline DescribeMergeConflictsResult& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}
    inline DescribeMergeConflictsResult& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}
    inline DescribeMergeConflictsResult& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const{ return m_baseCommitId; }
    inline void SetBaseCommitId(const Aws::String& value) { m_baseCommitId = value; }
    inline void SetBaseCommitId(Aws::String&& value) { m_baseCommitId = std::move(value); }
    inline void SetBaseCommitId(const char* value) { m_baseCommitId.assign(value); }
    inline DescribeMergeConflictsResult& WithBaseCommitId(const Aws::String& value) { SetBaseCommitId(value); return *this;}
    inline DescribeMergeConflictsResult& WithBaseCommitId(Aws::String&& value) { SetBaseCommitId(std::move(value)); return *this;}
    inline DescribeMergeConflictsResult& WithBaseCommitId(const char* value) { SetBaseCommitId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMergeConflictsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMergeConflictsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMergeConflictsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ConflictMetadata m_conflictMetadata;

    Aws::Vector<MergeHunk> m_mergeHunks;

    Aws::String m_nextToken;

    Aws::String m_destinationCommitId;

    Aws::String m_sourceCommitId;

    Aws::String m_baseCommitId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
