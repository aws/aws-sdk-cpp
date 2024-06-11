/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateTerminationProtectionRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API UpdateTerminationProtectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTerminationProtection"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Whether to enable termination protection on the specified stack.</p>
     */
    inline bool GetEnableTerminationProtection() const{ return m_enableTerminationProtection; }
    inline bool EnableTerminationProtectionHasBeenSet() const { return m_enableTerminationProtectionHasBeenSet; }
    inline void SetEnableTerminationProtection(bool value) { m_enableTerminationProtectionHasBeenSet = true; m_enableTerminationProtection = value; }
    inline UpdateTerminationProtectionRequest& WithEnableTerminationProtection(bool value) { SetEnableTerminationProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or unique ID of the stack for which you want to set termination
     * protection.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline UpdateTerminationProtectionRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline UpdateTerminationProtectionRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline UpdateTerminationProtectionRequest& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}
  private:

    bool m_enableTerminationProtection;
    bool m_enableTerminationProtectionHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
