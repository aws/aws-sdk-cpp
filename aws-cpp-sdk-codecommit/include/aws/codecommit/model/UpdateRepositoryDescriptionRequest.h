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
   * <p>Represents the input of an update repository description
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryDescriptionInput">AWS
   * API Reference</a></p>
   */
  class UpdateRepositoryDescriptionRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API UpdateRepositoryDescriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRepositoryDescription"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository to set or change the comment or description
     * for.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository to set or change the comment or description
     * for.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository to set or change the comment or description
     * for.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to set or change the comment or description
     * for.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository to set or change the comment or description
     * for.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository to set or change the comment or description
     * for.</p>
     */
    inline UpdateRepositoryDescriptionRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to set or change the comment or description
     * for.</p>
     */
    inline UpdateRepositoryDescriptionRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository to set or change the comment or description
     * for.</p>
     */
    inline UpdateRepositoryDescriptionRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The new comment or description for the specified repository. Repository
     * descriptions are limited to 1,000 characters.</p>
     */
    inline const Aws::String& GetRepositoryDescription() const{ return m_repositoryDescription; }

    /**
     * <p>The new comment or description for the specified repository. Repository
     * descriptions are limited to 1,000 characters.</p>
     */
    inline bool RepositoryDescriptionHasBeenSet() const { return m_repositoryDescriptionHasBeenSet; }

    /**
     * <p>The new comment or description for the specified repository. Repository
     * descriptions are limited to 1,000 characters.</p>
     */
    inline void SetRepositoryDescription(const Aws::String& value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription = value; }

    /**
     * <p>The new comment or description for the specified repository. Repository
     * descriptions are limited to 1,000 characters.</p>
     */
    inline void SetRepositoryDescription(Aws::String&& value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription = std::move(value); }

    /**
     * <p>The new comment or description for the specified repository. Repository
     * descriptions are limited to 1,000 characters.</p>
     */
    inline void SetRepositoryDescription(const char* value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription.assign(value); }

    /**
     * <p>The new comment or description for the specified repository. Repository
     * descriptions are limited to 1,000 characters.</p>
     */
    inline UpdateRepositoryDescriptionRequest& WithRepositoryDescription(const Aws::String& value) { SetRepositoryDescription(value); return *this;}

    /**
     * <p>The new comment or description for the specified repository. Repository
     * descriptions are limited to 1,000 characters.</p>
     */
    inline UpdateRepositoryDescriptionRequest& WithRepositoryDescription(Aws::String&& value) { SetRepositoryDescription(std::move(value)); return *this;}

    /**
     * <p>The new comment or description for the specified repository. Repository
     * descriptions are limited to 1,000 characters.</p>
     */
    inline UpdateRepositoryDescriptionRequest& WithRepositoryDescription(const char* value) { SetRepositoryDescription(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_repositoryDescription;
    bool m_repositoryDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
