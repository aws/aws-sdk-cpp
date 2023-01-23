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
  class ListRepositoriesForApprovalRuleTemplateResult
  {
  public:
    AWS_CODECOMMIT_API ListRepositoriesForApprovalRuleTemplateResult();
    AWS_CODECOMMIT_API ListRepositoriesForApprovalRuleTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API ListRepositoriesForApprovalRuleTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of repository names that are associated with the specified approval
     * rule template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const{ return m_repositoryNames; }

    /**
     * <p>A list of repository names that are associated with the specified approval
     * rule template.</p>
     */
    inline void SetRepositoryNames(const Aws::Vector<Aws::String>& value) { m_repositoryNames = value; }

    /**
     * <p>A list of repository names that are associated with the specified approval
     * rule template.</p>
     */
    inline void SetRepositoryNames(Aws::Vector<Aws::String>&& value) { m_repositoryNames = std::move(value); }

    /**
     * <p>A list of repository names that are associated with the specified approval
     * rule template.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateResult& WithRepositoryNames(const Aws::Vector<Aws::String>& value) { SetRepositoryNames(value); return *this;}

    /**
     * <p>A list of repository names that are associated with the specified approval
     * rule template.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateResult& WithRepositoryNames(Aws::Vector<Aws::String>&& value) { SetRepositoryNames(std::move(value)); return *this;}

    /**
     * <p>A list of repository names that are associated with the specified approval
     * rule template.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateResult& AddRepositoryNames(const Aws::String& value) { m_repositoryNames.push_back(value); return *this; }

    /**
     * <p>A list of repository names that are associated with the specified approval
     * rule template.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateResult& AddRepositoryNames(Aws::String&& value) { m_repositoryNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of repository names that are associated with the specified approval
     * rule template.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateResult& AddRepositoryNames(const char* value) { m_repositoryNames.push_back(value); return *this; }


    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_repositoryNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
