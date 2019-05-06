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
  class AWS_CODECOMMIT_API UpdateRepositoryDescriptionRequest : public CodeCommitRequest
  {
  public:
    UpdateRepositoryDescriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRepositoryDescription"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_repositoryNameHasBeenSet;

    Aws::String m_repositoryDescription;
    bool m_repositoryDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
