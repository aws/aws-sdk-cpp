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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/GitConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateCodeRepositoryRequest : public SageMakerRequest
  {
  public:
    CreateCodeRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCodeRepository"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Git repository. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const{ return m_codeRepositoryName; }

    /**
     * <p>The name of the Git repository. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline bool CodeRepositoryNameHasBeenSet() const { return m_codeRepositoryNameHasBeenSet; }

    /**
     * <p>The name of the Git repository. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetCodeRepositoryName(const Aws::String& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = value; }

    /**
     * <p>The name of the Git repository. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetCodeRepositoryName(Aws::String&& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = std::move(value); }

    /**
     * <p>The name of the Git repository. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetCodeRepositoryName(const char* value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName.assign(value); }

    /**
     * <p>The name of the Git repository. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline CreateCodeRepositoryRequest& WithCodeRepositoryName(const Aws::String& value) { SetCodeRepositoryName(value); return *this;}

    /**
     * <p>The name of the Git repository. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline CreateCodeRepositoryRequest& WithCodeRepositoryName(Aws::String&& value) { SetCodeRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the Git repository. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline CreateCodeRepositoryRequest& WithCodeRepositoryName(const char* value) { SetCodeRepositoryName(value); return *this;}


    /**
     * <p>Specifies details about the repository, including the URL where the
     * repository is located, the default branch, and credentials to use to access the
     * repository.</p>
     */
    inline const GitConfig& GetGitConfig() const{ return m_gitConfig; }

    /**
     * <p>Specifies details about the repository, including the URL where the
     * repository is located, the default branch, and credentials to use to access the
     * repository.</p>
     */
    inline bool GitConfigHasBeenSet() const { return m_gitConfigHasBeenSet; }

    /**
     * <p>Specifies details about the repository, including the URL where the
     * repository is located, the default branch, and credentials to use to access the
     * repository.</p>
     */
    inline void SetGitConfig(const GitConfig& value) { m_gitConfigHasBeenSet = true; m_gitConfig = value; }

    /**
     * <p>Specifies details about the repository, including the URL where the
     * repository is located, the default branch, and credentials to use to access the
     * repository.</p>
     */
    inline void SetGitConfig(GitConfig&& value) { m_gitConfigHasBeenSet = true; m_gitConfig = std::move(value); }

    /**
     * <p>Specifies details about the repository, including the URL where the
     * repository is located, the default branch, and credentials to use to access the
     * repository.</p>
     */
    inline CreateCodeRepositoryRequest& WithGitConfig(const GitConfig& value) { SetGitConfig(value); return *this;}

    /**
     * <p>Specifies details about the repository, including the URL where the
     * repository is located, the default branch, and credentials to use to access the
     * repository.</p>
     */
    inline CreateCodeRepositoryRequest& WithGitConfig(GitConfig&& value) { SetGitConfig(std::move(value)); return *this;}

  private:

    Aws::String m_codeRepositoryName;
    bool m_codeRepositoryNameHasBeenSet;

    GitConfig m_gitConfig;
    bool m_gitConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
