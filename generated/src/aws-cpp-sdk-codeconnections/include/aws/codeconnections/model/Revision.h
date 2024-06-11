/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/ProviderType.h>
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
namespace CodeConnections
{
namespace Model
{

  /**
   * <p>Information about the revision for a specific sync event, such as the branch,
   * owner ID, and name of the repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/Revision">AWS
   * API Reference</a></p>
   */
  class Revision
  {
  public:
    AWS_CODECONNECTIONS_API Revision();
    AWS_CODECONNECTIONS_API Revision(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Revision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The branch name for a specific revision.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }
    inline Revision& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}
    inline Revision& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}
    inline Revision& WithBranch(const char* value) { SetBranch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory, if any, for a specific revision.</p>
     */
    inline const Aws::String& GetDirectory() const{ return m_directory; }
    inline bool DirectoryHasBeenSet() const { return m_directoryHasBeenSet; }
    inline void SetDirectory(const Aws::String& value) { m_directoryHasBeenSet = true; m_directory = value; }
    inline void SetDirectory(Aws::String&& value) { m_directoryHasBeenSet = true; m_directory = std::move(value); }
    inline void SetDirectory(const char* value) { m_directoryHasBeenSet = true; m_directory.assign(value); }
    inline Revision& WithDirectory(const Aws::String& value) { SetDirectory(value); return *this;}
    inline Revision& WithDirectory(Aws::String&& value) { SetDirectory(std::move(value)); return *this;}
    inline Revision& WithDirectory(const char* value) { SetDirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner ID for a specific revision, such as the GitHub owner ID for a
     * GitHub repository.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline Revision& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline Revision& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline Revision& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name for a specific revision.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline Revision& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline Revision& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline Revision& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider type for a revision, such as GitHub.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }
    inline Revision& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}
    inline Revision& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA, such as the commit ID, for a specific revision.</p>
     */
    inline const Aws::String& GetSha() const{ return m_sha; }
    inline bool ShaHasBeenSet() const { return m_shaHasBeenSet; }
    inline void SetSha(const Aws::String& value) { m_shaHasBeenSet = true; m_sha = value; }
    inline void SetSha(Aws::String&& value) { m_shaHasBeenSet = true; m_sha = std::move(value); }
    inline void SetSha(const char* value) { m_shaHasBeenSet = true; m_sha.assign(value); }
    inline Revision& WithSha(const Aws::String& value) { SetSha(value); return *this;}
    inline Revision& WithSha(Aws::String&& value) { SetSha(std::move(value)); return *this;}
    inline Revision& WithSha(const char* value) { SetSha(value); return *this;}
    ///@}
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
} // namespace CodeConnections
} // namespace Aws
