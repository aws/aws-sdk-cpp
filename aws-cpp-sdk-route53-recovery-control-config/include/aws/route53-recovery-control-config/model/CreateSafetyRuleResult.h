/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/AssertionRule.h>
#include <aws/route53-recovery-control-config/model/GatingRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class CreateSafetyRuleResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateSafetyRuleResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateSafetyRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateSafetyRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The assertion rule created.</p>
     */
    inline const AssertionRule& GetAssertionRule() const{ return m_assertionRule; }

    /**
     * <p>The assertion rule created.</p>
     */
    inline void SetAssertionRule(const AssertionRule& value) { m_assertionRule = value; }

    /**
     * <p>The assertion rule created.</p>
     */
    inline void SetAssertionRule(AssertionRule&& value) { m_assertionRule = std::move(value); }

    /**
     * <p>The assertion rule created.</p>
     */
    inline CreateSafetyRuleResult& WithAssertionRule(const AssertionRule& value) { SetAssertionRule(value); return *this;}

    /**
     * <p>The assertion rule created.</p>
     */
    inline CreateSafetyRuleResult& WithAssertionRule(AssertionRule&& value) { SetAssertionRule(std::move(value)); return *this;}


    /**
     * <p>The gating rule created.</p>
     */
    inline const GatingRule& GetGatingRule() const{ return m_gatingRule; }

    /**
     * <p>The gating rule created.</p>
     */
    inline void SetGatingRule(const GatingRule& value) { m_gatingRule = value; }

    /**
     * <p>The gating rule created.</p>
     */
    inline void SetGatingRule(GatingRule&& value) { m_gatingRule = std::move(value); }

    /**
     * <p>The gating rule created.</p>
     */
    inline CreateSafetyRuleResult& WithGatingRule(const GatingRule& value) { SetGatingRule(value); return *this;}

    /**
     * <p>The gating rule created.</p>
     */
    inline CreateSafetyRuleResult& WithGatingRule(GatingRule&& value) { SetGatingRule(std::move(value)); return *this;}

  private:

    AssertionRule m_assertionRule;

    GatingRule m_gatingRule;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
