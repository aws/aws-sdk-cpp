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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/GrantEntitlementRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to grant entitlements on a flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GrantFlowEntitlementsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API GrantFlowEntitlementsRequest : public MediaConnectRequest
  {
  public:
    GrantFlowEntitlementsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GrantFlowEntitlements"; }

    Aws::String SerializePayload() const override;


    /**
     * The list of entitlements that you want to grant.
     */
    inline const Aws::Vector<GrantEntitlementRequest>& GetEntitlements() const{ return m_entitlements; }

    /**
     * The list of entitlements that you want to grant.
     */
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }

    /**
     * The list of entitlements that you want to grant.
     */
    inline void SetEntitlements(const Aws::Vector<GrantEntitlementRequest>& value) { m_entitlementsHasBeenSet = true; m_entitlements = value; }

    /**
     * The list of entitlements that you want to grant.
     */
    inline void SetEntitlements(Aws::Vector<GrantEntitlementRequest>&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::move(value); }

    /**
     * The list of entitlements that you want to grant.
     */
    inline GrantFlowEntitlementsRequest& WithEntitlements(const Aws::Vector<GrantEntitlementRequest>& value) { SetEntitlements(value); return *this;}

    /**
     * The list of entitlements that you want to grant.
     */
    inline GrantFlowEntitlementsRequest& WithEntitlements(Aws::Vector<GrantEntitlementRequest>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * The list of entitlements that you want to grant.
     */
    inline GrantFlowEntitlementsRequest& AddEntitlements(const GrantEntitlementRequest& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }

    /**
     * The list of entitlements that you want to grant.
     */
    inline GrantFlowEntitlementsRequest& AddEntitlements(GrantEntitlementRequest&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }


    /**
     * The flow that you want to grant entitlements on.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The flow that you want to grant entitlements on.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The flow that you want to grant entitlements on.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The flow that you want to grant entitlements on.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The flow that you want to grant entitlements on.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The flow that you want to grant entitlements on.
     */
    inline GrantFlowEntitlementsRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The flow that you want to grant entitlements on.
     */
    inline GrantFlowEntitlementsRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The flow that you want to grant entitlements on.
     */
    inline GrantFlowEntitlementsRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}

  private:

    Aws::Vector<GrantEntitlementRequest> m_entitlements;
    bool m_entitlementsHasBeenSet;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
