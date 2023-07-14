﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API ListAssociatedApprovalRuleTemplatesForRepositoryRequest : public CodeCommitRequest
  {
  public:
    ListAssociatedApprovalRuleTemplatesForRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssociatedApprovalRuleTemplatesForRepository"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository for which you want to list all associated approval
     * rule templates.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository for which you want to list all associated approval
     * rule templates.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository for which you want to list all associated approval
     * rule templates.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository for which you want to list all associated approval
     * rule templates.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository for which you want to list all associated approval
     * rule templates.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository for which you want to list all associated approval
     * rule templates.</p>
     */
    inline ListAssociatedApprovalRuleTemplatesForRepositoryRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository for which you want to list all associated approval
     * rule templates.</p>
     */
    inline ListAssociatedApprovalRuleTemplatesForRepositoryRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository for which you want to list all associated approval
     * rule templates.</p>
     */
    inline ListAssociatedApprovalRuleTemplatesForRepositoryRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListAssociatedApprovalRuleTemplatesForRepositoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListAssociatedApprovalRuleTemplatesForRepositoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListAssociatedApprovalRuleTemplatesForRepositoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results.</p>
     */
    inline ListAssociatedApprovalRuleTemplatesForRepositoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
