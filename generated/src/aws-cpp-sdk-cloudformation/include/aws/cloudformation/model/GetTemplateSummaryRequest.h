/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/CallAs.h>
#include <aws/cloudformation/model/TemplateSummaryConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>GetTemplateSummary</a> action.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplateSummaryInput">AWS
   * API Reference</a></p>
   */
  class GetTemplateSummaryRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API GetTemplateSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemplateSummary"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Structure that contains the template body with a minimum length of 1 byte and
     * a maximum length of 51,200 bytes.</p> <p>Conditional: You must specify only one
     * of the following parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    GetTemplateSummaryRequest& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a file that contains the template body. The URL must point to a
     * template (max size: 1 MB) that's located in an Amazon S3 bucket or a Systems
     * Manager document. The location for an Amazon S3 bucket must start with
     * <code>https://</code>.</p> <p>Conditional: You must specify only one of the
     * following parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetTemplateURL() const { return m_templateURL; }
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }
    template<typename TemplateURLT = Aws::String>
    void SetTemplateURL(TemplateURLT&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::forward<TemplateURLT>(value); }
    template<typename TemplateURLT = Aws::String>
    GetTemplateSummaryRequest& WithTemplateURL(TemplateURLT&& value) { SetTemplateURL(std::forward<TemplateURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or the stack ID that's associated with the stack, which aren't
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    GetTemplateSummaryRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or unique ID of the StackSet from which the stack was created.</p>
     * <p>Conditional: You must specify only one of the following parameters:
     * <code>StackName</code>, <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    template<typename StackSetNameT = Aws::String>
    void SetStackSetName(StackSetNameT&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::forward<StackSetNameT>(value); }
    template<typename StackSetNameT = Aws::String>
    GetTemplateSummaryRequest& WithStackSetName(StackSetNameT&& value) { SetStackSetName(std::forward<StackSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for StackSets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline CallAs GetCallAs() const { return m_callAs; }
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }
    inline void SetCallAs(CallAs value) { m_callAsHasBeenSet = true; m_callAs = value; }
    inline GetTemplateSummaryRequest& WithCallAs(CallAs value) { SetCallAs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies options for the <code>GetTemplateSummary</code> API action.</p>
     */
    inline const TemplateSummaryConfig& GetTemplateSummaryConfig() const { return m_templateSummaryConfig; }
    inline bool TemplateSummaryConfigHasBeenSet() const { return m_templateSummaryConfigHasBeenSet; }
    template<typename TemplateSummaryConfigT = TemplateSummaryConfig>
    void SetTemplateSummaryConfig(TemplateSummaryConfigT&& value) { m_templateSummaryConfigHasBeenSet = true; m_templateSummaryConfig = std::forward<TemplateSummaryConfigT>(value); }
    template<typename TemplateSummaryConfigT = TemplateSummaryConfig>
    GetTemplateSummaryRequest& WithTemplateSummaryConfig(TemplateSummaryConfigT&& value) { SetTemplateSummaryConfig(std::forward<TemplateSummaryConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    CallAs m_callAs{CallAs::NOT_SET};
    bool m_callAsHasBeenSet = false;

    TemplateSummaryConfig m_templateSummaryConfig;
    bool m_templateSummaryConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
