/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class GetWorkflowExecutionRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetWorkflowExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflowExecution"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Use the unique identifier for a runtime instance of the workflow to get
     * runtime details.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const{ return m_workflowExecutionId; }

    /**
     * <p>Use the unique identifier for a runtime instance of the workflow to get
     * runtime details.</p>
     */
    inline bool WorkflowExecutionIdHasBeenSet() const { return m_workflowExecutionIdHasBeenSet; }

    /**
     * <p>Use the unique identifier for a runtime instance of the workflow to get
     * runtime details.</p>
     */
    inline void SetWorkflowExecutionId(const Aws::String& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = value; }

    /**
     * <p>Use the unique identifier for a runtime instance of the workflow to get
     * runtime details.</p>
     */
    inline void SetWorkflowExecutionId(Aws::String&& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = std::move(value); }

    /**
     * <p>Use the unique identifier for a runtime instance of the workflow to get
     * runtime details.</p>
     */
    inline void SetWorkflowExecutionId(const char* value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId.assign(value); }

    /**
     * <p>Use the unique identifier for a runtime instance of the workflow to get
     * runtime details.</p>
     */
    inline GetWorkflowExecutionRequest& WithWorkflowExecutionId(const Aws::String& value) { SetWorkflowExecutionId(value); return *this;}

    /**
     * <p>Use the unique identifier for a runtime instance of the workflow to get
     * runtime details.</p>
     */
    inline GetWorkflowExecutionRequest& WithWorkflowExecutionId(Aws::String&& value) { SetWorkflowExecutionId(std::move(value)); return *this;}

    /**
     * <p>Use the unique identifier for a runtime instance of the workflow to get
     * runtime details.</p>
     */
    inline GetWorkflowExecutionRequest& WithWorkflowExecutionId(const char* value) { SetWorkflowExecutionId(value); return *this;}

  private:

    Aws::String m_workflowExecutionId;
    bool m_workflowExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
