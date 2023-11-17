/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/ProviderType.h>
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
namespace CodeStarconnections
{
namespace Model
{

  /**
   * <p>Information about the revision for a specific sync event, such as the branch,
   * owner ID, and name of the repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/Revision">AWS
   * API Reference</a></p>
   */
  class Revision
  {
  public:
    AWS_CODESTARCONNECTIONS_API Revision();
    AWS_CODESTARCONNECTIONS_API Revision(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Revision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The branch name for a specific revision.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }

    /**
     * <p>The branch name for a specific revision.</p>
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p>The branch name for a specific revision.</p>
     */
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p>The branch name for a specific revision.</p>
     */
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p>The branch name for a specific revision.</p>
     */
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }

    /**
     * <p>The branch name for a specific revision.</p>
     */
    inline Revision& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}

    /**
     * <p>The branch name for a specific revision.</p>
     */
    inline Revision& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}

    /**
     * <p>The branch name for a specific revision.</p>
     */
    inline Revision& WithBranch(const char* value) { SetBranch(value); return *this;}


    /**
     * <p>The directory, if any, for a specific revision.</p>
     */
    inline const Aws::String& GetDirectory() const{ return m_directory; }

    /**
     * <p>The directory, if any, for a specific revision.</p>
     */
    inline bool DirectoryHasBeenSet() const { return m_directoryHasBeenSet; }

    /**
     * <p>The directory, if any, for a specific revision.</p>
     */
    inline void SetDirectory(const Aws::String& value) { m_directoryHasBeenSet = true; m_directory = value; }

    /**
     * <p>The directory, if any, for a specific revision.</p>
     */
    inline void SetDirectory(Aws::String&& value) { m_directoryHasBeenSet = true; m_directory = std::move(value); }

    /**
     * <p>The directory, if any, for a specific revision.</p>
     */
    inline void SetDirectory(const char* value) { m_directoryHasBeenSet = true; m_directory.assign(value); }

    /**
     * <p>The directory, if any, for a specific revision.</p>
     */
    inline Revision& WithDirectory(const Aws::String& value) { SetDirectory(value); return *this;}

    /**
     * <p>The directory, if any, for a specific revision.</p>
     */
    inline Revision& WithDirectory(Aws::String&& value) { SetDirectory(std::move(value)); return *this;}

    /**
     * <p>The directory, if any, for a specific revision.</p>
     */
    inline Revision& WithDirectory(const char* value) { SetDirectory(value); return *this;}


    /**
     * <p>The owner ID for a specific revision, such as the GitHub owner ID for a
     * GitHub repository.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The owner ID for a specific revision, such as the GitHub owner ID for a
     * GitHub repository.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The owner ID for a specific revision, such as the GitHub owner ID for a
     * GitHub repository.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The owner ID for a specific revision, such as the GitHub owner ID for a
     * GitHub repository.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The owner ID for a specific revision, such as the GitHub owner ID for a
     * GitHub repository.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The owner ID for a specific revision, such as the GitHub owner ID for a
     * GitHub repository.</p>
     */
    inline Revision& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The owner ID for a specific revision, such as the GitHub owner ID for a
     * GitHub repository.</p>
     */
    inline Revision& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The owner ID for a specific revision, such as the GitHub owner ID for a
     * GitHub repository.</p>
     */
    inline Revision& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The repository name for a specific revision.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The repository name for a specific revision.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The repository name for a specific revision.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The repository name for a specific revision.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The repository name for a specific revision.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The repository name for a specific revision.</p>
     */
    inline Revision& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository name for a specific revision.</p>
     */
    inline Revision& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository name for a specific revision.</p>
     */
    inline Revision& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The provider type for a revision, such as GitHub.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The provider type for a revision, such as GitHub.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The provider type for a revision, such as GitHub.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The provider type for a revision, such as GitHub.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The provider type for a revision, such as GitHub.</p>
     */
    inline Revision& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The provider type for a revision, such as GitHub.</p>
     */
    inline Revision& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The SHA, such as the commit ID, for a specific revision.</p>
     */
    inline const Aws::String& GetSha() const{ return m_sha; }

    /**
     * <p>The SHA, such as the commit ID, for a specific revision.</p>
     */
    inline bool ShaHasBeenSet() const { return m_shaHasBeenSet; }

    /**
     * <p>The SHA, such as the commit ID, for a specific revision.</p>
     */
    inline void SetSha(const Aws::String& value) { m_shaHasBeenSet = true; m_sha = value; }

    /**
     * <p>The SHA, such as the commit ID, for a specific revision.</p>
     */
    inline void SetSha(Aws::String&& value) { m_shaHasBeenSet = true; m_sha = std::move(value); }

    /**
     * <p>The SHA, such as the commit ID, for a specific revision.</p>
     */
    inline void SetSha(const char* value) { m_shaHasBeenSet = true; m_sha.assign(value); }

    /**
     * <p>The SHA, such as the commit ID, for a specific revision.</p>
     */
    inline Revision& WithSha(const Aws::String& value) { SetSha(value); return *this;}

    /**
     * <p>The SHA, such as the commit ID, for a specific revision.</p>
     */
    inline Revision& WithSha(Aws::String&& value) { SetSha(std::move(value)); return *this;}

    /**
     * <p>The SHA, such as the commit ID, for a specific revision.</p>
     */
    inline Revision& WithSha(const char* value) { SetSha(value); return *this;}

  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_directory;
    bool m_directoryHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_sha;
    bool m_shaHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
