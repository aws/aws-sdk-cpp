/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecatalyst/model/WorkflowDefinitionSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codecatalyst/model/WorkflowRunMode.h>
#include <aws/codecatalyst/model/WorkflowStatus.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/WorkflowSummary">AWS
   * API Reference</a></p>
   */
  class WorkflowSummary
  {
  public:
    AWS_CODECATALYST_API WorkflowSummary() = default;
    AWS_CODECATALYST_API WorkflowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API WorkflowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated unique ID of a workflow.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    WorkflowSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WorkflowSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source repository where the workflow definition file is
     * stored.</p>
     */
    inline const Aws::String& GetSourceRepositoryName() const { return m_sourceRepositoryName; }
    inline bool SourceRepositoryNameHasBeenSet() const { return m_sourceRepositoryNameHasBeenSet; }
    template<typename SourceRepositoryNameT = Aws::String>
    void SetSourceRepositoryName(SourceRepositoryNameT&& value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName = std::forward<SourceRepositoryNameT>(value); }
    template<typename SourceRepositoryNameT = Aws::String>
    WorkflowSummary& WithSourceRepositoryName(SourceRepositoryNameT&& value) { SetSourceRepositoryName(std::forward<SourceRepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch of the source repository where the workflow definition
     * file is stored.</p>
     */
    inline const Aws::String& GetSourceBranchName() const { return m_sourceBranchName; }
    inline bool SourceBranchNameHasBeenSet() const { return m_sourceBranchNameHasBeenSet; }
    template<typename SourceBranchNameT = Aws::String>
    void SetSourceBranchName(SourceBranchNameT&& value) { m_sourceBranchNameHasBeenSet = true; m_sourceBranchName = std::forward<SourceBranchNameT>(value); }
    template<typename SourceBranchNameT = Aws::String>
    WorkflowSummary& WithSourceBranchName(SourceBranchNameT&& value) { SetSourceBranchName(std::forward<SourceBranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the workflow definition file.</p>
     */
    inline const WorkflowDefinitionSummary& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = WorkflowDefinitionSummary>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = WorkflowDefinitionSummary>
    WorkflowSummary& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    WorkflowSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    WorkflowSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run mode of the workflow.</p>
     */
    inline WorkflowRunMode GetRunMode() const { return m_runMode; }
    inline bool RunModeHasBeenSet() const { return m_runModeHasBeenSet; }
    inline void SetRunMode(WorkflowRunMode value) { m_runModeHasBeenSet = true; m_runMode = value; }
    inline WorkflowSummary& WithRunMode(WorkflowRunMode value) { SetRunMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the workflow.</p>
     */
    inline WorkflowStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkflowStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkflowSummary& WithStatus(WorkflowStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sourceRepositoryName;
    bool m_sourceRepositoryNameHasBeenSet = false;

    Aws::String m_sourceBranchName;
    bool m_sourceBranchNameHasBeenSet = false;

    WorkflowDefinitionSummary m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    WorkflowRunMode m_runMode{WorkflowRunMode::NOT_SET};
    bool m_runModeHasBeenSet = false;

    WorkflowStatus m_status{WorkflowStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
