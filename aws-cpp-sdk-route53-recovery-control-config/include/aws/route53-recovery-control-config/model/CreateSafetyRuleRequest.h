/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/route53-recovery-control-config/model/NewAssertionRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-control-config/model/NewGatingRule.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>The request body that you include when you create a safety
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/CreateSafetyRuleRequest">AWS
   * API Reference</a></p>
   */
  class CreateSafetyRuleRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateSafetyRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSafetyRule"; }

    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String SerializePayload() const override;


    /**
     * <p>The assertion rule requested.</p>
     */
    inline const NewAssertionRule& GetAssertionRule() const{ return m_assertionRule; }

    /**
     * <p>The assertion rule requested.</p>
     */
    inline bool AssertionRuleHasBeenSet() const { return m_assertionRuleHasBeenSet; }

    /**
     * <p>The assertion rule requested.</p>
     */
    inline void SetAssertionRule(const NewAssertionRule& value) { m_assertionRuleHasBeenSet = true; m_assertionRule = value; }

    /**
     * <p>The assertion rule requested.</p>
     */
    inline void SetAssertionRule(NewAssertionRule&& value) { m_assertionRuleHasBeenSet = true; m_assertionRule = std::move(value); }

    /**
     * <p>The assertion rule requested.</p>
     */
    inline CreateSafetyRuleRequest& WithAssertionRule(const NewAssertionRule& value) { SetAssertionRule(value); return *this;}

    /**
     * <p>The assertion rule requested.</p>
     */
    inline CreateSafetyRuleRequest& WithAssertionRule(NewAssertionRule&& value) { SetAssertionRule(std::move(value)); return *this;}


    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline CreateSafetyRuleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline CreateSafetyRuleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline CreateSafetyRuleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The gating rule requested.</p>
     */
    inline const NewGatingRule& GetGatingRule() const{ return m_gatingRule; }

    /**
     * <p>The gating rule requested.</p>
     */
    inline bool GatingRuleHasBeenSet() const { return m_gatingRuleHasBeenSet; }

    /**
     * <p>The gating rule requested.</p>
     */
    inline void SetGatingRule(const NewGatingRule& value) { m_gatingRuleHasBeenSet = true; m_gatingRule = value; }

    /**
     * <p>The gating rule requested.</p>
     */
    inline void SetGatingRule(NewGatingRule&& value) { m_gatingRuleHasBeenSet = true; m_gatingRule = std::move(value); }

    /**
     * <p>The gating rule requested.</p>
     */
    inline CreateSafetyRuleRequest& WithGatingRule(const NewGatingRule& value) { SetGatingRule(value); return *this;}

    /**
     * <p>The gating rule requested.</p>
     */
    inline CreateSafetyRuleRequest& WithGatingRule(NewGatingRule&& value) { SetGatingRule(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline CreateSafetyRuleRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline CreateSafetyRuleRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline CreateSafetyRuleRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline CreateSafetyRuleRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline CreateSafetyRuleRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline CreateSafetyRuleRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline CreateSafetyRuleRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline CreateSafetyRuleRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline CreateSafetyRuleRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    NewAssertionRule m_assertionRule;
    bool m_assertionRuleHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    NewGatingRule m_gatingRule;
    bool m_gatingRuleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
