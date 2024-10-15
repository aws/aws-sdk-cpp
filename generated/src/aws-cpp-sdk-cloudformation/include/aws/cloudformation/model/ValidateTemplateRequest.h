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
   * <p>The input for <a>ValidateTemplate</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ValidateTemplateInput">AWS
   * API Reference</a></p>
   */
  class ValidateTemplateRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ValidateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateTemplate"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes.</p> <p>Conditional: You must pass
     * <code>TemplateURL</code> or <code>TemplateBody</code>. If both are passed, only
     * <code>TemplateBody</code> is used.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }
    inline ValidateTemplateRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}
    inline ValidateTemplateRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}
    inline ValidateTemplateRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket or a
     * Systems Manager document. The location for an Amazon S3 bucket must start with
     * <code>https://</code>.</p> <p>Conditional: You must pass
     * <code>TemplateURL</code> or <code>TemplateBody</code>. If both are passed, only
     * <code>TemplateBody</code> is used.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::move(value); }
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }
    inline ValidateTemplateRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}
    inline ValidateTemplateRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(std::move(value)); return *this;}
    inline ValidateTemplateRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}
    ///@}
  private:

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
