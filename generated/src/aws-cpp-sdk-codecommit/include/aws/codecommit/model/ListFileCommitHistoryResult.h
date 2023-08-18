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
    AWS_CODECOMMIT_API ListFileCommitHistoryResult();
    AWS_CODECOMMIT_API ListFileCommitHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API ListFileCommitHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of FileVersion objects that form a directed acyclic graph (DAG) of
     * the changes to the file made by the commits that changed the file.</p>
     */
    inline const Aws::Vector<FileVersion>& GetRevisionDag() const{ return m_revisionDag; }

    /**
     * <p>An array of FileVersion objects that form a directed acyclic graph (DAG) of
     * the changes to the file made by the commits that changed the file.</p>
     */
    inline void SetRevisionDag(const Aws::Vector<FileVersion>& value) { m_revisionDag = value; }

    /**
     * <p>An array of FileVersion objects that form a directed acyclic graph (DAG) of
     * the changes to the file made by the commits that changed the file.</p>
     */
    inline void SetRevisionDag(Aws::Vector<FileVersion>&& value) { m_revisionDag = std::move(value); }

    /**
     * <p>An array of FileVersion objects that form a directed acyclic graph (DAG) of
     * the changes to the file made by the commits that changed the file.</p>
     */
    inline ListFileCommitHistoryResult& WithRevisionDag(const Aws::Vector<FileVersion>& value) { SetRevisionDag(value); return *this;}

    /**
     * <p>An array of FileVersion objects that form a directed acyclic graph (DAG) of
     * the changes to the file made by the commits that changed the file.</p>
     */
    inline ListFileCommitHistoryResult& WithRevisionDag(Aws::Vector<FileVersion>&& value) { SetRevisionDag(std::move(value)); return *this;}

    /**
     * <p>An array of FileVersion objects that form a directed acyclic graph (DAG) of
     * the changes to the file made by the commits that changed the file.</p>
     */
    inline ListFileCommitHistoryResult& AddRevisionDag(const FileVersion& value) { m_revisionDag.push_back(value); return *this; }

    /**
     * <p>An array of FileVersion objects that form a directed acyclic graph (DAG) of
     * the changes to the file made by the commits that changed the file.</p>
     */
    inline ListFileCommitHistoryResult& AddRevisionDag(FileVersion&& value) { m_revisionDag.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that can be used to return the next batch of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that can be used to return the next batch of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that can be used to return the next batch of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that can be used to return the next batch of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that can be used to return the next batch of
     * results.</p>
     */
    inline ListFileCommitHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that can be used to return the next batch of
     * results.</p>
     */
    inline ListFileCommitHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that can be used to return the next batch of
     * results.</p>
     */
    inline ListFileCommitHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFileCommitHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFileCommitHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFileCommitHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FileVersion> m_revisionDag;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
