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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONNECT_API RevokeFlowEntitlementRequest : public MediaConnectRequest
  {
  public:
    RevokeFlowEntitlementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeFlowEntitlement"; }

    Aws::String SerializePayload() const override;


    /**
     * The ARN of the entitlement that you want to revoke.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The ARN of the entitlement that you want to revoke.
     */
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }

    /**
     * The ARN of the entitlement that you want to revoke.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }

    /**
     * The ARN of the entitlement that you want to revoke.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }

    /**
     * The ARN of the entitlement that you want to revoke.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }

    /**
     * The ARN of the entitlement that you want to revoke.
     */
    inline RevokeFlowEntitlementRequest& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The ARN of the entitlement that you want to revoke.
     */
    inline RevokeFlowEntitlementRequest& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The ARN of the entitlement that you want to revoke.
     */
    inline RevokeFlowEntitlementRequest& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}


    /**
     * The flow that you want to revoke an entitlement from.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The flow that you want to revoke an entitlement from.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The flow that you want to revoke an entitlement from.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The flow that you want to revoke an entitlement from.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The flow that you want to revoke an entitlement from.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The flow that you want to revoke an entitlement from.
     */
    inline RevokeFlowEntitlementRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The flow that you want to revoke an entitlement from.
     */
    inline RevokeFlowEntitlementRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The flow that you want to revoke an entitlement from.
     */
    inline RevokeFlowEntitlementRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}

  private:

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
