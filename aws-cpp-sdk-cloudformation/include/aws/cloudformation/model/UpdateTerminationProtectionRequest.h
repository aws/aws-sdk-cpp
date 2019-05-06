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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFORMATION_API UpdateTerminationProtectionRequest : public CloudFormationRequest
  {
  public:
    UpdateTerminationProtectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTerminationProtection"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Whether to enable termination protection on the specified stack.</p>
     */
    inline bool GetEnableTerminationProtection() const{ return m_enableTerminationProtection; }

    /**
     * <p>Whether to enable termination protection on the specified stack.</p>
     */
    inline bool EnableTerminationProtectionHasBeenSet() const { return m_enableTerminationProtectionHasBeenSet; }

    /**
     * <p>Whether to enable termination protection on the specified stack.</p>
     */
    inline void SetEnableTerminationProtection(bool value) { m_enableTerminationProtectionHasBeenSet = true; m_enableTerminationProtection = value; }

    /**
     * <p>Whether to enable termination protection on the specified stack.</p>
     */
    inline UpdateTerminationProtectionRequest& WithEnableTerminationProtection(bool value) { SetEnableTerminationProtection(value); return *this;}


    /**
     * <p>The name or unique ID of the stack for which you want to set termination
     * protection.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or unique ID of the stack for which you want to set termination
     * protection.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name or unique ID of the stack for which you want to set termination
     * protection.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or unique ID of the stack for which you want to set termination
     * protection.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name or unique ID of the stack for which you want to set termination
     * protection.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or unique ID of the stack for which you want to set termination
     * protection.</p>
     */
    inline UpdateTerminationProtectionRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or unique ID of the stack for which you want to set termination
     * protection.</p>
     */
    inline UpdateTerminationProtectionRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name or unique ID of the stack for which you want to set termination
     * protection.</p>
     */
    inline UpdateTerminationProtectionRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

  private:

    bool m_enableTerminationProtection;
    bool m_enableTerminationProtectionHasBeenSet;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
