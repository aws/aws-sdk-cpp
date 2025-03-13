/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecatalyst/model/WorkflowDefinition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codecatalyst/model/WorkflowRunMode.h>
#include <aws/codecatalyst/model/WorkflowStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCatalyst
{
namespace Model
{
  class GetWorkflowResult
  {
  public:
    AWS_CODECATALYST_API GetWorkflowResult() = default;
    AWS_CODECATALYST_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    GetWorkflowResult& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    GetWorkflowResult& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetWorkflowResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetWorkflowResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source repository where the workflow YAML is stored.</p>
     */
    inline const Aws::String& GetSourceRepositoryName() const { return m_sourceRepositoryName; }
    template<typename SourceRepositoryNameT = Aws::String>
    void SetSourceRepositoryName(SourceRepositoryNameT&& value) { m_sourceRepositoryNameHasBeenSet = true; m_sourceRepositoryName = std::forward<SourceRepositoryNameT>(value); }
    template<typename SourceRepositoryNameT = Aws::String>
    GetWorkflowResult& WithSourceRepositoryName(SourceRepositoryNameT&& value) { SetSourceRepositoryName(std::forward<SourceRepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch that contains the workflow YAML.</p>
     */
    inline const Aws::String& GetSourceBranchName() const { return m_sourceBranchName; }
    template<typename SourceBranchNameT = Aws::String>
    void SetSourceBranchName(SourceBranchNameT&& value) { m_sourceBranchNameHasBeenSet = true; m_sourceBranchName = std::forward<SourceBranchNameT>(value); }
    template<typename SourceBranchNameT = Aws::String>
    GetWorkflowResult& WithSourceBranchName(SourceBranchNameT&& value) { SetSourceBranchName(std::forward<SourceBranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the workflow definition file for the workflow.</p>
     */
    inline const WorkflowDefinition& GetDefinition() const { return m_definition; }
    template<typename DefinitionT = WorkflowDefinition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = WorkflowDefinition>
    GetWorkflowResult& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    GetWorkflowResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    GetWorkflowResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior to use when multiple workflows occur at the same time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html">https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html</a>
     * in the Amazon CodeCatalyst User Guide.</p>
     */
    inline WorkflowRunMode GetRunMode() const { return m_runMode; }
    inline void SetRunMode(WorkflowRunMode value) { m_runModeHasBeenSet = true; m_runMode = value; }
    inline GetWorkflowResult& WithRunMode(WorkflowRunMode value) { SetRunMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the workflow.</p>
     */
    inline WorkflowStatus GetStatus() const { return m_status; }
    inline void SetStatus(WorkflowStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWorkflowResult& WithStatus(WorkflowStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkflowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sourceRepositoryName;
    bool m_sourceRepositoryNameHasBeenSet = false;

    Aws::String m_sourceBranchName;
    bool m_sourceBranchNameHasBeenSet = false;

    WorkflowDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    WorkflowRunMode m_runMode{WorkflowRunMode::NOT_SET};
    bool m_runModeHasBeenSet = false;

    WorkflowStatus m_status{WorkflowStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
