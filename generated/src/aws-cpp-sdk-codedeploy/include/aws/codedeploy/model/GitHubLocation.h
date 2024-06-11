﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GitHubLocation
  {
  public:
    AWS_CODEDEPLOY_API GitHubLocation();
    AWS_CODEDEPLOY_API GitHubLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API GitHubLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The GitHub account and repository pair that stores a reference to the commit
     * that represents the bundled artifacts for the application revision. </p>
     * <p>Specified as account/repository.</p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }
    inline GitHubLocation& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}
    inline GitHubLocation& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}
    inline GitHubLocation& WithRepository(const char* value) { SetRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA1 commit ID of the GitHub commit that represents the bundled artifacts
     * for the application revision.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }
    inline GitHubLocation& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}
    inline GitHubLocation& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}
    inline GitHubLocation& WithCommitId(const char* value) { SetCommitId(value); return *this;}
    ///@}
  private:

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
