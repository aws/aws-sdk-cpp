/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchDescribeMergeConflictsResult
  {
  public:
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsResult() = default;
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of conflicts for each file, including the conflict metadata and the
     * hunks of the differences between the files.</p>
     */
    inline const Aws::Vector<Conflict>& GetConflicts() const { return m_conflicts; }
    template<typename ConflictsT = Aws::Vector<Conflict>>
    void SetConflicts(ConflictsT&& value) { m_conflictsHasBeenSet = true; m_conflicts = std::forward<ConflictsT>(value); }
    template<typename ConflictsT = Aws::Vector<Conflict>>
    BatchDescribeMergeConflictsResult& WithConflicts(ConflictsT&& value) { SetConflicts(std::forward<ConflictsT>(value)); return *this;}
    template<typename ConflictsT = Conflict>
    BatchDescribeMergeConflictsResult& AddConflicts(ConflictsT&& value) { m_conflictsHasBeenSet = true; m_conflicts.emplace_back(std::forward<ConflictsT>(value)); return *this; }
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
    BatchDescribeMergeConflictsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of any errors returned while describing the merge conflicts for each
     * file.</p>
     */
    inline const Aws::Vector<BatchDescribeMergeConflictsError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchDescribeMergeConflictsError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchDescribeMergeConflictsError>>
    BatchDescribeMergeConflictsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchDescribeMergeConflictsError>
    BatchDescribeMergeConflictsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
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
    BatchDescribeMergeConflictsResult& WithDestinationCommitId(DestinationCommitIdT&& value) { SetDestinationCommitId(std::forward<DestinationCommitIdT>(value)); return *this;}
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
    BatchDescribeMergeConflictsResult& WithSourceCommitId(SourceCommitIdT&& value) { SetSourceCommitId(std::forward<SourceCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID of the merge base.</p>
     */
    inline const Aws::String& GetBaseCommitId() const { return m_baseCommitId; }
    template<typename BaseCommitIdT = Aws::String>
    void SetBaseCommitId(BaseCommitIdT&& value) { m_baseCommitIdHasBeenSet = true; m_baseCommitId = std::forward<BaseCommitIdT>(value); }
    template<typename BaseCommitIdT = Aws::String>
    BatchDescribeMergeConflictsResult& WithBaseCommitId(BaseCommitIdT&& value) { SetBaseCommitId(std::forward<BaseCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDescribeMergeConflictsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Conflict> m_conflicts;
    bool m_conflictsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<BatchDescribeMergeConflictsError> m_errors;
    bool m_errorsHasBeenSet = false;

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
