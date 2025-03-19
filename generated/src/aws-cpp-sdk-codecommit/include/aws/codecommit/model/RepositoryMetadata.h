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
    AWS_CODECOMMIT_API RepositoryMetadata() = default;
    AWS_CODECOMMIT_API RepositoryMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API RepositoryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account associated with the repository.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    RepositoryMetadata& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the repository.</p>
     */
    inline const Aws::String& GetRepositoryId() const { return m_repositoryId; }
    inline bool RepositoryIdHasBeenSet() const { return m_repositoryIdHasBeenSet; }
    template<typename RepositoryIdT = Aws::String>
    void SetRepositoryId(RepositoryIdT&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = std::forward<RepositoryIdT>(value); }
    template<typename RepositoryIdT = Aws::String>
    RepositoryMetadata& WithRepositoryId(RepositoryIdT&& value) { SetRepositoryId(std::forward<RepositoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository's name.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    RepositoryMetadata& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment or description about the repository.</p>
     */
    inline const Aws::String& GetRepositoryDescription() const { return m_repositoryDescription; }
    inline bool RepositoryDescriptionHasBeenSet() const { return m_repositoryDescriptionHasBeenSet; }
    template<typename RepositoryDescriptionT = Aws::String>
    void SetRepositoryDescription(RepositoryDescriptionT&& value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription = std::forward<RepositoryDescriptionT>(value); }
    template<typename RepositoryDescriptionT = Aws::String>
    RepositoryMetadata& WithRepositoryDescription(RepositoryDescriptionT&& value) { SetRepositoryDescription(std::forward<RepositoryDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository's default branch name.</p>
     */
    inline const Aws::String& GetDefaultBranch() const { return m_defaultBranch; }
    inline bool DefaultBranchHasBeenSet() const { return m_defaultBranchHasBeenSet; }
    template<typename DefaultBranchT = Aws::String>
    void SetDefaultBranch(DefaultBranchT&& value) { m_defaultBranchHasBeenSet = true; m_defaultBranch = std::forward<DefaultBranchT>(value); }
    template<typename DefaultBranchT = Aws::String>
    RepositoryMetadata& WithDefaultBranch(DefaultBranchT&& value) { SetDefaultBranch(std::forward<DefaultBranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the repository was last modified, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    RepositoryMetadata& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the repository was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    RepositoryMetadata& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to use for cloning the repository over HTTPS.</p>
     */
    inline const Aws::String& GetCloneUrlHttp() const { return m_cloneUrlHttp; }
    inline bool CloneUrlHttpHasBeenSet() const { return m_cloneUrlHttpHasBeenSet; }
    template<typename CloneUrlHttpT = Aws::String>
    void SetCloneUrlHttp(CloneUrlHttpT&& value) { m_cloneUrlHttpHasBeenSet = true; m_cloneUrlHttp = std::forward<CloneUrlHttpT>(value); }
    template<typename CloneUrlHttpT = Aws::String>
    RepositoryMetadata& WithCloneUrlHttp(CloneUrlHttpT&& value) { SetCloneUrlHttp(std::forward<CloneUrlHttpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to use for cloning the repository over SSH.</p>
     */
    inline const Aws::String& GetCloneUrlSsh() const { return m_cloneUrlSsh; }
    inline bool CloneUrlSshHasBeenSet() const { return m_cloneUrlSshHasBeenSet; }
    template<typename CloneUrlSshT = Aws::String>
    void SetCloneUrlSsh(CloneUrlSshT&& value) { m_cloneUrlSshHasBeenSet = true; m_cloneUrlSsh = std::forward<CloneUrlSshT>(value); }
    template<typename CloneUrlSshT = Aws::String>
    RepositoryMetadata& WithCloneUrlSsh(CloneUrlSshT&& value) { SetCloneUrlSsh(std::forward<CloneUrlSshT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the repository.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RepositoryMetadata& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service encryption key used to encrypt and
     * decrypt the repository.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    RepositoryMetadata& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
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
