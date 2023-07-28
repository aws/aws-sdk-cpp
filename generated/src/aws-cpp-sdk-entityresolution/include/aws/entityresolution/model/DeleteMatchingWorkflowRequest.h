/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class DeleteMatchingWorkflowRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API DeleteMatchingWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMatchingWorkflow"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the workflow to be retrieved.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }

    /**
     * <p>The name of the workflow to be retrieved.</p>
     */
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }

    /**
     * <p>The name of the workflow to be retrieved.</p>
     */
    inline void SetWorkflowName(const Aws::String& value) { m_workflowNameHasBeenSet = true; m_workflowName = value; }

    /**
     * <p>The name of the workflow to be retrieved.</p>
     */
    inline void SetWorkflowName(Aws::String&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::move(value); }

    /**
     * <p>The name of the workflow to be retrieved.</p>
     */
    inline void SetWorkflowName(const char* value) { m_workflowNameHasBeenSet = true; m_workflowName.assign(value); }

    /**
     * <p>The name of the workflow to be retrieved.</p>
     */
    inline DeleteMatchingWorkflowRequest& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}

    /**
     * <p>The name of the workflow to be retrieved.</p>
     */
    inline DeleteMatchingWorkflowRequest& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow to be retrieved.</p>
     */
    inline DeleteMatchingWorkflowRequest& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}

  private:

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
