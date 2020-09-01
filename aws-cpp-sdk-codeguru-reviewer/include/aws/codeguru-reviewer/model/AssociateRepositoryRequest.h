/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/codeguru-reviewer/model/Repository.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   */
  class AWS_CODEGURUREVIEWER_API AssociateRepositoryRequest : public CodeGuruReviewerRequest
  {
  public:
    AssociateRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateRepository"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The repository to associate.</p>
     */
    inline const Repository& GetRepository() const{ return m_repository; }

    /**
     * <p>The repository to associate.</p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The repository to associate.</p>
     */
    inline void SetRepository(const Repository& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The repository to associate.</p>
     */
    inline void SetRepository(Repository&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The repository to associate.</p>
     */
    inline AssociateRepositoryRequest& WithRepository(const Repository& value) { SetRepository(value); return *this;}

    /**
     * <p>The repository to associate.</p>
     */
    inline AssociateRepositoryRequest& WithRepository(Repository&& value) { SetRepository(std::move(value)); return *this;}


    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries. </p>
     */
    inline AssociateRepositoryRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries. </p>
     */
    inline AssociateRepositoryRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate repository associations if there are failures and retries. </p>
     */
    inline AssociateRepositoryRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Repository m_repository;
    bool m_repositoryHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
