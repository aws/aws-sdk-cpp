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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API GetGatewayGroupRequest : public AlexaForBusinessRequest
  {
  public:
    GetGatewayGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGatewayGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the gateway group to get.</p>
     */
    inline const Aws::String& GetGatewayGroupArn() const{ return m_gatewayGroupArn; }

    /**
     * <p>The ARN of the gateway group to get.</p>
     */
    inline bool GatewayGroupArnHasBeenSet() const { return m_gatewayGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the gateway group to get.</p>
     */
    inline void SetGatewayGroupArn(const Aws::String& value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn = value; }

    /**
     * <p>The ARN of the gateway group to get.</p>
     */
    inline void SetGatewayGroupArn(Aws::String&& value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn = std::move(value); }

    /**
     * <p>The ARN of the gateway group to get.</p>
     */
    inline void SetGatewayGroupArn(const char* value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn.assign(value); }

    /**
     * <p>The ARN of the gateway group to get.</p>
     */
    inline GetGatewayGroupRequest& WithGatewayGroupArn(const Aws::String& value) { SetGatewayGroupArn(value); return *this;}

    /**
     * <p>The ARN of the gateway group to get.</p>
     */
    inline GetGatewayGroupRequest& WithGatewayGroupArn(Aws::String&& value) { SetGatewayGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the gateway group to get.</p>
     */
    inline GetGatewayGroupRequest& WithGatewayGroupArn(const char* value) { SetGatewayGroupArn(value); return *this;}

  private:

    Aws::String m_gatewayGroupArn;
    bool m_gatewayGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
