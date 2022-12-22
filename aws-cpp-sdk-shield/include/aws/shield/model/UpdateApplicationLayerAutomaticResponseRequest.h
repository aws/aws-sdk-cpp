/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/ResponseAction.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class UpdateApplicationLayerAutomaticResponseRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API UpdateApplicationLayerAutomaticResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplicationLayerAutomaticResponse"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN (Amazon Resource Name) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource.</p>
     */
    inline UpdateApplicationLayerAutomaticResponseRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource.</p>
     */
    inline UpdateApplicationLayerAutomaticResponseRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource.</p>
     */
    inline UpdateApplicationLayerAutomaticResponseRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Specifies the action setting that Shield Advanced should use in the WAF rules
     * that it creates on behalf of the protected resource in response to DDoS attacks.
     * You specify this as part of the configuration for the automatic application
     * layer DDoS mitigation feature, when you enable or update automatic mitigation.
     * Shield Advanced creates the WAF rules in a Shield Advanced-managed rule group,
     * inside the web ACL that you have associated with the resource. </p>
     */
    inline const ResponseAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies the action setting that Shield Advanced should use in the WAF rules
     * that it creates on behalf of the protected resource in response to DDoS attacks.
     * You specify this as part of the configuration for the automatic application
     * layer DDoS mitigation feature, when you enable or update automatic mitigation.
     * Shield Advanced creates the WAF rules in a Shield Advanced-managed rule group,
     * inside the web ACL that you have associated with the resource. </p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies the action setting that Shield Advanced should use in the WAF rules
     * that it creates on behalf of the protected resource in response to DDoS attacks.
     * You specify this as part of the configuration for the automatic application
     * layer DDoS mitigation feature, when you enable or update automatic mitigation.
     * Shield Advanced creates the WAF rules in a Shield Advanced-managed rule group,
     * inside the web ACL that you have associated with the resource. </p>
     */
    inline void SetAction(const ResponseAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies the action setting that Shield Advanced should use in the WAF rules
     * that it creates on behalf of the protected resource in response to DDoS attacks.
     * You specify this as part of the configuration for the automatic application
     * layer DDoS mitigation feature, when you enable or update automatic mitigation.
     * Shield Advanced creates the WAF rules in a Shield Advanced-managed rule group,
     * inside the web ACL that you have associated with the resource. </p>
     */
    inline void SetAction(ResponseAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies the action setting that Shield Advanced should use in the WAF rules
     * that it creates on behalf of the protected resource in response to DDoS attacks.
     * You specify this as part of the configuration for the automatic application
     * layer DDoS mitigation feature, when you enable or update automatic mitigation.
     * Shield Advanced creates the WAF rules in a Shield Advanced-managed rule group,
     * inside the web ACL that you have associated with the resource. </p>
     */
    inline UpdateApplicationLayerAutomaticResponseRequest& WithAction(const ResponseAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the action setting that Shield Advanced should use in the WAF rules
     * that it creates on behalf of the protected resource in response to DDoS attacks.
     * You specify this as part of the configuration for the automatic application
     * layer DDoS mitigation feature, when you enable or update automatic mitigation.
     * Shield Advanced creates the WAF rules in a Shield Advanced-managed rule group,
     * inside the web ACL that you have associated with the resource. </p>
     */
    inline UpdateApplicationLayerAutomaticResponseRequest& WithAction(ResponseAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResponseAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
