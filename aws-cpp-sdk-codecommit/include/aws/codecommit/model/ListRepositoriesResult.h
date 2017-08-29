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
#include <aws/codecommit/model/RepositoryNameIdPair.h>
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
  /**
   * <p>Represents the output of a list repositories operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositoriesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API ListRepositoriesResult
  {
  public:
    ListRepositoriesResult();
    ListRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the repositories called by the list repositories operation.</p>
     */
    inline const Aws::Vector<RepositoryNameIdPair>& GetRepositories() const{ return m_repositories; }

    /**
     * <p>Lists the repositories called by the list repositories operation.</p>
     */
    inline void SetRepositories(const Aws::Vector<RepositoryNameIdPair>& value) { m_repositories = value; }

    /**
     * <p>Lists the repositories called by the list repositories operation.</p>
     */
    inline void SetRepositories(Aws::Vector<RepositoryNameIdPair>&& value) { m_repositories = std::move(value); }

    /**
     * <p>Lists the repositories called by the list repositories operation.</p>
     */
    inline ListRepositoriesResult& WithRepositories(const Aws::Vector<RepositoryNameIdPair>& value) { SetRepositories(value); return *this;}

    /**
     * <p>Lists the repositories called by the list repositories operation.</p>
     */
    inline ListRepositoriesResult& WithRepositories(Aws::Vector<RepositoryNameIdPair>&& value) { SetRepositories(std::move(value)); return *this;}

    /**
     * <p>Lists the repositories called by the list repositories operation.</p>
     */
    inline ListRepositoriesResult& AddRepositories(const RepositoryNameIdPair& value) { m_repositories.push_back(value); return *this; }

    /**
     * <p>Lists the repositories called by the list repositories operation.</p>
     */
    inline ListRepositoriesResult& AddRepositories(RepositoryNameIdPair&& value) { m_repositories.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline ListRepositoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline ListRepositoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline ListRepositoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RepositoryNameIdPair> m_repositories;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
