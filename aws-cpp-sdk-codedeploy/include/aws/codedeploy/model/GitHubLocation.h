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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about the location of application artifacts stored in
   * GitHub.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GitHubLocation">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API GitHubLocation
  {
  public:
    GitHubLocation();
    GitHubLocation(Aws::Utils::Json::JsonView jsonValue);
    GitHubLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The GitHub account and repository pair that stores a reference to the commit
     * that represents the bundled artifacts for the application revision. </p>
     * <p>Specified as account/repository.</p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p>The GitHub account and repository pair that stores a reference to the commit
     * that represents the bundled artifacts for the application revision. </p>
     * <p>Specified as account/repository.</p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The GitHub account and repository pair that stores a reference to the commit
     * that represents the bundled artifacts for the application revision. </p>
     * <p>Specified as account/repository.</p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The GitHub account and repository pair that stores a reference to the commit
     * that represents the bundled artifacts for the application revision. </p>
     * <p>Specified as account/repository.</p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The GitHub account and repository pair that stores a reference to the commit
     * that represents the bundled artifacts for the application revision. </p>
     * <p>Specified as account/repository.</p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p>The GitHub account and repository pair that stores a reference to the commit
     * that represents the bundled artifacts for the application revision. </p>
     * <p>Specified as account/repository.</p>
     */
    inline GitHubLocation& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p>The GitHub account and repository pair that stores a reference to the commit
     * that represents the bundled artifacts for the application revision. </p>
     * <p>Specified as account/repository.</p>
     */
    inline GitHubLocation& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p>The GitHub account and repository pair that stores a reference to the commit
     * that represents the bundled artifacts for the application revision. </p>
     * <p>Specified as account/repository.</p>
     */
    inline GitHubLocation& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p>The SHA1 commit ID of the GitHub commit that represents the bundled artifacts
     * for the application revision.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The SHA1 commit ID of the GitHub commit that represents the bundled artifacts
     * for the application revision.</p>
     */
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }

    /**
     * <p>The SHA1 commit ID of the GitHub commit that represents the bundled artifacts
     * for the application revision.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    /**
     * <p>The SHA1 commit ID of the GitHub commit that represents the bundled artifacts
     * for the application revision.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }

    /**
     * <p>The SHA1 commit ID of the GitHub commit that represents the bundled artifacts
     * for the application revision.</p>
     */
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }

    /**
     * <p>The SHA1 commit ID of the GitHub commit that represents the bundled artifacts
     * for the application revision.</p>
     */
    inline GitHubLocation& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The SHA1 commit ID of the GitHub commit that represents the bundled artifacts
     * for the application revision.</p>
     */
    inline GitHubLocation& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p>The SHA1 commit ID of the GitHub commit that represents the bundled artifacts
     * for the application revision.</p>
     */
    inline GitHubLocation& WithCommitId(const char* value) { SetCommitId(value); return *this;}

  private:

    Aws::String m_repository;
    bool m_repositoryHasBeenSet;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
