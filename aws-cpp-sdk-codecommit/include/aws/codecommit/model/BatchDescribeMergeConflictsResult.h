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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Conflict.h>
#include <aws/codecommit/model/BatchDescribeMergeConflictsError.h>
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
  class AWS_CODECOMMIT_API BatchDescribeMergeConflictsResult
  {
  public:
    BatchDescribeMergeConflictsResult();
    BatchDescribeMergeConflictsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchDescribeMergeConflictsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of conflicts for each file, including the conflict metadata and the
     * hunks of the differences between the files.</p>
     */
    inline const Aws::Vector<Conflict>& GetConflicts() const{ return m_conflicts; }

    /**
     * <p>A list of conflicts for each file, including the conflict metadata and the
     * hunks of the differences between the files.</p>
     */
    inline void SetConflicts(const Aws::Vector<Conflict>& value) { m_conflicts = value; }

    /**
     * <p>A list of conflicts for each file, including the conflict metadata and the
     * hunks of the differences between the files.</p>
     */
    inline void SetConflicts(Aws::Vector<Conflict>&& value) { m_conflicts = std::move(value); }

    /**
     * <p>A list of conflicts for each file, including the conflict metadata and the
     * hunks of the differences between the files.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithConflicts(const Aws::Vector<Conflict>& value) { SetConflicts(value); return *this;}

    /**
     * <p>A list of conflicts for each file, including the conflict metadata and the
     * hunks of the differences between the files.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithConflicts(Aws::Vector<Conflict>&& value) { SetConflicts(std::move(value)); return *this;}

    /**
     * <p>A list of conflicts for each file, including the conflict metadata and the
     * hunks of the differences between the files.</p>
     */
    inline BatchDescribeMergeConflictsResult& AddConflicts(const Conflict& value) { m_conflicts.push_back(value); return *this; }

    /**
     * <p>A list of conflicts for each file, including the conflict metadata and the
     * hunks of the differences between the files.</p>
     */
    inline BatchDescribeMergeConflictsResult& AddConflicts(Conflict&& value) { m_conflicts.push_back(std::move(value)); return *this; }


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
    inline BatchDescribeMergeConflictsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of any errors returned while describing the merge conflicts for each
     * file.</p>
     */
    inline const Aws::Vector<BatchDescribeMergeConflictsError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of any errors returned while describing the merge conflicts for each
     * file.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchDescribeMergeConflictsError>& value) { m_errors = value; }

    /**
     * <p>A list of any errors returned while describing the merge conflicts for each
     * file.</p>
     */
    inline void SetErrors(Aws::Vector<BatchDescribeMergeConflictsError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of any errors returned while describing the merge conflicts for each
     * file.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithErrors(const Aws::Vector<BatchDescribeMergeConflictsError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of any errors returned while describing the merge conflicts for each
     * file.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithErrors(Aws::Vector<BatchDescribeMergeConflictsError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of any errors returned while describing the merge conflicts for each
     * file.</p>
     */
    inline BatchDescribeMergeConflictsResult& AddErrors(const BatchDescribeMergeConflictsError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of any errors returned while describing the merge conflicts for each
     * file.</p>
     */
    inline BatchDescribeMergeConflictsResult& AddErrors(BatchDescribeMergeConflictsError&& value) { m_errors.push_back(std::move(value)); return *this; }


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
    inline BatchDescribeMergeConflictsResult& WithDestinationCommitId(const Aws::String& value) { SetDestinationCommitId(value); return *this;}

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithDestinationCommitId(Aws::String&& value) { SetDestinationCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the destination commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithDestinationCommitId(const char* value) { SetDestinationCommitId(value); return *this;}


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
    inline BatchDescribeMergeConflictsResult& WithSourceCommitId(const Aws::String& value) { SetSourceCommitId(value); return *this;}

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithSourceCommitId(Aws::String&& value) { SetSourceCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the source commit specifier that was used in the merge
     * evaluation.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithSourceCommitId(const char* value) { SetSourceCommitId(value); return *this;}


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
    inline BatchDescribeMergeConflictsResult& WithBaseCommitId(const Aws::String& value) { SetBaseCommitId(value); return *this;}

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithBaseCommitId(Aws::String&& value) { SetBaseCommitId(std::move(value)); return *this;}

    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline BatchDescribeMergeConflictsResult& WithBaseCommitId(const char* value) { SetBaseCommitId(value); return *this;}

  private:

    Aws::Vector<Conflict> m_conflicts;

    Aws::String m_nextToken;

    Aws::Vector<BatchDescribeMergeConflictsError> m_errors;

    Aws::String m_destinationCommitId;

    Aws::String m_sourceCommitId;

    Aws::String m_baseCommitId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
