/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/IngressPointConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/IngressPointType.h>
#include <aws/mailmanager/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class CreateIngressPointRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API CreateIngressPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIngressPoint"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateIngressPointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateIngressPointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateIngressPointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you choose an Authenticated ingress endpoint, you must configure either an
     * SMTP password or a secret ARN.</p>
     */
    inline const IngressPointConfiguration& GetIngressPointConfiguration() const{ return m_ingressPointConfiguration; }
    inline bool IngressPointConfigurationHasBeenSet() const { return m_ingressPointConfigurationHasBeenSet; }
    inline void SetIngressPointConfiguration(const IngressPointConfiguration& value) { m_ingressPointConfigurationHasBeenSet = true; m_ingressPointConfiguration = value; }
    inline void SetIngressPointConfiguration(IngressPointConfiguration&& value) { m_ingressPointConfigurationHasBeenSet = true; m_ingressPointConfiguration = std::move(value); }
    inline CreateIngressPointRequest& WithIngressPointConfiguration(const IngressPointConfiguration& value) { SetIngressPointConfiguration(value); return *this;}
    inline CreateIngressPointRequest& WithIngressPointConfiguration(IngressPointConfiguration&& value) { SetIngressPointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user friendly name for an ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointName() const{ return m_ingressPointName; }
    inline bool IngressPointNameHasBeenSet() const { return m_ingressPointNameHasBeenSet; }
    inline void SetIngressPointName(const Aws::String& value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName = value; }
    inline void SetIngressPointName(Aws::String&& value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName = std::move(value); }
    inline void SetIngressPointName(const char* value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName.assign(value); }
    inline CreateIngressPointRequest& WithIngressPointName(const Aws::String& value) { SetIngressPointName(value); return *this;}
    inline CreateIngressPointRequest& WithIngressPointName(Aws::String&& value) { SetIngressPointName(std::move(value)); return *this;}
    inline CreateIngressPointRequest& WithIngressPointName(const char* value) { SetIngressPointName(value); return *this;}
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
    inline CreateIngressPointRequest& WithRuleSetId(const Aws::String& value) { SetRuleSetId(value); return *this;}
    inline CreateIngressPointRequest& WithRuleSetId(Aws::String&& value) { SetRuleSetId(std::move(value)); return *this;}
    inline CreateIngressPointRequest& WithRuleSetId(const char* value) { SetRuleSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateIngressPointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateIngressPointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateIngressPointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateIngressPointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline CreateIngressPointRequest& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}
    inline CreateIngressPointRequest& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(std::move(value)); return *this;}
    inline CreateIngressPointRequest& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the ingress endpoint to create.</p>
     */
    inline const IngressPointType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const IngressPointType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(IngressPointType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateIngressPointRequest& WithType(const IngressPointType& value) { SetType(value); return *this;}
    inline CreateIngressPointRequest& WithType(IngressPointType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    IngressPointConfiguration m_ingressPointConfiguration;
    bool m_ingressPointConfigurationHasBeenSet = false;

    Aws::String m_ingressPointName;
    bool m_ingressPointNameHasBeenSet = false;

    Aws::String m_ruleSetId;
    bool m_ruleSetIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    IngressPointType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
