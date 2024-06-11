﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/CommentsForComparedCommit.h>
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
  class GetCommentsForComparedCommitResult
  {
  public:
    AWS_CODECOMMIT_API GetCommentsForComparedCommitResult();
    AWS_CODECOMMIT_API GetCommentsForComparedCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetCommentsForComparedCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of comment objects on the compared commit.</p>
     */
    inline const Aws::Vector<CommentsForComparedCommit>& GetCommentsForComparedCommitData() const{ return m_commentsForComparedCommitData; }
    inline void SetCommentsForComparedCommitData(const Aws::Vector<CommentsForComparedCommit>& value) { m_commentsForComparedCommitData = value; }
    inline void SetCommentsForComparedCommitData(Aws::Vector<CommentsForComparedCommit>&& value) { m_commentsForComparedCommitData = std::move(value); }
    inline GetCommentsForComparedCommitResult& WithCommentsForComparedCommitData(const Aws::Vector<CommentsForComparedCommit>& value) { SetCommentsForComparedCommitData(value); return *this;}
    inline GetCommentsForComparedCommitResult& WithCommentsForComparedCommitData(Aws::Vector<CommentsForComparedCommit>&& value) { SetCommentsForComparedCommitData(std::move(value)); return *this;}
    inline GetCommentsForComparedCommitResult& AddCommentsForComparedCommitData(const CommentsForComparedCommit& value) { m_commentsForComparedCommitData.push_back(value); return *this; }
    inline GetCommentsForComparedCommitResult& AddCommentsForComparedCommitData(CommentsForComparedCommit&& value) { m_commentsForComparedCommitData.push_back(std::move(value)); return *this; }
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
    inline GetCommentsForComparedCommitResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCommentsForComparedCommitResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCommentsForComparedCommitResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCommentsForComparedCommitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCommentsForComparedCommitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCommentsForComparedCommitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CommentsForComparedCommit> m_commentsForComparedCommitData;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
