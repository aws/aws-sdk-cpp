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

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to enable or disable the email sending capabilities for
   * your entire Amazon SES account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateAccountSendingEnabledRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API UpdateAccountSendingEnabledRequest : public SESRequest
  {
  public:
    UpdateAccountSendingEnabledRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSendingEnabled"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Describes whether email sending is enabled or disabled for your Amazon SES
     * account in the current AWS Region.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Describes whether email sending is enabled or disabled for your Amazon SES
     * account in the current AWS Region.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Describes whether email sending is enabled or disabled for your Amazon SES
     * account in the current AWS Region.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Describes whether email sending is enabled or disabled for your Amazon SES
     * account in the current AWS Region.</p>
     */
    inline UpdateAccountSendingEnabledRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
