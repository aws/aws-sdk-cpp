/**
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
    AWS_CODECOMMIT_API GetCommentsForComparedCommitResult() = default;
    AWS_CODECOMMIT_API GetCommentsForComparedCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetCommentsForComparedCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of comment objects on the compared commit.</p>
     */
    inline const Aws::Vector<CommentsForComparedCommit>& GetCommentsForComparedCommitData() const { return m_commentsForComparedCommitData; }
    template<typename CommentsForComparedCommitDataT = Aws::Vector<CommentsForComparedCommit>>
    void SetCommentsForComparedCommitData(CommentsForComparedCommitDataT&& value) { m_commentsForComparedCommitDataHasBeenSet = true; m_commentsForComparedCommitData = std::forward<CommentsForComparedCommitDataT>(value); }
    template<typename CommentsForComparedCommitDataT = Aws::Vector<CommentsForComparedCommit>>
    GetCommentsForComparedCommitResult& WithCommentsForComparedCommitData(CommentsForComparedCommitDataT&& value) { SetCommentsForComparedCommitData(std::forward<CommentsForComparedCommitDataT>(value)); return *this;}
    template<typename CommentsForComparedCommitDataT = CommentsForComparedCommit>
    GetCommentsForComparedCommitResult& AddCommentsForComparedCommitData(CommentsForComparedCommitDataT&& value) { m_commentsForComparedCommitDataHasBeenSet = true; m_commentsForComparedCommitData.emplace_back(std::forward<CommentsForComparedCommitDataT>(value)); return *this; }
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
    GetCommentsForComparedCommitResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCommentsForComparedCommitResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CommentsForComparedCommit> m_commentsForComparedCommitData;
    bool m_commentsForComparedCommitDataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
