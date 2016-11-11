/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/TemplateStage.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for a <a>GetTemplate</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API GetTemplateRequest : public CloudFormationRequest
  {
  public:
    GetTemplateRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline GetTemplateRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline GetTemplateRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline GetTemplateRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>Returns the template for a change set using the Amazon Resource Name (ARN) or
     * name of the change set. If you specify a name, you must also specify the
     * <code>StackName</code>.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }

    /**
     * <p>Returns the template for a change set using the Amazon Resource Name (ARN) or
     * name of the change set. If you specify a name, you must also specify the
     * <code>StackName</code>.</p>
     */
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>Returns the template for a change set using the Amazon Resource Name (ARN) or
     * name of the change set. If you specify a name, you must also specify the
     * <code>StackName</code>.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>Returns the template for a change set using the Amazon Resource Name (ARN) or
     * name of the change set. If you specify a name, you must also specify the
     * <code>StackName</code>.</p>
     */
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }

    /**
     * <p>Returns the template for a change set using the Amazon Resource Name (ARN) or
     * name of the change set. If you specify a name, you must also specify the
     * <code>StackName</code>.</p>
     */
    inline GetTemplateRequest& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>Returns the template for a change set using the Amazon Resource Name (ARN) or
     * name of the change set. If you specify a name, you must also specify the
     * <code>StackName</code>.</p>
     */
    inline GetTemplateRequest& WithChangeSetName(Aws::String&& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>Returns the template for a change set using the Amazon Resource Name (ARN) or
     * name of the change set. If you specify a name, you must also specify the
     * <code>StackName</code>.</p>
     */
    inline GetTemplateRequest& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The stage of the template that is returned.</p> <p>Valid values are
     * <code>Original</code> and <code>Processed</code>. The default value is
     * <code>Original</code>.</p> <ul> <li> <p> <code>Original</code> - Use this value
     * to return the user-submitted template.</p> </li> <li> <p> <code>Processed</code>
     * - Use this value to return the template after all transforms have been
     * processed.</p> </li> </ul>
     */
    inline const TemplateStage& GetTemplateStage() const{ return m_templateStage; }

    /**
     * <p>The stage of the template that is returned.</p> <p>Valid values are
     * <code>Original</code> and <code>Processed</code>. The default value is
     * <code>Original</code>.</p> <ul> <li> <p> <code>Original</code> - Use this value
     * to return the user-submitted template.</p> </li> <li> <p> <code>Processed</code>
     * - Use this value to return the template after all transforms have been
     * processed.</p> </li> </ul>
     */
    inline void SetTemplateStage(const TemplateStage& value) { m_templateStageHasBeenSet = true; m_templateStage = value; }

    /**
     * <p>The stage of the template that is returned.</p> <p>Valid values are
     * <code>Original</code> and <code>Processed</code>. The default value is
     * <code>Original</code>.</p> <ul> <li> <p> <code>Original</code> - Use this value
     * to return the user-submitted template.</p> </li> <li> <p> <code>Processed</code>
     * - Use this value to return the template after all transforms have been
     * processed.</p> </li> </ul>
     */
    inline void SetTemplateStage(TemplateStage&& value) { m_templateStageHasBeenSet = true; m_templateStage = value; }

    /**
     * <p>The stage of the template that is returned.</p> <p>Valid values are
     * <code>Original</code> and <code>Processed</code>. The default value is
     * <code>Original</code>.</p> <ul> <li> <p> <code>Original</code> - Use this value
     * to return the user-submitted template.</p> </li> <li> <p> <code>Processed</code>
     * - Use this value to return the template after all transforms have been
     * processed.</p> </li> </ul>
     */
    inline GetTemplateRequest& WithTemplateStage(const TemplateStage& value) { SetTemplateStage(value); return *this;}

    /**
     * <p>The stage of the template that is returned.</p> <p>Valid values are
     * <code>Original</code> and <code>Processed</code>. The default value is
     * <code>Original</code>.</p> <ul> <li> <p> <code>Original</code> - Use this value
     * to return the user-submitted template.</p> </li> <li> <p> <code>Processed</code>
     * - Use this value to return the template after all transforms have been
     * processed.</p> </li> </ul>
     */
    inline GetTemplateRequest& WithTemplateStage(TemplateStage&& value) { SetTemplateStage(value); return *this;}

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet;
    TemplateStage m_templateStage;
    bool m_templateStageHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
