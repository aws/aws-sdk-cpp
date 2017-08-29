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
   * <p>Represents the output of a list branches operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListBranchesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API ListBranchesResult
  {
  public:
    ListBranchesResult();
    ListBranchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListBranchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of branch names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBranches() const{ return m_branches; }

    /**
     * <p>The list of branch names.</p>
     */
    inline void SetBranches(const Aws::Vector<Aws::String>& value) { m_branches = value; }

    /**
     * <p>The list of branch names.</p>
     */
    inline void SetBranches(Aws::Vector<Aws::String>&& value) { m_branches = std::move(value); }

    /**
     * <p>The list of branch names.</p>
     */
    inline ListBranchesResult& WithBranches(const Aws::Vector<Aws::String>& value) { SetBranches(value); return *this;}

    /**
     * <p>The list of branch names.</p>
     */
    inline ListBranchesResult& WithBranches(Aws::Vector<Aws::String>&& value) { SetBranches(std::move(value)); return *this;}

    /**
     * <p>The list of branch names.</p>
     */
    inline ListBranchesResult& AddBranches(const Aws::String& value) { m_branches.push_back(value); return *this; }

    /**
     * <p>The list of branch names.</p>
     */
    inline ListBranchesResult& AddBranches(Aws::String&& value) { m_branches.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of branch names.</p>
     */
    inline ListBranchesResult& AddBranches(const char* value) { m_branches.push_back(value); return *this; }


    /**
     * <p>An enumeration token that returns the batch of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that returns the batch of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that returns the batch of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that returns the batch of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that returns the batch of the results.</p>
     */
    inline ListBranchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that returns the batch of the results.</p>
     */
    inline ListBranchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that returns the batch of the results.</p>
     */
    inline ListBranchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_branches;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
