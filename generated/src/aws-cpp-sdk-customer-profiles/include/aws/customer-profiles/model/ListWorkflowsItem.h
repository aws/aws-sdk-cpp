/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/WorkflowType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/Status.h>
#include <aws/core/utils/DateTime.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>A workflow in list of workflows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListWorkflowsItem">AWS
   * API Reference</a></p>
   */
  class ListWorkflowsItem
  {
  public:
    AWS_CUSTOMERPROFILES_API ListWorkflowsItem();
    AWS_CUSTOMERPROFILES_API ListWorkflowsItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListWorkflowsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of workflow. The only supported value is APPFLOW_INTEGRATION.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }
    inline ListWorkflowsItem& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}
    inline ListWorkflowsItem& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }
    inline ListWorkflowsItem& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline ListWorkflowsItem& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline ListWorkflowsItem& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of workflow execution.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListWorkflowsItem& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline ListWorkflowsItem& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description for workflow execution status.</p>
     */
    inline const Aws::String& GetStatusDescription() const{ return m_statusDescription; }
    inline bool StatusDescriptionHasBeenSet() const { return m_statusDescriptionHasBeenSet; }
    inline void SetStatusDescription(const Aws::String& value) { m_statusDescriptionHasBeenSet = true; m_statusDescription = value; }
    inline void SetStatusDescription(Aws::String&& value) { m_statusDescriptionHasBeenSet = true; m_statusDescription = std::move(value); }
    inline void SetStatusDescription(const char* value) { m_statusDescriptionHasBeenSet = true; m_statusDescription.assign(value); }
    inline ListWorkflowsItem& WithStatusDescription(const Aws::String& value) { SetStatusDescription(value); return *this;}
    inline ListWorkflowsItem& WithStatusDescription(Aws::String&& value) { SetStatusDescription(std::move(value)); return *this;}
    inline ListWorkflowsItem& WithStatusDescription(const char* value) { SetStatusDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation timestamp for workflow.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ListWorkflowsItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ListWorkflowsItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last updated timestamp for workflow.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline ListWorkflowsItem& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline ListWorkflowsItem& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDescription;
    bool m_statusDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
