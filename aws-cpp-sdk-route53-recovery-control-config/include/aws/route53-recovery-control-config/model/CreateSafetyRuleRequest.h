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
  class AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateSafetyRuleRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    CreateSafetyRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSafetyRule"; }

    Aws::String SerializePayload() const override;


    
    inline const NewAssertionRule& GetAssertionRule() const{ return m_assertionRule; }

    
    inline bool AssertionRuleHasBeenSet() const { return m_assertionRuleHasBeenSet; }

    
    inline void SetAssertionRule(const NewAssertionRule& value) { m_assertionRuleHasBeenSet = true; m_assertionRule = value; }

    
    inline void SetAssertionRule(NewAssertionRule&& value) { m_assertionRuleHasBeenSet = true; m_assertionRule = std::move(value); }

    
    inline CreateSafetyRuleRequest& WithAssertionRule(const NewAssertionRule& value) { SetAssertionRule(value); return *this;}

    
    inline CreateSafetyRuleRequest& WithAssertionRule(NewAssertionRule&& value) { SetAssertionRule(std::move(value)); return *this;}


    /**
     * <p>Unique client idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique client idempotency token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique client idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique client idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique client idempotency token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique client idempotency token.</p>
     */
    inline CreateSafetyRuleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique client idempotency token.</p>
     */
    inline CreateSafetyRuleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique client idempotency token.</p>
     */
    inline CreateSafetyRuleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const NewGatingRule& GetGatingRule() const{ return m_gatingRule; }

    
    inline bool GatingRuleHasBeenSet() const { return m_gatingRuleHasBeenSet; }

    
    inline void SetGatingRule(const NewGatingRule& value) { m_gatingRuleHasBeenSet = true; m_gatingRule = value; }

    
    inline void SetGatingRule(NewGatingRule&& value) { m_gatingRuleHasBeenSet = true; m_gatingRule = std::move(value); }

    
    inline CreateSafetyRuleRequest& WithGatingRule(const NewGatingRule& value) { SetGatingRule(value); return *this;}

    
    inline CreateSafetyRuleRequest& WithGatingRule(NewGatingRule&& value) { SetGatingRule(std::move(value)); return *this;}

  private:

    NewAssertionRule m_assertionRule;
    bool m_assertionRuleHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    NewGatingRule m_gatingRule;
    bool m_gatingRuleHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
