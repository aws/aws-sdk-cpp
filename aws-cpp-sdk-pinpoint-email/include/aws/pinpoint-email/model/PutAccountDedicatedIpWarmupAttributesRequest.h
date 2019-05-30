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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to enable or disable the automatic IP address warm-up
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutAccountDedicatedIpWarmupAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PutAccountDedicatedIpWarmupAttributesRequest : public PinpointEmailRequest
  {
  public:
    PutAccountDedicatedIpWarmupAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountDedicatedIpWarmupAttributes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Enables or disables the automatic warm-up feature for dedicated IP addresses
     * that are associated with your Amazon Pinpoint account in the current AWS Region.
     * Set to <code>true</code> to enable the automatic warm-up feature, or set to
     * <code>false</code> to disable it.</p>
     */
    inline bool GetAutoWarmupEnabled() const{ return m_autoWarmupEnabled; }

    /**
     * <p>Enables or disables the automatic warm-up feature for dedicated IP addresses
     * that are associated with your Amazon Pinpoint account in the current AWS Region.
     * Set to <code>true</code> to enable the automatic warm-up feature, or set to
     * <code>false</code> to disable it.</p>
     */
    inline bool AutoWarmupEnabledHasBeenSet() const { return m_autoWarmupEnabledHasBeenSet; }

    /**
     * <p>Enables or disables the automatic warm-up feature for dedicated IP addresses
     * that are associated with your Amazon Pinpoint account in the current AWS Region.
     * Set to <code>true</code> to enable the automatic warm-up feature, or set to
     * <code>false</code> to disable it.</p>
     */
    inline void SetAutoWarmupEnabled(bool value) { m_autoWarmupEnabledHasBeenSet = true; m_autoWarmupEnabled = value; }

    /**
     * <p>Enables or disables the automatic warm-up feature for dedicated IP addresses
     * that are associated with your Amazon Pinpoint account in the current AWS Region.
     * Set to <code>true</code> to enable the automatic warm-up feature, or set to
     * <code>false</code> to disable it.</p>
     */
    inline PutAccountDedicatedIpWarmupAttributesRequest& WithAutoWarmupEnabled(bool value) { SetAutoWarmupEnabled(value); return *this;}

  private:

    bool m_autoWarmupEnabled;
    bool m_autoWarmupEnabledHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
