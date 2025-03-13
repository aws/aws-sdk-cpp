/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
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
namespace CodeConnections
{
namespace Model
{

  /**
   * <p>The definition for a repository with a sync configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/RepositorySyncDefinition">AWS
   * API Reference</a></p>
   */
  class RepositorySyncDefinition
  {
  public:
    AWS_CODECONNECTIONS_API RepositorySyncDefinition() = default;
    AWS_CODECONNECTIONS_API RepositorySyncDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API RepositorySyncDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The branch specified for a repository sync definition.</p>
     */
    inline const Aws::String& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = Aws::String>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Aws::String>
    RepositorySyncDefinition& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration file for a repository sync definition. This value comes
     * from creating or updating the <code>config-file</code> field of a
     * <code>sync-configuration</code>.</p>
     */
    inline const Aws::String& GetDirectory() const { return m_directory; }
    inline bool DirectoryHasBeenSet() const { return m_directoryHasBeenSet; }
    template<typename DirectoryT = Aws::String>
    void SetDirectory(DirectoryT&& value) { m_directoryHasBeenSet = true; m_directory = std::forward<DirectoryT>(value); }
    template<typename DirectoryT = Aws::String>
    RepositorySyncDefinition& WithDirectory(DirectoryT&& value) { SetDirectory(std::forward<DirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent resource specified for a repository sync definition.</p>
     */
    inline const Aws::String& GetParent() const { return m_parent; }
    inline bool ParentHasBeenSet() const { return m_parentHasBeenSet; }
    template<typename ParentT = Aws::String>
    void SetParent(ParentT&& value) { m_parentHasBeenSet = true; m_parent = std::forward<ParentT>(value); }
    template<typename ParentT = Aws::String>
    RepositorySyncDefinition& WithParent(ParentT&& value) { SetParent(std::forward<ParentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target resource specified for a repository sync definition. In some
     * cases, such as CFN_STACK_SYNC, the parent and target resource are the same.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    RepositorySyncDefinition& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_directory;
    bool m_directoryHasBeenSet = false;

    Aws::String m_parent;
    bool m_parentHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
