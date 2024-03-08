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
    AWS_CODECATALYST_API GetWorkflowResult();
    AWS_CODECATALYST_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline GetWorkflowResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline GetWorkflowResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline GetWorkflowResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline GetWorkflowResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline GetWorkflowResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline GetWorkflowResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The ID of the workflow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the workflow.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the workflow.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the workflow.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the workflow.</p>
     */
    inline GetWorkflowResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the workflow.</p>
     */
    inline GetWorkflowResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workflow.</p>
     */
    inline GetWorkflowResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline GetWorkflowResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline GetWorkflowResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline GetWorkflowResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the source repository where the workflow YAML is stored.</p>
     */
    inline const Aws::String& GetSourceRepositoryName() const{ return m_sourceRepositoryName; }

    /**
     * <p>The name of the source repository where the workflow YAML is stored.</p>
     */
    inline void SetSourceRepositoryName(const Aws::String& value) { m_sourceRepositoryName = value; }

    /**
     * <p>The name of the source repository where the workflow YAML is stored.</p>
     */
    inline void SetSourceRepositoryName(Aws::String&& value) { m_sourceRepositoryName = std::move(value); }

    /**
     * <p>The name of the source repository where the workflow YAML is stored.</p>
     */
    inline void SetSourceRepositoryName(const char* value) { m_sourceRepositoryName.assign(value); }

    /**
     * <p>The name of the source repository where the workflow YAML is stored.</p>
     */
    inline GetWorkflowResult& WithSourceRepositoryName(const Aws::String& value) { SetSourceRepositoryName(value); return *this;}

    /**
     * <p>The name of the source repository where the workflow YAML is stored.</p>
     */
    inline GetWorkflowResult& WithSourceRepositoryName(Aws::String&& value) { SetSourceRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the source repository where the workflow YAML is stored.</p>
     */
    inline GetWorkflowResult& WithSourceRepositoryName(const char* value) { SetSourceRepositoryName(value); return *this;}


    /**
     * <p>The name of the branch that contains the workflow YAML.</p>
     */
    inline const Aws::String& GetSourceBranchName() const{ return m_sourceBranchName; }

    /**
     * <p>The name of the branch that contains the workflow YAML.</p>
     */
    inline void SetSourceBranchName(const Aws::String& value) { m_sourceBranchName = value; }

    /**
     * <p>The name of the branch that contains the workflow YAML.</p>
     */
    inline void SetSourceBranchName(Aws::String&& value) { m_sourceBranchName = std::move(value); }

    /**
     * <p>The name of the branch that contains the workflow YAML.</p>
     */
    inline void SetSourceBranchName(const char* value) { m_sourceBranchName.assign(value); }

    /**
     * <p>The name of the branch that contains the workflow YAML.</p>
     */
    inline GetWorkflowResult& WithSourceBranchName(const Aws::String& value) { SetSourceBranchName(value); return *this;}

    /**
     * <p>The name of the branch that contains the workflow YAML.</p>
     */
    inline GetWorkflowResult& WithSourceBranchName(Aws::String&& value) { SetSourceBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the branch that contains the workflow YAML.</p>
     */
    inline GetWorkflowResult& WithSourceBranchName(const char* value) { SetSourceBranchName(value); return *this;}


    /**
     * <p>Information about the workflow definition file for the workflow.</p>
     */
    inline const WorkflowDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>Information about the workflow definition file for the workflow.</p>
     */
    inline void SetDefinition(const WorkflowDefinition& value) { m_definition = value; }

    /**
     * <p>Information about the workflow definition file for the workflow.</p>
     */
    inline void SetDefinition(WorkflowDefinition&& value) { m_definition = std::move(value); }

    /**
     * <p>Information about the workflow definition file for the workflow.</p>
     */
    inline GetWorkflowResult& WithDefinition(const WorkflowDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>Information about the workflow definition file for the workflow.</p>
     */
    inline GetWorkflowResult& WithDefinition(WorkflowDefinition&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The date and time the workflow was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time the workflow was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The date and time the workflow was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The date and time the workflow was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline GetWorkflowResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the workflow was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline GetWorkflowResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the workflow was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time the workflow was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The date and time the workflow was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time the workflow was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline GetWorkflowResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time the workflow was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline GetWorkflowResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The behavior to use when multiple workflows occur at the same time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html">https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html</a>
     * in the Amazon CodeCatalyst User Guide.</p>
     */
    inline const WorkflowRunMode& GetRunMode() const{ return m_runMode; }

    /**
     * <p>The behavior to use when multiple workflows occur at the same time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html">https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html</a>
     * in the Amazon CodeCatalyst User Guide.</p>
     */
    inline void SetRunMode(const WorkflowRunMode& value) { m_runMode = value; }

    /**
     * <p>The behavior to use when multiple workflows occur at the same time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html">https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html</a>
     * in the Amazon CodeCatalyst User Guide.</p>
     */
    inline void SetRunMode(WorkflowRunMode&& value) { m_runMode = std::move(value); }

    /**
     * <p>The behavior to use when multiple workflows occur at the same time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html">https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html</a>
     * in the Amazon CodeCatalyst User Guide.</p>
     */
    inline GetWorkflowResult& WithRunMode(const WorkflowRunMode& value) { SetRunMode(value); return *this;}

    /**
     * <p>The behavior to use when multiple workflows occur at the same time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html">https://docs.aws.amazon.com/codecatalyst/latest/userguide/workflows-configure-runs.html</a>
     * in the Amazon CodeCatalyst User Guide.</p>
     */
    inline GetWorkflowResult& WithRunMode(WorkflowRunMode&& value) { SetRunMode(std::move(value)); return *this;}


    /**
     * <p>The status of the workflow.</p>
     */
    inline const WorkflowStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the workflow.</p>
     */
    inline void SetStatus(const WorkflowStatus& value) { m_status = value; }

    /**
     * <p>The status of the workflow.</p>
     */
    inline void SetStatus(WorkflowStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the workflow.</p>
     */
    inline GetWorkflowResult& WithStatus(const WorkflowStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the workflow.</p>
     */
    inline GetWorkflowResult& WithStatus(WorkflowStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_sourceRepositoryName;

    Aws::String m_sourceBranchName;

    WorkflowDefinition m_definition;

    Aws::Utils::DateTime m_createdTime;

    Aws::Utils::DateTime m_lastUpdatedTime;

    WorkflowRunMode m_runMode;

    WorkflowStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
