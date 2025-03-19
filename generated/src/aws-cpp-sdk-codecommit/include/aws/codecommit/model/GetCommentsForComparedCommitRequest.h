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
  class GetCommentsForComparedCommitRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API GetCommentsForComparedCommitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCommentsForComparedCommit"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository where you want to compare commits.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    GetCommentsForComparedCommitRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * before commit.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const { return m_beforeCommitId; }
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }
    template<typename BeforeCommitIdT = Aws::String>
    void SetBeforeCommitId(BeforeCommitIdT&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::forward<BeforeCommitIdT>(value); }
    template<typename BeforeCommitIdT = Aws::String>
    GetCommentsForComparedCommitRequest& WithBeforeCommitId(BeforeCommitIdT&& value) { SetBeforeCommitId(std::forward<BeforeCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * after commit.</p>
     */
    inline const Aws::String& GetAfterCommitId() const { return m_afterCommitId; }
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }
    template<typename AfterCommitIdT = Aws::String>
    void SetAfterCommitId(AfterCommitIdT&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::forward<AfterCommitIdT>(value); }
    template<typename AfterCommitIdT = Aws::String>
    GetCommentsForComparedCommitRequest& WithAfterCommitId(AfterCommitIdT&& value) { SetAfterCommitId(std::forward<AfterCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCommentsForComparedCommitRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results. The default is 100 comments, but you can configure up to 500.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCommentsForComparedCommitRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_beforeCommitId;
    bool m_beforeCommitIdHasBeenSet = false;

    Aws::String m_afterCommitId;
    bool m_afterCommitIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
