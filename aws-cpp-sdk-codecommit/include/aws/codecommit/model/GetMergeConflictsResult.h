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
  class AWS_CODECOMMIT_API GetMergeConflictsResult
  {
  public:
    GetMergeConflictsResult();
    GetMergeConflictsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMergeConflictsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A Boolean value that indicates whether the code is mergeable by the specified
     * merge option.</p>
     */
    inline bool GetMergeable() const{ return m_mergeable; }

    /**
     * <p>A Boolean value that indicates whether the code is mergeable by the specified
     * merge option.</p>
     */
    inline void SetMergeable(bool value) { m_mergeable = value; }

    /**
     * <p>A Boolean value that indicates whether the code is mergeable by the specified
     * merge option.</p>
     */
    inline GetMergeConflictsResult& WithMergeable(bool value) { SetMergeable(value); return *this;}


    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetDestinationCommitId() const{ return m_destinationCommitId; }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetDestinationCommitId(const Aws::String& value) { m_destinationCommitId = value; }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetDestinationCommitId(Aws::String&& value) { m_destinationCommitId = std::move(value); }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetDestinationCommitId(const char* value) { m_destinationCommitId.assign(value); }

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeConflictsResult& WithDestinationCommitId(const Aws::String& value) { SetDestinationCommitId(value); return *this;}

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeConflictsResult& WithDestinationCommitId(Aws::String&& value) { SetDestinationCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeConflictsResult& WithDestinationCommitId(const char* value) { SetDestinationCommitId(value); return *this;}


    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline const Aws::String& GetSourceCommitId() const{ return m_sourceCommitId; }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetSourceCommitId(const Aws::String& value) { m_sourceCommitId = value; }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetSourceCommitId(Aws::String&& value) { m_sourceCommitId = std::move(value); }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline void SetSourceCommitId(const char* value) { m_sourceCommitId.assign(value); }

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeConflictsResult& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeConflictsResult& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline GetMergeConflictsResult& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}


    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const{ return m_baseCommitId; }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline void SetBaseCommitId(const Aws::String& value) { m_baseCommitId = value; }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline void SetBaseCommitId(Aws::String&& value) { m_baseCommitId = std::move(value); }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline void SetBaseCommitId(const char* value) { m_baseCommitId.assign(value); }

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline GetMergeConflictsResult& WithBaseCommitId(const Aws::String& value) { SetBaseCommitId(value); return *this;}

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline GetMergeConflictsResult& WithBaseCommitId(Aws::String&& value) { SetBaseCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline GetMergeConflictsResult& WithBaseCommitId(const char* value) { SetBaseCommitId(value); return *this;}


    /**
     * <p>A list of metadata for any conflicting files. If the specified merge strategy
     * is FAST_FORWARD_MERGE, this list will always be empty.</p>
     */
    inline const Aws::Vector<ConflictMetadata>& GetConflictMetadataList() const{ return m_conflictMetadataList; }

    /**
     * <p>A list of metadata for any conflicting files. If the specified merge strategy
     * is FAST_FORWARD_MERGE, this list will always be empty.</p>
     */
    inline void SetConflictMetadataList(const Aws::Vector<ConflictMetadata>& value) { m_conflictMetadataList = value; }

    /**
     * <p>A list of metadata for any conflicting files. If the specified merge strategy
     * is FAST_FORWARD_MERGE, this list will always be empty.</p>
     */
    inline void SetConflictMetadataList(Aws::Vector<ConflictMetadata>&& value) { m_conflictMetadataList = std::move(value); }

    /**
     * <p>A list of metadata for any conflicting files. If the specified merge strategy
     * is FAST_FORWARD_MERGE, this list will always be empty.</p>
     */
    inline GetMergeConflictsResult& WithConflictMetadataList(const Aws::Vector<ConflictMetadata>& value) { SetConflictMetadataList(value); return *this;}

    /**
     * <p>A list of metadata for any conflicting files. If the specified merge strategy
     * is FAST_FORWARD_MERGE, this list will always be empty.</p>
     */
    inline GetMergeConflictsResult& WithConflictMetadataList(Aws::Vector<ConflictMetadata>&& value) { SetConflictMetadataList(std::move(value)); return *this;}

    /**
     * <p>A list of metadata for any conflicting files. If the specified merge strategy
     * is FAST_FORWARD_MERGE, this list will always be empty.</p>
     */
    inline GetMergeConflictsResult& AddConflictMetadataList(const ConflictMetadata& value) { m_conflictMetadataList.push_back(value); return *this; }

    /**
     * <p>A list of metadata for any conflicting files. If the specified merge strategy
     * is FAST_FORWARD_MERGE, this list will always be empty.</p>
     */
    inline GetMergeConflictsResult& AddConflictMetadataList(ConflictMetadata&& value) { m_conflictMetadataList.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetMergeConflictsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetMergeConflictsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetMergeConflictsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_mergeable;

    Aws::String m_destinationCommitId;

    Aws::String m_sourceCommitId;

    Aws::String m_baseCommitId;

    Aws::Vector<ConflictMetadata> m_conflictMetadataList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
