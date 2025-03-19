/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class CreateSourceRepositoryBranchRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API CreateSourceRepositoryBranchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSourceRepositoryBranch"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    CreateSourceRepositoryBranchRequest& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    CreateSourceRepositoryBranchRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository where you want to create a branch.</p>
     */
    inline const Aws::String& GetSourceRepositoryName() const { return m_sourceRepositoryName; }
    inline bool SourceRepositoryNameHasBeenSet() const { return m_sourceRepositoryNameHasBeenSet; }
    template<typename SourceRepositoryNameT = Aws::String>
    void SetSourceRepositoryName(SourceRepositoryNameT&& value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName = std::forward<SourceRepositoryNameT>(value); }
    template<typename SourceRepositoryNameT = Aws::String>
    CreateSourceRepositoryBranchRequest& WithSourceRepositoryName(SourceRepositoryNameT&& value) { SetSourceRepositoryName(std::forward<SourceRepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the branch you're creating.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSourceRepositoryBranchRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commit ID in an existing branch from which you want to create the new
     * branch.</p>
     */
    inline const Aws::String& GetHeadCommitId() const { return m_headCommitId; }
    inline bool HeadCommitIdHasBeenSet() const { return m_headCommitIdHasBeenSet; }
    template<typename HeadCommitIdT = Aws::String>
    void SetHeadCommitId(HeadCommitIdT&& value) { m_headCommitIdHasBeenSet = true; m_headCommitId = std::forward<HeadCommitIdT>(value); }
    template<typename HeadCommitIdT = Aws::String>
    CreateSourceRepositoryBranchRequest& WithHeadCommitId(HeadCommitIdT&& value) { SetHeadCommitId(std::forward<HeadCommitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_sourceRepositoryName;
    bool m_sourceRepositoryNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_headCommitId;
    bool m_headCommitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
