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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API DescribeCodeRepositoryResult
  {
  public:
    DescribeCodeRepositoryResult();
    DescribeCodeRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCodeRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryName() const{ return m_codeRepositoryName; }

    /**
     * <p>The name of the Git repository.</p>
     */
    inline void SetCodeRepositoryName(const Aws::String& value) { m_codeRepositoryName = value; }

    /**
     * <p>The name of the Git repository.</p>
     */
    inline void SetCodeRepositoryName(Aws::String&& value) { m_codeRepositoryName = std::move(value); }

    /**
     * <p>The name of the Git repository.</p>
     */
    inline void SetCodeRepositoryName(const char* value) { m_codeRepositoryName.assign(value); }

    /**
     * <p>The name of the Git repository.</p>
     */
    inline DescribeCodeRepositoryResult& WithCodeRepositoryName(const Aws::String& value) { SetCodeRepositoryName(value); return *this;}

    /**
     * <p>The name of the Git repository.</p>
     */
    inline DescribeCodeRepositoryResult& WithCodeRepositoryName(Aws::String&& value) { SetCodeRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the Git repository.</p>
     */
    inline DescribeCodeRepositoryResult& WithCodeRepositoryName(const char* value) { SetCodeRepositoryName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryArn() const{ return m_codeRepositoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(const Aws::String& value) { m_codeRepositoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(Aws::String&& value) { m_codeRepositoryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(const char* value) { m_codeRepositoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline DescribeCodeRepositoryResult& WithCodeRepositoryArn(const Aws::String& value) { SetCodeRepositoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline DescribeCodeRepositoryResult& WithCodeRepositoryArn(Aws::String&& value) { SetCodeRepositoryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Git repository.</p>
     */
    inline DescribeCodeRepositoryResult& WithCodeRepositoryArn(const char* value) { SetCodeRepositoryArn(value); return *this;}


    /**
     * <p>The date and time that the repository was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the repository was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time that the repository was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the repository was created.</p>
     */
    inline DescribeCodeRepositoryResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the repository was created.</p>
     */
    inline DescribeCodeRepositoryResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the repository was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the repository was last changed.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the repository was last changed.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the repository was last changed.</p>
     */
    inline DescribeCodeRepositoryResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the repository was last changed.</p>
     */
    inline DescribeCodeRepositoryResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>Configuration details about the repository, including the URL where the
     * repository is located, the default branch, and the Amazon Resource Name (ARN) of
     * the AWS Secrets Manager secret that contains the credentials used to access the
     * repository.</p>
     */
    inline const GitConfig& GetGitConfig() const{ return m_gitConfig; }

    /**
     * <p>Configuration details about the repository, including the URL where the
     * repository is located, the default branch, and the Amazon Resource Name (ARN) of
     * the AWS Secrets Manager secret that contains the credentials used to access the
     * repository.</p>
     */
    inline void SetGitConfig(const GitConfig& value) { m_gitConfig = value; }

    /**
     * <p>Configuration details about the repository, including the URL where the
     * repository is located, the default branch, and the Amazon Resource Name (ARN) of
     * the AWS Secrets Manager secret that contains the credentials used to access the
     * repository.</p>
     */
    inline void SetGitConfig(GitConfig&& value) { m_gitConfig = std::move(value); }

    /**
     * <p>Configuration details about the repository, including the URL where the
     * repository is located, the default branch, and the Amazon Resource Name (ARN) of
     * the AWS Secrets Manager secret that contains the credentials used to access the
     * repository.</p>
     */
    inline DescribeCodeRepositoryResult& WithGitConfig(const GitConfig& value) { SetGitConfig(value); return *this;}

    /**
     * <p>Configuration details about the repository, including the URL where the
     * repository is located, the default branch, and the Amazon Resource Name (ARN) of
     * the AWS Secrets Manager secret that contains the credentials used to access the
     * repository.</p>
     */
    inline DescribeCodeRepositoryResult& WithGitConfig(GitConfig&& value) { SetGitConfig(std::move(value)); return *this;}

  private:

    Aws::String m_codeRepositoryName;

    Aws::String m_codeRepositoryArn;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    GitConfig m_gitConfig;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
