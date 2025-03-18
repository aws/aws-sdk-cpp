/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Commit.h>
#include <aws/codecommit/model/BatchGetCommitsError.h>
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
  class BatchGetCommitsResult
  {
  public:
    AWS_CODECOMMIT_API BatchGetCommitsResult() = default;
    AWS_CODECOMMIT_API BatchGetCommitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API BatchGetCommitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of commit data type objects, each of which contains information
     * about a specified commit.</p>
     */
    inline const Aws::Vector<Commit>& GetCommits() const { return m_commits; }
    template<typename CommitsT = Aws::Vector<Commit>>
    void SetCommits(CommitsT&& value) { m_commitsHasBeenSet = true; m_commits = std::forward<CommitsT>(value); }
    template<typename CommitsT = Aws::Vector<Commit>>
    BatchGetCommitsResult& WithCommits(CommitsT&& value) { SetCommits(std::forward<CommitsT>(value)); return *this;}
    template<typename CommitsT = Commit>
    BatchGetCommitsResult& AddCommits(CommitsT&& value) { m_commitsHasBeenSet = true; m_commits.emplace_back(std::forward<CommitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns any commit IDs for which information could not be found. For example,
     * if one of the commit IDs was a shortened SHA ID or that commit was not found in
     * the specified repository, the ID returns an error object with more
     * information.</p>
     */
    inline const Aws::Vector<BatchGetCommitsError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetCommitsError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetCommitsError>>
    BatchGetCommitsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetCommitsError>
    BatchGetCommitsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetCommitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Commit> m_commits;
    bool m_commitsHasBeenSet = false;

    Aws::Vector<BatchGetCommitsError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
