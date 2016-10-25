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

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>DeleteChangeSet</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API DeleteChangeSetRequest : public CloudFormationRequest
  {
  public:
    DeleteChangeSetRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * delete.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * delete.</p>
     */
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * delete.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * delete.</p>
     */
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * delete.</p>
     */
    inline DeleteChangeSetRequest& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * delete.</p>
     */
    inline DeleteChangeSetRequest& WithChangeSetName(Aws::String&& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want to
     * delete.</p>
     */
    inline DeleteChangeSetRequest& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}

    /**
     * <p>If you specified the name of a change set to delete, specify the stack name
     * or ID (ARN) that is associated with it.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>If you specified the name of a change set to delete, specify the stack name
     * or ID (ARN) that is associated with it.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>If you specified the name of a change set to delete, specify the stack name
     * or ID (ARN) that is associated with it.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>If you specified the name of a change set to delete, specify the stack name
     * or ID (ARN) that is associated with it.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>If you specified the name of a change set to delete, specify the stack name
     * or ID (ARN) that is associated with it.</p>
     */
    inline DeleteChangeSetRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>If you specified the name of a change set to delete, specify the stack name
     * or ID (ARN) that is associated with it.</p>
     */
    inline DeleteChangeSetRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>If you specified the name of a change set to delete, specify the stack name
     * or ID (ARN) that is associated with it.</p>
     */
    inline DeleteChangeSetRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

  private:
    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet;
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
