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
    AWS_CODECOMMIT_API GetMergeConflictsResult();
    AWS_CODECOMMIT_API GetMergeConflictsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetMergeConflictsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A Boolean value that indicates whether the code is mergeable by the specified
     * merge option.</p>
     */
    inline bool GetMergeable() const{ return m_mergeable; }
    inline void SetMergeable(bool value) { m_mergeable = value; }
    inline GetMergeConflictsResult& WithMergeable(bool value) { SetMergeable(value); return *this;}
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
    inline GetMergeConflictsResult& WithDestinationCommitId(const Aws::String& value) { SetDestinationCommitId(value); return *this;}
    inline GetMergeConflictsResult& WithDestinationCommitId(Aws::String&& value) { SetDestinationCommitId(std::move(value)); return *this;}
    inline GetMergeConflictsResult& WithDestinationCommitId(const char* value) { SetDestinationCommitId(value); return *this;}
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
    inline GetMergeConflictsResult& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}
    inline GetMergeConflictsResult& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}
    inline GetMergeConflictsResult& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const{ return m_baseCommitId; }
    inline void SetBaseCommitId(const Aws::String& value) { m_baseCommitId = value; }
    inline void SetBaseCommitId(Aws::String&& value) { m_baseCommitId = std::move(value); }
    inline void SetBaseCommitId(const char* value) { m_baseCommitId.assign(value); }
    inline GetMergeConflictsResult& WithBaseCommitId(const Aws::String& value) { SetBaseCommitId(value); return *this;}
    inline GetMergeConflictsResult& WithBaseCommitId(Aws::String&& value) { SetBaseCommitId(std::move(value)); return *this;}
    inline GetMergeConflictsResult& WithBaseCommitId(const char* value) { SetBaseCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metadata for any conflicting files. If the specified merge strategy
     * is FAST_FORWARD_MERGE, this list is always empty.</p>
     */
    inline const Aws::Vector<ConflictMetadata>& GetConflictMetadataList() const{ return m_conflictMetadataList; }
    inline void SetConflictMetadataList(const Aws::Vector<ConflictMetadata>& value) { m_conflictMetadataList = value; }
    inline void SetConflictMetadataList(Aws::Vector<ConflictMetadata>&& value) { m_conflictMetadataList = std::move(value); }
    inline GetMergeConflictsResult& WithConflictMetadataList(const Aws::Vector<ConflictMetadata>& value) { SetConflictMetadataList(value); return *this;}
    inline GetMergeConflictsResult& WithConflictMetadataList(Aws::Vector<ConflictMetadata>&& value) { SetConflictMetadataList(std::move(value)); return *this;}
    inline GetMergeConflictsResult& AddConflictMetadataList(const ConflictMetadata& value) { m_conflictMetadataList.push_back(value); return *this; }
    inline GetMergeConflictsResult& AddConflictMetadataList(ConflictMetadata&& value) { m_conflictMetadataList.push_back(std::move(value)); return *this; }
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
    inline GetMergeConflictsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetMergeConflictsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetMergeConflictsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMergeConflictsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMergeConflictsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMergeConflictsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_mergeable;

    Aws::String m_destinationCommitId;

    Aws::String m_sourceCommitId;

    Aws::String m_baseCommitId;

    Aws::Vector<ConflictMetadata> m_conflictMetadataList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
