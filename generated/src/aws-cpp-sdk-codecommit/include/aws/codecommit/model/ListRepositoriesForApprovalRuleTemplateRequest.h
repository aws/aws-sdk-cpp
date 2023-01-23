/**
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
  class ListRepositoriesForApprovalRuleTemplateRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API ListRepositoriesForApprovalRuleTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositoriesForApprovalRuleTemplate"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the approval rule template for which you want to list
     * repositories that are associated with that template.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateName() const{ return m_approvalRuleTemplateName; }

    /**
     * <p>The name of the approval rule template for which you want to list
     * repositories that are associated with that template.</p>
     */
    inline bool ApprovalRuleTemplateNameHasBeenSet() const { return m_approvalRuleTemplateNameHasBeenSet; }

    /**
     * <p>The name of the approval rule template for which you want to list
     * repositories that are associated with that template.</p>
     */
    inline void SetApprovalRuleTemplateName(const Aws::String& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = value; }

    /**
     * <p>The name of the approval rule template for which you want to list
     * repositories that are associated with that template.</p>
     */
    inline void SetApprovalRuleTemplateName(Aws::String&& value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName = std::move(value); }

    /**
     * <p>The name of the approval rule template for which you want to list
     * repositories that are associated with that template.</p>
     */
    inline void SetApprovalRuleTemplateName(const char* value) { m_approvalRuleTemplateNameHasBeenSet = true; m_approvalRuleTemplateName.assign(value); }

    /**
     * <p>The name of the approval rule template for which you want to list
     * repositories that are associated with that template.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateRequest& WithApprovalRuleTemplateName(const Aws::String& value) { SetApprovalRuleTemplateName(value); return *this;}

    /**
     * <p>The name of the approval rule template for which you want to list
     * repositories that are associated with that template.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateRequest& WithApprovalRuleTemplateName(Aws::String&& value) { SetApprovalRuleTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the approval rule template for which you want to list
     * repositories that are associated with that template.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateRequest& WithApprovalRuleTemplateName(const char* value) { SetApprovalRuleTemplateName(value); return *this;}


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
    inline ListRepositoriesForApprovalRuleTemplateRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListRepositoriesForApprovalRuleTemplateRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListRepositoriesForApprovalRuleTemplateRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_approvalRuleTemplateName;
    bool m_approvalRuleTemplateNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
