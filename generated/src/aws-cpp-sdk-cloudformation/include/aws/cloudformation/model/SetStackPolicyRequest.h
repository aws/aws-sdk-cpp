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
    AWS_CLOUDFORMATION_API SetStackPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetStackPolicy"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or unique stack ID that you want to associate a policy with.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    SetStackPolicyRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structure that contains the stack policy body. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">Prevent
     * updates to stack resources</a> in the <i>CloudFormation User Guide</i>. You can
     * specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetStackPolicyBody() const { return m_stackPolicyBody; }
    inline bool StackPolicyBodyHasBeenSet() const { return m_stackPolicyBodyHasBeenSet; }
    template<typename StackPolicyBodyT = Aws::String>
    void SetStackPolicyBody(StackPolicyBodyT&& value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody = std::forward<StackPolicyBodyT>(value); }
    template<typename StackPolicyBodyT = Aws::String>
    SetStackPolicyRequest& WithStackPolicyBody(StackPolicyBodyT&& value) { SetStackPolicyBody(std::forward<StackPolicyBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of a file that contains the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an Amazon S3 bucket in the same Amazon
     * Web Services Region as the stack. The location for an Amazon S3 bucket must
     * start with <code>https://</code>. URLs from S3 static websites are not
     * supported.</p> <p>You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetStackPolicyURL() const { return m_stackPolicyURL; }
    inline bool StackPolicyURLHasBeenSet() const { return m_stackPolicyURLHasBeenSet; }
    template<typename StackPolicyURLT = Aws::String>
    void SetStackPolicyURL(StackPolicyURLT&& value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL = std::forward<StackPolicyURLT>(value); }
    template<typename StackPolicyURLT = Aws::String>
    SetStackPolicyRequest& WithStackPolicyURL(StackPolicyURLT&& value) { SetStackPolicyURL(std::forward<StackPolicyURLT>(value)); return *this;}
    ///@}
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
