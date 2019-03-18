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
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/model/CodeCommitCodeDestination.h>
#include <aws/codestar/model/GitHubCodeDestination.h>
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
namespace CodeStar
{
namespace Model
{

  /**
   * <p>The repository to be created in AWS CodeStar. Valid values are AWS CodeCommit
   * or GitHub. After AWS CodeStar provisions the new repository, the source code
   * files provided with the project request are placed in the
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/CodeDestination">AWS
   * API Reference</a></p>
   */
  class AWS_CODESTAR_API CodeDestination
  {
  public:
    CodeDestination();
    CodeDestination(Aws::Utils::Json::JsonView jsonValue);
    CodeDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the AWS CodeCommit repository to be created in AWS
     * CodeStar. This is where the source code files provided with the project request
     * will be uploaded after project creation.</p>
     */
    inline const CodeCommitCodeDestination& GetCodeCommit() const{ return m_codeCommit; }

    /**
     * <p>Information about the AWS CodeCommit repository to be created in AWS
     * CodeStar. This is where the source code files provided with the project request
     * will be uploaded after project creation.</p>
     */
    inline bool CodeCommitHasBeenSet() const { return m_codeCommitHasBeenSet; }

    /**
     * <p>Information about the AWS CodeCommit repository to be created in AWS
     * CodeStar. This is where the source code files provided with the project request
     * will be uploaded after project creation.</p>
     */
    inline void SetCodeCommit(const CodeCommitCodeDestination& value) { m_codeCommitHasBeenSet = true; m_codeCommit = value; }

    /**
     * <p>Information about the AWS CodeCommit repository to be created in AWS
     * CodeStar. This is where the source code files provided with the project request
     * will be uploaded after project creation.</p>
     */
    inline void SetCodeCommit(CodeCommitCodeDestination&& value) { m_codeCommitHasBeenSet = true; m_codeCommit = std::move(value); }

    /**
     * <p>Information about the AWS CodeCommit repository to be created in AWS
     * CodeStar. This is where the source code files provided with the project request
     * will be uploaded after project creation.</p>
     */
    inline CodeDestination& WithCodeCommit(const CodeCommitCodeDestination& value) { SetCodeCommit(value); return *this;}

    /**
     * <p>Information about the AWS CodeCommit repository to be created in AWS
     * CodeStar. This is where the source code files provided with the project request
     * will be uploaded after project creation.</p>
     */
    inline CodeDestination& WithCodeCommit(CodeCommitCodeDestination&& value) { SetCodeCommit(std::move(value)); return *this;}


    /**
     * <p>Information about the GitHub repository to be created in AWS CodeStar. This
     * is where the source code files provided with the project request will be
     * uploaded after project creation.</p>
     */
    inline const GitHubCodeDestination& GetGitHub() const{ return m_gitHub; }

    /**
     * <p>Information about the GitHub repository to be created in AWS CodeStar. This
     * is where the source code files provided with the project request will be
     * uploaded after project creation.</p>
     */
    inline bool GitHubHasBeenSet() const { return m_gitHubHasBeenSet; }

    /**
     * <p>Information about the GitHub repository to be created in AWS CodeStar. This
     * is where the source code files provided with the project request will be
     * uploaded after project creation.</p>
     */
    inline void SetGitHub(const GitHubCodeDestination& value) { m_gitHubHasBeenSet = true; m_gitHub = value; }

    /**
     * <p>Information about the GitHub repository to be created in AWS CodeStar. This
     * is where the source code files provided with the project request will be
     * uploaded after project creation.</p>
     */
    inline void SetGitHub(GitHubCodeDestination&& value) { m_gitHubHasBeenSet = true; m_gitHub = std::move(value); }

    /**
     * <p>Information about the GitHub repository to be created in AWS CodeStar. This
     * is where the source code files provided with the project request will be
     * uploaded after project creation.</p>
     */
    inline CodeDestination& WithGitHub(const GitHubCodeDestination& value) { SetGitHub(value); return *this;}

    /**
     * <p>Information about the GitHub repository to be created in AWS CodeStar. This
     * is where the source code files provided with the project request will be
     * uploaded after project creation.</p>
     */
    inline CodeDestination& WithGitHub(GitHubCodeDestination&& value) { SetGitHub(std::move(value)); return *this;}

  private:

    CodeCommitCodeDestination m_codeCommit;
    bool m_codeCommitHasBeenSet;

    GitHubCodeDestination m_gitHub;
    bool m_gitHubHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
