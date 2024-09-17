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


    ///@{
    /**
     * <p>If you choose an Authenticated ingress endpoint, you must configure either an
     * SMTP password or a secret ARN.</p>
     */
    inline const IngressPointConfiguration& GetIngressPointConfiguration() const{ return m_ingressPointConfiguration; }
    inline bool IngressPointConfigurationHasBeenSet() const { return m_ingressPointConfigurationHasBeenSet; }
    inline void SetIngressPointConfiguration(const IngressPointConfiguration& value) { m_ingressPointConfigurationHasBeenSet = true; m_ingressPointConfiguration = value; }
    inline void SetIngressPointConfiguration(IngressPointConfiguration&& value) { m_ingressPointConfigurationHasBeenSet = true; m_ingressPointConfiguration = std::move(value); }
    inline UpdateIngressPointRequest& WithIngressPointConfiguration(const IngressPointConfiguration& value) { SetIngressPointConfiguration(value); return *this;}
    inline UpdateIngressPointRequest& WithIngressPointConfiguration(IngressPointConfiguration&& value) { SetIngressPointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the ingress endpoint you want to update.</p>
     */
    inline const Aws::String& GetIngressPointId() const{ return m_ingressPointId; }
    inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }
    inline void SetIngressPointId(const Aws::String& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = value; }
    inline void SetIngressPointId(Aws::String&& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = std::move(value); }
    inline void SetIngressPointId(const char* value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId.assign(value); }
    inline UpdateIngressPointRequest& WithIngressPointId(const Aws::String& value) { SetIngressPointId(value); return *this;}
    inline UpdateIngressPointRequest& WithIngressPointId(Aws::String&& value) { SetIngressPointId(std::move(value)); return *this;}
    inline UpdateIngressPointRequest& WithIngressPointId(const char* value) { SetIngressPointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointName() const{ return m_ingressPointName; }
    inline bool IngressPointNameHasBeenSet() const { return m_ingressPointNameHasBeenSet; }
    inline void SetIngressPointName(const Aws::String& value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName = value; }
    inline void SetIngressPointName(Aws::String&& value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName = std::move(value); }
    inline void SetIngressPointName(const char* value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName.assign(value); }
    inline UpdateIngressPointRequest& WithIngressPointName(const Aws::String& value) { SetIngressPointName(value); return *this;}
    inline UpdateIngressPointRequest& WithIngressPointName(Aws::String&& value) { SetIngressPointName(std::move(value)); return *this;}
    inline UpdateIngressPointRequest& WithIngressPointName(const char* value) { SetIngressPointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an existing rule set that you attach to an ingress endpoint
     * resource.</p>
     */
    inline const Aws::String& GetRuleSetId() const{ return m_ruleSetId; }
    inline bool RuleSetIdHasBeenSet() const { return m_ruleSetIdHasBeenSet; }
    inline void SetRuleSetId(const Aws::String& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = value; }
    inline void SetRuleSetId(Aws::String&& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = std::move(value); }
    inline void SetRuleSetId(const char* value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId.assign(value); }
    inline UpdateIngressPointRequest& WithRuleSetId(const Aws::String& value) { SetRuleSetId(value); return *this;}
    inline UpdateIngressPointRequest& WithRuleSetId(Aws::String&& value) { SetRuleSetId(std::move(value)); return *this;}
    inline UpdateIngressPointRequest& WithRuleSetId(const char* value) { SetRuleSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update status of an ingress endpoint.</p>
     */
    inline const IngressPointStatusToUpdate& GetStatusToUpdate() const{ return m_statusToUpdate; }
    inline bool StatusToUpdateHasBeenSet() const { return m_statusToUpdateHasBeenSet; }
    inline void SetStatusToUpdate(const IngressPointStatusToUpdate& value) { m_statusToUpdateHasBeenSet = true; m_statusToUpdate = value; }
    inline void SetStatusToUpdate(IngressPointStatusToUpdate&& value) { m_statusToUpdateHasBeenSet = true; m_statusToUpdate = std::move(value); }
    inline UpdateIngressPointRequest& WithStatusToUpdate(const IngressPointStatusToUpdate& value) { SetStatusToUpdate(value); return *this;}
    inline UpdateIngressPointRequest& WithStatusToUpdate(IngressPointStatusToUpdate&& value) { SetStatusToUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an existing traffic policy that you attach to an ingress
     * endpoint resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::move(value); }
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId.assign(value); }
    inline UpdateIngressPointRequest& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}
    inline UpdateIngressPointRequest& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(std::move(value)); return *this;}
    inline UpdateIngressPointRequest& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}
    ///@}
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
