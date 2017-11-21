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
  class AWS_CODECOMMIT_API GetCommentsForComparedCommitResult
  {
  public:
    GetCommentsForComparedCommitResult();
    GetCommentsForComparedCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCommentsForComparedCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of comment objects on the compared commit.</p>
     */
    inline const Aws::Vector<CommentsForComparedCommit>& GetCommentsForComparedCommitData() const{ return m_commentsForComparedCommitData; }

    /**
     * <p>A list of comment objects on the compared commit.</p>
     */
    inline void SetCommentsForComparedCommitData(const Aws::Vector<CommentsForComparedCommit>& value) { m_commentsForComparedCommitData = value; }

    /**
     * <p>A list of comment objects on the compared commit.</p>
     */
    inline void SetCommentsForComparedCommitData(Aws::Vector<CommentsForComparedCommit>&& value) { m_commentsForComparedCommitData = std::move(value); }

    /**
     * <p>A list of comment objects on the compared commit.</p>
     */
    inline GetCommentsForComparedCommitResult& WithCommentsForComparedCommitData(const Aws::Vector<CommentsForComparedCommit>& value) { SetCommentsForComparedCommitData(value); return *this;}

    /**
     * <p>A list of comment objects on the compared commit.</p>
     */
    inline GetCommentsForComparedCommitResult& WithCommentsForComparedCommitData(Aws::Vector<CommentsForComparedCommit>&& value) { SetCommentsForComparedCommitData(std::move(value)); return *this;}

    /**
     * <p>A list of comment objects on the compared commit.</p>
     */
    inline GetCommentsForComparedCommitResult& AddCommentsForComparedCommitData(const CommentsForComparedCommit& value) { m_commentsForComparedCommitData.push_back(value); return *this; }

    /**
     * <p>A list of comment objects on the compared commit.</p>
     */
    inline GetCommentsForComparedCommitResult& AddCommentsForComparedCommitData(CommentsForComparedCommit&& value) { m_commentsForComparedCommitData.push_back(std::move(value)); return *this; }


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
    inline GetCommentsForComparedCommitResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetCommentsForComparedCommitResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline GetCommentsForComparedCommitResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CommentsForComparedCommit> m_commentsForComparedCommitData;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
