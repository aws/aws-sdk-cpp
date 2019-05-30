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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to change the warm-up attributes for a dedicated IP address. This
   * operation is useful when you want to resume the warm-up process for an existing
   * IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutDedicatedIpWarmupAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PutDedicatedIpWarmupAttributesRequest : public PinpointEmailRequest
  {
  public:
    PutDedicatedIpWarmupAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDedicatedIpWarmupAttributes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The dedicated IP address that you want to update the warm-up attributes
     * for.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>The dedicated IP address that you want to update the warm-up attributes
     * for.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>The dedicated IP address that you want to update the warm-up attributes
     * for.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>The dedicated IP address that you want to update the warm-up attributes
     * for.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>The dedicated IP address that you want to update the warm-up attributes
     * for.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>The dedicated IP address that you want to update the warm-up attributes
     * for.</p>
     */
    inline PutDedicatedIpWarmupAttributesRequest& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>The dedicated IP address that you want to update the warm-up attributes
     * for.</p>
     */
    inline PutDedicatedIpWarmupAttributesRequest& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>The dedicated IP address that you want to update the warm-up attributes
     * for.</p>
     */
    inline PutDedicatedIpWarmupAttributesRequest& WithIp(const char* value) { SetIp(value); return *this;}


    /**
     * <p>The warm-up percentage that you want to associate with the dedicated IP
     * address.</p>
     */
    inline int GetWarmupPercentage() const{ return m_warmupPercentage; }

    /**
     * <p>The warm-up percentage that you want to associate with the dedicated IP
     * address.</p>
     */
    inline bool WarmupPercentageHasBeenSet() const { return m_warmupPercentageHasBeenSet; }

    /**
     * <p>The warm-up percentage that you want to associate with the dedicated IP
     * address.</p>
     */
    inline void SetWarmupPercentage(int value) { m_warmupPercentageHasBeenSet = true; m_warmupPercentage = value; }

    /**
     * <p>The warm-up percentage that you want to associate with the dedicated IP
     * address.</p>
     */
    inline PutDedicatedIpWarmupAttributesRequest& WithWarmupPercentage(int value) { SetWarmupPercentage(value); return *this;}

  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet;

    int m_warmupPercentage;
    bool m_warmupPercentageHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
