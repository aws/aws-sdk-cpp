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
   * <p>A request to move a dedicated IP address to a dedicated IP
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutDedicatedIpInPoolRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PutDedicatedIpInPoolRequest : public PinpointEmailRequest
  {
  public:
    PutDedicatedIpInPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDedicatedIpInPool"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The IP address that you want to move to the dedicated IP pool. The value you
     * specify has to be a dedicated IP address that's associated with your Amazon
     * Pinpoint account.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>The IP address that you want to move to the dedicated IP pool. The value you
     * specify has to be a dedicated IP address that's associated with your Amazon
     * Pinpoint account.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>The IP address that you want to move to the dedicated IP pool. The value you
     * specify has to be a dedicated IP address that's associated with your Amazon
     * Pinpoint account.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>The IP address that you want to move to the dedicated IP pool. The value you
     * specify has to be a dedicated IP address that's associated with your Amazon
     * Pinpoint account.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>The IP address that you want to move to the dedicated IP pool. The value you
     * specify has to be a dedicated IP address that's associated with your Amazon
     * Pinpoint account.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>The IP address that you want to move to the dedicated IP pool. The value you
     * specify has to be a dedicated IP address that's associated with your Amazon
     * Pinpoint account.</p>
     */
    inline PutDedicatedIpInPoolRequest& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>The IP address that you want to move to the dedicated IP pool. The value you
     * specify has to be a dedicated IP address that's associated with your Amazon
     * Pinpoint account.</p>
     */
    inline PutDedicatedIpInPoolRequest& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>The IP address that you want to move to the dedicated IP pool. The value you
     * specify has to be a dedicated IP address that's associated with your Amazon
     * Pinpoint account.</p>
     */
    inline PutDedicatedIpInPoolRequest& WithIp(const char* value) { SetIp(value); return *this;}


    /**
     * <p>The name of the IP pool that you want to add the dedicated IP address to. You
     * have to specify an IP pool that already exists.</p>
     */
    inline const Aws::String& GetDestinationPoolName() const{ return m_destinationPoolName; }

    /**
     * <p>The name of the IP pool that you want to add the dedicated IP address to. You
     * have to specify an IP pool that already exists.</p>
     */
    inline bool DestinationPoolNameHasBeenSet() const { return m_destinationPoolNameHasBeenSet; }

    /**
     * <p>The name of the IP pool that you want to add the dedicated IP address to. You
     * have to specify an IP pool that already exists.</p>
     */
    inline void SetDestinationPoolName(const Aws::String& value) { m_destinationPoolNameHasBeenSet = true; m_destinationPoolName = value; }

    /**
     * <p>The name of the IP pool that you want to add the dedicated IP address to. You
     * have to specify an IP pool that already exists.</p>
     */
    inline void SetDestinationPoolName(Aws::String&& value) { m_destinationPoolNameHasBeenSet = true; m_destinationPoolName = std::move(value); }

    /**
     * <p>The name of the IP pool that you want to add the dedicated IP address to. You
     * have to specify an IP pool that already exists.</p>
     */
    inline void SetDestinationPoolName(const char* value) { m_destinationPoolNameHasBeenSet = true; m_destinationPoolName.assign(value); }

    /**
     * <p>The name of the IP pool that you want to add the dedicated IP address to. You
     * have to specify an IP pool that already exists.</p>
     */
    inline PutDedicatedIpInPoolRequest& WithDestinationPoolName(const Aws::String& value) { SetDestinationPoolName(value); return *this;}

    /**
     * <p>The name of the IP pool that you want to add the dedicated IP address to. You
     * have to specify an IP pool that already exists.</p>
     */
    inline PutDedicatedIpInPoolRequest& WithDestinationPoolName(Aws::String&& value) { SetDestinationPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the IP pool that you want to add the dedicated IP address to. You
     * have to specify an IP pool that already exists.</p>
     */
    inline PutDedicatedIpInPoolRequest& WithDestinationPoolName(const char* value) { SetDestinationPoolName(value); return *this;}

  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet;

    Aws::String m_destinationPoolName;
    bool m_destinationPoolNameHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
