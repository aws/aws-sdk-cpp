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
   * <p>The input for the <a>SetStackPolicy</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SetStackPolicyInput">AWS
   * API Reference</a></p>
   */
  class SetStackPolicyRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API SetStackPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetStackPolicy"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or unique stack ID that you want to associate a policy with.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or unique stack ID that you want to associate a policy with.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name or unique stack ID that you want to associate a policy with.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or unique stack ID that you want to associate a policy with.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name or unique stack ID that you want to associate a policy with.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or unique stack ID that you want to associate a policy with.</p>
     */
    inline SetStackPolicyRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or unique stack ID that you want to associate a policy with.</p>
     */
    inline SetStackPolicyRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name or unique stack ID that you want to associate a policy with.</p>
     */
    inline SetStackPolicyRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent updates to stack resources</a> in the CloudFormation User Guide. You can
     * specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetStackPolicyBody() const{ return m_stackPolicyBody; }

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent updates to stack resources</a> in the CloudFormation User Guide. You can
     * specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline bool StackPolicyBodyHasBeenSet() const { return m_stackPolicyBodyHasBeenSet; }

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent updates to stack resources</a> in the CloudFormation User Guide. You can
     * specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline void SetStackPolicyBody(const Aws::String& value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody = value; }

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent updates to stack resources</a> in the CloudFormation User Guide. You can
     * specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline void SetStackPolicyBody(Aws::String&& value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody = std::move(value); }

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent updates to stack resources</a> in the CloudFormation User Guide. You can
     * specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline void SetStackPolicyBody(const char* value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody.assign(value); }

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent updates to stack resources</a> in the CloudFormation User Guide. You can
     * specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline SetStackPolicyRequest& WithStackPolicyBody(const Aws::String& value) { SetStackPolicyBody(value); return *this;}

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent updates to stack resources</a> in the CloudFormation User Guide. You can
     * specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline SetStackPolicyRequest& WithStackPolicyBody(Aws::String&& value) { SetStackPolicyBody(std::move(value)); return *this;}

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent updates to stack resources</a> in the CloudFormation User Guide. You can
     * specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline SetStackPolicyRequest& WithStackPolicyBody(const char* value) { SetStackPolicyBody(value); return *this;}


    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an Amazon S3 bucket in the same Amazon
     * Web Services Region as the stack. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p>
     */
    inline const Aws::String& GetStackPolicyURL() const{ return m_stackPolicyURL; }

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an Amazon S3 bucket in the same Amazon
     * Web Services Region as the stack. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p>
     */
    inline bool StackPolicyURLHasBeenSet() const { return m_stackPolicyURLHasBeenSet; }

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an Amazon S3 bucket in the same Amazon
     * Web Services Region as the stack. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p>
     */
    inline void SetStackPolicyURL(const Aws::String& value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL = value; }

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an Amazon S3 bucket in the same Amazon
     * Web Services Region as the stack. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p>
     */
    inline void SetStackPolicyURL(Aws::String&& value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL = std::move(value); }

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an Amazon S3 bucket in the same Amazon
     * Web Services Region as the stack. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p>
     */
    inline void SetStackPolicyURL(const char* value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL.assign(value); }

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an Amazon S3 bucket in the same Amazon
     * Web Services Region as the stack. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p>
     */
    inline SetStackPolicyRequest& WithStackPolicyURL(const Aws::String& value) { SetStackPolicyURL(value); return *this;}

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an Amazon S3 bucket in the same Amazon
     * Web Services Region as the stack. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p>
     */
    inline SetStackPolicyRequest& WithStackPolicyURL(Aws::String&& value) { SetStackPolicyURL(std::move(value)); return *this;}

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an Amazon S3 bucket in the same Amazon
     * Web Services Region as the stack. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p>
     */
    inline SetStackPolicyRequest& WithStackPolicyURL(const char* value) { SetStackPolicyURL(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_stackPolicyBody;
    bool m_stackPolicyBodyHasBeenSet = false;

    Aws::String m_stackPolicyURL;
    bool m_stackPolicyURLHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
