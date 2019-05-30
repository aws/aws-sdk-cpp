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
   * <p>A request to obtain more information about a dedicated IP
   * address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDedicatedIpRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetDedicatedIpRequest : public PinpointEmailRequest
  {
  public:
    GetDedicatedIpRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDedicatedIp"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The IP address that you want to obtain more information about. The value you
     * specify has to be a dedicated IP address that's assocaited with your Amazon
     * Pinpoint account.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>The IP address that you want to obtain more information about. The value you
     * specify has to be a dedicated IP address that's assocaited with your Amazon
     * Pinpoint account.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>The IP address that you want to obtain more information about. The value you
     * specify has to be a dedicated IP address that's assocaited with your Amazon
     * Pinpoint account.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>The IP address that you want to obtain more information about. The value you
     * specify has to be a dedicated IP address that's assocaited with your Amazon
     * Pinpoint account.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>The IP address that you want to obtain more information about. The value you
     * specify has to be a dedicated IP address that's assocaited with your Amazon
     * Pinpoint account.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>The IP address that you want to obtain more information about. The value you
     * specify has to be a dedicated IP address that's assocaited with your Amazon
     * Pinpoint account.</p>
     */
    inline GetDedicatedIpRequest& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>The IP address that you want to obtain more information about. The value you
     * specify has to be a dedicated IP address that's assocaited with your Amazon
     * Pinpoint account.</p>
     */
    inline GetDedicatedIpRequest& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>The IP address that you want to obtain more information about. The value you
     * specify has to be a dedicated IP address that's assocaited with your Amazon
     * Pinpoint account.</p>
     */
    inline GetDedicatedIpRequest& WithIp(const char* value) { SetIp(value); return *this;}

  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
