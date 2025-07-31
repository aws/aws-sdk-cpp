/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/entityresolution/model/ResolutionType.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>A list of <code>MatchingWorkflowSummary</code> objects, each of which contain
   * the fields <code>workflowName</code>, <code>workflowArn</code>,
   * <code>resolutionType</code>, <code>createdAt</code>,
   * <code>updatedAt</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/MatchingWorkflowSummary">AWS
   * API Reference</a></p>
   */
  class MatchingWorkflowSummary
  {
  public:
    AWS_ENTITYRESOLUTION_API MatchingWorkflowSummary() = default;
    AWS_ENTITYRESOLUTION_API MatchingWorkflowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API MatchingWorkflowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const { return m_workflowName; }
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
    template<typename WorkflowNameT = Aws::String>
    void SetWorkflowName(WorkflowNameT&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::forward<WorkflowNameT>(value); }
    template<typename WorkflowNameT = Aws::String>
    MatchingWorkflowSummary& WithWorkflowName(WorkflowNameT&& value) { SetWorkflowName(std::forward<WorkflowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>MatchingWorkflow</code>.</p>
     */
    inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
    inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
    template<typename WorkflowArnT = Aws::String>
    void SetWorkflowArn(WorkflowArnT&& value) { m_workflowArnHasBeenSet = true; m_workflowArn = std::forward<WorkflowArnT>(value); }
    template<typename WorkflowArnT = Aws::String>
    MatchingWorkflowSummary& WithWorkflowArn(WorkflowArnT&& value) { SetWorkflowArn(std::forward<WorkflowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    MatchingWorkflowSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the workflow was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    MatchingWorkflowSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that has been specified for data matching, either using matching
     * provided by Entity Resolution or through a provider service.</p>
     */
    inline ResolutionType GetResolutionType() const { return m_resolutionType; }
    inline bool ResolutionTypeHasBeenSet() const { return m_resolutionTypeHasBeenSet; }
    inline void SetResolutionType(ResolutionType value) { m_resolutionTypeHasBeenSet = true; m_resolutionType = value; }
    inline MatchingWorkflowSummary& WithResolutionType(ResolutionType value) { SetResolutionType(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    Aws::String m_workflowArn;
    bool m_workflowArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    ResolutionType m_resolutionType{ResolutionType::NOT_SET};
    bool m_resolutionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
