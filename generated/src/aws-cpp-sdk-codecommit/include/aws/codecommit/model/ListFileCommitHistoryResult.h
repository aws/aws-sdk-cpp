/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/FileVersion.h>
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
  class ListFileCommitHistoryResult
  {
  public:
    AWS_CODECOMMIT_API ListFileCommitHistoryResult() = default;
    AWS_CODECOMMIT_API ListFileCommitHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API ListFileCommitHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of FileVersion objects that form a directed acyclic graph (DAG) of
     * the changes to the file made by the commits that changed the file.</p>
     */
    inline const Aws::Vector<FileVersion>& GetRevisionDag() const { return m_revisionDag; }
    template<typename RevisionDagT = Aws::Vector<FileVersion>>
    void SetRevisionDag(RevisionDagT&& value) { m_revisionDagHasBeenSet = true; m_revisionDag = std::forward<RevisionDagT>(value); }
    template<typename RevisionDagT = Aws::Vector<FileVersion>>
    ListFileCommitHistoryResult& WithRevisionDag(RevisionDagT&& value) { SetRevisionDag(std::forward<RevisionDagT>(value)); return *this;}
    template<typename RevisionDagT = FileVersion>
    ListFileCommitHistoryResult& AddRevisionDag(RevisionDagT&& value) { m_revisionDagHasBeenSet = true; m_revisionDag.emplace_back(std::forward<RevisionDagT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that can be used to return the next batch of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFileCommitHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFileCommitHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FileVersion> m_revisionDag;
    bool m_revisionDagHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
