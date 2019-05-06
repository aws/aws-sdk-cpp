/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/UiTemplate.h>
#include <aws/sagemaker/model/RenderableTask.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API RenderUiTemplateRequest : public SageMakerRequest
  {
  public:
    RenderUiTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RenderUiTemplate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline const UiTemplate& GetUiTemplate() const{ return m_uiTemplate; }

    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline bool UiTemplateHasBeenSet() const { return m_uiTemplateHasBeenSet; }

    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline void SetUiTemplate(const UiTemplate& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = value; }

    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline void SetUiTemplate(UiTemplate&& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = std::move(value); }

    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline RenderUiTemplateRequest& WithUiTemplate(const UiTemplate& value) { SetUiTemplate(value); return *this;}

    /**
     * <p>A <code>Template</code> object containing the worker UI template to
     * render.</p>
     */
    inline RenderUiTemplateRequest& WithUiTemplate(UiTemplate&& value) { SetUiTemplate(std::move(value)); return *this;}


    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline const RenderableTask& GetTask() const{ return m_task; }

    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }

    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline void SetTask(const RenderableTask& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline void SetTask(RenderableTask&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }

    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline RenderUiTemplateRequest& WithTask(const RenderableTask& value) { SetTask(value); return *this;}

    /**
     * <p>A <code>RenderableTask</code> object containing a representative task to
     * render.</p>
     */
    inline RenderUiTemplateRequest& WithTask(RenderableTask&& value) { SetTask(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline RenderUiTemplateRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline RenderUiTemplateRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that has access to the S3 objects that are
     * used by the template.</p>
     */
    inline RenderUiTemplateRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    UiTemplate m_uiTemplate;
    bool m_uiTemplateHasBeenSet;

    RenderableTask m_task;
    bool m_taskHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
