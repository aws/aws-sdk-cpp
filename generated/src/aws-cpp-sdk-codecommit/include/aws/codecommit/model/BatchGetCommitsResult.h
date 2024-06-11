﻿/**
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
    AWS_CODECOMMIT_API BatchGetCommitsResult();
    AWS_CODECOMMIT_API BatchGetCommitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API BatchGetCommitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of commit data type objects, each of which contains information
     * about a specified commit.</p>
     */
    inline const Aws::Vector<Commit>& GetCommits() const{ return m_commits; }
    inline void SetCommits(const Aws::Vector<Commit>& value) { m_commits = value; }
    inline void SetCommits(Aws::Vector<Commit>&& value) { m_commits = std::move(value); }
    inline BatchGetCommitsResult& WithCommits(const Aws::Vector<Commit>& value) { SetCommits(value); return *this;}
    inline BatchGetCommitsResult& WithCommits(Aws::Vector<Commit>&& value) { SetCommits(std::move(value)); return *this;}
    inline BatchGetCommitsResult& AddCommits(const Commit& value) { m_commits.push_back(value); return *this; }
    inline BatchGetCommitsResult& AddCommits(Commit&& value) { m_commits.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns any commit IDs for which information could not be found. For example,
     * if one of the commit IDs was a shortened SHA ID or that commit was not found in
     * the specified repository, the ID returns an error object with more
     * information.</p>
     */
    inline const Aws::Vector<BatchGetCommitsError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchGetCommitsError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchGetCommitsError>&& value) { m_errors = std::move(value); }
    inline BatchGetCommitsResult& WithErrors(const Aws::Vector<BatchGetCommitsError>& value) { SetErrors(value); return *this;}
    inline BatchGetCommitsResult& WithErrors(Aws::Vector<BatchGetCommitsError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetCommitsResult& AddErrors(const BatchGetCommitsError& value) { m_errors.push_back(value); return *this; }
    inline BatchGetCommitsResult& AddErrors(BatchGetCommitsError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetCommitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetCommitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetCommitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Commit> m_commits;

    Aws::Vector<BatchGetCommitsError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
