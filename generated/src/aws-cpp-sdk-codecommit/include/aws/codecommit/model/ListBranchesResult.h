/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListBranchesResult
  {
  public:
    AWS_CODECOMMIT_API ListBranchesResult();
    AWS_CODECOMMIT_API ListBranchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API ListBranchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
