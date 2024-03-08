/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>A list of <code>IdMappingWorkflowSummary</code> objects, each of which
   * contain the fields <code>WorkflowName</code>, <code>WorkflowArn</code>,
   * <code>CreatedAt</code>, and <code>UpdatedAt</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdMappingWorkflowSummary">AWS
   * API Reference</a></p>
   */
  class IdMappingWorkflowSummary
  {
  public:
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowSummary();
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingWorkflowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when the workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the workflow was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the workflow was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the workflow was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the workflow was created.</p>
     */
    inline IdMappingWorkflowSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the workflow was created.</p>
     */
    inline IdMappingWorkflowSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the workflow was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the workflow was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the workflow was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the workflow was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the workflow was last updated.</p>
     */
    inline IdMappingWorkflowSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the workflow was last updated.</p>
     */
    inline IdMappingWorkflowSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IdMappingWorkflow</code>.</p>
     */
    inline const Aws::String& GetWorkflowArn() const{ return m_workflowArn; }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IdMappingWorkflow</code>.</p>
     */
    inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IdMappingWorkflow</code>.</p>
     */
    inline void SetWorkflowArn(const Aws::String& value) { m_workflowArnHasBeenSet = true; m_workflowArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IdMappingWorkflow</code>.</p>
     */
    inline void SetWorkflowArn(Aws::String&& value) { m_workflowArnHasBeenSet = true; m_workflowArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IdMappingWorkflow</code>.</p>
     */
    inline void SetWorkflowArn(const char* value) { m_workflowArnHasBeenSet = true; m_workflowArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IdMappingWorkflow</code>.</p>
     */
    inline IdMappingWorkflowSummary& WithWorkflowArn(const Aws::String& value) { SetWorkflowArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IdMappingWorkflow</code>.</p>
     */
    inline IdMappingWorkflowSummary& WithWorkflowArn(Aws::String&& value) { SetWorkflowArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IdMappingWorkflow</code>.</p>
     */
    inline IdMappingWorkflowSummary& WithWorkflowArn(const char* value) { SetWorkflowArn(value); return *this;}


    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(const Aws::String& value) { m_workflowNameHasBeenSet = true; m_workflowName = value; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(Aws::String&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::move(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(const char* value) { m_workflowNameHasBeenSet = true; m_workflowName.assign(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline IdMappingWorkflowSummary& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline IdMappingWorkflowSummary& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline IdMappingWorkflowSummary& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_workflowArn;
    bool m_workflowArnHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
