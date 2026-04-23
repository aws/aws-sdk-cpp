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
   * <p>Specifies configuration details for a Git repository in your AWS
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GitConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API GitConfig
  {
  public:
    GitConfig();
    GitConfig(Aws::Utils::Json::JsonView jsonValue);
    GitConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL where the Git repository is located.</p>
     */
    inline const Aws::String& GetRepositoryUrl() const{ return m_repositoryUrl; }

    /**
     * <p>The URL where the Git repository is located.</p>
     */
    inline bool RepositoryUrlHasBeenSet() const { return m_repositoryUrlHasBeenSet; }

    /**
     * <p>The URL where the Git repository is located.</p>
     */
    inline void SetRepositoryUrl(const Aws::String& value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl = value; }

    /**
     * <p>The URL where the Git repository is located.</p>
     */
    inline void SetRepositoryUrl(Aws::String&& value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl = std::move(value); }

    /**
     * <p>The URL where the Git repository is located.</p>
     */
    inline void SetRepositoryUrl(const char* value) { m_repositoryUrlHasBeenSet = true; m_repositoryUrl.assign(value); }

    /**
     * <p>The URL where the Git repository is located.</p>
     */
    inline GitConfig& WithRepositoryUrl(const Aws::String& value) { SetRepositoryUrl(value); return *this;}

    /**
     * <p>The URL where the Git repository is located.</p>
     */
    inline GitConfig& WithRepositoryUrl(Aws::String&& value) { SetRepositoryUrl(std::move(value)); return *this;}

    /**
     * <p>The URL where the Git repository is located.</p>
     */
    inline GitConfig& WithRepositoryUrl(const char* value) { SetRepositoryUrl(value); return *this;}


    /**
     * <p>The default branch for the Git repository.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }

    /**
     * <p>The default branch for the Git repository.</p>
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p>The default branch for the Git repository.</p>
     */
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p>The default branch for the Git repository.</p>
     */
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p>The default branch for the Git repository.</p>
     */
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }

    /**
     * <p>The default branch for the Git repository.</p>
     */
    inline GitConfig& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}

    /**
     * <p>The default branch for the Git repository.</p>
     */
    inline GitConfig& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}

    /**
     * <p>The default branch for the Git repository.</p>
     */
    inline GitConfig& WithBranch(const char* value) { SetBranch(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline GitConfig& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline GitConfig& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret that
     * contains the credentials used to access the git repository. The secret must have
     * a staging label of <code>AWSCURRENT</code> and must be in the following
     * format:</p> <p> <code>{"username": <i>UserName</i>, "password":
     * <i>Password</i>}</code> </p>
     */
    inline GitConfig& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    Aws::String m_repositoryUrl;
    bool m_repositoryUrlHasBeenSet;

    Aws::String m_branch;
    bool m_branchHasBeenSet;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
