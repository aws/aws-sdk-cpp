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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/email/model/Template.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to create an email template. For more information, see
   * the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateTemplateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API CreateTemplateRequest : public SESRequest
  {
  public:
    CreateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTemplate"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The content of the email, composed of a subject line, an HTML part, and a
     * text-only part.</p>
     */
    inline const Template& GetTemplate() const{ return m_template; }

    /**
     * <p>The content of the email, composed of a subject line, an HTML part, and a
     * text-only part.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The content of the email, composed of a subject line, an HTML part, and a
     * text-only part.</p>
     */
    inline void SetTemplate(const Template& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The content of the email, composed of a subject line, an HTML part, and a
     * text-only part.</p>
     */
    inline void SetTemplate(Template&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The content of the email, composed of a subject line, an HTML part, and a
     * text-only part.</p>
     */
    inline CreateTemplateRequest& WithTemplate(const Template& value) { SetTemplate(value); return *this;}

    /**
     * <p>The content of the email, composed of a subject line, an HTML part, and a
     * text-only part.</p>
     */
    inline CreateTemplateRequest& WithTemplate(Template&& value) { SetTemplate(std::move(value)); return *this;}

  private:

    Template m_template;
    bool m_templateHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
