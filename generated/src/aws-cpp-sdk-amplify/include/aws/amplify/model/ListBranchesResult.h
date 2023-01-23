/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/Branch.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> The result structure for the list branches request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBranchesResult">AWS
   * API Reference</a></p>
   */
  class ListBranchesResult
  {
  public:
    AWS_AMPLIFY_API ListBranchesResult();
    AWS_AMPLIFY_API ListBranchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListBranchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of branches for an Amplify app. </p>
     */
    inline const Aws::Vector<Branch>& GetBranches() const{ return m_branches; }

    /**
     * <p> A list of branches for an Amplify app. </p>
     */
    inline void SetBranches(const Aws::Vector<Branch>& value) { m_branches = value; }

    /**
     * <p> A list of branches for an Amplify app. </p>
     */
    inline void SetBranches(Aws::Vector<Branch>&& value) { m_branches = std::move(value); }

    /**
     * <p> A list of branches for an Amplify app. </p>
     */
    inline ListBranchesResult& WithBranches(const Aws::Vector<Branch>& value) { SetBranches(value); return *this;}

    /**
     * <p> A list of branches for an Amplify app. </p>
     */
    inline ListBranchesResult& WithBranches(Aws::Vector<Branch>&& value) { SetBranches(std::move(value)); return *this;}

    /**
     * <p> A list of branches for an Amplify app. </p>
     */
    inline ListBranchesResult& AddBranches(const Branch& value) { m_branches.push_back(value); return *this; }

    /**
     * <p> A list of branches for an Amplify app. </p>
     */
    inline ListBranchesResult& AddBranches(Branch&& value) { m_branches.push_back(std::move(value)); return *this; }


    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline ListBranchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline ListBranchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline ListBranchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Branch> m_branches;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
