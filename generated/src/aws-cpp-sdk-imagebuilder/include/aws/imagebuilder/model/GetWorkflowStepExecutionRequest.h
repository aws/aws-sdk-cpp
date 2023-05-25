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
  class GetWorkflowStepExecutionRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetWorkflowStepExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflowStepExecution"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Use the unique identifier for a specific runtime instance of the workflow
     * step to get runtime details for that step.</p>
     */
    inline const Aws::String& GetStepExecutionId() const{ return m_stepExecutionId; }

    /**
     * <p>Use the unique identifier for a specific runtime instance of the workflow
     * step to get runtime details for that step.</p>
     */
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }

    /**
     * <p>Use the unique identifier for a specific runtime instance of the workflow
     * step to get runtime details for that step.</p>
     */
    inline void SetStepExecutionId(const Aws::String& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = value; }

    /**
     * <p>Use the unique identifier for a specific runtime instance of the workflow
     * step to get runtime details for that step.</p>
     */
    inline void SetStepExecutionId(Aws::String&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::move(value); }

    /**
     * <p>Use the unique identifier for a specific runtime instance of the workflow
     * step to get runtime details for that step.</p>
     */
    inline void SetStepExecutionId(const char* value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId.assign(value); }

    /**
     * <p>Use the unique identifier for a specific runtime instance of the workflow
     * step to get runtime details for that step.</p>
     */
    inline GetWorkflowStepExecutionRequest& WithStepExecutionId(const Aws::String& value) { SetStepExecutionId(value); return *this;}

    /**
     * <p>Use the unique identifier for a specific runtime instance of the workflow
     * step to get runtime details for that step.</p>
     */
    inline GetWorkflowStepExecutionRequest& WithStepExecutionId(Aws::String&& value) { SetStepExecutionId(std::move(value)); return *this;}

    /**
     * <p>Use the unique identifier for a specific runtime instance of the workflow
     * step to get runtime details for that step.</p>
     */
    inline GetWorkflowStepExecutionRequest& WithStepExecutionId(const char* value) { SetStepExecutionId(value); return *this;}

  private:

    Aws::String m_stepExecutionId;
    bool m_stepExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
