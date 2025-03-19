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
    AWS_CODECONNECTIONS_API Revision() = default;
    AWS_CODECONNECTIONS_API Revision(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Revision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The branch name for a specific revision.</p>
     */
    inline const Aws::String& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = Aws::String>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Aws::String>
    Revision& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory, if any, for a specific revision.</p>
     */
    inline const Aws::String& GetDirectory() const { return m_directory; }
    inline bool DirectoryHasBeenSet() const { return m_directoryHasBeenSet; }
    template<typename DirectoryT = Aws::String>
    void SetDirectory(DirectoryT&& value) { m_directoryHasBeenSet = true; m_directory = std::forward<DirectoryT>(value); }
    template<typename DirectoryT = Aws::String>
    Revision& WithDirectory(DirectoryT&& value) { SetDirectory(std::forward<DirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner ID for a specific revision, such as the GitHub owner ID for a
     * GitHub repository.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    Revision& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name for a specific revision.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    Revision& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider type for a revision, such as GitHub.</p>
     */
    inline ProviderType GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(ProviderType value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline Revision& WithProviderType(ProviderType value) { SetProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA, such as the commit ID, for a specific revision.</p>
     */
    inline const Aws::String& GetSha() const { return m_sha; }
    inline bool ShaHasBeenSet() const { return m_shaHasBeenSet; }
    template<typename ShaT = Aws::String>
    void SetSha(ShaT&& value) { m_shaHasBeenSet = true; m_sha = std::forward<ShaT>(value); }
    template<typename ShaT = Aws::String>
    Revision& WithSha(ShaT&& value) { SetSha(std::forward<ShaT>(value)); return *this;}
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

    ProviderType m_providerType{ProviderType::NOT_SET};
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_sha;
    bool m_shaHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
