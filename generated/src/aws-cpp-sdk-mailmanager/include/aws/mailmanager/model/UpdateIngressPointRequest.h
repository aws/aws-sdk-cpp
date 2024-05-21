/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/mailmanager/model/IngressPointConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/IngressPointStatusToUpdate.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class UpdateIngressPointRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API UpdateIngressPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIngressPoint"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If you choose an Authenticated ingress endpoint, you must configure either an
     * SMTP password or a secret ARN.</p>
     */
    inline const IngressPointConfiguration& GetIngressPointConfiguration() const{ return m_ingressPointConfiguration; }

    /**
     * <p>If you choose an Authenticated ingress endpoint, you must configure either an
     * SMTP password or a secret ARN.</p>
     */
    inline bool IngressPointConfigurationHasBeenSet() const { return m_ingressPointConfigurationHasBeenSet; }

    /**
     * <p>If you choose an Authenticated ingress endpoint, you must configure either an
     * SMTP password or a secret ARN.</p>
     */
    inline void SetIngressPointConfiguration(const IngressPointConfiguration& value) { m_ingressPointConfigurationHasBeenSet = true; m_ingressPointConfiguration = value; }

    /**
     * <p>If you choose an Authenticated ingress endpoint, you must configure either an
     * SMTP password or a secret ARN.</p>
     */
    inline void SetIngressPointConfiguration(IngressPointConfiguration&& value) { m_ingressPointConfigurationHasBeenSet = true; m_ingressPointConfiguration = std::move(value); }

    /**
     * <p>If you choose an Authenticated ingress endpoint, you must configure either an
     * SMTP password or a secret ARN.</p>
     */
    inline UpdateIngressPointRequest& WithIngressPointConfiguration(const IngressPointConfiguration& value) { SetIngressPointConfiguration(value); return *this;}

    /**
     * <p>If you choose an Authenticated ingress endpoint, you must configure either an
     * SMTP password or a secret ARN.</p>
     */
    inline UpdateIngressPointRequest& WithIngressPointConfiguration(IngressPointConfiguration&& value) { SetIngressPointConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier for the ingress endpoint you want to update.</p>
     */
    inline const Aws::String& GetIngressPointId() const{ return m_ingressPointId; }

    /**
     * <p>The identifier for the ingress endpoint you want to update.</p>
     */
    inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }

    /**
     * <p>The identifier for the ingress endpoint you want to update.</p>
     */
    inline void SetIngressPointId(const Aws::String& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = value; }

    /**
     * <p>The identifier for the ingress endpoint you want to update.</p>
     */
    inline void SetIngressPointId(Aws::String&& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = std::move(value); }

    /**
     * <p>The identifier for the ingress endpoint you want to update.</p>
     */
    inline void SetIngressPointId(const char* value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId.assign(value); }

    /**
     * <p>The identifier for the ingress endpoint you want to update.</p>
     */
    inline UpdateIngressPointRequest& WithIngressPointId(const Aws::String& value) { SetIngressPointId(value); return *this;}

    /**
     * <p>The identifier for the ingress endpoint you want to update.</p>
     */
    inline UpdateIngressPointRequest& WithIngressPointId(Aws::String&& value) { SetIngressPointId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the ingress endpoint you want to update.</p>
     */
    inline UpdateIngressPointRequest& WithIngressPointId(const char* value) { SetIngressPointId(value); return *this;}


    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointName() const{ return m_ingressPointName; }

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline bool IngressPointNameHasBeenSet() const { return m_ingressPointNameHasBeenSet; }

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline void SetIngressPointName(const Aws::String& value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName = value; }

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline void SetIngressPointName(Aws::String&& value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName = std::move(value); }

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline void SetIngressPointName(const char* value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName.assign(value); }

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline UpdateIngressPointRequest& WithIngressPointName(const Aws::String& value) { SetIngressPointName(value); return *this;}

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline UpdateIngressPointRequest& WithIngressPointName(Aws::String&& value) { SetIngressPointName(std::move(value)); return *this;}

    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline UpdateIngressPointRequest& WithIngressPointName(const char* value) { SetIngressPointName(value); return *this;}


    /**
     * <p>The identifier of an existing rule set that you attach to an ingress endpoint
     * resource.</p>
     */
    inline const Aws::String& GetRuleSetId() const{ return m_ruleSetId; }

    /**
     * <p>The identifier of an existing rule set that you attach to an ingress endpoint
     * resource.</p>
     */
    inline bool RuleSetIdHasBeenSet() const { return m_ruleSetIdHasBeenSet; }

    /**
     * <p>The identifier of an existing rule set that you attach to an ingress endpoint
     * resource.</p>
     */
    inline void SetRuleSetId(const Aws::String& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = value; }

    /**
     * <p>The identifier of an existing rule set that you attach to an ingress endpoint
     * resource.</p>
     */
    inline void SetRuleSetId(Aws::String&& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = std::move(value); }

    /**
     * <p>The identifier of an existing rule set that you attach to an ingress endpoint
     * resource.</p>
     */
    inline void SetRuleSetId(const char* value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId.assign(value); }

    /**
     * <p>The identifier of an existing rule set that you attach to an ingress endpoint
     * resource.</p>
     */
    inline UpdateIngressPointRequest& WithRuleSetId(const Aws::String& value) { SetRuleSetId(value); return *this;}

    /**
     * <p>The identifier of an existing rule set that you attach to an ingress endpoint
     * resource.</p>
     */
    inline UpdateIngressPointRequest& WithRuleSetId(Aws::String&& value) { SetRuleSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an existing rule set that you attach to an ingress endpoint
     * resource.</p>
     */
    inline UpdateIngressPointRequest& WithRuleSetId(const char* value) { SetRuleSetId(value); return *this;}


    /**
     * <p>The update status of an ingress endpoint.</p>
     */
    inline const IngressPointStatusToUpdate& GetStatusToUpdate() const{ return m_statusToUpdate; }

    /**
     * <p>The update status of an ingress endpoint.</p>
     */
    inline bool StatusToUpdateHasBeenSet() const { return m_statusToUpdateHasBeenSet; }

    /**
     * <p>The update status of an ingress endpoint.</p>
     */
    inline void SetStatusToUpdate(const IngressPointStatusToUpdate& value) { m_statusToUpdateHasBeenSet = true; m_statusToUpdate = value; }

    /**
     * <p>The update status of an ingress endpoint.</p>
     */
    inline void SetStatusToUpdate(IngressPointStatusToUpdate&& value) { m_statusToUpdateHasBeenSet = true; m_statusToUpdate = std::move(value); }

    /**
     * <p>The update status of an ingress endpoint.</p>
     */
    inline UpdateIngressPointRequest& WithStatusToUpdate(const IngressPointStatusToUpdate& value) { SetStatusToUpdate(value); return *this;}

    /**
     * <p>The update status of an ingress endpoint.</p>
     */
    inline UpdateIngressPointRequest& WithStatusToUpdate(IngressPointStatusToUpdate&& value) { SetStatusToUpdate(std::move(value)); return *this;}


    /**
     * <p>The identifier of an existing traffic policy that you attach to an ingress
     * endpoint resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }

    /**
     * <p>The identifier of an existing traffic policy that you attach to an ingress
     * endpoint resource.</p>
     */
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }

    /**
     * <p>The identifier of an existing traffic policy that you attach to an ingress
     * endpoint resource.</p>
     */
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    /**
     * <p>The identifier of an existing traffic policy that you attach to an ingress
     * endpoint resource.</p>
     */
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::move(value); }

    /**
     * <p>The identifier of an existing traffic policy that you attach to an ingress
     * endpoint resource.</p>
     */
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId.assign(value); }

    /**
     * <p>The identifier of an existing traffic policy that you attach to an ingress
     * endpoint resource.</p>
     */
    inline UpdateIngressPointRequest& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The identifier of an existing traffic policy that you attach to an ingress
     * endpoint resource.</p>
     */
    inline UpdateIngressPointRequest& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an existing traffic policy that you attach to an ingress
     * endpoint resource.</p>
     */
    inline UpdateIngressPointRequest& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}

  private:

    IngressPointConfiguration m_ingressPointConfiguration;
    bool m_ingressPointConfigurationHasBeenSet = false;

    Aws::String m_ingressPointId;
    bool m_ingressPointIdHasBeenSet = false;

    Aws::String m_ingressPointName;
    bool m_ingressPointNameHasBeenSet = false;

    Aws::String m_ruleSetId;
    bool m_ruleSetIdHasBeenSet = false;

    IngressPointStatusToUpdate m_statusToUpdate;
    bool m_statusToUpdateHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
