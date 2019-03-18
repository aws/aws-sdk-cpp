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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/GitConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies summary information about a Git repository.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CodeRepositorySummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API CodeRepositorySummary
  {
  public:
    CodeRepositorySummary();
    CodeRepositorySummary(Aws::Utils::Json::JsonView jsonValue);
    CodeRepositorySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const{ return m_codeRepositoryName; }

    /**
     * <p>The name of the Git repository.</p>
     */
    inline bool CodeRepositoryNameHasBeenSet() const { return m_codeRepositoryNameHasBeenSet; }

    /**
     * <p>The name of the Git repository.</p>
     */
    inline void SetCodeRepositoryName(const Aws::String& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = value; }

    /**
     * <p>The name of the Git repository.</p>
     */
    inline void SetCodeRepositoryName(Aws::String&& value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName = std::move(value); }

    /**
     * <p>The name of the Git repository.</p>
     */
    inline void SetCodeRepositoryName(const char* value) { m_codeRepositoryNameHasBeenSet = true; m_codeRepositoryName.assign(value); }

    /**
     * <p>The name of the Git repository.</p>
     */
    inline CodeRepositorySummary& WithCodeRepositoryName(const Aws::String& value) { SetCodeRepositoryName(value); return *this;}

    /**
     * <p>The name of the Git repository.</p>
     */
    inline CodeRepositorySummary& WithCodeRepositoryName(Aws::String&& value) { SetCodeRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the Git repository.</p>
     */
    inline CodeRepositorySummary& WithCodeRepositoryName(const char* value) { SetCodeRepositoryName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryArn() const{ return m_codeRepositoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline bool CodeRepositoryArnHasBeenSet() const { return m_codeRepositoryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(const Aws::String& value) { m_codeRepositoryArnHasBeenSet = true; m_codeRepositoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(Aws::String&& value) { m_codeRepositoryArnHasBeenSet = true; m_codeRepositoryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(const char* value) { m_codeRepositoryArnHasBeenSet = true; m_codeRepositoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline CodeRepositorySummary& WithCodeRepositoryArn(const Aws::String& value) { SetCodeRepositoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline CodeRepositorySummary& WithCodeRepositoryArn(Aws::String&& value) { SetCodeRepositoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline CodeRepositorySummary& WithCodeRepositoryArn(const char* value) { SetCodeRepositoryArn(value); return *this;}


    /**
     * <p>The date and time that the Git repository was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the Git repository was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the Git repository was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the Git repository was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the Git repository was created.</p>
     */
    inline CodeRepositorySummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the Git repository was created.</p>
     */
    inline CodeRepositorySummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the Git repository was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the Git repository was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time that the Git repository was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the Git repository was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the Git repository was last modified.</p>
     */
    inline CodeRepositorySummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the Git repository was last modified.</p>
     */
    inline CodeRepositorySummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>Configuration details for the Git repository, including the URL where it is
     * located and the ARN of the AWS Secrets Manager secret that contains the
     * credentials used to access the repository.</p>
     */
    inline const GitConfig& GetGitConfig() const{ return m_gitConfig; }

    /**
     * <p>Configuration details for the Git repository, including the URL where it is
     * located and the ARN of the AWS Secrets Manager secret that contains the
     * credentials used to access the repository.</p>
     */
    inline bool GitConfigHasBeenSet() const { return m_gitConfigHasBeenSet; }

    /**
     * <p>Configuration details for the Git repository, including the URL where it is
     * located and the ARN of the AWS Secrets Manager secret that contains the
     * credentials used to access the repository.</p>
     */
    inline void SetGitConfig(const GitConfig& value) { m_gitConfigHasBeenSet = true; m_gitConfig = value; }

    /**
     * <p>Configuration details for the Git repository, including the URL where it is
     * located and the ARN of the AWS Secrets Manager secret that contains the
     * credentials used to access the repository.</p>
     */
    inline void SetGitConfig(GitConfig&& value) { m_gitConfigHasBeenSet = true; m_gitConfig = std::move(value); }

    /**
     * <p>Configuration details for the Git repository, including the URL where it is
     * located and the ARN of the AWS Secrets Manager secret that contains the
     * credentials used to access the repository.</p>
     */
    inline CodeRepositorySummary& WithGitConfig(const GitConfig& value) { SetGitConfig(value); return *this;}

    /**
     * <p>Configuration details for the Git repository, including the URL where it is
     * located and the ARN of the AWS Secrets Manager secret that contains the
     * credentials used to access the repository.</p>
     */
    inline CodeRepositorySummary& WithGitConfig(GitConfig&& value) { SetGitConfig(std::move(value)); return *this;}

  private:

    Aws::String m_codeRepositoryName;
    bool m_codeRepositoryNameHasBeenSet;

    Aws::String m_codeRepositoryArn;
    bool m_codeRepositoryArnHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    GitConfig m_gitConfig;
    bool m_gitConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
