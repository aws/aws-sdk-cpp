/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RepositoryMetadata
  {
  public:
    AWS_CODECOMMIT_API RepositoryMetadata();
    AWS_CODECOMMIT_API RepositoryMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API RepositoryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account associated with the repository.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline RepositoryMetadata& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline RepositoryMetadata& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline RepositoryMetadata& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the repository.</p>
     */
    inline const Aws::String& GetRepositoryId() const{ return m_repositoryId; }
    inline bool RepositoryIdHasBeenSet() const { return m_repositoryIdHasBeenSet; }
    inline void SetRepositoryId(const Aws::String& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = value; }
    inline void SetRepositoryId(Aws::String&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = std::move(value); }
    inline void SetRepositoryId(const char* value) { m_repositoryIdHasBeenSet = true; m_repositoryId.assign(value); }
    inline RepositoryMetadata& WithRepositoryId(const Aws::String& value) { SetRepositoryId(value); return *this;}
    inline RepositoryMetadata& WithRepositoryId(Aws::String&& value) { SetRepositoryId(std::move(value)); return *this;}
    inline RepositoryMetadata& WithRepositoryId(const char* value) { SetRepositoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository's name.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline RepositoryMetadata& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline RepositoryMetadata& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline RepositoryMetadata& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment or description about the repository.</p>
     */
    inline const Aws::String& GetRepositoryDescription() const{ return m_repositoryDescription; }
    inline bool RepositoryDescriptionHasBeenSet() const { return m_repositoryDescriptionHasBeenSet; }
    inline void SetRepositoryDescription(const Aws::String& value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription = value; }
    inline void SetRepositoryDescription(Aws::String&& value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription = std::move(value); }
    inline void SetRepositoryDescription(const char* value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription.assign(value); }
    inline RepositoryMetadata& WithRepositoryDescription(const Aws::String& value) { SetRepositoryDescription(value); return *this;}
    inline RepositoryMetadata& WithRepositoryDescription(Aws::String&& value) { SetRepositoryDescription(std::move(value)); return *this;}
    inline RepositoryMetadata& WithRepositoryDescription(const char* value) { SetRepositoryDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository's default branch name.</p>
     */
    inline const Aws::String& GetDefaultBranch() const{ return m_defaultBranch; }
    inline bool DefaultBranchHasBeenSet() const { return m_defaultBranchHasBeenSet; }
    inline void SetDefaultBranch(const Aws::String& value) { m_defaultBranchHasBeenSet = true; m_defaultBranch = value; }
    inline void SetDefaultBranch(Aws::String&& value) { m_defaultBranchHasBeenSet = true; m_defaultBranch = std::move(value); }
    inline void SetDefaultBranch(const char* value) { m_defaultBranchHasBeenSet = true; m_defaultBranch.assign(value); }
    inline RepositoryMetadata& WithDefaultBranch(const Aws::String& value) { SetDefaultBranch(value); return *this;}
    inline RepositoryMetadata& WithDefaultBranch(Aws::String&& value) { SetDefaultBranch(std::move(value)); return *this;}
    inline RepositoryMetadata& WithDefaultBranch(const char* value) { SetDefaultBranch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the repository was last modified, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline RepositoryMetadata& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline RepositoryMetadata& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the repository was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline RepositoryMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline RepositoryMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to use for cloning the repository over HTTPS.</p>
     */
    inline const Aws::String& GetCloneUrlHttp() const{ return m_cloneUrlHttp; }
    inline bool CloneUrlHttpHasBeenSet() const { return m_cloneUrlHttpHasBeenSet; }
    inline void SetCloneUrlHttp(const Aws::String& value) { m_cloneUrlHttpHasBeenSet = true; m_cloneUrlHttp = value; }
    inline void SetCloneUrlHttp(Aws::String&& value) { m_cloneUrlHttpHasBeenSet = true; m_cloneUrlHttp = std::move(value); }
    inline void SetCloneUrlHttp(const char* value) { m_cloneUrlHttpHasBeenSet = true; m_cloneUrlHttp.assign(value); }
    inline RepositoryMetadata& WithCloneUrlHttp(const Aws::String& value) { SetCloneUrlHttp(value); return *this;}
    inline RepositoryMetadata& WithCloneUrlHttp(Aws::String&& value) { SetCloneUrlHttp(std::move(value)); return *this;}
    inline RepositoryMetadata& WithCloneUrlHttp(const char* value) { SetCloneUrlHttp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to use for cloning the repository over SSH.</p>
     */
    inline const Aws::String& GetCloneUrlSsh() const{ return m_cloneUrlSsh; }
    inline bool CloneUrlSshHasBeenSet() const { return m_cloneUrlSshHasBeenSet; }
    inline void SetCloneUrlSsh(const Aws::String& value) { m_cloneUrlSshHasBeenSet = true; m_cloneUrlSsh = value; }
    inline void SetCloneUrlSsh(Aws::String&& value) { m_cloneUrlSshHasBeenSet = true; m_cloneUrlSsh = std::move(value); }
    inline void SetCloneUrlSsh(const char* value) { m_cloneUrlSshHasBeenSet = true; m_cloneUrlSsh.assign(value); }
    inline RepositoryMetadata& WithCloneUrlSsh(const Aws::String& value) { SetCloneUrlSsh(value); return *this;}
    inline RepositoryMetadata& WithCloneUrlSsh(Aws::String&& value) { SetCloneUrlSsh(std::move(value)); return *this;}
    inline RepositoryMetadata& WithCloneUrlSsh(const char* value) { SetCloneUrlSsh(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the repository.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RepositoryMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RepositoryMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RepositoryMetadata& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service encryption key used to encrypt and
     * decrypt the repository.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline RepositoryMetadata& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline RepositoryMetadata& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline RepositoryMetadata& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_repositoryId;
    bool m_repositoryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_repositoryDescription;
    bool m_repositoryDescriptionHasBeenSet = false;

    Aws::String m_defaultBranch;
    bool m_defaultBranchHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_cloneUrlHttp;
    bool m_cloneUrlHttpHasBeenSet = false;

    Aws::String m_cloneUrlSsh;
    bool m_cloneUrlSshHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
