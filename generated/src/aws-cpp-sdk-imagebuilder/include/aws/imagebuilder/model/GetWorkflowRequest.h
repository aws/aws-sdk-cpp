﻿/**
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
  class GetWorkflowRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflow"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource that you want to
     * get.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const{ return m_workflowBuildVersionArn; }
    inline bool WorkflowBuildVersionArnHasBeenSet() const { return m_workflowBuildVersionArnHasBeenSet; }
    inline void SetWorkflowBuildVersionArn(const Aws::String& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = value; }
    inline void SetWorkflowBuildVersionArn(Aws::String&& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = std::move(value); }
    inline void SetWorkflowBuildVersionArn(const char* value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn.assign(value); }
    inline GetWorkflowRequest& WithWorkflowBuildVersionArn(const Aws::String& value) { SetWorkflowBuildVersionArn(value); return *this;}
    inline GetWorkflowRequest& WithWorkflowBuildVersionArn(Aws::String&& value) { SetWorkflowBuildVersionArn(std::move(value)); return *this;}
    inline GetWorkflowRequest& WithWorkflowBuildVersionArn(const char* value) { SetWorkflowBuildVersionArn(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowBuildVersionArn;
    bool m_workflowBuildVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
