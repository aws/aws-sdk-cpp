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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about a repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/RepositoryMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API RepositoryMetadata
  {
  public:
    RepositoryMetadata();
    RepositoryMetadata(Aws::Utils::Json::JsonView jsonValue);
    RepositoryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the AWS account associated with the repository.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the AWS account associated with the repository.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account associated with the repository.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the AWS account associated with the repository.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the AWS account associated with the repository.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the AWS account associated with the repository.</p>
     */
    inline RepositoryMetadata& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS account associated with the repository.</p>
     */
    inline RepositoryMetadata& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account associated with the repository.</p>
     */
    inline RepositoryMetadata& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID of the repository.</p>
     */
    inline const Aws::String& GetRepositoryId() const{ return m_repositoryId; }

    /**
     * <p>The ID of the repository.</p>
     */
    inline bool RepositoryIdHasBeenSet() const { return m_repositoryIdHasBeenSet; }

    /**
     * <p>The ID of the repository.</p>
     */
    inline void SetRepositoryId(const Aws::String& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = value; }

    /**
     * <p>The ID of the repository.</p>
     */
    inline void SetRepositoryId(Aws::String&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = std::move(value); }

    /**
     * <p>The ID of the repository.</p>
     */
    inline void SetRepositoryId(const char* value) { m_repositoryIdHasBeenSet = true; m_repositoryId.assign(value); }

    /**
     * <p>The ID of the repository.</p>
     */
    inline RepositoryMetadata& WithRepositoryId(const Aws::String& value) { SetRepositoryId(value); return *this;}

    /**
     * <p>The ID of the repository.</p>
     */
    inline RepositoryMetadata& WithRepositoryId(Aws::String&& value) { SetRepositoryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the repository.</p>
     */
    inline RepositoryMetadata& WithRepositoryId(const char* value) { SetRepositoryId(value); return *this;}


    /**
     * <p>The repository's name.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The repository's name.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The repository's name.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The repository's name.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The repository's name.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The repository's name.</p>
     */
    inline RepositoryMetadata& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository's name.</p>
     */
    inline RepositoryMetadata& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository's name.</p>
     */
    inline RepositoryMetadata& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>A comment or description about the repository.</p>
     */
    inline const Aws::String& GetRepositoryDescription() const{ return m_repositoryDescription; }

    /**
     * <p>A comment or description about the repository.</p>
     */
    inline bool RepositoryDescriptionHasBeenSet() const { return m_repositoryDescriptionHasBeenSet; }

    /**
     * <p>A comment or description about the repository.</p>
     */
    inline void SetRepositoryDescription(const Aws::String& value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription = value; }

    /**
     * <p>A comment or description about the repository.</p>
     */
    inline void SetRepositoryDescription(Aws::String&& value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription = std::move(value); }

    /**
     * <p>A comment or description about the repository.</p>
     */
    inline void SetRepositoryDescription(const char* value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription.assign(value); }

    /**
     * <p>A comment or description about the repository.</p>
     */
    inline RepositoryMetadata& WithRepositoryDescription(const Aws::String& value) { SetRepositoryDescription(value); return *this;}

    /**
     * <p>A comment or description about the repository.</p>
     */
    inline RepositoryMetadata& WithRepositoryDescription(Aws::String&& value) { SetRepositoryDescription(std::move(value)); return *this;}

    /**
     * <p>A comment or description about the repository.</p>
     */
    inline RepositoryMetadata& WithRepositoryDescription(const char* value) { SetRepositoryDescription(value); return *this;}


    /**
     * <p>The repository's default branch name.</p>
     */
    inline const Aws::String& GetDefaultBranch() const{ return m_defaultBranch; }

    /**
     * <p>The repository's default branch name.</p>
     */
    inline bool DefaultBranchHasBeenSet() const { return m_defaultBranchHasBeenSet; }

    /**
     * <p>The repository's default branch name.</p>
     */
    inline void SetDefaultBranch(const Aws::String& value) { m_defaultBranchHasBeenSet = true; m_defaultBranch = value; }

    /**
     * <p>The repository's default branch name.</p>
     */
    inline void SetDefaultBranch(Aws::String&& value) { m_defaultBranchHasBeenSet = true; m_defaultBranch = std::move(value); }

    /**
     * <p>The repository's default branch name.</p>
     */
    inline void SetDefaultBranch(const char* value) { m_defaultBranchHasBeenSet = true; m_defaultBranch.assign(value); }

    /**
     * <p>The repository's default branch name.</p>
     */
    inline RepositoryMetadata& WithDefaultBranch(const Aws::String& value) { SetDefaultBranch(value); return *this;}

    /**
     * <p>The repository's default branch name.</p>
     */
    inline RepositoryMetadata& WithDefaultBranch(Aws::String&& value) { SetDefaultBranch(std::move(value)); return *this;}

    /**
     * <p>The repository's default branch name.</p>
     */
    inline RepositoryMetadata& WithDefaultBranch(const char* value) { SetDefaultBranch(value); return *this;}


    /**
     * <p>The date and time the repository was last modified, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time the repository was last modified, in timestamp format.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time the repository was last modified, in timestamp format.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time the repository was last modified, in timestamp format.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time the repository was last modified, in timestamp format.</p>
     */
    inline RepositoryMetadata& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time the repository was last modified, in timestamp format.</p>
     */
    inline RepositoryMetadata& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time the repository was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time the repository was created, in timestamp format.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time the repository was created, in timestamp format.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time the repository was created, in timestamp format.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time the repository was created, in timestamp format.</p>
     */
    inline RepositoryMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time the repository was created, in timestamp format.</p>
     */
    inline RepositoryMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The URL to use for cloning the repository over HTTPS.</p>
     */
    inline const Aws::String& GetCloneUrlHttp() const{ return m_cloneUrlHttp; }

    /**
     * <p>The URL to use for cloning the repository over HTTPS.</p>
     */
    inline bool CloneUrlHttpHasBeenSet() const { return m_cloneUrlHttpHasBeenSet; }

    /**
     * <p>The URL to use for cloning the repository over HTTPS.</p>
     */
    inline void SetCloneUrlHttp(const Aws::String& value) { m_cloneUrlHttpHasBeenSet = true; m_cloneUrlHttp = value; }

    /**
     * <p>The URL to use for cloning the repository over HTTPS.</p>
     */
    inline void SetCloneUrlHttp(Aws::String&& value) { m_cloneUrlHttpHasBeenSet = true; m_cloneUrlHttp = std::move(value); }

    /**
     * <p>The URL to use for cloning the repository over HTTPS.</p>
     */
    inline void SetCloneUrlHttp(const char* value) { m_cloneUrlHttpHasBeenSet = true; m_cloneUrlHttp.assign(value); }

    /**
     * <p>The URL to use for cloning the repository over HTTPS.</p>
     */
    inline RepositoryMetadata& WithCloneUrlHttp(const Aws::String& value) { SetCloneUrlHttp(value); return *this;}

    /**
     * <p>The URL to use for cloning the repository over HTTPS.</p>
     */
    inline RepositoryMetadata& WithCloneUrlHttp(Aws::String&& value) { SetCloneUrlHttp(std::move(value)); return *this;}

    /**
     * <p>The URL to use for cloning the repository over HTTPS.</p>
     */
    inline RepositoryMetadata& WithCloneUrlHttp(const char* value) { SetCloneUrlHttp(value); return *this;}


    /**
     * <p>The URL to use for cloning the repository over SSH.</p>
     */
    inline const Aws::String& GetCloneUrlSsh() const{ return m_cloneUrlSsh; }

    /**
     * <p>The URL to use for cloning the repository over SSH.</p>
     */
    inline bool CloneUrlSshHasBeenSet() const { return m_cloneUrlSshHasBeenSet; }

    /**
     * <p>The URL to use for cloning the repository over SSH.</p>
     */
    inline void SetCloneUrlSsh(const Aws::String& value) { m_cloneUrlSshHasBeenSet = true; m_cloneUrlSsh = value; }

    /**
     * <p>The URL to use for cloning the repository over SSH.</p>
     */
    inline void SetCloneUrlSsh(Aws::String&& value) { m_cloneUrlSshHasBeenSet = true; m_cloneUrlSsh = std::move(value); }

    /**
     * <p>The URL to use for cloning the repository over SSH.</p>
     */
    inline void SetCloneUrlSsh(const char* value) { m_cloneUrlSshHasBeenSet = true; m_cloneUrlSsh.assign(value); }

    /**
     * <p>The URL to use for cloning the repository over SSH.</p>
     */
    inline RepositoryMetadata& WithCloneUrlSsh(const Aws::String& value) { SetCloneUrlSsh(value); return *this;}

    /**
     * <p>The URL to use for cloning the repository over SSH.</p>
     */
    inline RepositoryMetadata& WithCloneUrlSsh(Aws::String&& value) { SetCloneUrlSsh(std::move(value)); return *this;}

    /**
     * <p>The URL to use for cloning the repository over SSH.</p>
     */
    inline RepositoryMetadata& WithCloneUrlSsh(const char* value) { SetCloneUrlSsh(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the repository.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the repository.</p>
     */
    inline RepositoryMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the repository.</p>
     */
    inline RepositoryMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the repository.</p>
     */
    inline RepositoryMetadata& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_repositoryId;
    bool m_repositoryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_repositoryDescription;
    bool m_repositoryDescriptionHasBeenSet;

    Aws::String m_defaultBranch;
    bool m_defaultBranchHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::String m_cloneUrlHttp;
    bool m_cloneUrlHttpHasBeenSet;

    Aws::String m_cloneUrlSsh;
    bool m_cloneUrlSshHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
