﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/route53-recovery-control-config/model/AssertionRuleUpdate.h>
#include <aws/route53-recovery-control-config/model/GatingRuleUpdate.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateSafetyRuleRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    UpdateSafetyRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSafetyRule"; }

    Aws::String SerializePayload() const override;


    
    inline const AssertionRuleUpdate& GetAssertionRuleUpdate() const{ return m_assertionRuleUpdate; }

    
    inline bool AssertionRuleUpdateHasBeenSet() const { return m_assertionRuleUpdateHasBeenSet; }

    
    inline void SetAssertionRuleUpdate(const AssertionRuleUpdate& value) { m_assertionRuleUpdateHasBeenSet = true; m_assertionRuleUpdate = value; }

    
    inline void SetAssertionRuleUpdate(AssertionRuleUpdate&& value) { m_assertionRuleUpdateHasBeenSet = true; m_assertionRuleUpdate = std::move(value); }

    
    inline UpdateSafetyRuleRequest& WithAssertionRuleUpdate(const AssertionRuleUpdate& value) { SetAssertionRuleUpdate(value); return *this;}

    
    inline UpdateSafetyRuleRequest& WithAssertionRuleUpdate(AssertionRuleUpdate&& value) { SetAssertionRuleUpdate(std::move(value)); return *this;}


    
    inline const GatingRuleUpdate& GetGatingRuleUpdate() const{ return m_gatingRuleUpdate; }

    
    inline bool GatingRuleUpdateHasBeenSet() const { return m_gatingRuleUpdateHasBeenSet; }

    
    inline void SetGatingRuleUpdate(const GatingRuleUpdate& value) { m_gatingRuleUpdateHasBeenSet = true; m_gatingRuleUpdate = value; }

    
    inline void SetGatingRuleUpdate(GatingRuleUpdate&& value) { m_gatingRuleUpdateHasBeenSet = true; m_gatingRuleUpdate = std::move(value); }

    
    inline UpdateSafetyRuleRequest& WithGatingRuleUpdate(const GatingRuleUpdate& value) { SetGatingRuleUpdate(value); return *this;}

    
    inline UpdateSafetyRuleRequest& WithGatingRuleUpdate(GatingRuleUpdate&& value) { SetGatingRuleUpdate(std::move(value)); return *this;}

  private:

    AssertionRuleUpdate m_assertionRuleUpdate;
    bool m_assertionRuleUpdateHasBeenSet;

    GatingRuleUpdate m_gatingRuleUpdate;
    bool m_gatingRuleUpdateHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
