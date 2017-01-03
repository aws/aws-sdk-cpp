﻿/*
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
   * <p>The input for the <a>GetStackPolicy</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetStackPolicyInput">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API GetStackPolicyRequest : public CloudFormationRequest
  {
  public:
    GetStackPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or unique stack ID that is associated with the stack whose policy
     * you want to get.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or unique stack ID that is associated with the stack whose policy
     * you want to get.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or unique stack ID that is associated with the stack whose policy
     * you want to get.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or unique stack ID that is associated with the stack whose policy
     * you want to get.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or unique stack ID that is associated with the stack whose policy
     * you want to get.</p>
     */
    inline GetStackPolicyRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or unique stack ID that is associated with the stack whose policy
     * you want to get.</p>
     */
    inline GetStackPolicyRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or unique stack ID that is associated with the stack whose policy
     * you want to get.</p>
     */
    inline GetStackPolicyRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
